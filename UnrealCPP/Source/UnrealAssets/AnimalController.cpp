// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

//Modiefied version of the Third Person Character Controller CPP by Unreal Engine, to accomodate the needs of the game

#include "AnimalController.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Engine.h"
#include "GameFramework/SpringArmComponent.h"

//////////////////////////////////////////////////////////////////////////
// AUnrealAssetsCharacter

AAnimalController::AAnimalController()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)


#pragma region DialogueSystem

	bIsTalking = false;
	bIsTalkingRange = false;
	TalkingPawn = nullptr;

	AudioComp = CreateDefaultSubobject<UAudioComponent>(FName("Audio Component"));
	AudioComp->AttachTo(GetRootComponent());

#pragma endregion
}

//////////////////////////////////////////////////////////////////////////
// Input

void AAnimalController::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AAnimalController::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AAnimalController::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AAnimalController::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AAnimalController::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AAnimalController::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AAnimalController::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AAnimalController::OnResetVR);

	//Talk Input Binding
	PlayerInputComponent->BindAction("Talk", IE_Pressed, this, &AAnimalController::ToggleTalking);

	//Possess Input Binding
	PlayerInputComponent->BindAction("Possess", IE_Pressed, this, &AAnimalController::Possess);
}


void AAnimalController::ToggleTalking()
{
	static const FString ScrollingMessage(TEXT("In range of NPC to talk to "));

	if (bIsTalkingRange) {

		//if we are in talking range, then we handle the talk status and the UI
		bIsTalking = !bIsTalking;
		ToggleUI();

		if (GEngine)
		{
			const int32 myConst = 23;
			GEngine->AddOnScreenDebugMessage(myConst, 3.f, FColor::Cyan, ScrollingMessage);
		}

		if (bIsTalking && TalkingPawn) {

			//The talking pawn rotates to face the player
			FVector Location = TalkingPawn->GetActorLocation();
			FVector TargetLocation = GetActorLocation();

			TalkingPawn->SetActorRotation((TargetLocation - Location).Rotation());
		}
	}

}

FDialogue* AAnimalController::RetrieveDialogue(UDataTable* TableToSearch, FName RowName)
{
	//If the table is not valid...
	if(!TableToSearch) return nullptr;

	//If the table is valid, then retrieve the fiven row if possible
	FString ContextString;
	return TableToSearch->FindRow<FDialogue>(RowName, ContextString);
}

void AAnimalController::GeneratePlayerLines(UDataTable& PlayerLines)
{
	//Get all the row names of the table
	TArray<FName> PlayerOptions = PlayerLines.GetRowNames();

	//For each row name try to retrieve the contents of the table
	for (auto It : PlayerOptions) {

		//retrieve the contents of the table
		FDialogue* Dialogue = RetrieveDialogue(&PlayerLines, It);

		if (Dialogue) {

			//we retrieved a valid row, so populate the questions array
			Questions.Add(Dialogue->Question);
		}

		//Make sure to create a reference of the available line for later use
		DialogueLines = &PlayerLines;
	}

}

void AAnimalController::Talk(FString Excerpt, TArray<FDialogueLines>& Lines)
{

	//Get all the row names based on the stored lines
	TArray<FName> PlayerOptions = DialogueLines->GetRowNames();

	//Search inside the available lines table to find the pressed Excerpt from the UI
	for (auto It : PlayerOptions) {
		FDialogue* ChosenDialogue = RetrieveDialogue(DialogueLines, It);

		if (ChosenDialogue && ChosenDialogue->Question == Excerpt)
		{
			if (ChosenDialogue->SFX != nullptr) 
			{
				//We found the pressed excerpt / assign the sfx to the audio component and play it
				AudioComp->SetSound(ChosenDialogue->SFX);
				AudioComp->Play();
			}

			//Update the corresponding lines
			Lines = ChosenDialogue->DialogueLines;

			if (UI && TalkingPawn && ChosenDialogue->ShouldAIAnswer) {

				//Calculate the total displayed time for our subtitles
				//When the subtitles end - the associated pawn will be able to talk to our charac

				TArray<FDialogueLines> LinesToDisplay;

				float ToTalLinesTime = 0.f;

				for (int32 i = 0; i < LinesToDisplay.Num(); i++)
				{
					ToTalLinesTime += LinesToDisplay[i].DisplayTime;
				}

				//Just a hardcoded value in order for the AI not to answer right after our lines.
				ToTalLinesTime += 1.f;

				//Tell the talking pawn to reply to our player after the specified time
				TalkingPawn->AnswerWithDelay(It, LinesToDisplay, ToTalLinesTime);
			}
			else if (!ChosenDialogue->ShouldAIAnswer) ToggleTalking();
			break;
		}
	}

}

void AAnimalController::Possess()
{
	//For start and end of the ray to cast
	FVector Start;
	FVector End;

	//Store the Eyes location of the player, as well as the rotation
	FVector PlayerEyesLoc;
	FRotator PlayerEyesRot;

	LineTraceDistance = 5.f;

	GetActorEyesViewPoint(PlayerEyesLoc, PlayerEyesRot);

	Start = PlayerEyesLoc;
	End = PlayerEyesLoc + (PlayerEyesRot.Vector() * LineTraceDistance); //Raycast end = Eyes location + vector from eyes rotation + for how long we want the ray to go 

	FCollisionQueryParams TraceParams(FName(TEXT("RayCast")), true, this);

	FHitResult ResultHit = FHitResult(ForceInit); //Start the ray result as null, so every time we call the function, we dont have a reference to any previous hit obj

	bool bIsHit = GetWorld()->LineTraceSingleByChannel(
		ResultHit,				//	FHitResult object that will be populated with hit info
		Start,					//	starting position
		End,					//	end position
		ECC_GameTraceChannel3,	//	collision channel
		TraceParams				//	additional trace settings
	);
	//If we hit something and it is not us
	if (bIsHit && ResultHit.GetActor() != this)
	{
		AAnimalController* PossessableCharacter = Cast<AAnimalController>(ResultHit.GetActor());

		//If we can possess the character -> If it is an AnimalController or a child of it
		if (PossessableCharacter)
		{
			if (!PossessableCharacter->bIsCurrentlyPossessed) //If the possessable character is not currently poseessed
			{
				//handle possession
				if (!Controller)
				{
					Controller = GetController();
				}

				//Unpossess first 
				Controller->UnPossess();

				//Disable current player state management

				//Disable movement mode
				GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_None);

				//Possess our new actor
				Controller->Possess(Cast<APawn>(ResultHit.GetActor()));

				//Enable movement back on the possessed actor
				PossessableCharacter->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);

				//Set the possession materials
				if (PossessableCharacter->PossessMaterialBody)
				{
					PossessableCharacter->GetMesh()->SetMaterial(0, PossessableCharacter->PossessMaterialBody);
				}

				if (PossessableCharacter->PossessMaterialFur)
				{
					PossessableCharacter->GetMesh()->SetMaterial(1, PossessableCharacter->PossessMaterialFur);
				}

				// ensure the new player is correctly marked as possesed and can be interacted with
				PossessableCharacter->bIsCurrentlyPossessed = true;
			}
		}

		if (bIsHit)
		{
			Log(ELogLevel::WARNING, "We hit something");
			// start to end, green, will lines always stay on, depth priority, thickness of line
			DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 5.f, ECC_WorldStatic, 1.f);

			Log(ELogLevel::WARNING, ResultHit.Actor->GetName());
			Log(ELogLevel::DEBUG, FString::SanitizeFloat(ResultHit.Distance));
			DrawDebugBox(GetWorld(), ResultHit.ImpactPoint, FVector(2.f, 2.f, 2.f), FColor::Blue, false, 5.f, ECC_WorldStatic, 1.f);

		}
		else
		{
			Log(ELogLevel::WARNING, "Nothing was hit");
			// start to end, purple, will lines always stay on, depth priority, thickness of line
			DrawDebugLine(GetWorld(), Start, End, FColor::Purple, false, 5.f, ECC_WorldStatic, 1.f);
		}
	}
}


void AAnimalController::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AAnimalController::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void AAnimalController::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void AAnimalController::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AAnimalController::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AAnimalController::MoveForward(float Value)
{
	//modified my MoveRight and MoveForward functions in order to disable the player movement if he’s talking
	if ((Controller != NULL) && (Value != 0.0f) && !bIsTalking)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AAnimalController::MoveRight(float Value)
{
	//modified my MoveRight and MoveForward functions in order to disable the player movement if he’s talking
	if ( (Controller != NULL) && (Value != 0.0f) && !bIsTalking)
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void AAnimalController::Log(ELogLevel LogLevel, FString Message)
{
	//Prints message to all outputs
	LogWithOutput(LogLevel, Message, ELogOutput::ALL); 
}

void AAnimalController::LogWithOutput(ELogLevel LogLevel, FString Message, ELogOutput LogOutput)
{
	// only print when screen is selected and the GEngine object is available
	if ((LogOutput == ELogOutput::ALL || LogOutput == ELogOutput::SCREEN) && GEngine)
	{
		// default color
		FColor LogColor = FColor::Cyan;
		//color based on the type
		switch (LogLevel)
		{
		case ELogLevel::TRACE:
			LogColor = FColor::Green;
			break;
		case ELogLevel::DEBUG:
			LogColor = FColor::Cyan;
			break;
		case ELogLevel::INFO:
			LogColor = FColor::White;
			break;
		case ELogLevel::WARNING:
			LogColor = FColor::Yellow;
			break;
		case ELogLevel::ERROR:
			LogColor = FColor::Red;
			break;
		default:
			break;
		}
		// print the message and leave it on screen ( 4.5f controls the duration )
		GEngine->AddOnScreenDebugMessage(-1, 4.5f, LogColor, Message);
	}

	if (LogOutput == ELogOutput::ALL || LogOutput == ELogOutput::OUTPUT_LOG)
	{
		// message type based on error level
		switch (LogLevel)
		{
		case ELogLevel::TRACE:
			UE_LOG(LogTemp, VeryVerbose, TEXT("%s"), *Message);
			break;
		case ELogLevel::DEBUG:
			UE_LOG(LogTemp, Verbose, TEXT("%s"), *Message);
			break;
		case ELogLevel::INFO:
			UE_LOG(LogTemp, Log, TEXT("%s"), *Message);
			break;
		case ELogLevel::WARNING:
			UE_LOG(LogTemp, Warning, TEXT("%s"), *Message);
			break;
		case ELogLevel::ERROR:
			UE_LOG(LogTemp, Error, TEXT("%s"), *Message);
			break;
		default:
			UE_LOG(LogTemp, Log, TEXT("%s"), *Message);
			break;
		}
	}
}

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

//Modiefied version of the Third Person Character Controller CPP by Unreal Engine, to accomodate the needs of the game

#include "AnimalController.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
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
}

void AAnimalController::ToggleTalking()
{
	if (bIsTalkingRange) {

		//if we are in talking range, then we handle the talk status and the UI
		bIsTalking = !bIsTalking;
		ToggleUI();

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
			//We found the pressed excerpt / assign the sfx to the audio component and play it
			AudioComp->SetSound(ChosenDialogue->SFX);
			AudioComp->Play();

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

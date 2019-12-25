// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueNPCCharacter.h"
#include "AnimalController.h"
#include "Engine.h"
#include "Components/PrimitiveComponent.h"

// Sets default values
ADialogueNPCCharacter::ADialogueNPCCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Initiate Box and Audio components
	BoxComp = CreateDefaultSubobject<UBoxComponent>(FName("Box Component"));
	BoxComp->AttachTo(GetRootComponent());
	BoxComp->GetGenerateOverlapEvents();

	AudioComp = CreateDefaultSubobject<UAudioComponent>(FName("Audio Component"));
	AudioComp->AttachTo(GetRootComponent());

}

// Called when the game starts or when spawned
void ADialogueNPCCharacter::BeginPlay()
{
	Super::BeginPlay();
	

	//Register functions to the events of begin and end overlapping
	BoxComp->OnComponentBeginOverlap.AddDynamic(this, &ADialogueNPCCharacter::OnOverlapBegin);
	BoxComp->OnComponentEndOverlap.AddDynamic(this, &ADialogueNPCCharacter::OnOverlapEnd);
}

// Called every frame
void ADialogueNPCCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADialogueNPCCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ADialogueNPCCharacter::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA<AAnimalController>())
	{
		AAnimalController* Char = Cast<AAnimalController>(OtherActor);
		Char->SetTalkRangeStatus(true);
		Char->GeneratePlayerLines(*PlayerLines);
		Char->SetTalkingPawn(this);
	}
}

void ADialogueNPCCharacter::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->IsA<AAnimalController>())
	{
		AAnimalController* Char = Cast<AAnimalController>(OtherActor);
		Char->SetTalkRangeStatus(false);
		Char->SetTalkingPawn(nullptr);
	}
}

void ADialogueNPCCharacter::Talk(USoundBase* SFX, TArray<FDialogueLines> DialogueLines)
{
	AAnimalController* Char = Cast<AAnimalController>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	//Play the corresponding sfx
	AudioComp->SetSound(SFX);
	AudioComp->Play();

	//Tell the ui to update with the new dialog lines
	Char->GetUI()->UpdateSubtitles(DialogueLines);
}

void ADialogueNPCCharacter::AnswerWithDelay(FName PlayerLine, TArray<FDialogueLines>& LinesToDisplay, float delay)
{
	//If there are no lines for the AI, then return

	if (!AILines) return;

	//Otherwise, retrieve the corresponding lin
	FString ContextString;
	FDialogue* Dialog = AILines->FindRow<FDialogue>(PlayerLine, ContextString);

	AAnimalController* MainChar = Cast<AAnimalController>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	if (Dialog && MainChar)
	{
		FTimerHandle TimerHandle;
		FTimerDelegate TimerDel;

		TimerDel.BindUFunction(this, FName("Talk"), Dialog->SFX, Dialog->DialogueLines);

		//Talk to the player after the delay time has passed
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDel, delay, false);
	}
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueNPCCharacter.h"
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
}

void ADialogueNPCCharacter::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

void ADialogueNPCCharacter::Talk(TArray<FDialogueLines> DialogueLines)
{
}

void ADialogueNPCCharacter::AnswerWithDelay(FName PlayerLine, TArray<FDialogueLines>& LinesToDisplay, float delay)
{
}


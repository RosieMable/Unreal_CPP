// Fill out your copyright notice in the Description page of Project Settings.


#include "WingedAnimal.h"
#include "AWingedCharacterMovement.h"

AWingedAnimal::AWingedAnimal(const FObjectInitializer& OI) :Super(OI.SetDefaultSubobjectClass<UAWingedCharacterMovement>(AWingedAnimal::CharacterMovementComponentName)) {


	// Set handling parameters
	Acceleration = 500.f;
	TurnSpeed = 200.f;
	MaxSpeed = 1000.f;
	MinSpeed = 500.f;
	CurrentForwardSpeed = 500.f;

}

void AWingedAnimal::FlyingTick(float DeltaTime)
{
	const FVector LocalMove = FVector(CurrentForwardSpeed * DeltaTime, 0.f, 0.f);

	// Move plan forwards (with sweep so we stop when we collide with things)
	AddActorLocalOffset(LocalMove, true);

	// Calculate change in rotation this frame
	FRotator DeltaRotation(0, 0, 0);
	DeltaRotation.Pitch = CurrentPitchSpeed * DeltaTime;
	DeltaRotation.Yaw = CurrentYawSpeed * DeltaTime;
	DeltaRotation.Roll = CurrentRollSpeed * DeltaTime;

	// Rotate plane
	AddActorLocalRotation(DeltaRotation);
}

void AWingedAnimal::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Check if PlayerInputComponent is valid (not NULL)
	check(PlayerInputComponent);

		// Bind our control axis' to callback functions
		PlayerInputComponent->BindAxis("Thrust", this, &AWingedAnimal::ThrustInput);
		PlayerInputComponent->BindAxis("MoveUp", this, &AWingedAnimal::MoveUpInput);
		PlayerInputComponent->BindAxis("MoveRightFly", this, &AWingedAnimal::MoveRightInput);

	//Talk Input Binding
	PlayerInputComponent->BindAction("Talk", IE_Pressed, this, &AAnimalController::ToggleTalking);

	//Possess Input Binding
	PlayerInputComponent->BindAction("Possess", IE_Pressed, this, &AAnimalController::Possess);

	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AWingedAnimal::ThrustInput(float Val)
{
	// Is there any input?
	bool bHasInput = !FMath::IsNearlyEqual(Val, 0.f);
	// If input is not held down, reduce speed
	float CurrentAcc = bHasInput ? (Val * Acceleration) : (-0.5f * Acceleration);
	// Calculate new speed
	float NewForwardSpeed = CurrentForwardSpeed + (GetWorld()->GetDeltaSeconds() * CurrentAcc);
	// Clamp between MinSpeed and MaxSpeed
	CurrentForwardSpeed = FMath::Clamp(NewForwardSpeed, MinSpeed, MaxSpeed);
}

void AWingedAnimal::MoveUpInput(float Val)
{
	// Target pitch speed is based in input
	float TargetPitchSpeed = (Val * TurnSpeed * -1.f);

	// When steering, we decrease pitch slightly
	TargetPitchSpeed += (FMath::Abs(CurrentYawSpeed) * -0.2f);

	// Smoothly interpolate to target pitch speed
	CurrentPitchSpeed = FMath::FInterpTo(CurrentPitchSpeed, TargetPitchSpeed, GetWorld()->GetDeltaSeconds(), 2.f);
}

void AWingedAnimal::MoveRightInput(float Val)
{
	// Target yaw speed is based on input
	float TargetYawSpeed = (Val * TurnSpeed);

	// Smoothly interpolate to target yaw speed
	CurrentYawSpeed = FMath::FInterpTo(CurrentYawSpeed, TargetYawSpeed, GetWorld()->GetDeltaSeconds(), 2.f);

	// Is there any left/right input?
	const bool bIsTurning = FMath::Abs(Val) > 0.2f;

	// If turning, yaw value is used to influence roll
	// If not turning, roll to reverse current roll value.
	float TargetRollSpeed = bIsTurning ? (CurrentYawSpeed * 0.5f) : (GetActorRotation().Roll * -2.f);

	// Smoothly interpolate roll speed
	CurrentRollSpeed = FMath::FInterpTo(CurrentRollSpeed, TargetRollSpeed, GetWorld()->GetDeltaSeconds(), 2.f);
}


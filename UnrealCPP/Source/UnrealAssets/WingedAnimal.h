// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimalController.h"
#include "WingedAnimal.generated.h"

/**
 * 
 */
UCLASS()
class UNREALASSETS_API AWingedAnimal : public AAnimalController
{
	GENERATED_BODY()
	
public:
	// Constructor required to assign our own CharacterMovementComponent
	AWingedAnimal(const FObjectInitializer& OI);

	/**
	* --------------------------------------------
	* Entry point for handling of flying movement.
	* --------------------------------------------
	* Added a "FlyingTick" into CharacterMovementComponent because calculating the movement
	* from within the physics loop results in high accuracy that wont cause significant
	* indiscrepancies at varied frame rates.
	*/
	UFUNCTION(Category = "Character Movement: Flying")
		void FlyingTick(float DeltaTime);

	/**
	* Called by WSCharacterMovementComponent to notify that we have impacted another
	* object while flying.
	* @param Hit : The hit result for the impacted object
	* @param bIsWalkableFloor : True if the impacted object can be walked on
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Character Movement: Flying")
		void OnImpactDuringFlying(const FHitResult& Hit, bool bIsWalkableFloor);

protected:

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface


	/** Bound to the thrust axis */
	void ThrustInput(float Val);

	/** Bound to the vertical axis */
	void MoveUpInput(float Val);

	/** Bound to the horizontal axis */
	void MoveRightInput(float Val);

private:

	/** How quickly forward speed changes */
	UPROPERTY(Category = Bird, EditAnywhere)
		float Acceleration;

	/** How quickly pawn can steer */
	UPROPERTY(Category = Bird, EditAnywhere)
		float TurnSpeed;

	/** Max forward speed */
	UPROPERTY(Category = Pitch, EditAnywhere)
		float MaxSpeed;

	/** Min forward speed */
	UPROPERTY(Category = Yaw, EditAnywhere)
		float MinSpeed;

	/** Current forward speed */
	float CurrentForwardSpeed;

	/** Current yaw speed */
	float CurrentYawSpeed;

	/** Current pitch speed */
	float CurrentPitchSpeed;

	/** Current roll speed */
	float CurrentRollSpeed;


};

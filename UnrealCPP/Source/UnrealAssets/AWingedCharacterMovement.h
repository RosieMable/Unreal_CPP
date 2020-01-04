// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AWingedCharacterMovement.generated.h"

/**
 * 
 */
UCLASS()
class UNREALASSETS_API UAWingedCharacterMovement : public UCharacterMovementComponent
{
	GENERATED_BODY()
	

public:
	//Going to override the Physics flying of the character movement controller
	virtual void PhysFlying(float deltaTime, int32 Iterations) override;
};

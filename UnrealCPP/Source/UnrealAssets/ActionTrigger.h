// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActionActor.h"
#include "ActionTrigger.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UNREALASSETS_API UActionTrigger : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActionTrigger();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Custom)
		TArray<AActionActor*> ActionActors; //Allows Action Actors to be linked to this trigger


	UFUNCTION()//Called when overlap happens
		void BeginOverlap(UPrimitiveComponent* OverlappedComponent,
			AActor* otherActor,
			UPrimitiveComponent* otherComponent,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult& SweepResult);

		
};

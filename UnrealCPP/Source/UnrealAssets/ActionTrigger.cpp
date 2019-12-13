// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionTrigger.h"
#include "Engine/GameEngine.h" //Needed for Debug Messages
#include "Components/BoxComponent.h"

// Sets default values for this component's properties
UActionTrigger::UActionTrigger()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UActionTrigger::BeginPlay()
{
	Super::BeginPlay();

	AActor* ParentActor = GetOwner();
	if (IsValid(ParentActor))
	{
		auto BoxComponent = Cast<UBoxComponent>(ParentActor->GetComponentByClass(UBoxComponent::StaticClass()));
		if (IsValid(BoxComponent))
		{
			BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &UActionTrigger::BeginOverlap); //attach the collision handler
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Cannot find BOxComponent Actor"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot find parent Actor"));
	}
	
}

void UActionTrigger::BeginOverlap(UPrimitiveComponent* OverlappedComponent,
	AActor* otherActor,
	UPrimitiveComponent* otherComponent,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult)
{
	if (ActionActors.Num() > 0)
	{
		for (int i = 0; i < ActionActors.Num(); i++) //step through linked actors
		{
			ActionActors[i]->NextRotation(); //Call Next Rotation on all Linked Action Actors
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("no Action Actors attached"));
	}
}





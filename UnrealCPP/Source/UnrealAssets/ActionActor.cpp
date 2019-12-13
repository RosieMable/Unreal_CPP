// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionActor.h"
#include "Engine/GameEngine.h"

// Sets default values
AActionActor::AActionActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActionActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActionActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	//For debug purposes
	//To print on screen
	if (GEngine) //Only in Debug Build
	{
		UE_LOG(LogTemp, Warning, TEXT("New State %d"), doRotationFlag); //Output to debug log (console)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("New State %d"), doRotationFlag)); //Show on screen
	}

	if (doRotationFlag) //Only rotate if rotate flag is set
	{
		if (RotateValues.Num() > 0)  //Make sure array is valid
		{
			FRotator CurrentRotation = FMath::Lerp(FromRotation, ToRotation, CurrentLERP);
			SetActorRotation(CurrentRotation, ETeleportType::None);
			CurrentLERP += DeltaTime;
			if (CurrentLERP >= 1.0) //Are we at the end
			{
				doRotationFlag = false; //Stop rotation
				SetActorRotation(ToRotation, ETeleportType::None); //Make sure the actor rotation is the actual ToRotation value
			}
		}
	}
}

//Implementation of SetRotate

void AActionActor::SetRotate(bool doRotate)
{
	doRotationFlag = doRotate; //set rotateflag based on input
}
//----------------

int AActionActor::NextIndex()
{
	if (RotateValues.Num() > 1)
	{
		return (CurrentStep + 1) % RotateValues.Num(); //Loops the array
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("RotateValues[] needs to contain at least 2 values"));
		return 0;
	}
}

bool AActionActor::NextRotation()
{
	if (RotateValues.Num() > 1) //Can only do next if there are two or more values in the array
	{
		if (!doRotationFlag) //If it is not already rotating
		{
			CurrentLERP = 0.0; //Reset currentStep and lerp
			FromRotation = RotateValues[CurrentStep]; //set new from rotation
			int NextStep = NextIndex(); //Next index with looping
			ToRotation = RotateValues[NextStep];
			CurrentStep = NextStep;
			doRotationFlag = true; //Set rotating again
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Rotate Busy with last rotation"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("RotateValues[] needs to contain at least 2 values"));
	}
	return false;
}
bool AActionActor::ResetRotation()
{
	if (RotateValues.Num() > 0) //if array is valid
	{
		CurrentLERP = 0.0; //Reset current Step & lerp
		CurrentStep = 0;
		FromRotation = GetActorRotation();
		ToRotation = RotateValues[CurrentStep]; //Starting position
		doRotationFlag = true; //set rotating
		return true;
	}
	UE_LOG(LogTemp, Error, TEXT("RotateValues[] is empty"));
	return false;
}
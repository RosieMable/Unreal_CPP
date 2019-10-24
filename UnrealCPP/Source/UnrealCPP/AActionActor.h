// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AActionActor.generated.h"

UCLASS()
class UNREALCPP_API AAActionActor : public AActor
{
	GENERATED_BODY()
	
		//Everything is going to be public until it hits the next keyword
public:	
	// Sets default values for this actor's properties
	AAActionActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Custom)
		FRotator RotateValue;

	UFUNCTION(BlueprintCallable, Category = Control)
		void SetRotate(bool doRotate);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Custom)
		TArray<FRotator> RotateValues; //UE4 versions of C++ std::vector<>

	//Go to next rotation
	UFUNCTION(Blueprintcallable, Category = Control)
		bool NextRotation();

	//Go reset to first rotation
	UFUNCTION(BlueprintCallable, Category = Control)
		bool ResetRotation();

private:
	
	bool doRotationFlag = false; //Should we be rotating?


	int NextIndex(); // func to get next index but loop at end of array

	int CurrentStep = 0;

	FRotator FromRotation; //Start of LERP
	FRotator ToRotation; // End of LERP

	float CurrentLERP = 0.0; //Where we are within the cycle, Start = 0.0, End = 1.0
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/DataTable.h"
#include "Components/BoxComponent.h"
#include "Components/AudioComponent.h"
#include "DialogueLinesStruct.h"
#include "DialogueNPCCharacter.generated.h"

UCLASS()
class UNREALASSETS_API ADialogueNPCCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADialogueNPCCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	/*Dialogue Script Section*/

private:
		UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

		UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
		UFUNCTION()
			void Talk(USoundBase* SFX, TArray<FDialogueLines> DialogueLines);

public:
	//Answers to the character after a specified delay
	void AnswerWithDelay(FName PlayerLine, TArray<FDialogueLines>& LinesToDisplay, float delay);

	//Retrieves the corresponding character lines
	UDataTable* GetPlayerLines() { return PlayerLines;  }

protected:

	//If the player is inside this box component he will be able to initiate a conversation with the pawn
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* BoxComp;

	//The audio component responsible for playing the dialogue coming from this pawn
	UPROPERTY(VisibleAnywhere)
	UAudioComponent* AudioComp;

	//The player lines (the choices that the player will be given)
	UPROPERTY(EditAnywhere, Category = DialogueSystem)
	UDataTable* PlayerLines;

	//The AI/pawn lines
	UPROPERTY(EditAnywhere, Category = DialogueSystem)
		UDataTable* AILines;
};

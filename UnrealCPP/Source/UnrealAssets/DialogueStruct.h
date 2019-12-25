// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DialogueLinesStruct.h"
#include "Sound/SoundBase.h"
#include "DialogueStruct.generated.h"

USTRUCT(BlueprintType)
struct FDialogue : public FTableRowBase
{
	GENERATED_BODY()

		//Question that will appear on the screen (makes the dialogue system more interactable
		UPROPERTY(EditAnywhere)
		FString Question;

	//Sounds that is going to when asking the question (adds flavour to the dialogue system OR it could be used for voice lines)
	UPROPERTY(EditAnywhere)
	USoundBase* SFX;

	//An array of associated dialogue lines
	UPROPERTY(EditAnywhere)
		TArray<FDialogueLines> DialogueLines;

	//Bool to set to true if we want the interlocutor to reply
	UPROPERTY(EditAnywhere)
		bool ShouldAIAnswer;

};
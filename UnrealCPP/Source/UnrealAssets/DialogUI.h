// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DialogueStruct.h"
#include "DialogUI.generated.h"

/**
 * 
 */
UCLASS()
class UNREALASSETS_API UDialogUI : public UUserWidget
{
	GENERATED_BODY()

public:

	//Used to bind the subtitles to the UI
	UPROPERTY(BlueprintReadOnly)
		FString LinesToDisplay;

	//Update the displayed subtitles based on the given array
	UFUNCTION(BlueprintCallable, Category = DialogueSystem)
		void UpdateSubtitles(TArray<FDialogueLines> DialoguesLines);

	//This Array will populate our buttons from within the show function
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TArray<FString> QuestionsToAsk;

	//Adds the widget to the viewport and populates the buttons with the given questions
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = DialogueSystem)
		void Show();
	
};

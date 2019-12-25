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

class UMGAsyncTask : public FNonAbandonableTask
{
	/*The subtitles that we're going to display*/
	TArray<FDialogueLines> Lines;

	/*UI Reference*/
	UDialogUI* DialogUI;

public:

	//Constructor
	UMGAsyncTask(TArray<FDialogueLines>& Subs, UDialogUI* DialogUI)
	{
		this->Lines = Subs;
		this->DialogUI = DialogUI;
	}

	/*Function needed by the UE in order to determine what's the tasks' status*/
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(UMGAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	/*This function executes each time this thread is active - UE4 searches for a function named DoWord() and executes it*/
	void DoWork()
	{
		for (int32 i = 0; i < Lines.Num(); i++)
		{
			//Sleep means that we pause this thread for the given time
			FPlatformProcess::Sleep(Lines[i].DisplayTime);

			//Update our subtitles after the thread comes back
			DialogUI->LinesToDisplay = Lines[i].DialogueLine;
		}

		//Sleep 1 second to let the user read the text
		FPlatformProcess::Sleep(1.f);

		//Clear the subtitle
		DialogUI->LinesToDisplay = FString("");
	}
};
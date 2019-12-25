// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogUI.h"

void UDialogUI::UpdateSubtitles(TArray<FDialogueLines> DialoguesLines)
{

	if (!DialoguesLines.IsValidIndex(0)) return;

	//Start a background task in a low priority thread
	(new FAutoDeleteAsyncTask<UMGAsyncTask>(DialoguesLines, this))->StartBackgroundTask();
}



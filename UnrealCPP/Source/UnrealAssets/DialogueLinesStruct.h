// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "DialogueLinesStruct.generated.h"

USTRUCT(BlueprintType)
struct FDialogueLines : public FTableRowBase
{
	GENERATED_BODY()

		//The dialogue line will be displayed for a specific period in the UI
		UPROPERTY(EditAnywhere)
		FString DialogueLine;

	//The relative time in seconds the dialogue line will appear for
	UPROPERTY(EditAnywhere)
		float DisplayTime;
};
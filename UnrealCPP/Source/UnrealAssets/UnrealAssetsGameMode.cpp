// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UnrealAssetsGameMode.h"
#include "AnimalController.h"
#include "UObject/ConstructorHelpers.h"

AUnrealAssetsGameMode::AUnrealAssetsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/FoxCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

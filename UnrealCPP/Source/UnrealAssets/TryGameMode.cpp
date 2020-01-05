// Fill out your copyright notice in the Description page of Project Settings.


#include "TryGameMode.h"
#include "AnimalController.h"
#include "UObject/ConstructorHelpers.h"

ATryGameMode::ATryGameMode() 
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/SlimeCharacter"));

	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}


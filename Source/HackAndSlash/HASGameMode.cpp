// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "HASGameMode.h"
#include "HASCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHASGameMode::AHASGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

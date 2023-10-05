// Copyright Epic Games, Inc. All Rights Reserved.

#include "MechManiaGameMode.h"
#include "MechManiaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMechManiaGameMode::AMechManiaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Player/BP_Player"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

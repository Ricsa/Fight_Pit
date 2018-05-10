// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Fight_PitGameMode.h"
#include "Fight_PitCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFight_PitGameMode::AFight_PitGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

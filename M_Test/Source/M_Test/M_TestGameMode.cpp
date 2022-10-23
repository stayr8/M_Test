// Copyright Epic Games, Inc. All Rights Reserved.

#include "M_TestGameMode.h"
#include "M_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AM_TestGameMode::AM_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

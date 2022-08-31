// Copyright Epic Games, Inc. All Rights Reserved.

#include "FortniteGameGameMode.h"
#include "FortniteGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFortniteGameGameMode::AFortniteGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

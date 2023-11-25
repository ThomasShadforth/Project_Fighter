// Copyright Epic Games, Inc. All Rights Reserved.

#include "MoveBurstGameMode.h"
#include "MoveBurstCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMoveBurstGameMode::AMoveBurstGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

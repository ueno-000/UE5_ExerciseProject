// Copyright Epic Games, Inc. All Rights Reserved.

#include "trialeGameMode.h"
#include "trialeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtrialeGameMode::AtrialeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

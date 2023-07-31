// Copyright Epic Games, Inc. All Rights Reserved.

#include "SurvivalCraftCPPGameMode.h"
#include "SurvivalCraftCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASurvivalCraftCPPGameMode::ASurvivalCraftCPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

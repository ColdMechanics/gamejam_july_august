// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameJam_July_AugustGameMode.h"
#include "GameJam_July_AugustPlayerController.h"
#include "GameJam_July_AugustCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameJam_July_AugustGameMode::AGameJam_July_AugustGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGameJam_July_AugustPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
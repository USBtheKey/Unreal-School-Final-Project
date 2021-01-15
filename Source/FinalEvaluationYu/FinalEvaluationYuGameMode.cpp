// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FinalEvaluationYuGameMode.h"
#include "FinalEvaluationYuHUD.h"
#include "FinalEvaluationYuCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFinalEvaluationYuGameMode::AFinalEvaluationYuGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFinalEvaluationYuHUD::StaticClass();
}

// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Sec5GameMode.h"
#include "Sec5HUD.h"
#include "Sec5Character.h"
#include "UObject/ConstructorHelpers.h"

ASec5GameMode::ASec5GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASec5HUD::StaticClass();
}

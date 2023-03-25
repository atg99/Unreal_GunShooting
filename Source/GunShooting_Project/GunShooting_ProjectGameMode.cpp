// Copyright Epic Games, Inc. All Rights Reserved.

#include "GunShooting_ProjectGameMode.h"
#include "GunShooting_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGunShooting_ProjectGameMode::AGunShooting_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

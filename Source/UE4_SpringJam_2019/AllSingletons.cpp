// Fill out your copyright notice in the Description page of Project Settings.
/*/

#include "AllSingletons.h"

AGameLoop *UAllSingletons::GameLoop()
{
	
	if (IsValid(GameLoopInstance))
	{
		UE_LOG(LogTemp, Warning, TEXT("Found Game Loop!!!"));
		return GameLoopInstance;
	}
	UE_LOG(LogTemp, Warning, TEXT("Need to create a new game Loop instance!!!"));
	GameLoopInstance = NewObject<AGameLoop>(this, FName("GameLoopInstace"));
	return GameLoopInstance;
}


// Cleanup. This acts as a quasi-destructor
void UAllSingletons::Shutdown()
{
	// Important, if you overwrite functionality in UE4.
	// Omitting this, may cause errors (depending on the class).
	Super::Shutdown();

	// PIE may cause this to be invalid. During the game, it will always be valid
	if (IsValid(GameLoopInstance))
	{
		/*
		GameLoopInstance->ClearStoredActors();
		GameLoopInstance->ClearLevelStorage();
		ClearPlayerInventoryCache();
		
	}
}
*/
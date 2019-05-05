
/*
#pragma once
#include "GameLoop.h"
#include "Engine/GameInstance.h"
/*
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"

#include "TestEnums.generated.h"
UCLASS() class UE4_SPRINGJAM_2019_API UYourGameInstance : public UGameInstance
{
	GENERATED_BODY()


public:
	// Accessor for C++ & BP. Should be self-explanatory
	UFUNCTION(BlueprintPure, Category = "Persistence", meta = (DisplayName = "Get Savegame Manager", Keywords = "SavegameManager"))
		AGameLoop *SavegameManager();
		

protected:
	// This is where we will clean up, as the game is shut down
	virtual void Shutdown() override;


private:
	// Needs to be an UPROPERTY(), so the GC does its thing
	// Transient, so it doesn't get serialized itself. Will be nulled when the
	// game starts. Initialization happens later by hand.
	UPROPERTY(Transient)
		AGameLoop *SavegameManagerInstance;
};



// Singleton-like accessor. I only use this as a workaround for PIE
 // The GameInstance lifecycle is different in PIE
 // In proper builds, this wouldn't be necessary (I'll explain this further down)
AGameLoop *UYourGameInstance::SavegameManager()
{
	return
		IsValid(SavegameManagerInstance) ?
		SavegameManagerInstance :
		SavegameManagerInstance = NewObject<AGameLoop>(this, FName("SavegameManager"));
}

// Cleanup. This acts as a quasi-destructor
void UYourGameInstance::Shutdown()
{
	// Important, if you overwrite functionality in UE4.
	// Omitting this, may cause errors (depending on the class).
	Super::Shutdown();

	// PIE may cause this to be invalid. During the game, it will always be valid
	if (IsValid(SavegameManagerInstance))
	{
		SavegameManagerInstance->ClearStoredActors();
		SavegameManagerInstance->ClearLevelStorage();
		ClearPlayerInventoryCache();
	}
}
*/
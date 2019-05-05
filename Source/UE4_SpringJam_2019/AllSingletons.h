// Fill out your copyright notice in the Description page of Project Settings.
/*
#pragma once

#include "GameLoop.h"
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "AllSingletons.generated.h"

/**
 * 
 
UCLASS()
class UE4_SPRINGJAM_2019_API UAllSingletons : public UGameInstance
{
	GENERATED_BODY()
public:
	// Accessor for C++ & BP. Should be self-explanatory
	UFUNCTION(BlueprintPure, Category = "Persistence", meta = (DisplayName = "Singletons", Keywords = "Singletons"))
		AGameLoop *GameLoop();
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CountMe;

protected:
	// This is where we will clean up, as the game is shut down
	virtual void Shutdown() override;


private:
	// Needs to be an UPROPERTY(), so the GC does its thing
	// Transient, so it doesn't get serialized itself. Will be nulled when the
	// game starts. Initialization happens later by hand.
	UPROPERTY(Transient)
		AGameLoop *GameLoopInstance;

};

*/
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GameLoop.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyStaticClass.generated.h"

/**
 * 
 */
UCLASS()
class UE4_SPRINGJAM_2019_API UMyStaticClass : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	
public:
	//static UPROPERTY(Transient)
	//AGameLoop* SavedGameLoop;
	UFUNCTION(BlueprintCallable, Category = "C_to_BP_Attempt")
		static FString GetHappyMessage();
	UFUNCTION(BlueprintCallable, Category = "C_to_BP_Attempt")
		static AGameLoop * GetGameLoop(AActor* a);
		/*
	UFUNCTION(BlueprintCallable, Category = "Spawning", meta = (WorldContext = "WorldContextObject", UnsafeDuringActorConstruction = "true", BlueprintInternalUseOnly = "true"))
		static class AActor* BeginSpawningActorFromClass(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, bool bNoCollisionFail = false);
	*/
};

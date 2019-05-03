// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TestingTesterson.generated.h"


UENUM(BlueprintType)
enum TestEnumm
{
	ThisMayWork   UMETA(DisplayName = "ThisMayWorkInBluePrints"),
	ThisShouldWork  UMETA(DisplayName = "ThisShouldWorkInBluePrints")
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4_SPRINGJAM_2019_API UTestingTesterson : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this component's properties
	UTestingTesterson();
	//enum TestEnum {blah};
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable)
		bool CallMe(TestEnumm WhateverThisIs);

	UPROPERTY(EditAnywhere)
		float ThisFloat;
};



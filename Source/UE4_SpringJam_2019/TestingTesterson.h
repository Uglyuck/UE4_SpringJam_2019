// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TestingTesterson.generated.h"

/*
UENUM(BlueprintType)
enum eElement
{
	NA   UMETA(DisplayName = "N/A"),
	Fire   UMETA(DisplayName = "Fire"),
	Water  UMETA(DisplayName = "Water"),
	Earth  UMETA(DisplayName = "Earth"),
	Ice    UMETA(DisplayName = "Ice")
};
*/
/*
//#include "Engine/DataTable.h"
USTRUCT(BlueprintType)
struct Fs_Item : public FTableRowBase
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test")
		TEnumAsByte<eElement> Element;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Description;
};

*/



UENUM(BlueprintType)
enum TestEnumm
{
	ThisMayWork   UMETA(DisplayName = "ThisMayWorkInBluePrints"),
	ThisShouldWork  UMETA(DisplayName = "ThisShouldWorkInBluePrints")
};

/*
This is to see if you can see me from the header.
*/


//UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
UCLASS()
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
	/*
	This is to see if you can see me from the header.
	*/
	UFUNCTION(BlueprintCallable)
		bool CallMe(TestEnumm WhateverThisIs);
	/*
	This is to see if you can see me from the header.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ThisFloat;
};



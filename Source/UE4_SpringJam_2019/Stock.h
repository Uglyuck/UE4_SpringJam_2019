// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataTable.h"
#include "Engine/Texture2D.h"
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Stock.generated.h"




/*
	All Enums to be used!
*/
UENUM(BlueprintType)
enum eAffiliation
{
	NA   UMETA(DisplayName = "N/A"),
	Mob   UMETA(DisplayName = "Mob"),
	Gov  UMETA(DisplayName = "Gov")
};

UENUM(BlueprintType)
enum eElement
{
	Neutral   UMETA(DisplayName = "Neutral"),
	Fire   UMETA(DisplayName = "Fire"),
	Water  UMETA(DisplayName = "Water"),
	Earth  UMETA(DisplayName = "Dark"),
	Ice    UMETA(DisplayName = "Light")
};

UENUM(BlueprintType)
enum eCustomerType
{
	Boss   UMETA(DisplayName = "Boss"),
	Customer   UMETA(DisplayName = "Customer")
};

UENUM(BlueprintType)
enum eShopRequests
{
	Buy   UMETA(DisplayName = "Buy"),
	Sell   UMETA(DisplayName = "Sell")
};

UENUM(BlueprintType)
enum eItemType
{
	Spoon   UMETA(DisplayName = "Spoon"),
	Sword   UMETA(DisplayName = "Sword"),
	Arrow  UMETA(DisplayName = "Arrow"),
	Shield  UMETA(DisplayName = "Shield"),
	Gloves  UMETA(DisplayName = "Gloves")
};



/*
For the tables!
*/


USTRUCT(BlueprintType)
struct FItem : public FTableRowBase
{
	GENERATED_USTRUCT_BODY() //GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)//, Category = "")
		TEnumAsByte<eElement> Element;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)//, Category = "")
		TEnumAsByte<eItemType> ItemType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString InventoryDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 MinValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 MaxValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 StartingCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* InventoryTexture;

	bool operator==(FItem &o) 
	{
		return o.Element == Element && ItemType == o.ItemType;
	}
};

USTRUCT(BlueprintType)
struct FShopRequest : public FTableRowBase
{
	GENERATED_USTRUCT_BODY() //GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)//, Category = "")
		TEnumAsByte<eShopRequests> ShopRequest;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Dialog;
};


USTRUCT(BlueprintType)
struct FElement : public FTableRowBase
{
	GENERATED_USTRUCT_BODY() //GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)//, Category = "")
		TEnumAsByte<eElement> Element;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Dialog;
};



USTRUCT(BlueprintType)
struct FItemType : public FTableRowBase
{
	GENERATED_USTRUCT_BODY() //GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite) //, Category = "")
		TEnumAsByte<eItemType> ItemType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Dialog;
};

USTRUCT(BlueprintType)
struct FCustomers : public FTableRowBase
{
	GENERATED_USTRUCT_BODY() //GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<eCustomerType> CustomerType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<eAffiliation> Affiliation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString MeshName;
};


USTRUCT(BlueprintType)
struct FQuest : public FTableRowBase
{
	GENERATED_USTRUCT_BODY() //GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString QuestName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Dialog;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float impact;

	bool operator==(FQuest &o)
	{
		return o.QuestName.Equals(QuestName) && Dialog.Equals(o.Dialog);// && impact == o.impact;
	}
};



USTRUCT(BlueprintType)
struct FStocks : public FTableRowBase
{
	GENERATED_USTRUCT_BODY() //GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FItem Item;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Value;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString MeshName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<eElement> Element;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<eItemType> Type;
};


/*
Got class now
*/


UCLASS(BlueprintType)
class UStock : public USceneComponent
{
	GENERATED_BODY()
public:
	// Sets default values for this component's properties
	UStock();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FItem Item;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Value;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString MeshName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<eElement> Element;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<eItemType> Type;
};











/*

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4_SPRINGJAM_2019_API UStock : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStock();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION (BlueprintCallable)
		static void testing(FItem blah);
		
};


/*
https://visualstudio.microsoft.com/thank-you-downloading-visual-studio/?sku=Community&rel=16

*/


/*
This is to see if you can see me from the header.
*/
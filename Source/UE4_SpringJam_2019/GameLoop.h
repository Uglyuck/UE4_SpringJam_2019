// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Stock.h"
//#include "Customer.h" 
#include "CoreMinimal.h"
//#include "Components/SceneComponent.h"
#include "GameFramework/Actor.h"
//#include "Engine/GameInstance.h"
#include "GameLoop.generated.h"



USTRUCT(BlueprintType)
struct FCustomer
{
	GENERATED_USTRUCT_BODY() //GENERATED_BODY()
//public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<eCustomerType> CustomerType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<eAffiliation> Affiliation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<eItemType> ItemType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<eShopRequests> ShopRequest;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<eElement> Element;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FQuest Quest;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 CoolDownTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 ResetTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Gold;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Satisfaction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Charisma;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool LastResult;
};

UCLASS(BlueprintType)
class AGameLoop : public AActor
{
	GENERATED_BODY()
public:
	AGameLoop();
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
		int32 Setup_StoreCoin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
		int32 Setup_RentCost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
		int32 Setup_MobBossCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
		int32 Setup_MobBossCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
		int32 Setup_GovBossCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
		int32 Setup_GovBossCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
		float Setup_MobRatio;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
		float Setup_BuyRatio;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
		int32 Setup_MaxStartCooldown;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	//	float Setup_MaxStartCooldown;




	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Store_Coin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 PriorDayCoin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 DayNumber;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool RentMade;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 RentCost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 RentMissed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Kingdom_Status;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Prior_Kingdom_Status;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Playing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UDataTable* Store_stock;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<eAffiliation> PlayerAffiliation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FCustomer> Customers;


	// Functions
	UFUNCTION(BlueprintCallable)
		void NewGame();
	UFUNCTION(BlueprintCallable)
		TArray<int32> getDaysCustomers();
	UFUNCTION(BlueprintCallable)
		void NextDay();

	//Customer Functions
	UFUNCTION(BlueprintCallable)
		FString getDialog(int32 Customer);
	UFUNCTION(BlueprintCallable)
		bool ReceiveItem(int32 Customer, FItem i);
	UFUNCTION(BlueprintCallable)
		bool Ransom(int32 Customer, bool Decision);
	UFUNCTION(BlueprintCallable)
		bool SellItem(int32 Customer, FItem i);
	UFUNCTION(BlueprintCallable)
		FItem StealItem(int32 Customer);
	UFUNCTION(BlueprintCallable)
		void CraftItem(FItem CraftedItem);
		/*
	UFUNCTION(BlueprintCallable)
		void CraftItem(FItem CraftedItem);
		*/
private:
	//ACustomer* Customers[50];
	int n;

	int32 GetItemValue(FItem* item, float KingdomStatus);

	//FItem* FindItem(FItem myItem);
};



// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Stock.h"
#include "CoreMinimal.h"
//#include "Components/SceneComponent.h"
#include "GameFramework/Actor.h"
#include "Customer.generated.h"

/*
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4_SPRINGJAM_2019_API UCustomer : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCustomer();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
*/


UCLASS(BlueprintType)
class ACustomer : public AActor
{
	GENERATED_BODY()


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void Tick(float DeltaTime) override;

public:
	ACustomer();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString MeshName;
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
		float Satisfaction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Charisma;

	UFUNCTION(BlueprintCallable)
		FString getDialog();
	UFUNCTION(BlueprintCallable)
		bool ReceiveItem(FItem i);
	UFUNCTION(BlueprintCallable)
		bool Ransom(bool Decision);
	UFUNCTION(BlueprintCallable)
		bool SellItem(FItem i);
	UFUNCTION(BlueprintCallable)
		bool StealItem();
private:
	FItem StolenItem;
};


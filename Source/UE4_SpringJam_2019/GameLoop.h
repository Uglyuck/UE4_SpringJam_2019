// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Customer.h" 
#include "CoreMinimal.h"
//#include "Components/SceneComponent.h"
#include "GameFramework/Actor.h"
#include "GameLoop.generated.h"


/*
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE4_SPRINGJAM_2019_API UGameLoop : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGameLoop();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
*/

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


	UFUNCTION(BlueprintCallable)
		void NewGame();
	UFUNCTION(BlueprintCallable)
		UCustomer* getNextCustomer();
	UFUNCTION(BlueprintCallable)
		void NextDay();


private:
	UCustomer* Customers[50];
	int n;
};

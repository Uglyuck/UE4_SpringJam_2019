// Fill out your copyright notice in the Description page of Project Settings.


#include "Customer.h"

// Sets default values for this component's properties
ACustomer::ACustomer()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//PrimaryComponentTick.bCanEverTick = false;

	CustomerType = Customer;

}


// Called when the game starts
void ACustomer::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
/*
void ACustomer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
*/
void ACustomer::Tick(float DeltaTime) { Super::Tick(DeltaTime); }


FString ACustomer::getDialog()
{
	return FString(TEXT("Hello there, arrows to defeat a Fire Breathing Racoon. Do you have any?"));
}




bool ACustomer::ReceiveItem(FItem i)
{
	return false;
}

bool ACustomer::Ransom(bool Decision)
{
	return Decision;
}

bool ACustomer::SellItem(FItem i)
{
	return true;
}

bool ACustomer::StealItem()
{
	return true;
}

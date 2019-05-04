// Fill out your copyright notice in the Description page of Project Settings.


#include "Customer.h"

// Sets default values for this component's properties
UCustomer::UCustomer()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	CustomerType = Customer;

}


// Called when the game starts
void UCustomer::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UCustomer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}


FString UCustomer::getDialog()
{
	return FString(TEXT("Hello there, arrows to defeat a Fire Breathing Racoon. Do you have any?"));
}




bool UCustomer::ReceiveItem(FItem i)
{
	return false;
}

bool UCustomer::Ransom(bool Decision)
{
	return Decision;
}

bool UCustomer::SellItem(FItem i)
{
	return true;
}

bool UCustomer::StealItem()
{
	return true;
}

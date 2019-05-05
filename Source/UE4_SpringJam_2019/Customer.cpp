// Fill out your copyright notice in the Description page of Project Settings.
/*

#include "Customer.h"
#include "exception"
#include "AllSingletons.h"


// Sets default values for this component's properties
ACustomer::ACustomer()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//PrimaryComponentTick.bCanEverTick = false;
	//UAllSingletons* fdsakjlfdsa = Cast<UAllSingletons>(GetGameInstance());
	//v->CountMe++;
	//UE_LOG(LogTemp, Warning, (FString::FromInt(fdsakjlfdsa->CountMe)));
	//UE_LOG(LogTemp, Warning, TEXT( "" + fdsakjlfdsa->CountMe ));
	//int i = fdsakjlfdsa->CountMe;
	//UE_LOG(LogTemp, Warning, TEXT( " %i"), i);
	UE_LOG(LogTemp, Warning, TEXT("Customer Created"));
	CustomerType = Customer;

}



// Called when the game starts
void ACustomer::BeginPlay()
{
	Super::BeginPlay();
}


void ACustomer::Tick(float DeltaTime) { Super::Tick(DeltaTime); }


FString ACustomer::getDialog()
{
	/*
	try
	{
		UAllSingletons* fdsakjlfdsa = Cast<UAllSingletons>(GetGameInstance());
		if(fdsakjlfdsa)
		{
			fdsakjlfdsa->CountMe++;
			int i = fdsakjlfdsa->CountMe;
			UE_LOG(LogTemp, Warning, TEXT( " %i"), i);
		}
	}
	catch (std::exception& e)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), e.what() );
	}
	*//*
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
*/
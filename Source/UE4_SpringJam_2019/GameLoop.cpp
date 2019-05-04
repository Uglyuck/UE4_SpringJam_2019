// Fill out your copyright notice in the Description page of Project Settings.


#include "GameLoop.h"

// Sets default values for this component's properties
UGameLoop::UGameLoop()
{PrimaryComponentTick.bCanEverTick = false;}


// Called when the game starts
void UGameLoop::BeginPlay()
{Super::BeginPlay();}


// Called every frame
void UGameLoop::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{Super::TickComponent(DeltaTime, TickType, ThisTickFunction);}





void UGameLoop::NewGame()
{
	RentMade = true;
	Store_Coin = 500;
	DayNumber = 1;
	n = 0;
	
	UCustomer* uc = CreateDefaultSubobject<UCustomer>(TEXT("T"));
	Customers[0] = uc;
}

UCustomer* UGameLoop::getNextCustomer()
{
	return Customers[n];
	//return nullptr;
}

void UGameLoop::NextDay()
{
	DayNumber++;
}

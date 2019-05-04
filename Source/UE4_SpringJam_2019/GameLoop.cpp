// Fill out your copyright notice in the Description page of Project Settings.


#include "GameLoop.h"

// Sets default values for this component's properties
AGameLoop::AGameLoop()
{//PrimaryComponentTick.bCanEverTick = false;
}


// Called when the game starts
void AGameLoop::BeginPlay()
{Super::BeginPlay();}


// Called every frame
/*
void AGameLoop::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{Super::TickComponent(DeltaTime, TickType, ThisTickFunction);}
*/

void AGameLoop::Tick(float DeltaTime){ Super::Tick(DeltaTime); }


void AGameLoop::NewGame()
{
	RentMade = true;
	Store_Coin = 500;
	DayNumber = 1;
	n = 0;
	
	UCustomer* uc = CreateDefaultSubobject<UCustomer>(TEXT("T"));
	Customers[0] = uc;
}

UCustomer* AGameLoop::getNextCustomer()
{
	return Customers[n];
	//return nullptr;
}

void AGameLoop::NextDay()
{
	DayNumber++;
}

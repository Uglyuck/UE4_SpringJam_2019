// Fill out your copyright notice in the Description page of Project Settings.


#include "GameLoop.h"
#include "AllSingletons.h"

// Sets default values for this component's properties
AGameLoop::AGameLoop()
{//PrimaryComponentTick.bCanEverTick = false;
	//NewGame();
	UE_LOG(LogTemp, Warning, TEXT("GameLoop Being Made"));

	//UE_LOG(LogTemp, Warning, TEXT((v->CountMe)));
}


// Called when the game starts
void AGameLoop::BeginPlay()
{Super::BeginPlay();
	UAllSingletons* v = Cast<UAllSingletons>(GetGameInstance());
	if(v)
		v->CountMe++;
	//GetGameInstance()->AddReferencedObjects(UYourGameInstance());
}


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
	n = -1;
	
	//ACustomer* uc = NewObject<ACustomer>(this);// CreateDefaultSubobject<ACustomer>(TEXT("T"));
	UE_LOG(LogTemp, Warning, TEXT("Trying to create Customers"));
	Customers[0] = NewObject<ACustomer>(this);
	Customers[1] = NewObject<ACustomer>(this);
	Customers[2] = NewObject<ACustomer>(this);
	Customers[3] = NewObject<ACustomer>(this);
	Customers[4] = NewObject<ACustomer>(this);

}

ACustomer* AGameLoop::getNextCustomer()
{
	n++;
	return Customers[n];
	//return nullptr;
}

void AGameLoop::NextDay()
{
	DayNumber++;
}

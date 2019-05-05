// Fill out your copyright notice in the Description page of Project Settings.
/*
#include "MyStaticClass.h"
#include "AllSingletons.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

FString UMyStaticClass::GetHappyMessage()
{
	//GameLoops = &(AGameLoop());
	//GameLoops->getNextCustomer();
	return FString("YAY to me!");
}

AGameLoop * UMyStaticClass::GetGameLoop(AActor* a)
{
	
	AGameLoop* myloop;
	UAllSingletons* v = Cast<UAllSingletons>(a->GetGameInstance());
	return v->GameLoop();
	/*
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass((a->GetWorld()), AGameLoop::StaticClass(), FoundActors);
	if (FoundActors.Num())
	{
		UE_LOG(LogTemp, Warning, TEXT("Returning GameLoop"));
		myloop = Cast<AGameLoop>(FoundActors[0]);
	}
	else
	{
	*/
	/*
		UE_LOG(LogTemp, Warning, TEXT("Creating GameLoop"));
		myloop = NewObject<AGameLoop>(a);
		myloop->NewGame();
		*/
		//SavedGameLoop = myloop;
	//}
	/*
	if (!SavedGameLoop)
	{
		UE_LOG(LogTemp, Warning, TEXT("Creating GameLoop"));
		myloop = NewObject<AGameLoop>(a);
		myloop->NewGame();
		SavedGameLoop = myloop;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Returning GameLoop"));
		myloop = SavedGameLoop;
	}
	
	//UE_LOG(LogTemp, Warning, TEXT("Returning GameLoop"));
	
	
	return myloop;
	//return a->CreateDefaultSubobject<AGameLoop>(a->Text("T"));
	/*
	ACustomer* uc = CreateDefaultSubobject<ACustomer>(TEXT("T"));
	a->GetWorld()->SpawnActor();
	UWorld* c = a->GetWorld();
	if(c)
	{
		FVector Location = a->GetTargetLocation();
		AGameLoop b = c->SpawnActor<AGameLoop>(AGameLoop(), Location, FRotator::ZeroRotator);
		return &b;
	}
	
}
*/
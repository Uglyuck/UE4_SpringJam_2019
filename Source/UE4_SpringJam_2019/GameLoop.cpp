// Fill out your copyright notice in the Description page of Project Settings.


#include "GameLoop.h"
//#include "AllSingletons.h"
#include "Engine/DataTable.h"

// Sets default values for this component's properties
AGameLoop::AGameLoop()
{//PrimaryComponentTick.bCanEverTick = false;
	//NewGame();
	UE_LOG(LogTemp, Warning, TEXT("GameLoop Being Made"));
	
	Setup_StoreCoin = 0;
	Setup_RentCost = 0;
	Setup_MobBossCount = 5;
	Setup_GovBossCount = 5;
	Setup_MobBossCooldown = 0;
	Setup_GovBossCooldown = 0;
	Setup_MobRatio = 0.5f;
	Setup_MaxStartCooldown = 5;
	srand(int(FDateTime::Now().GetTicks()));



	FStringAssetReference MyStocksPath("DataTable'/Game/Mechanics/InventorySystem/InventoryStocks.InventoryStocks'");
	Store_stock = (UDataTable*) MyStocksPath.TryLoad();
	
	/*
	Testing Purposes
	*/
	FStringAssetReference MyAssetPath("DataTable'/Game/Mechanics/Customers/Names/CustomerNames_DataTable.CustomerNames_DataTable'");
	UDataTable* DataTable = (UDataTable*) MyAssetPath.TryLoad();
	if (DataTable)
	{
		TArray<TArray<FString>> blah = DataTable->GetTableData();
		FString s; // = blah[1][0];
		UE_LOG(LogTemp, Warning, TEXT("Datatable Loaded"));
		for (int x = blah.Num(); x--; )
		{
			for (int y = blah[0].Num(); y--; )
			{
				s = blah[x][y];
				UE_LOG(LogTemp, Warning, TEXT("%i %i is: %s"),x,y, *s);
			}
		}
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("Datatable Not Loaded"));





	
}
/*
TArray<FTowerAbilities> AAmnesiaTower::GetAvailableAbilities()
{
	TArray<FTowerAbilities> AbilityArray;
	FString ContextString;
	TArray<FName> RowNames;
	RowNames = UpgradesSheet->GetRowNames();

	for (auto& name : RowNames)
	{
		FTowerAbilities* row = UpgradesSheet->FindRow<FTowerAbilities>(name, ContextString);
		if (row)
		{
			AbilityArray.Add(*row);
		}
	}
	return AbilityArray;
}

*/



// Called when the game starts
void AGameLoop::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
/*
void AGameLoop::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{Super::TickComponent(DeltaTime, TickType, ThisTickFunction);}
*/

void AGameLoop::Tick(float DeltaTime){ Super::Tick(DeltaTime); }


void AGameLoop::NewGame()
{
	UE_LOG(LogTemp, Warning, TEXT("Setting up a new game"));

	//Clean the variables.
	DayNumber = 1;
	Store_Coin = Setup_StoreCoin;
	PriorDayCoin = 0;
	RentMade = true;
	RentCost = Setup_RentCost;
	RentMissed = 0;



	n = -1;
	// Fill Customers
	int t = Customers.Num();
	for(int x = t; x--;)
	{	
		if (x < Setup_MobRatio * Customers.Num())
		{
			Customers[x].Affiliation = eAffiliation::Mob;
		}
		else
		{
			Customers[x].Affiliation = eAffiliation::Gov;
		}
		Customers[x].Charisma = 0;
		Customers[x].CoolDownTime = rand() % Setup_MaxStartCooldown;
		Customers[x].ResetTime = Customers[x].CoolDownTime;
		Customers[x].CustomerType = eCustomerType::Customer;
		Customers[x].LastResult = false;
		Customers[x].Element = eElement::Neutral;
		Customers[x].ItemType = eItemType::Spoon;
		Customers[x].Gold = 0;
		// Try out some of this!
		//Customers[x].Name
		Customers[x].Satisfaction = 0.5f;
		Customers[x].ShopRequest = eShopRequests::Buy;
	}
	// Setup Bosses
	for (int x = Setup_MobBossCount; x--;)
	{
		Customers[x].CustomerType = eCustomerType::Boss;
		Customers[x].ResetTime = Setup_MobBossCooldown;
	}
	for (int x = Setup_GovBossCount; x--;)
	{
		Customers[t - x].CustomerType = eCustomerType::Boss;
		Customers[x].ResetTime = Setup_GovBossCooldown;
	}


	//LoadItems
	Store_stock->EmptyTable();

	UE_LOG(LogTemp, Warning, TEXT("      Now Trying To Load Inventory  "));
	FStringAssetReference MyAssetPath2("DataTable'/Game/Mechanics/LookupTables/Item.Item'");
	UDataTable* DataTable = (UDataTable*)MyAssetPath2.TryLoad();
	//DataTable->EmptyTable();
	int i = 0;
	if (DataTable)
	{
		FStocks NewItem;
		static const FString ContextString(TEXT(""));
		TArray<FName> RowNames;
		RowNames = DataTable->GetRowNames();
		for (auto& name : RowNames)
		{
			FItem* row = DataTable->FindRow<FItem>(name, ContextString);
			//&row->InventoryDescription
			if (row)
			{
				NewItem.Count = row->StartingCount;
				NewItem.Type = row->ItemType;
				NewItem.Element = row->Element;
				NewItem.Item = *row;
				NewItem.Value = GetItemValue(row, Kingdom_Status);
				Store_stock->AddRow(FName(TEXT("New Row" + i++)), NewItem);
				UE_LOG(LogTemp, Warning, TEXT("Loaded: %s"), *(row->InventoryDescription));
			}
		}
	}

	else
		UE_LOG(LogTemp, Warning, TEXT("Datatable Not Loaded"));



	
}
/*
constexpr int n()
{
	return 10;
}
*/
TArray<int32> AGameLoop::getDaysCustomers()
{
	int GetCount = 0;
	for (int x = Customers.Num(); x--;)
	{
		if (Customers[x].CoolDownTime <= 0)
		{
			GetCount++;
		}
	}
	TArray<int32> ReturningCustomers;
	ReturningCustomers.Init(99, GetCount);
	GetCount = 0;
	
	for (int x = Customers.Num(); x--;)
	{
		if (Customers[x].CoolDownTime <= 0)
		{
			Customers[x].Element = (eElement)(rand() % 5);
			Customers[x].ItemType = (eItemType) (rand() % 5);
			Customers[x].ShopRequest = (rand() % 100) - (Setup_BuyRatio *100) <= 0? eShopRequests::Buy : eShopRequests::Sell;
			Customers[x].Gold = 500;
			// For the quests
			//Customers[x].
			ReturningCustomers[GetCount] = x;
			GetCount++;
		}
	}
	return ReturningCustomers;//TArray<int32>();
}


void AGameLoop::NextDay()
{
	DayNumber++;
}

FString AGameLoop::getDialog(int32 Customer)
{
	eItemType myItemType= Customers[Customer].ItemType;
	FString Desc_Item = "";
	eElement myElement = Customers[Customer].Element;
	FString Desc_Element = "";
	eShopRequests myShopRequests = Customers[Customer].ShopRequest;
	FString Desc_Req = "";
	FQuest myQuest = Customers[Customer].Quest;
	FString Desc_Quest = "";

	FStringAssetReference MyAssetPathItem("DataTable'/Game/Mechanics/LookupTables/Item.Item'");
	FStringAssetReference MyAssetPathElement("DataTable'/Game/Mechanics/LookupTables/Item.Item'");
	FStringAssetReference MyAssetPathRequest("DataTable'/Game/Mechanics/LookupTables/Item.Item'");
	FStringAssetReference MyAssetPathQuest("DataTable'/Game/Mechanics/LookupTables/Item.Item'");

	UDataTable* DataTable;

	UE_LOG(LogTemp, Warning, TEXT("      Now Trying To Load ItemDescriptions  "));
	DataTable = (UDataTable*)MyAssetPathItem.TryLoad();
	//DataTable->EmptyTable();
	int i = 0;
	if (DataTable)
	{
		FStocks NewItem;
		static const FString ContextString(TEXT("Item"));
		TArray<FName> RowNames;
		RowNames = DataTable->GetRowNames();
		for (auto& name : RowNames)
		{
			FItem* row = DataTable->FindRow<FItem>(name, ContextString);
			//&row->InventoryDescription
			if (row)
			{
				NewItem.Count = row->StartingCount;
				NewItem.Type = row->ItemType;
				NewItem.Element = row->Element;
				NewItem.Item = *row;
				NewItem.Value = GetItemValue(row, Kingdom_Status);
				Store_stock->AddRow(FName(TEXT("New Row" + i++)), NewItem);
				UE_LOG(LogTemp, Warning, TEXT("Loaded: %s"), *(row->InventoryDescription));
			}
		}
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("Datatable Not Loaded"));













	FString FinalPhrase;
	if(myItemType == eItemType::Spoon)
	{
		if (myShopRequests == eShopRequests::Buy)
			FinalPhrase = rand()%5? FString(TEXT("I need something new for a banquet, they said after the last banquet everyone felt like a " + Desc_Element + Desc_Quest + ", do you have anything to prevent that?")) : FString(TEXT("My Spoon is too big!"));
		else if (myShopRequests == eShopRequests::Sell)
		FinalPhrase = rand() % 5 ? FString(TEXT("Would you like to make an offer for this " + Desc_Element + Desc_Quest + " preventative spoon? I've been told it can carve out hearts too.")) : FString(TEXT("My Spoon is too big!"));
	}


	return FString(TEXT("Hello there, arrows to defeat a Fire Breathing Racoon. Do you have any?"));
}

bool AGameLoop::ReceiveItem(int32 Customer, FItem i)
{
	return false;
}

bool AGameLoop::Ransom(int32 Customer, bool Decision)
{
	return Decision;
}

bool AGameLoop::SellItem(int32 Customer, FItem i)
{
	return false;
}

FItem AGameLoop::StealItem(int32 Customer)
{
	return FItem();
}

void AGameLoop::CraftItem(FItem CraftedItem)
{
}

int32 AGameLoop::GetItemValue(FItem* item, float KingdomStatus)
{
	return (int32) item->MinValue + ((item->MaxValue - item->MinValue) * KingdomStatus);
}

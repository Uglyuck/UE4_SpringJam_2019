// Fill out your copyright notice in the Description page of Project Settings.


#include "GameLoop.h"
//#include "AllSingletons.h"
#include "Engine/DataTable.h"

// Sets default values for this component's properties
AGameLoop::AGameLoop()
{//PrimaryComponentTick.bCanEverTick = false;
	//NewGame();
	UE_LOG(LogTemp, Warning, TEXT("GameLoop Being Made"));
	
	Setup_StoreCoin = 50;
	Setup_RentCost = 30;
	Setup_MobBossCount = 3;
	Setup_GovBossCount = 3;
	Setup_MobBossCooldown = 6;
	Setup_GovBossCooldown = 6;
	Setup_MobRatio = 0.3f;
	Setup_MaxStartCooldown = 10;
	srand(int(FDateTime::Now().GetTicks()));


	// cURVE number of people per day


	FCustomer myCustomer;// = new FCustomer;
	myCustomer.Affiliation = eAffiliation::Gov;
	myCustomer.ID = 1;
	myCustomer.Charisma = 0;
	myCustomer.CoolDownTime = rand() % Setup_MaxStartCooldown;
	myCustomer.ResetTime = myCustomer.CoolDownTime;
	myCustomer.CustomerType = eCustomerType::Customer;
	myCustomer.LastResult = false;
	myCustomer.Element = eElement::Neutral;
	myCustomer.ItemType = eItemType::Spoon;
	myCustomer.Gold = 0;
// Try out some of this!
//Customers[x].Name
	myCustomer.Satisfaction = 0;
	myCustomer.ShopRequest = eShopRequests::Buy;

	Customers.Init(myCustomer, 50);


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


	TotalItems = 1;


	
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
	
	Store_Coin = Setup_StoreCoin;
	PriorDayCoin = 0;
	RentMade = true;
	RentCost = Setup_RentCost;
	RentMissed = 0;
	Prior_Kingdom_Status = 999;
	Kingdom_Status = 0.5;
	DayNumber = 1;
	
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
		Customers[x].ID = x;
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
	if (Setup_MobBossCount > 0)
	for (int x = Setup_MobBossCount -1; x--;)
	{
		Customers[x].CustomerType = eCustomerType::Boss;
		Customers[x].ResetTime = Setup_MobBossCooldown;
		Customers[x].Gold = RansomeAmount;
	}
	if(Setup_GovBossCount > 0)
	{
		t = Customers.Num();
		for (int x = t - Setup_GovBossCount -1; x < t; x++)
		{
			Customers[x].CustomerType = eCustomerType::Boss;
			Customers[x].ResetTime = Setup_GovBossCooldown;
			Customers[x].Gold = RansomeAmount;
		}
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
		TotalItems = i;
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("Datatable Not Loaded"));


	//Prior_Kingdom_Status = 999;
	Prior_Kingdom_Status = 0.5;
	
}
/*
constexpr int n()
{
	return 10;
}
*/
TArray<int32> AGameLoop::getDaysCustomers()
{
	//Reset prior day.....
	PriorDayCoin = Store_Coin;
	Prior_Kingdom_Status = Kingdom_Status;



	bool BossHits[2] = {false, false};
	UE_LOG(LogTemp, Warning, TEXT("Getting all the customers"));
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
		// One  boss of each type per day max
		if (Customers[x].CoolDownTime <= 0 && Customers[x].CustomerType == eCustomerType::Boss)
		{
			if (BossHits[Customers[x].Affiliation == eAffiliation::Gov])
			{
				Customers[x].CoolDownTime++;
			}
			BossHits[Customers[x].Affiliation == eAffiliation::Gov] = true;
		}
		if (Customers[x].CoolDownTime <= 0)
		{
			
			TArray<FName> name2 = Store_stock->GetRowNames();//[rand() % TotalItems];
			//FName& name = Store_stock->GetRowNames()[rand() % TotalItems];
			FName& name = name2[rand()%TotalItems];
			if(name.IsValid())
			{
				FStocks* row = Store_stock->FindRow<FStocks>(name, "Rows");
				if(row)
				{
					Customers[x].SellItem = row->Item;
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("---- Build issue with your version - Row..."));
				}
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("---- Build issue with your version - Name... %s"), &name);

			}

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



FString AGameLoop::getDialog(int32 Customer)
{
	
	eItemType myItemType= Customers[Customer].ItemType;
	FString Desc_Item = "";
	eElement myElement = Customers[Customer].Element;
	FString Desc_Element = "";
	FString Dia_Element = "";
	eShopRequests myShopRequests = Customers[Customer].ShopRequest;
	FString Desc_Req = "";
	FQuest myQuest = Customers[Customer].Quest;
	FString Desc_Quest = "";

	FStringAssetReference MyAssetPathItem("DataTable'/Game/Mechanics/LookupTables/ItemType.ItemType'");
	FStringAssetReference MyAssetPathElement("DataTable'/Game/Mechanics/LookupTables/Element.Element'");
	FStringAssetReference MyAssetPathRequest("DataTable'/Game/Mechanics/LookupTables/ShopRequest.ShopRequest'");
	FStringAssetReference MyAssetPathQuest("DataTable'/Game/Mechanics/LookupTables/Quest.Quest'");

	UDataTable* DataTable;

	UE_LOG(LogTemp, Warning, TEXT("      Now Trying To Load ItemDescriptions  "));
	DataTable = (UDataTable*)MyAssetPathItem.TryLoad();
	if (DataTable)
	{
		static const FString ContextString(TEXT("Item"));
		TArray<FName> RowNames;
		RowNames = DataTable->GetRowNames();
		for (auto& name : RowNames)
		{
			FItemType* row = DataTable->FindRow<FItemType>(name, ContextString);
			if (row)
			{
				if(row->ItemType == myItemType)
				{
					//UE_LOG(LogTemp, Warning, TEXT("Found Match at: %s"), *(row->InventoryDescription));
					Desc_Item = row->Dialog;
				}
				//UE_LOG(LogTemp, Warning, TEXT("Looking at: %s"), *(row->InventoryDescription));
			}
		}
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("Datatable Not Loaded"));





	UE_LOG(LogTemp, Warning, TEXT("      Now Trying To Load myElement  "));
	DataTable = (UDataTable*)MyAssetPathElement.TryLoad();
	if (DataTable)
	{
		static const FString ContextString(TEXT("Element"));
		TArray<FName> RowNames;
		RowNames = DataTable->GetRowNames();
		for (auto& name : RowNames)
		{
			FElement* row = DataTable->FindRow<FElement>(name, ContextString);
			if (row)
			{
				if (row->Element == myElement)
				{
					//UE_LOG(LogTemp, Warning, TEXT("Found Match at: %s"), *(row->InventoryDescription));
					Dia_Element = row->Dialog;
					Desc_Element = row->Dialog;
				}
				//UE_LOG(LogTemp, Warning, TEXT("Looking at: %s"), *(row->InventoryDescription));
			}
		}
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("Datatable Not Loaded"));

	//myShopRequests

	UE_LOG(LogTemp, Warning, TEXT("      Now Trying To Load Request  "));
	DataTable = (UDataTable*)MyAssetPathRequest.TryLoad();
	if (DataTable)
	{
		static const FString ContextString(TEXT("Request"));
		TArray<FName> RowNames;
		RowNames = DataTable->GetRowNames();
		for (auto& name : RowNames)
		{
			FShopRequest* row = DataTable->FindRow<FShopRequest>(name, ContextString);
			if (row)
			{
				if (row->ShopRequest == myShopRequests)
				{
					//UE_LOG(LogTemp, Warning, TEXT("Found Match at: %s"), *(row->InventoryDescription));
					Desc_Req = row->Dialog;
				}
				//UE_LOG(LogTemp, Warning, TEXT("Looking at: %s"), *(row->InventoryDescription));
			}
		}
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("Datatable Not Loaded"));

	//Desc_Quest   MyAssetPathQuest

	TArray<FString> allQuests;
	UE_LOG(LogTemp, Warning, TEXT("      Now Trying To Load Quest  "));
	DataTable = (UDataTable*)MyAssetPathQuest.TryLoad();
	if (DataTable)
	{
		static const FString ContextString(TEXT("Quest"));
		TArray<FName> RowNames;
		RowNames = DataTable->GetRowNames();
		for (auto& name : RowNames)
		{
			FQuest* row = DataTable->FindRow<FQuest>(name, ContextString);
			if (row)
			{
				allQuests.Add(row->Dialog);
				/*
				if (*row == myQuest)
				{
					//UE_LOG(LogTemp, Warning, TEXT("Found Match at: %s"), *(row->InventoryDescription));
					Desc_Quest = row->Dialog;
				}
				//UE_LOG(LogTemp, Warning, TEXT("Looking at: %s"), *(row->InventoryDescription));
				*/
			}
		}
		Desc_Quest = allQuests[rand() % allQuests.Num()];
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
	else
	{
		if (myShopRequests == eShopRequests::Buy)
		{
			FinalPhrase = FString(TEXT("Hello There, " + Desc_Item + "To defeat a " + Desc_Element + " " + Desc_Quest + "." + Desc_Req));
		}
		else if (myShopRequests == eShopRequests::Sell)
		{
			FinalPhrase = FString(TEXT("Hello There, " + Dia_Element + "  " + Desc_Item + " here that has defeated the mighty " + Desc_Quest + "." + Desc_Req));
		}
	}

	return FinalPhrase; //FString(TEXT("Hello there, arrows to defeat a Fire Breathing Racoon. Do you have any?"));
}

// This is the customer buying
bool AGameLoop::ReceiveItem(int32 Customer, FItem i)
{
	//Sell Item
	
	bool CustHappy = false;
	FCustomer* cust = &Customers[Customer];

	// Remove from inventory
	UE_LOG(LogTemp, Warning, TEXT("      Now Trying To Load ItemDescriptions  "));
	if (removeItem(i))
	{
		CustHappy = true;
		Store_Coin += GetItemValue(&i, Prior_Kingdom_Status);
	}
	

	if (!CustHappy)
	{
		//Wasn't foud
	}
	CustHappy = false;

	// Does item match the needs?
	
	if(cust->ItemType == i.ItemType)
	{
		if (cust->Element == eElement::Neutral)
		{
			CustHappy = true;
		}
		else
		{
			if (cust->Element == i.Element)
			{
				CustHappy = true;
			}
		}
	}
	EffectKingdom(cust, CustHappy);
	SetCooldown(cust);
	//If not 
	return CustHappy;
	//return false;
}

bool AGameLoop::Ransom(int32 Customer, bool Decision)
{
	bool bribed = false;
	if (Customers[Customer].Affiliation == PlayerAffiliation && !Decision)
	{
		PlayerAffiliation == eAffiliation::NA;
	}
	if (Decision && Store_Coin >= Customers[Customer].Gold)
	{
		PlayerAffiliation == Customers[Customer].Affiliation;
		Store_Coin -= Customers[Customer].Gold;
		bribed = true;
	}
	else
	{
		PlayerAffiliation == eAffiliation::NA;
	}
	Customers[Customer].CoolDownTime = Customers[Customer].ResetTime;
	return bribed;
}

bool AGameLoop::SellItem(int32 Customer, FItem i, int32 value)
{
	bool CustHappy = false;
	FCustomer* cust = &Customers[Customer];
	if (value > GetItemValue(&i, Kingdom_Status + 0.2f))
	{
		CustHappy = false;
	}
	// Add to inventory
	AddItem(i);


	EffectKingdom(cust, CustHappy);
	SetCooldown(cust);
	return CustHappy;
}


void AGameLoop::NextDay()
{
	RentMade = RentCost < Store_Coin;
	if (RentMade)
	{
		Store_Coin -= RentCost;
		RentMissed = 0;
	}
	else
	{
		RentMissed++;
		if (RentMissed >= 3)
		{
			Playing == false;
		}
	}

	DayNumber++;
	if (Kingdom_Status < 0)
	{
		Playing == false;
	}
	// Move people
	bool KingdomDown = Prior_Kingdom_Status > Kingdom_Status;
	for (int x = Customers.Num(); x--;)
	{
		Customers[x].CoolDownTime--;
		if (KingdomDown && Customers[x].Affiliation == eAffiliation::Mob)
		{
			if (Customers[x].CustomerType == eCustomerType::Customer)
				Customers[x].CoolDownTime--;
			else
			{
				Customers[x].ResetTime = Customers[x].ResetTime > Setup_GovBossCount? Customers[x].ResetTime -1 : Setup_GovBossCount;
			}
			
		}
	}
	// Call afterwards....
	//PriorDayCoin = Store_Coin;
	//Prior_Kingdom_Status = Kingdom_Status;
	
}



FItem AGameLoop::StealItem(int32 Customer)
{
	FItem MyItem = FItem();
	if (PlayerAffiliation == Customers[Customer].Affiliation && PlayerAffiliation != eAffiliation::NA)
	{
		TArray<FItem> myItems = GetAllStock();
		if (myItems.Num() > 0)
		{
			MyItem = myItems[rand() % myItems.Num()];
			if(removeItem(MyItem)) return MyItem;
		}
	}
	return MyItem;
}

void AGameLoop::CraftItem(FItem CraftedItem)
{
	AddItem(CraftedItem);
}








int32 AGameLoop::GetItemValue(FItem* item, float KingdomStatus)
{
	return (int32) item->MinValue + ((item->MaxValue - item->MinValue) * KingdomStatus);
}

void AGameLoop::EffectKingdom(FCustomer * cust, bool Happy)
{
	if(Happy)
	{
		cust->Satisfaction++;
		Kingdom_Status += (cust->Quest.impact) * (cust->Affiliation == eAffiliation::Mob ? PlayerAffiliation == cust->Affiliation ? -0.2 : -1 : 1);
	}
	else
	{
		cust->Satisfaction--;
		Kingdom_Status += (cust->Quest.impact) * (cust->Affiliation == eAffiliation::Mob ? 1 : -1);
	}
}

void AGameLoop::SetCooldown(FCustomer * cust)
{
	cust->CoolDownTime += cust->ResetTime + (-0.5 * cust->Satisfaction);
	cust->CoolDownTime = cust->CoolDownTime < 3 ? 3 : cust->CoolDownTime;
}

TArray<FItem> AGameLoop::GetAllStock()
{
	TArray<FItem> Items;
	for (auto& name : Store_stock->GetRowNames())
	{
		FStocks* row = Store_stock->FindRow<FStocks>(name, "MySTuff");
		//&row->InventoryDescription
		if (row)
		{
			if(row->Count > 0)
			{
				Items.Add(row->Item);
			}
		}
	}
	return Items;
}

bool AGameLoop::removeItem(FItem item)
{
	bool found = false;
	if (Store_stock)
	{
		TArray<FName> RowNames;
		RowNames = Store_stock->GetRowNames();
		for (auto& name : RowNames)
		{
			FStocks* row = Store_stock->FindRow<FStocks>(name, "Removing Item");
			if (row)
			{
				if (row->Item == item)
				{
					UE_LOG(LogTemp, Warning, TEXT("Removing from Inventory: %s"), *(row->Item.InventoryDescription));
					row->Count--;
					found = true;
				}
			}
		}
	}
	if (!found)
	{
		UE_LOG(LogTemp, Warning, TEXT("Item not able to be removed from Inventory: %s"), *(item.InventoryDescription));
	}
	return found;
}

void AGameLoop::AddItem(FItem item)
{
	bool found = false;
	if (Store_stock)
	{
		TArray<FName> RowNames;
		RowNames = Store_stock->GetRowNames();
		for (auto& name : RowNames)
		{
			FStocks* row = Store_stock->FindRow<FStocks>(name, "Adding Item");
			if (row)
			{
				if (row->Item == item)
				{
					UE_LOG(LogTemp, Warning, TEXT("Adding to inventory: %s"), *(row->Item.InventoryDescription));
					row->Count++;
					found = true;
				}
			}
		}
	}
	if (!found)
	{
		UE_LOG(LogTemp, Warning, TEXT("Item not found in Inventory: %s"), *(item.InventoryDescription));
	}
}

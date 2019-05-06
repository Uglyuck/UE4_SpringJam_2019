// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_SpringJam_2019/GameLoop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLoop() {}
// Cross Module References
	UE4_SPRINGJAM_2019_API UScriptStruct* Z_Construct_UScriptStruct_FCustomer();
	UPackage* Z_Construct_UPackage__Script_UE4_SpringJam_2019();
	UE4_SPRINGJAM_2019_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
	UE4_SPRINGJAM_2019_API UEnum* Z_Construct_UEnum_UE4_SpringJam_2019_eElement();
	UE4_SPRINGJAM_2019_API UEnum* Z_Construct_UEnum_UE4_SpringJam_2019_eShopRequests();
	UE4_SPRINGJAM_2019_API UEnum* Z_Construct_UEnum_UE4_SpringJam_2019_eItemType();
	UE4_SPRINGJAM_2019_API UEnum* Z_Construct_UEnum_UE4_SpringJam_2019_eAffiliation();
	UE4_SPRINGJAM_2019_API UEnum* Z_Construct_UEnum_UE4_SpringJam_2019_eCustomerType();
	UE4_SPRINGJAM_2019_API UClass* Z_Construct_UClass_AGameLoop_NoRegister();
	UE4_SPRINGJAM_2019_API UClass* Z_Construct_UClass_AGameLoop();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UE4_SPRINGJAM_2019_API UFunction* Z_Construct_UFunction_AGameLoop_CraftItem();
	UE4_SPRINGJAM_2019_API UScriptStruct* Z_Construct_UScriptStruct_FItem();
	UE4_SPRINGJAM_2019_API UFunction* Z_Construct_UFunction_AGameLoop_getDaysCustomers();
	UE4_SPRINGJAM_2019_API UFunction* Z_Construct_UFunction_AGameLoop_getDialog();
	UE4_SPRINGJAM_2019_API UFunction* Z_Construct_UFunction_AGameLoop_NewGame();
	UE4_SPRINGJAM_2019_API UFunction* Z_Construct_UFunction_AGameLoop_NextDay();
	UE4_SPRINGJAM_2019_API UFunction* Z_Construct_UFunction_AGameLoop_Ransom();
	UE4_SPRINGJAM_2019_API UFunction* Z_Construct_UFunction_AGameLoop_ReceiveItem();
	UE4_SPRINGJAM_2019_API UFunction* Z_Construct_UFunction_AGameLoop_SellItem();
	UE4_SPRINGJAM_2019_API UFunction* Z_Construct_UFunction_AGameLoop_StealItem();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FCustomer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UE4_SPRINGJAM_2019_API uint32 Get_Z_Construct_UScriptStruct_FCustomer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomer, Z_Construct_UPackage__Script_UE4_SpringJam_2019(), TEXT("Customer"), sizeof(FCustomer), Get_Z_Construct_UScriptStruct_FCustomer_Hash());
	}
	return Singleton;
}
template<> UE4_SPRINGJAM_2019_API UScriptStruct* StaticStruct<FCustomer>()
{
	return FCustomer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomer(FCustomer::StaticStruct, TEXT("/Script/UE4_SpringJam_2019"), TEXT("Customer"), false, nullptr, nullptr);
static struct FScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFCustomer
{
	FScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFCustomer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Customer")),new UScriptStruct::TCppStructOps<FCustomer>);
	}
} ScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFCustomer;
	struct Z_Construct_UScriptStruct_FCustomer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastResult_MetaData[];
#endif
		static void NewProp_LastResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LastResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Charisma_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Charisma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Satisfaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Satisfaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Gold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResetTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolDownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CoolDownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Element;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShopRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShopRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Affiliation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Affiliation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_LastResult_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_LastResult_SetBit(void* Obj)
	{
		((FCustomer*)Obj)->LastResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_LastResult = { "LastResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomer), &Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_LastResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_LastResult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_LastResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Charisma_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Charisma = { "Charisma", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer, Charisma), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Charisma_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Charisma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Satisfaction_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Satisfaction = { "Satisfaction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer, Satisfaction), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Satisfaction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Satisfaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Gold_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer, Gold), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Gold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Gold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ResetTime_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ResetTime = { "ResetTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer, ResetTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ResetTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ResetTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_CoolDownTime_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_CoolDownTime = { "CoolDownTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer, CoolDownTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_CoolDownTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_CoolDownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Quest_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer, Quest), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Quest_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Element_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer, Element), Z_Construct_UEnum_UE4_SpringJam_2019_eElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Element_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Element_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ShopRequest_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ShopRequest = { "ShopRequest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer, ShopRequest), Z_Construct_UEnum_UE4_SpringJam_2019_eShopRequests, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ShopRequest_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ShopRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer, ItemType), Z_Construct_UEnum_UE4_SpringJam_2019_eItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ItemType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Affiliation_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Affiliation = { "Affiliation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer, Affiliation), Z_Construct_UEnum_UE4_SpringJam_2019_eAffiliation, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Affiliation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Affiliation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_CustomerType_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_CustomerType = { "CustomerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer, CustomerType), Z_Construct_UEnum_UE4_SpringJam_2019_eCustomerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_CustomerType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_CustomerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Customer" },
		{ "ModuleRelativePath", "GameLoop.h" },
		{ "ToolTip", "GENERATED_BODY()\npublic:" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomer, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_LastResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Charisma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Satisfaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Gold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ResetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_CoolDownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Quest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Element,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ShopRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Affiliation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_CustomerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomer_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_SpringJam_2019,
		nullptr,
		&NewStructOps,
		"Customer",
		sizeof(FCustomer),
		alignof(FCustomer),
		Z_Construct_UScriptStruct_FCustomer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UE4_SpringJam_2019();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Customer"), sizeof(FCustomer), Get_Z_Construct_UScriptStruct_FCustomer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomer_Hash() { return 2937132470U; }
	void AGameLoop::StaticRegisterNativesAGameLoop()
	{
		UClass* Class = AGameLoop::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CraftItem", &AGameLoop::execCraftItem },
			{ "getDaysCustomers", &AGameLoop::execgetDaysCustomers },
			{ "getDialog", &AGameLoop::execgetDialog },
			{ "NewGame", &AGameLoop::execNewGame },
			{ "NextDay", &AGameLoop::execNextDay },
			{ "Ransom", &AGameLoop::execRansom },
			{ "ReceiveItem", &AGameLoop::execReceiveItem },
			{ "SellItem", &AGameLoop::execSellItem },
			{ "StealItem", &AGameLoop::execStealItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameLoop_CraftItem_Statics
	{
		struct GameLoop_eventCraftItem_Parms
		{
			FItem CraftedItem;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CraftedItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameLoop_CraftItem_Statics::NewProp_CraftedItem = { "CraftedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLoop_eventCraftItem_Parms, CraftedItem), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLoop_CraftItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoop_CraftItem_Statics::NewProp_CraftedItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLoop_CraftItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLoop_CraftItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLoop, nullptr, "CraftItem", sizeof(GameLoop_eventCraftItem_Parms), Z_Construct_UFunction_AGameLoop_CraftItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameLoop_CraftItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLoop_CraftItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameLoop_CraftItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLoop_CraftItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLoop_CraftItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLoop_getDaysCustomers_Statics
	{
		struct GameLoop_eventgetDaysCustomers_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameLoop_getDaysCustomers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLoop_eventgetDaysCustomers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLoop_getDaysCustomers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLoop_getDaysCustomers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoop_getDaysCustomers_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoop_getDaysCustomers_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLoop_getDaysCustomers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLoop_getDaysCustomers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLoop, nullptr, "getDaysCustomers", sizeof(GameLoop_eventgetDaysCustomers_Parms), Z_Construct_UFunction_AGameLoop_getDaysCustomers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameLoop_getDaysCustomers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLoop_getDaysCustomers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameLoop_getDaysCustomers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLoop_getDaysCustomers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLoop_getDaysCustomers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLoop_getDialog_Statics
	{
		struct GameLoop_eventgetDialog_Parms
		{
			int32 Customer;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Customer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameLoop_getDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLoop_eventgetDialog_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLoop_getDialog_Statics::NewProp_Customer = { "Customer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLoop_eventgetDialog_Parms, Customer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLoop_getDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoop_getDialog_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoop_getDialog_Statics::NewProp_Customer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLoop_getDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameLoop.h" },
		{ "ToolTip", "Customer Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLoop_getDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLoop, nullptr, "getDialog", sizeof(GameLoop_eventgetDialog_Parms), Z_Construct_UFunction_AGameLoop_getDialog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameLoop_getDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLoop_getDialog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameLoop_getDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLoop_getDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLoop_getDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLoop_NewGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLoop_NewGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameLoop.h" },
		{ "ToolTip", "Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLoop_NewGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLoop, nullptr, "NewGame", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLoop_NewGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameLoop_NewGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLoop_NewGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLoop_NewGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLoop_NextDay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLoop_NextDay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLoop_NextDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLoop, nullptr, "NextDay", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLoop_NextDay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameLoop_NextDay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLoop_NextDay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLoop_NextDay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLoop_Ransom_Statics
	{
		struct GameLoop_eventRansom_Parms
		{
			int32 Customer;
			bool Decision;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_Decision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Decision;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Customer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameLoop_Ransom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLoop_eventRansom_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameLoop_Ransom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLoop_eventRansom_Parms), &Z_Construct_UFunction_AGameLoop_Ransom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGameLoop_Ransom_Statics::NewProp_Decision_SetBit(void* Obj)
	{
		((GameLoop_eventRansom_Parms*)Obj)->Decision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameLoop_Ransom_Statics::NewProp_Decision = { "Decision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLoop_eventRansom_Parms), &Z_Construct_UFunction_AGameLoop_Ransom_Statics::NewProp_Decision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLoop_Ransom_Statics::NewProp_Customer = { "Customer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLoop_eventRansom_Parms, Customer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLoop_Ransom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoop_Ransom_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoop_Ransom_Statics::NewProp_Decision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoop_Ransom_Statics::NewProp_Customer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLoop_Ransom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLoop_Ransom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLoop, nullptr, "Ransom", sizeof(GameLoop_eventRansom_Parms), Z_Construct_UFunction_AGameLoop_Ransom_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameLoop_Ransom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLoop_Ransom_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameLoop_Ransom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLoop_Ransom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLoop_Ransom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLoop_ReceiveItem_Statics
	{
		struct GameLoop_eventReceiveItem_Parms
		{
			int32 Customer;
			FItem i;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_i;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Customer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameLoop_ReceiveItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLoop_eventReceiveItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameLoop_ReceiveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLoop_eventReceiveItem_Parms), &Z_Construct_UFunction_AGameLoop_ReceiveItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameLoop_ReceiveItem_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLoop_eventReceiveItem_Parms, i), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLoop_ReceiveItem_Statics::NewProp_Customer = { "Customer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLoop_eventReceiveItem_Parms, Customer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLoop_ReceiveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoop_ReceiveItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoop_ReceiveItem_Statics::NewProp_i,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoop_ReceiveItem_Statics::NewProp_Customer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLoop_ReceiveItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLoop_ReceiveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLoop, nullptr, "ReceiveItem", sizeof(GameLoop_eventReceiveItem_Parms), Z_Construct_UFunction_AGameLoop_ReceiveItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameLoop_ReceiveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLoop_ReceiveItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameLoop_ReceiveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLoop_ReceiveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLoop_ReceiveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLoop_SellItem_Statics
	{
		struct GameLoop_eventSellItem_Parms
		{
			int32 Customer;
			FItem i;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_i;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Customer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameLoop_SellItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLoop_eventSellItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameLoop_SellItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLoop_eventSellItem_Parms), &Z_Construct_UFunction_AGameLoop_SellItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameLoop_SellItem_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLoop_eventSellItem_Parms, i), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLoop_SellItem_Statics::NewProp_Customer = { "Customer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLoop_eventSellItem_Parms, Customer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLoop_SellItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoop_SellItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoop_SellItem_Statics::NewProp_i,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoop_SellItem_Statics::NewProp_Customer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLoop_SellItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLoop_SellItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLoop, nullptr, "SellItem", sizeof(GameLoop_eventSellItem_Parms), Z_Construct_UFunction_AGameLoop_SellItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameLoop_SellItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLoop_SellItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameLoop_SellItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLoop_SellItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLoop_SellItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLoop_StealItem_Statics
	{
		struct GameLoop_eventStealItem_Parms
		{
			int32 Customer;
			FItem ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Customer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameLoop_StealItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLoop_eventStealItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLoop_StealItem_Statics::NewProp_Customer = { "Customer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLoop_eventStealItem_Parms, Customer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLoop_StealItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoop_StealItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLoop_StealItem_Statics::NewProp_Customer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLoop_StealItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLoop_StealItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLoop, nullptr, "StealItem", sizeof(GameLoop_eventStealItem_Parms), Z_Construct_UFunction_AGameLoop_StealItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameLoop_StealItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLoop_StealItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameLoop_StealItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLoop_StealItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLoop_StealItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameLoop_NoRegister()
	{
		return AGameLoop::StaticClass();
	}
	struct Z_Construct_UClass_AGameLoop_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Customers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Customers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Customers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerAffiliation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerAffiliation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Store_stock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Store_stock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Playing_MetaData[];
#endif
		static void NewProp_Playing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Playing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prior_Kingdom_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Prior_Kingdom_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kingdom_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Kingdom_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RentMissed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RentMissed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RentCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RentCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RentMade_MetaData[];
#endif
		static void NewProp_RentMade_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RentMade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DayNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DayNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriorDayCoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PriorDayCoin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Store_Coin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Store_Coin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Setup_MaxStartCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Setup_MaxStartCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Setup_BuyRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Setup_BuyRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Setup_MobRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Setup_MobRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Setup_GovBossCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Setup_GovBossCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Setup_GovBossCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Setup_GovBossCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Setup_MobBossCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Setup_MobBossCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Setup_MobBossCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Setup_MobBossCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Setup_RentCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Setup_RentCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Setup_StoreCoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Setup_StoreCoin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameLoop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_SpringJam_2019,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameLoop_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameLoop_CraftItem, "CraftItem" }, // 809687660
		{ &Z_Construct_UFunction_AGameLoop_getDaysCustomers, "getDaysCustomers" }, // 4128799141
		{ &Z_Construct_UFunction_AGameLoop_getDialog, "getDialog" }, // 2767314121
		{ &Z_Construct_UFunction_AGameLoop_NewGame, "NewGame" }, // 769399195
		{ &Z_Construct_UFunction_AGameLoop_NextDay, "NextDay" }, // 129212842
		{ &Z_Construct_UFunction_AGameLoop_Ransom, "Ransom" }, // 3012191184
		{ &Z_Construct_UFunction_AGameLoop_ReceiveItem, "ReceiveItem" }, // 2750178091
		{ &Z_Construct_UFunction_AGameLoop_SellItem, "SellItem" }, // 1729635536
		{ &Z_Construct_UFunction_AGameLoop_StealItem, "StealItem" }, // 3263607203
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameLoop.h" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_Customers_MetaData[] = {
		{ "Category", "GameLoop" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_Customers = { "Customers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, Customers), METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_Customers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_Customers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_Customers_Inner = { "Customers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_PlayerAffiliation_MetaData[] = {
		{ "Category", "GameLoop" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_PlayerAffiliation = { "PlayerAffiliation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, PlayerAffiliation), Z_Construct_UEnum_UE4_SpringJam_2019_eAffiliation, METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_PlayerAffiliation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_PlayerAffiliation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_Store_stock_MetaData[] = {
		{ "Category", "GameLoop" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_Store_stock = { "Store_stock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, Store_stock), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_Store_stock_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_Store_stock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_Playing_MetaData[] = {
		{ "Category", "GameLoop" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	void Z_Construct_UClass_AGameLoop_Statics::NewProp_Playing_SetBit(void* Obj)
	{
		((AGameLoop*)Obj)->Playing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_Playing = { "Playing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameLoop), &Z_Construct_UClass_AGameLoop_Statics::NewProp_Playing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_Playing_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_Playing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_Prior_Kingdom_Status_MetaData[] = {
		{ "Category", "GameLoop" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_Prior_Kingdom_Status = { "Prior_Kingdom_Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, Prior_Kingdom_Status), METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_Prior_Kingdom_Status_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_Prior_Kingdom_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_Kingdom_Status_MetaData[] = {
		{ "Category", "GameLoop" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_Kingdom_Status = { "Kingdom_Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, Kingdom_Status), METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_Kingdom_Status_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_Kingdom_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_RentMissed_MetaData[] = {
		{ "Category", "GameLoop" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_RentMissed = { "RentMissed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, RentMissed), METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_RentMissed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_RentMissed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_RentCost_MetaData[] = {
		{ "Category", "GameLoop" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_RentCost = { "RentCost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, RentCost), METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_RentCost_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_RentCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_RentMade_MetaData[] = {
		{ "Category", "GameLoop" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	void Z_Construct_UClass_AGameLoop_Statics::NewProp_RentMade_SetBit(void* Obj)
	{
		((AGameLoop*)Obj)->RentMade = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_RentMade = { "RentMade", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameLoop), &Z_Construct_UClass_AGameLoop_Statics::NewProp_RentMade_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_RentMade_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_RentMade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_DayNumber_MetaData[] = {
		{ "Category", "GameLoop" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_DayNumber = { "DayNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, DayNumber), METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_DayNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_DayNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_PriorDayCoin_MetaData[] = {
		{ "Category", "GameLoop" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_PriorDayCoin = { "PriorDayCoin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, PriorDayCoin), METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_PriorDayCoin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_PriorDayCoin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_Store_Coin_MetaData[] = {
		{ "Category", "GameLoop" },
		{ "ModuleRelativePath", "GameLoop.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Setup\")\n       float Setup_MaxStartCooldown;" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_Store_Coin = { "Store_Coin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, Store_Coin), METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_Store_Coin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_Store_Coin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MaxStartCooldown_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MaxStartCooldown = { "Setup_MaxStartCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, Setup_MaxStartCooldown), METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MaxStartCooldown_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MaxStartCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_BuyRatio_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_BuyRatio = { "Setup_BuyRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, Setup_BuyRatio), METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_BuyRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_BuyRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MobRatio_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MobRatio = { "Setup_MobRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, Setup_MobRatio), METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MobRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MobRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_GovBossCooldown_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_GovBossCooldown = { "Setup_GovBossCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, Setup_GovBossCooldown), METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_GovBossCooldown_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_GovBossCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_GovBossCount_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_GovBossCount = { "Setup_GovBossCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, Setup_GovBossCount), METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_GovBossCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_GovBossCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MobBossCooldown_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MobBossCooldown = { "Setup_MobBossCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, Setup_MobBossCooldown), METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MobBossCooldown_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MobBossCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MobBossCount_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MobBossCount = { "Setup_MobBossCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, Setup_MobBossCount), METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MobBossCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MobBossCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_RentCost_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_RentCost = { "Setup_RentCost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, Setup_RentCost), METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_RentCost_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_RentCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_StoreCoin_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "GameLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_StoreCoin = { "Setup_StoreCoin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameLoop, Setup_StoreCoin), METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_StoreCoin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_StoreCoin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameLoop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_Customers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_Customers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_PlayerAffiliation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_Store_stock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_Playing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_Prior_Kingdom_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_Kingdom_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_RentMissed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_RentCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_RentMade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_DayNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_PriorDayCoin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_Store_Coin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MaxStartCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_BuyRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MobRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_GovBossCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_GovBossCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MobBossCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_MobBossCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_RentCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameLoop_Statics::NewProp_Setup_StoreCoin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameLoop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameLoop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameLoop_Statics::ClassParams = {
		&AGameLoop::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameLoop_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGameLoop_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGameLoop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameLoop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameLoop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameLoop, 1841198832);
	template<> UE4_SPRINGJAM_2019_API UClass* StaticClass<AGameLoop>()
	{
		return AGameLoop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameLoop(Z_Construct_UClass_AGameLoop, &AGameLoop::StaticClass, TEXT("/Script/UE4_SpringJam_2019"), TEXT("AGameLoop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameLoop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

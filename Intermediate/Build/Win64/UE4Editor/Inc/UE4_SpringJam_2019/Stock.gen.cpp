// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_SpringJam_2019/Stock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStock() {}
// Cross Module References
	UE4_SPRINGJAM_2019_API UEnum* Z_Construct_UEnum_UE4_SpringJam_2019_eItemType();
	UPackage* Z_Construct_UPackage__Script_UE4_SpringJam_2019();
	UE4_SPRINGJAM_2019_API UEnum* Z_Construct_UEnum_UE4_SpringJam_2019_eShopRequests();
	UE4_SPRINGJAM_2019_API UEnum* Z_Construct_UEnum_UE4_SpringJam_2019_eCustomerType();
	UE4_SPRINGJAM_2019_API UEnum* Z_Construct_UEnum_UE4_SpringJam_2019_eElement();
	UE4_SPRINGJAM_2019_API UEnum* Z_Construct_UEnum_UE4_SpringJam_2019_eAffiliation();
	UE4_SPRINGJAM_2019_API UScriptStruct* Z_Construct_UScriptStruct_FStocks();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UE4_SPRINGJAM_2019_API UScriptStruct* Z_Construct_UScriptStruct_FItem();
	UE4_SPRINGJAM_2019_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
	UE4_SPRINGJAM_2019_API UScriptStruct* Z_Construct_UScriptStruct_FCustomers();
	UE4_SPRINGJAM_2019_API UScriptStruct* Z_Construct_UScriptStruct_FItemType();
	UE4_SPRINGJAM_2019_API UScriptStruct* Z_Construct_UScriptStruct_FElement();
	UE4_SPRINGJAM_2019_API UScriptStruct* Z_Construct_UScriptStruct_FShopRequest();
	UE4_SPRINGJAM_2019_API UClass* Z_Construct_UClass_UStock_NoRegister();
	UE4_SPRINGJAM_2019_API UClass* Z_Construct_UClass_UStock();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
// End Cross Module References
	static UEnum* eItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE4_SpringJam_2019_eItemType, Z_Construct_UPackage__Script_UE4_SpringJam_2019(), TEXT("eItemType"));
		}
		return Singleton;
	}
	template<> UE4_SPRINGJAM_2019_API UEnum* StaticEnum<eItemType>()
	{
		return eItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eItemType(eItemType_StaticEnum, TEXT("/Script/UE4_SpringJam_2019"), TEXT("eItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE4_SpringJam_2019_eItemType_Hash() { return 37446217U; }
	UEnum* Z_Construct_UEnum_UE4_SpringJam_2019_eItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE4_SpringJam_2019();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eItemType"), 0, Get_Z_Construct_UEnum_UE4_SpringJam_2019_eItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Spoon", (int64)Spoon },
				{ "Sword", (int64)Sword },
				{ "Arrow", (int64)Arrow },
				{ "Shield", (int64)Shield },
				{ "Gloves", (int64)Gloves },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Arrow.DisplayName", "Arrow" },
				{ "BlueprintType", "true" },
				{ "Gloves.DisplayName", "Gloves" },
				{ "ModuleRelativePath", "Stock.h" },
				{ "Shield.DisplayName", "Shield" },
				{ "Spoon.DisplayName", "Spoon" },
				{ "Sword.DisplayName", "Sword" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE4_SpringJam_2019,
				nullptr,
				"eItemType",
				"eItemType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* eShopRequests_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE4_SpringJam_2019_eShopRequests, Z_Construct_UPackage__Script_UE4_SpringJam_2019(), TEXT("eShopRequests"));
		}
		return Singleton;
	}
	template<> UE4_SPRINGJAM_2019_API UEnum* StaticEnum<eShopRequests>()
	{
		return eShopRequests_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eShopRequests(eShopRequests_StaticEnum, TEXT("/Script/UE4_SpringJam_2019"), TEXT("eShopRequests"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE4_SpringJam_2019_eShopRequests_Hash() { return 196014312U; }
	UEnum* Z_Construct_UEnum_UE4_SpringJam_2019_eShopRequests()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE4_SpringJam_2019();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eShopRequests"), 0, Get_Z_Construct_UEnum_UE4_SpringJam_2019_eShopRequests_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Buy", (int64)Buy },
				{ "Sell", (int64)Sell },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Buy.DisplayName", "Buy" },
				{ "ModuleRelativePath", "Stock.h" },
				{ "Sell.DisplayName", "Sell" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE4_SpringJam_2019,
				nullptr,
				"eShopRequests",
				"eShopRequests",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* eCustomerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE4_SpringJam_2019_eCustomerType, Z_Construct_UPackage__Script_UE4_SpringJam_2019(), TEXT("eCustomerType"));
		}
		return Singleton;
	}
	template<> UE4_SPRINGJAM_2019_API UEnum* StaticEnum<eCustomerType>()
	{
		return eCustomerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eCustomerType(eCustomerType_StaticEnum, TEXT("/Script/UE4_SpringJam_2019"), TEXT("eCustomerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE4_SpringJam_2019_eCustomerType_Hash() { return 1870603528U; }
	UEnum* Z_Construct_UEnum_UE4_SpringJam_2019_eCustomerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE4_SpringJam_2019();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eCustomerType"), 0, Get_Z_Construct_UEnum_UE4_SpringJam_2019_eCustomerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Boss", (int64)Boss },
				{ "Customer", (int64)Customer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Boss.DisplayName", "Boss" },
				{ "Customer.DisplayName", "Customer" },
				{ "ModuleRelativePath", "Stock.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE4_SpringJam_2019,
				nullptr,
				"eCustomerType",
				"eCustomerType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* eElement_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE4_SpringJam_2019_eElement, Z_Construct_UPackage__Script_UE4_SpringJam_2019(), TEXT("eElement"));
		}
		return Singleton;
	}
	template<> UE4_SPRINGJAM_2019_API UEnum* StaticEnum<eElement>()
	{
		return eElement_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eElement(eElement_StaticEnum, TEXT("/Script/UE4_SpringJam_2019"), TEXT("eElement"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE4_SpringJam_2019_eElement_Hash() { return 2326607913U; }
	UEnum* Z_Construct_UEnum_UE4_SpringJam_2019_eElement()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE4_SpringJam_2019();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eElement"), 0, Get_Z_Construct_UEnum_UE4_SpringJam_2019_eElement_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Neutral", (int64)Neutral },
				{ "Fire", (int64)Fire },
				{ "Water", (int64)Water },
				{ "Earth", (int64)Earth },
				{ "Ice", (int64)Ice },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Earth.DisplayName", "Dark" },
				{ "Fire.DisplayName", "Fire" },
				{ "Ice.DisplayName", "Light" },
				{ "ModuleRelativePath", "Stock.h" },
				{ "Neutral.DisplayName", "Neutral" },
				{ "Water.DisplayName", "Water" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE4_SpringJam_2019,
				nullptr,
				"eElement",
				"eElement",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* eAffiliation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE4_SpringJam_2019_eAffiliation, Z_Construct_UPackage__Script_UE4_SpringJam_2019(), TEXT("eAffiliation"));
		}
		return Singleton;
	}
	template<> UE4_SPRINGJAM_2019_API UEnum* StaticEnum<eAffiliation>()
	{
		return eAffiliation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eAffiliation(eAffiliation_StaticEnum, TEXT("/Script/UE4_SpringJam_2019"), TEXT("eAffiliation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE4_SpringJam_2019_eAffiliation_Hash() { return 4062080341U; }
	UEnum* Z_Construct_UEnum_UE4_SpringJam_2019_eAffiliation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE4_SpringJam_2019();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eAffiliation"), 0, Get_Z_Construct_UEnum_UE4_SpringJam_2019_eAffiliation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NA", (int64)NA },
				{ "Mob", (int64)Mob },
				{ "Gov", (int64)Gov },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Gov.DisplayName", "Gov" },
				{ "Mob.DisplayName", "Mob" },
				{ "ModuleRelativePath", "Stock.h" },
				{ "NA.DisplayName", "N/A" },
				{ "ToolTip", "All Enums to be used!" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE4_SpringJam_2019,
				nullptr,
				"eAffiliation",
				"eAffiliation",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FStocks::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UE4_SPRINGJAM_2019_API uint32 Get_Z_Construct_UScriptStruct_FStocks_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStocks, Z_Construct_UPackage__Script_UE4_SpringJam_2019(), TEXT("Stocks"), sizeof(FStocks), Get_Z_Construct_UScriptStruct_FStocks_Hash());
	}
	return Singleton;
}
template<> UE4_SPRINGJAM_2019_API UScriptStruct* StaticStruct<FStocks>()
{
	return FStocks::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStocks(FStocks::StaticStruct, TEXT("/Script/UE4_SpringJam_2019"), TEXT("Stocks"), false, nullptr, nullptr);
static struct FScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFStocks
{
	FScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFStocks()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Stocks")),new UScriptStruct::TCppStructOps<FStocks>);
	}
} ScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFStocks;
	struct Z_Construct_UScriptStruct_FStocks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Element;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MeshName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStocks_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStocks_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStocks>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Stocks" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStocks, Type), Z_Construct_UEnum_UE4_SpringJam_2019_eItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Element_MetaData[] = {
		{ "Category", "Stocks" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStocks, Element), Z_Construct_UEnum_UE4_SpringJam_2019_eElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Element_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Element_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStocks_Statics::NewProp_MeshName_MetaData[] = {
		{ "Category", "Stocks" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStocks_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStocks, MeshName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStocks_Statics::NewProp_MeshName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStocks_Statics::NewProp_MeshName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Stocks" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStocks, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Stocks" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStocks, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Count_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Stocks" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStocks, Item), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Item_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStocks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Element,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStocks_Statics::NewProp_MeshName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStocks_Statics::NewProp_Item,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStocks_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_SpringJam_2019,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Stocks",
		sizeof(FStocks),
		alignof(FStocks),
		Z_Construct_UScriptStruct_FStocks_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FStocks_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStocks_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStocks_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStocks()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStocks_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UE4_SpringJam_2019();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Stocks"), sizeof(FStocks), Get_Z_Construct_UScriptStruct_FStocks_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStocks_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStocks_Hash() { return 2906457252U; }
class UScriptStruct* FQuest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UE4_SPRINGJAM_2019_API uint32 Get_Z_Construct_UScriptStruct_FQuest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuest, Z_Construct_UPackage__Script_UE4_SpringJam_2019(), TEXT("Quest"), sizeof(FQuest), Get_Z_Construct_UScriptStruct_FQuest_Hash());
	}
	return Singleton;
}
template<> UE4_SPRINGJAM_2019_API UScriptStruct* StaticStruct<FQuest>()
{
	return FQuest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuest(FQuest::StaticStruct, TEXT("/Script/UE4_SpringJam_2019"), TEXT("Quest"), false, nullptr, nullptr);
static struct FScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFQuest
{
	FScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFQuest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Quest")),new UScriptStruct::TCppStructOps<FQuest>);
	}
} ScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFQuest;
	struct Z_Construct_UScriptStruct_FQuest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_impact_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_impact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_impact_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_impact = { "impact", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuest, impact), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_impact_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_impact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Dialog_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Dialog = { "Dialog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuest, Dialog), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Dialog_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Dialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestName_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuest, QuestName), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_impact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Dialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_QuestName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_SpringJam_2019,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Quest",
		sizeof(FQuest),
		alignof(FQuest),
		Z_Construct_UScriptStruct_FQuest_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UE4_SpringJam_2019();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Quest"), sizeof(FQuest), Get_Z_Construct_UScriptStruct_FQuest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuest_Hash() { return 3538985108U; }
class UScriptStruct* FCustomers::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UE4_SPRINGJAM_2019_API uint32 Get_Z_Construct_UScriptStruct_FCustomers_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomers, Z_Construct_UPackage__Script_UE4_SpringJam_2019(), TEXT("Customers"), sizeof(FCustomers), Get_Z_Construct_UScriptStruct_FCustomers_Hash());
	}
	return Singleton;
}
template<> UE4_SPRINGJAM_2019_API UScriptStruct* StaticStruct<FCustomers>()
{
	return FCustomers::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomers(FCustomers::StaticStruct, TEXT("/Script/UE4_SpringJam_2019"), TEXT("Customers"), false, nullptr, nullptr);
static struct FScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFCustomers
{
	FScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFCustomers()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Customers")),new UScriptStruct::TCppStructOps<FCustomers>);
	}
} ScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFCustomers;
	struct Z_Construct_UScriptStruct_FCustomers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MeshName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Affiliation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Affiliation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomerType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomers_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomers>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomers_Statics::NewProp_MeshName_MetaData[] = {
		{ "Category", "Customers" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomers_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomers, MeshName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomers_Statics::NewProp_MeshName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomers_Statics::NewProp_MeshName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomers_Statics::NewProp_Affiliation_MetaData[] = {
		{ "Category", "Customers" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomers_Statics::NewProp_Affiliation = { "Affiliation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomers, Affiliation), Z_Construct_UEnum_UE4_SpringJam_2019_eAffiliation, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomers_Statics::NewProp_Affiliation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomers_Statics::NewProp_Affiliation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomers_Statics::NewProp_CustomerType_MetaData[] = {
		{ "Category", "Customers" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomers_Statics::NewProp_CustomerType = { "CustomerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomers, CustomerType), Z_Construct_UEnum_UE4_SpringJam_2019_eCustomerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomers_Statics::NewProp_CustomerType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomers_Statics::NewProp_CustomerType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomers_Statics::NewProp_MeshName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomers_Statics::NewProp_Affiliation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomers_Statics::NewProp_CustomerType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_SpringJam_2019,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Customers",
		sizeof(FCustomers),
		alignof(FCustomers),
		Z_Construct_UScriptStruct_FCustomers_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomers_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomers_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomers()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomers_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UE4_SpringJam_2019();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Customers"), sizeof(FCustomers), Get_Z_Construct_UScriptStruct_FCustomers_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomers_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomers_Hash() { return 2768487790U; }
class UScriptStruct* FItemType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UE4_SPRINGJAM_2019_API uint32 Get_Z_Construct_UScriptStruct_FItemType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemType, Z_Construct_UPackage__Script_UE4_SpringJam_2019(), TEXT("ItemType"), sizeof(FItemType), Get_Z_Construct_UScriptStruct_FItemType_Hash());
	}
	return Singleton;
}
template<> UE4_SPRINGJAM_2019_API UScriptStruct* StaticStruct<FItemType>()
{
	return FItemType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemType(FItemType::StaticStruct, TEXT("/Script/UE4_SpringJam_2019"), TEXT("ItemType"), false, nullptr, nullptr);
static struct FScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFItemType
{
	FScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFItemType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemType")),new UScriptStruct::TCppStructOps<FItemType>);
	}
} ScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFItemType;
	struct Z_Construct_UScriptStruct_FItemType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemType>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemType_Statics::NewProp_Dialog_MetaData[] = {
		{ "Category", "ItemType" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemType_Statics::NewProp_Dialog = { "Dialog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemType, Dialog), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemType_Statics::NewProp_Dialog_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemType_Statics::NewProp_Dialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemType_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "ItemType" },
		{ "ModuleRelativePath", "Stock.h" },
		{ "ToolTip", ", Category = \"\")" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemType_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemType, ItemType), Z_Construct_UEnum_UE4_SpringJam_2019_eItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemType_Statics::NewProp_ItemType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemType_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemType_Statics::NewProp_Dialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemType_Statics::NewProp_ItemType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_SpringJam_2019,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ItemType",
		sizeof(FItemType),
		alignof(FItemType),
		Z_Construct_UScriptStruct_FItemType_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FItemType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemType_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UE4_SpringJam_2019();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemType"), sizeof(FItemType), Get_Z_Construct_UScriptStruct_FItemType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemType_Hash() { return 3779556497U; }
class UScriptStruct* FElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UE4_SPRINGJAM_2019_API uint32 Get_Z_Construct_UScriptStruct_FElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FElement, Z_Construct_UPackage__Script_UE4_SpringJam_2019(), TEXT("Element"), sizeof(FElement), Get_Z_Construct_UScriptStruct_FElement_Hash());
	}
	return Singleton;
}
template<> UE4_SPRINGJAM_2019_API UScriptStruct* StaticStruct<FElement>()
{
	return FElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FElement(FElement::StaticStruct, TEXT("/Script/UE4_SpringJam_2019"), TEXT("Element"), false, nullptr, nullptr);
static struct FScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFElement
{
	FScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Element")),new UScriptStruct::TCppStructOps<FElement>);
	}
} ScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFElement;
	struct Z_Construct_UScriptStruct_FElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Element;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FElement_Statics::NewProp_Dialog_MetaData[] = {
		{ "Category", "Element" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FElement_Statics::NewProp_Dialog = { "Dialog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FElement, Dialog), METADATA_PARAMS(Z_Construct_UScriptStruct_FElement_Statics::NewProp_Dialog_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FElement_Statics::NewProp_Dialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FElement_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Element" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FElement_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FElement, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FElement_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FElement_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FElement_Statics::NewProp_Element_MetaData[] = {
		{ "Category", "Element" },
		{ "ModuleRelativePath", "Stock.h" },
		{ "ToolTip", ", Category = \"\")" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FElement_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FElement, Element), Z_Construct_UEnum_UE4_SpringJam_2019_eElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FElement_Statics::NewProp_Element_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FElement_Statics::NewProp_Element_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElement_Statics::NewProp_Dialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElement_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElement_Statics::NewProp_Element,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_SpringJam_2019,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Element",
		sizeof(FElement),
		alignof(FElement),
		Z_Construct_UScriptStruct_FElement_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FElement_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UE4_SpringJam_2019();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Element"), sizeof(FElement), Get_Z_Construct_UScriptStruct_FElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FElement_Hash() { return 1823859140U; }
class UScriptStruct* FShopRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UE4_SPRINGJAM_2019_API uint32 Get_Z_Construct_UScriptStruct_FShopRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShopRequest, Z_Construct_UPackage__Script_UE4_SpringJam_2019(), TEXT("ShopRequest"), sizeof(FShopRequest), Get_Z_Construct_UScriptStruct_FShopRequest_Hash());
	}
	return Singleton;
}
template<> UE4_SPRINGJAM_2019_API UScriptStruct* StaticStruct<FShopRequest>()
{
	return FShopRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShopRequest(FShopRequest::StaticStruct, TEXT("/Script/UE4_SpringJam_2019"), TEXT("ShopRequest"), false, nullptr, nullptr);
static struct FScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFShopRequest
{
	FScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFShopRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ShopRequest")),new UScriptStruct::TCppStructOps<FShopRequest>);
	}
} ScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFShopRequest;
	struct Z_Construct_UScriptStruct_FShopRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShopRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShopRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShopRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShopRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopRequest_Statics::NewProp_Dialog_MetaData[] = {
		{ "Category", "ShopRequest" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShopRequest_Statics::NewProp_Dialog = { "Dialog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopRequest, Dialog), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopRequest_Statics::NewProp_Dialog_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FShopRequest_Statics::NewProp_Dialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopRequest_Statics::NewProp_ShopRequest_MetaData[] = {
		{ "Category", "ShopRequest" },
		{ "ModuleRelativePath", "Stock.h" },
		{ "ToolTip", ", Category = \"\")" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShopRequest_Statics::NewProp_ShopRequest = { "ShopRequest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopRequest, ShopRequest), Z_Construct_UEnum_UE4_SpringJam_2019_eShopRequests, METADATA_PARAMS(Z_Construct_UScriptStruct_FShopRequest_Statics::NewProp_ShopRequest_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FShopRequest_Statics::NewProp_ShopRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShopRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopRequest_Statics::NewProp_Dialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopRequest_Statics::NewProp_ShopRequest,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShopRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_SpringJam_2019,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ShopRequest",
		sizeof(FShopRequest),
		alignof(FShopRequest),
		Z_Construct_UScriptStruct_FShopRequest_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FShopRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShopRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FShopRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShopRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShopRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UE4_SpringJam_2019();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShopRequest"), sizeof(FShopRequest), Get_Z_Construct_UScriptStruct_FShopRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShopRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShopRequest_Hash() { return 2126892621U; }
class UScriptStruct* FItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UE4_SPRINGJAM_2019_API uint32 Get_Z_Construct_UScriptStruct_FItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItem, Z_Construct_UPackage__Script_UE4_SpringJam_2019(), TEXT("Item"), sizeof(FItem), Get_Z_Construct_UScriptStruct_FItem_Hash());
	}
	return Singleton;
}
template<> UE4_SPRINGJAM_2019_API UScriptStruct* StaticStruct<FItem>()
{
	return FItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItem(FItem::StaticStruct, TEXT("/Script/UE4_SpringJam_2019"), TEXT("Item"), false, nullptr, nullptr);
static struct FScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFItem
{
	FScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Item")),new UScriptStruct::TCppStructOps<FItem>);
	}
} ScriptStruct_UE4_SpringJam_2019_StaticRegisterNativesFItem;
	struct Z_Construct_UScriptStruct_FItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartingCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InventoryDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Element;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Stock.h" },
		{ "ToolTip", "For the tables!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_StartingCount_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_StartingCount = { "StartingCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItem, StartingCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_StartingCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_StartingCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItem, MaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_MaxValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_MinValue_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItem, MinValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_MinValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_MinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_InventoryDescription_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_InventoryDescription = { "InventoryDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItem, InventoryDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_InventoryDescription_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_InventoryDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Stock.h" },
		{ "ToolTip", ", Category = \"\")" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItem, ItemType), Z_Construct_UEnum_UE4_SpringJam_2019_eItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItem_Statics::NewProp_Element_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Stock.h" },
		{ "ToolTip", ", Category = \"\")" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItem_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItem, Element), Z_Construct_UEnum_UE4_SpringJam_2019_eElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Element_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::NewProp_Element_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_StartingCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_InventoryDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItem_Statics::NewProp_Element,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_SpringJam_2019,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Item",
		sizeof(FItem),
		alignof(FItem),
		Z_Construct_UScriptStruct_FItem_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UE4_SpringJam_2019();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Item"), sizeof(FItem), Get_Z_Construct_UScriptStruct_FItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItem_Hash() { return 3089420652U; }
	void UStock::StaticRegisterNativesUStock()
	{
	}
	UClass* Z_Construct_UClass_UStock_NoRegister()
	{
		return UStock::StaticClass();
	}
	struct Z_Construct_UClass_UStock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Element;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MeshName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_SpringJam_2019,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStock_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Stock.h" },
		{ "ModuleRelativePath", "Stock.h" },
		{ "ToolTip", "Got class now" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStock_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Stock" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStock_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStock, Type), Z_Construct_UEnum_UE4_SpringJam_2019_eItemType, METADATA_PARAMS(Z_Construct_UClass_UStock_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStock_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStock_Statics::NewProp_Element_MetaData[] = {
		{ "Category", "Stock" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStock_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStock, Element), Z_Construct_UEnum_UE4_SpringJam_2019_eElement, METADATA_PARAMS(Z_Construct_UClass_UStock_Statics::NewProp_Element_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStock_Statics::NewProp_Element_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStock_Statics::NewProp_MeshName_MetaData[] = {
		{ "Category", "Stock" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStock_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStock, MeshName), METADATA_PARAMS(Z_Construct_UClass_UStock_Statics::NewProp_MeshName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStock_Statics::NewProp_MeshName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStock_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Stock" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStock_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStock, Value), METADATA_PARAMS(Z_Construct_UClass_UStock_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStock_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStock_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Stock" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStock_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStock, Count), METADATA_PARAMS(Z_Construct_UClass_UStock_Statics::NewProp_Count_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStock_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStock_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Stock" },
		{ "ModuleRelativePath", "Stock.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStock_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStock, Item), Z_Construct_UScriptStruct_FItem, METADATA_PARAMS(Z_Construct_UClass_UStock_Statics::NewProp_Item_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStock_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStock_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStock_Statics::NewProp_Element,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStock_Statics::NewProp_MeshName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStock_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStock_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStock_Statics::NewProp_Item,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStock_Statics::ClassParams = {
		&UStock::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStock_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UStock_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStock_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStock, 1167503191);
	template<> UE4_SPRINGJAM_2019_API UClass* StaticClass<UStock>()
	{
		return UStock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStock(Z_Construct_UClass_UStock, &UStock::StaticClass, TEXT("/Script/UE4_SpringJam_2019"), TEXT("UStock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

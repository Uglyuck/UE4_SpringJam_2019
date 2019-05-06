// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItem;
#ifdef UE4_SPRINGJAM_2019_GameLoop_generated_h
#error "GameLoop.generated.h already included, missing '#pragma once' in GameLoop.h"
#endif
#define UE4_SPRINGJAM_2019_GameLoop_generated_h

#define UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomer_Statics; \
	UE4_SPRINGJAM_2019_API static class UScriptStruct* StaticStruct();


template<> UE4_SPRINGJAM_2019_API UScriptStruct* StaticStruct<struct FCustomer>();

#define UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCraftItem) \
	{ \
		P_GET_STRUCT(FItem,Z_Param_CraftedItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CraftItem(Z_Param_CraftedItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStealItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Customer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FItem*)Z_Param__Result=P_THIS->StealItem(Z_Param_Customer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSellItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Customer); \
		P_GET_STRUCT(FItem,Z_Param_i); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SellItem(Z_Param_Customer,Z_Param_i); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRansom) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Customer); \
		P_GET_UBOOL(Z_Param_Decision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Ransom(Z_Param_Customer,Z_Param_Decision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReceiveItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Customer); \
		P_GET_STRUCT(FItem,Z_Param_i); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReceiveItem(Z_Param_Customer,Z_Param_i); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetDialog) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Customer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->getDialog(Z_Param_Customer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextDay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextDay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetDaysCustomers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->getDaysCustomers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NewGame(); \
		P_NATIVE_END; \
	}


#define UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCraftItem) \
	{ \
		P_GET_STRUCT(FItem,Z_Param_CraftedItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CraftItem(Z_Param_CraftedItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStealItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Customer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FItem*)Z_Param__Result=P_THIS->StealItem(Z_Param_Customer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSellItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Customer); \
		P_GET_STRUCT(FItem,Z_Param_i); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SellItem(Z_Param_Customer,Z_Param_i); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRansom) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Customer); \
		P_GET_UBOOL(Z_Param_Decision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Ransom(Z_Param_Customer,Z_Param_Decision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReceiveItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Customer); \
		P_GET_STRUCT(FItem,Z_Param_i); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReceiveItem(Z_Param_Customer,Z_Param_i); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetDialog) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Customer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->getDialog(Z_Param_Customer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextDay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextDay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetDaysCustomers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->getDaysCustomers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NewGame(); \
		P_NATIVE_END; \
	}


#define UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameLoop(); \
	friend struct Z_Construct_UClass_AGameLoop_Statics; \
public: \
	DECLARE_CLASS(AGameLoop, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE4_SpringJam_2019"), NO_API) \
	DECLARE_SERIALIZER(AGameLoop)


#define UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_52_INCLASS \
private: \
	static void StaticRegisterNativesAGameLoop(); \
	friend struct Z_Construct_UClass_AGameLoop_Statics; \
public: \
	DECLARE_CLASS(AGameLoop, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE4_SpringJam_2019"), NO_API) \
	DECLARE_SERIALIZER(AGameLoop)


#define UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameLoop(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameLoop) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameLoop); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameLoop); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameLoop(AGameLoop&&); \
	NO_API AGameLoop(const AGameLoop&); \
public:


#define UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameLoop(AGameLoop&&); \
	NO_API AGameLoop(const AGameLoop&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameLoop); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameLoop); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameLoop)


#define UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_52_PRIVATE_PROPERTY_OFFSET
#define UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_49_PROLOG
#define UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_52_PRIVATE_PROPERTY_OFFSET \
	UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_52_RPC_WRAPPERS \
	UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_52_INCLASS \
	UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_52_PRIVATE_PROPERTY_OFFSET \
	UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_52_INCLASS_NO_PURE_DECLS \
	UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4_SPRINGJAM_2019_API UClass* StaticClass<class AGameLoop>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4_SpringJam_2019_Source_UE4_SpringJam_2019_GameLoop_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

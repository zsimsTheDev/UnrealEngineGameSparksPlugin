// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGSRTData;
struct FVector;
class UGSRTVector;
class UObject;
#ifdef GAMESPARKS_UGSRTData_generated_h
#error "UGSRTData.generated.h already included, missing '#pragma once' in UGSRTData.h"
#endif
#define GAMESPARKS_UGSRTData_generated_h

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ToString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetData) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_OBJECT(UGSRTData,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTData**)Z_Param__Result=P_THIS->SetData(Z_Param_index,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetString) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTData**)Z_Param__Result=P_THIS->SetString(Z_Param_index,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTData**)Z_Param__Result=P_THIS->SetFloat(Z_Param_index,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFVector) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTData**)Z_Param__Result=P_THIS->SetFVector(Z_Param_index,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVector) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_OBJECT(UGSRTVector,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTData**)Z_Param__Result=P_THIS->SetVector(Z_Param_index,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTData**)Z_Param__Result=P_THIS->SetInt(Z_Param_index,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetData) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTData**)Z_Param__Result=P_THIS->GetData(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetString) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetString(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFloat(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFVector) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetFVector(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVector) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->GetVector(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetInt(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasData) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasData(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasString) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasString(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFloat(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasVector) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasVector(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasInt(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateRTData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTData**)Z_Param__Result=UGSRTData::CreateRTData(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ToString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetData) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_OBJECT(UGSRTData,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTData**)Z_Param__Result=P_THIS->SetData(Z_Param_index,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetString) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTData**)Z_Param__Result=P_THIS->SetString(Z_Param_index,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTData**)Z_Param__Result=P_THIS->SetFloat(Z_Param_index,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFVector) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTData**)Z_Param__Result=P_THIS->SetFVector(Z_Param_index,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVector) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_OBJECT(UGSRTVector,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTData**)Z_Param__Result=P_THIS->SetVector(Z_Param_index,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTData**)Z_Param__Result=P_THIS->SetInt(Z_Param_index,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetData) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTData**)Z_Param__Result=P_THIS->GetData(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetString) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetString(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFloat(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFVector) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetFVector(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVector) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->GetVector(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetInt(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasData) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasData(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasString) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasString(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFloat) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFloat(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasVector) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasVector(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasInt(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateRTData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTData**)Z_Param__Result=UGSRTData::CreateRTData(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSRTData(); \
	friend struct Z_Construct_UClass_UGSRTData_Statics; \
public: \
	DECLARE_CLASS(UGSRTData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSRTData)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGSRTData(); \
	friend struct Z_Construct_UClass_UGSRTData_Statics; \
public: \
	DECLARE_CLASS(UGSRTData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSRTData)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSRTData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSRTData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSRTData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSRTData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSRTData(UGSRTData&&); \
	NO_API UGSRTData(const UGSRTData&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSRTData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSRTData(UGSRTData&&); \
	NO_API UGSRTData(const UGSRTData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSRTData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSRTData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSRTData)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_17_PRIVATE_PROPERTY_OFFSET
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_14_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_17_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_17_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_17_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_17_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_17_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GSRTData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSRTData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameSparksScriptData;
struct FDateTime;
class UObject;
#ifdef GAMESPARKS_GameSparksScriptData_generated_h
#error "GameSparksScriptData.generated.h already included, missing '#pragma once' in GameSparksScriptData.h"
#endif
#define GAMESPARKS_GameSparksScriptData_generated_h

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetKeys) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetKeys(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_int_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetIntArray(Z_Param_name,Z_Param_Out_int_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetIntArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasIntArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDateTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetDateTime(Z_Param_name,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDateTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=P_THIS->GetDateTime(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasDateTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasDateTime(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGSDataArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY(UGameSparksScriptData*,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetGSDataArray(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGSDataArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UGameSparksScriptData*>*)Z_Param__Result=P_THIS->GetGSDataArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasGSDataArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasGSDataArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGSData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetGSData(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGSData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->GetGSData(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasGSData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasGSData(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolean) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetBoolean(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolean) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBoolean(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasBoolean) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasBoolean(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumberArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY(int32,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetNumberArray(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetNumberArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasNumberArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasNumberArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetNumber(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumber(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasNumber(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY(float,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetFloatArray(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=P_THIS->GetFloatArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFloatArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetFloat(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFloat(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFloat(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY(FString,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetStringArray(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetStringArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasStringArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetString(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetString(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasString(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ToString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJSONString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->JSONString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGameSparksScriptData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=UGameSparksScriptData::CreateGameSparksScriptData(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetKeys) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetKeys(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_int_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetIntArray(Z_Param_name,Z_Param_Out_int_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetIntArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasIntArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasIntArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDateTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetDateTime(Z_Param_name,Z_Param_Out_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDateTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=P_THIS->GetDateTime(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasDateTime) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasDateTime(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGSDataArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY(UGameSparksScriptData*,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetGSDataArray(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGSDataArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UGameSparksScriptData*>*)Z_Param__Result=P_THIS->GetGSDataArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasGSDataArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasGSDataArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGSData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetGSData(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGSData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->GetGSData(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasGSData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasGSData(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolean) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_UBOOL(Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetBoolean(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolean) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBoolean(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasBoolean) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasBoolean(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumberArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY(int32,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetNumberArray(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetNumberArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasNumberArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasNumberArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetNumber(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumber(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasNumber) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasNumber(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY(float,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetFloatArray(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=P_THIS->GetFloatArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFloatArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFloatArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetFloat(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFloat(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFloat(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_TARRAY(FString,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetStringArray(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetStringArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasStringArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasStringArray(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=P_THIS->SetString(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetString(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasString(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ToString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJSONString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->JSONString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGameSparksScriptData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSparksScriptData**)Z_Param__Result=UGameSparksScriptData::CreateGameSparksScriptData(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSparksScriptData(); \
	friend struct Z_Construct_UClass_UGameSparksScriptData_Statics; \
public: \
	DECLARE_CLASS(UGameSparksScriptData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGameSparksScriptData)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGameSparksScriptData(); \
	friend struct Z_Construct_UClass_UGameSparksScriptData_Statics; \
public: \
	DECLARE_CLASS(UGameSparksScriptData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGameSparksScriptData)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSparksScriptData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSparksScriptData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSparksScriptData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSparksScriptData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSparksScriptData(UGameSparksScriptData&&); \
	NO_API UGameSparksScriptData(const UGameSparksScriptData&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSparksScriptData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSparksScriptData(UGameSparksScriptData&&); \
	NO_API UGameSparksScriptData(const UGameSparksScriptData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSparksScriptData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSparksScriptData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSparksScriptData)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_PRIVATE_PROPERTY_OFFSET
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_11_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGameSparksScriptData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GameSparksScriptData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

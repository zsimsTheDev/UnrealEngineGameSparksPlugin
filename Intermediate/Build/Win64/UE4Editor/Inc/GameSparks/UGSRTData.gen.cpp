// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSparks/Private/RT/UGSRTData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGSRTData() {}
// Cross Module References
	GAMESPARKS_API UClass* Z_Construct_UClass_UGSRTData_NoRegister();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGSRTData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameSparks();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_CreateRTData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_GetData();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_GetFloat();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_GetFVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_GetInt();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_GetString();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_GetVector();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGSRTVector_NoRegister();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_HasData();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_HasFloat();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_HasInt();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_HasString();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_HasVector();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_SetData();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_SetFloat();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_SetFVector();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_SetInt();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_SetString();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_SetVector();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGSRTData_ToString();
// End Cross Module References
	void UGSRTData::StaticRegisterNativesUGSRTData()
	{
		UClass* Class = UGSRTData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateRTData", &UGSRTData::execCreateRTData },
			{ "GetData", &UGSRTData::execGetData },
			{ "GetFloat", &UGSRTData::execGetFloat },
			{ "GetFVector", &UGSRTData::execGetFVector },
			{ "GetInt", &UGSRTData::execGetInt },
			{ "GetString", &UGSRTData::execGetString },
			{ "GetVector", &UGSRTData::execGetVector },
			{ "HasData", &UGSRTData::execHasData },
			{ "HasFloat", &UGSRTData::execHasFloat },
			{ "HasInt", &UGSRTData::execHasInt },
			{ "HasString", &UGSRTData::execHasString },
			{ "HasVector", &UGSRTData::execHasVector },
			{ "SetData", &UGSRTData::execSetData },
			{ "SetFloat", &UGSRTData::execSetFloat },
			{ "SetFVector", &UGSRTData::execSetFVector },
			{ "SetInt", &UGSRTData::execSetInt },
			{ "SetString", &UGSRTData::execSetString },
			{ "SetVector", &UGSRTData::execSetVector },
			{ "ToString", &UGSRTData::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSRTData_CreateRTData_Statics
	{
		struct GSRTData_eventCreateRTData_Parms
		{
			UObject* WorldContextObject;
			UGSRTData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventCreateRTData_Parms, ReturnValue), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventCreateRTData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Create GS RT Data" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
		{ "ToolTip", "Create a new GS Data object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "CreateRTData", sizeof(GSRTData_eventCreateRTData_Parms), Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_CreateRTData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_CreateRTData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_GetData_Statics
	{
		struct GSRTData_eventGetData_Parms
		{
			int32 index;
			UGSRTData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventGetData_Parms, ReturnValue), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_GetData_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventGetData_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_GetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetData_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_GetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "GetData", sizeof(GSRTData_eventGetData_Parms), Z_Construct_UFunction_UGSRTData_GetData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_GetData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_GetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_GetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_GetFloat_Statics
	{
		struct GSRTData_eventGetFloat_Parms
		{
			int32 index;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTData_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_GetFloat_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventGetFloat_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_GetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetFloat_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_GetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "GetFloat", sizeof(GSRTData_eventGetFloat_Parms), Z_Construct_UFunction_UGSRTData_GetFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_GetFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_GetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_GetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_GetFVector_Statics
	{
		struct GSRTData_eventGetFVector_Parms
		{
			int32 index;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSRTData_GetFVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventGetFVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_GetFVector_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventGetFVector_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_GetFVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetFVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetFVector_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_GetFVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_GetFVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "GetFVector", sizeof(GSRTData_eventGetFVector_Parms), Z_Construct_UFunction_UGSRTData_GetFVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetFVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_GetFVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetFVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_GetFVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_GetFVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_GetInt_Statics
	{
		struct GSRTData_eventGetInt_Parms
		{
			int32 index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_GetInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventGetInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_GetInt_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventGetInt_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_GetInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetInt_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_GetInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_GetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "GetInt", sizeof(GSRTData_eventGetInt_Parms), Z_Construct_UFunction_UGSRTData_GetInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_GetInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_GetInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_GetInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_GetString_Statics
	{
		struct GSRTData_eventGetString_Parms
		{
			int32 index;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSRTData_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventGetString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_GetString_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventGetString_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_GetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetString_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_GetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "GetString", sizeof(GSRTData_eventGetString_Parms), Z_Construct_UFunction_UGSRTData_GetString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_GetString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_GetVector_Statics
	{
		struct GSRTData_eventGetVector_Parms
		{
			int32 index;
			UGSRTVector* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_GetVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventGetVector_Parms, ReturnValue), Z_Construct_UClass_UGSRTVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_GetVector_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventGetVector_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_GetVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_GetVector_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_GetVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_GetVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "GetVector", sizeof(GSRTData_eventGetVector_Parms), Z_Construct_UFunction_UGSRTData_GetVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_GetVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_GetVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_GetVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_GetVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_HasData_Statics
	{
		struct GSRTData_eventHasData_Parms
		{
			int32 index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGSRTData_HasData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSRTData_eventHasData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSRTData_HasData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GSRTData_eventHasData_Parms), &Z_Construct_UFunction_UGSRTData_HasData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_HasData_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventHasData_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_HasData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasData_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_HasData_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_HasData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "HasData", sizeof(GSRTData_eventHasData_Parms), Z_Construct_UFunction_UGSRTData_HasData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_HasData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_HasData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_HasData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_HasFloat_Statics
	{
		struct GSRTData_eventHasFloat_Parms
		{
			int32 index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGSRTData_HasFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSRTData_eventHasFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSRTData_HasFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GSRTData_eventHasFloat_Parms), &Z_Construct_UFunction_UGSRTData_HasFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_HasFloat_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventHasFloat_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_HasFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasFloat_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_HasFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_HasFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "HasFloat", sizeof(GSRTData_eventHasFloat_Parms), Z_Construct_UFunction_UGSRTData_HasFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_HasFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_HasFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_HasFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_HasInt_Statics
	{
		struct GSRTData_eventHasInt_Parms
		{
			int32 index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGSRTData_HasInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSRTData_eventHasInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSRTData_HasInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GSRTData_eventHasInt_Parms), &Z_Construct_UFunction_UGSRTData_HasInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_HasInt_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventHasInt_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_HasInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasInt_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_HasInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_HasInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "HasInt", sizeof(GSRTData_eventHasInt_Parms), Z_Construct_UFunction_UGSRTData_HasInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_HasInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_HasInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_HasInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_HasString_Statics
	{
		struct GSRTData_eventHasString_Parms
		{
			int32 index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGSRTData_HasString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSRTData_eventHasString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSRTData_HasString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GSRTData_eventHasString_Parms), &Z_Construct_UFunction_UGSRTData_HasString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_HasString_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventHasString_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_HasString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasString_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_HasString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_HasString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "HasString", sizeof(GSRTData_eventHasString_Parms), Z_Construct_UFunction_UGSRTData_HasString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_HasString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_HasString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_HasString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_HasVector_Statics
	{
		struct GSRTData_eventHasVector_Parms
		{
			int32 index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGSRTData_HasVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GSRTData_eventHasVector_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGSRTData_HasVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GSRTData_eventHasVector_Parms), &Z_Construct_UFunction_UGSRTData_HasVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_HasVector_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventHasVector_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_HasVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_HasVector_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_HasVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_HasVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "HasVector", sizeof(GSRTData_eventHasVector_Parms), Z_Construct_UFunction_UGSRTData_HasVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_HasVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_HasVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_HasVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_HasVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_SetData_Statics
	{
		struct GSRTData_eventSetData_Parms
		{
			int32 index;
			UGSRTData* value;
			UGSRTData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_SetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetData_Parms, ReturnValue), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_SetData_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetData_Parms, value), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_SetData_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetData_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetData_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetData_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_SetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "SetData", sizeof(GSRTData_eventSetData_Parms), Z_Construct_UFunction_UGSRTData_SetData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_SetData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_SetFloat_Statics
	{
		struct GSRTData_eventSetFloat_Parms
		{
			int32 index;
			float value;
			UGSRTData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_SetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetFloat_Parms, ReturnValue), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSRTData_SetFloat_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetFloat_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_SetFloat_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetFloat_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_SetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetFloat_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetFloat_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_SetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_SetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "SetFloat", sizeof(GSRTData_eventSetFloat_Parms), Z_Construct_UFunction_UGSRTData_SetFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_SetFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_SetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_SetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_SetFVector_Statics
	{
		struct GSRTData_eventSetFVector_Parms
		{
			int32 index;
			FVector value;
			UGSRTData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetFVector_Parms, ReturnValue), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetFVector_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetFVector_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_SetFVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetFVector_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_SetFVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_SetFVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "SetFVector", sizeof(GSRTData_eventSetFVector_Parms), Z_Construct_UFunction_UGSRTData_SetFVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetFVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_SetFVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetFVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_SetFVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_SetFVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_SetInt_Statics
	{
		struct GSRTData_eventSetInt_Parms
		{
			int32 index;
			int32 value;
			UGSRTData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_SetInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetInt_Parms, ReturnValue), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_SetInt_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetInt_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_SetInt_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetInt_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_SetInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetInt_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetInt_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_SetInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_SetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "SetInt", sizeof(GSRTData_eventSetInt_Parms), Z_Construct_UFunction_UGSRTData_SetInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_SetInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_SetInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_SetInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_SetString_Statics
	{
		struct GSRTData_eventSetString_Parms
		{
			int32 index;
			FString value;
			UGSRTData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetString_Parms, ReturnValue), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetString_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetString_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_SetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetString_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_SetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "SetString", sizeof(GSRTData_eventSetString_Parms), Z_Construct_UFunction_UGSRTData_SetString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_SetString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_SetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_SetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_SetVector_Statics
	{
		struct GSRTData_eventSetVector_Parms
		{
			int32 index;
			UGSRTVector* value;
			UGSRTData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_SetVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetVector_Parms, ReturnValue), Z_Construct_UClass_UGSRTData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGSRTData_SetVector_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetVector_Parms, value), Z_Construct_UClass_UGSRTVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSRTData_SetVector_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventSetVector_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_SetVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetVector_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_SetVector_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_SetVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_SetVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "SetVector", sizeof(GSRTData_eventSetVector_Parms), Z_Construct_UFunction_UGSRTData_SetVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_SetVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_SetVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_SetVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_SetVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSRTData_ToString_Statics
	{
		struct GSRTData_eventToString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGSRTData_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GSRTData_eventToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSRTData_ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSRTData_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSRTData_ToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparksRT|Data" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSRTData_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSRTData, nullptr, "ToString", sizeof(GSRTData_eventToString_Parms), Z_Construct_UFunction_UGSRTData_ToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGSRTData_ToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGSRTData_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGSRTData_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGSRTData_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGSRTData_NoRegister()
	{
		return UGSRTData::StaticClass();
	}
	struct Z_Construct_UClass_UGSRTData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSRTData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSparks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSRTData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSRTData_CreateRTData, "CreateRTData" }, // 599902970
		{ &Z_Construct_UFunction_UGSRTData_GetData, "GetData" }, // 1827030412
		{ &Z_Construct_UFunction_UGSRTData_GetFloat, "GetFloat" }, // 1208162622
		{ &Z_Construct_UFunction_UGSRTData_GetFVector, "GetFVector" }, // 2268688698
		{ &Z_Construct_UFunction_UGSRTData_GetInt, "GetInt" }, // 3022560241
		{ &Z_Construct_UFunction_UGSRTData_GetString, "GetString" }, // 944177578
		{ &Z_Construct_UFunction_UGSRTData_GetVector, "GetVector" }, // 715136974
		{ &Z_Construct_UFunction_UGSRTData_HasData, "HasData" }, // 1421765616
		{ &Z_Construct_UFunction_UGSRTData_HasFloat, "HasFloat" }, // 1155211686
		{ &Z_Construct_UFunction_UGSRTData_HasInt, "HasInt" }, // 3714269590
		{ &Z_Construct_UFunction_UGSRTData_HasString, "HasString" }, // 2467224999
		{ &Z_Construct_UFunction_UGSRTData_HasVector, "HasVector" }, // 942917027
		{ &Z_Construct_UFunction_UGSRTData_SetData, "SetData" }, // 3927631021
		{ &Z_Construct_UFunction_UGSRTData_SetFloat, "SetFloat" }, // 821231449
		{ &Z_Construct_UFunction_UGSRTData_SetFVector, "SetFVector" }, // 680584780
		{ &Z_Construct_UFunction_UGSRTData_SetInt, "SetInt" }, // 2901924126
		{ &Z_Construct_UFunction_UGSRTData_SetString, "SetString" }, // 3444940020
		{ &Z_Construct_UFunction_UGSRTData_SetVector, "SetVector" }, // 487103869
		{ &Z_Construct_UFunction_UGSRTData_ToString, "ToString" }, // 3662309353
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSRTData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RT/UGSRTData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/RT/UGSRTData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSRTData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSRTData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGSRTData_Statics::ClassParams = {
		&UGSRTData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGSRTData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGSRTData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGSRTData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGSRTData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGSRTData, 4007833284);
	template<> GAMESPARKS_API UClass* StaticClass<UGSRTData>()
	{
		return UGSRTData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGSRTData(Z_Construct_UClass_UGSRTData, &UGSRTData::StaticClass, TEXT("/Script/GameSparks"), TEXT("UGSRTData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSRTData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

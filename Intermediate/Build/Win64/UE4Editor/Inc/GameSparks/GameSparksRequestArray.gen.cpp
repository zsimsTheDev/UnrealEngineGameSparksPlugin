// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSparks/Private/GameSparksRequestArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSparksRequestArray() {}
// Cross Module References
	GAMESPARKS_API UClass* Z_Construct_UClass_UGameSparksRequestArray_NoRegister();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGameSparksRequestArray();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameSparks();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UGameSparksRequestArray::StaticRegisterNativesUGameSparksRequestArray()
	{
		UClass* Class = UGameSparksRequestArray::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGameSparksRequestArray", &UGameSparksRequestArray::execCreateGameSparksRequestArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray_Statics
	{
		struct GameSparksRequestArray_eventCreateGameSparksRequestArray_Parms
		{
			UObject* WorldContextObject;
			UGameSparksRequestArray* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSparksRequestArray_eventCreateGameSparksRequestArray_Parms, ReturnValue), Z_Construct_UClass_UGameSparksRequestArray_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSparksRequestArray_eventCreateGameSparksRequestArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparks|Data" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DisplayName", "Create GameSparksRequestArray" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Private/GameSparksRequestArray.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksRequestArray, nullptr, "CreateGameSparksRequestArray", sizeof(GameSparksRequestArray_eventCreateGameSparksRequestArray_Parms), Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameSparksRequestArray_NoRegister()
	{
		return UGameSparksRequestArray::StaticClass();
	}
	struct Z_Construct_UClass_UGameSparksRequestArray_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StringArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSparksRequestArray_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSparks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSparksRequestArray_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSparksRequestArray_CreateGameSparksRequestArray, "CreateGameSparksRequestArray" }, // 2925444566
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSparksRequestArray_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameSparksRequestArray.h" },
		{ "ModuleRelativePath", "Private/GameSparksRequestArray.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSparksRequestArray_Statics::NewProp_StringArray_MetaData[] = {
		{ "Category", "GameSparks|Request Params" },
		{ "ModuleRelativePath", "Private/GameSparksRequestArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameSparksRequestArray_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSparksRequestArray, StringArray), METADATA_PARAMS(Z_Construct_UClass_UGameSparksRequestArray_Statics::NewProp_StringArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameSparksRequestArray_Statics::NewProp_StringArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameSparksRequestArray_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSparksRequestArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSparksRequestArray_Statics::NewProp_StringArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSparksRequestArray_Statics::NewProp_StringArray_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSparksRequestArray_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSparksRequestArray>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameSparksRequestArray_Statics::ClassParams = {
		&UGameSparksRequestArray::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameSparksRequestArray_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGameSparksRequestArray_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSparksRequestArray_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameSparksRequestArray_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSparksRequestArray()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameSparksRequestArray_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameSparksRequestArray, 342271080);
	template<> GAMESPARKS_API UClass* StaticClass<UGameSparksRequestArray>()
	{
		return UGameSparksRequestArray::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSparksRequestArray(Z_Construct_UClass_UGameSparksRequestArray, &UGameSparksRequestArray::StaticClass, TEXT("/Script/GameSparks"), TEXT("UGameSparksRequestArray"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSparksRequestArray);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

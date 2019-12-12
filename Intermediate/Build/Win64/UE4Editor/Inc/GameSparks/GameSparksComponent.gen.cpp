// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSparks/Private/GameSparksComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSparksComponent() {}
// Cross Module References
	GAMESPARKS_API UFunction* Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksLogEvent__DelegateSignature();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGameSparksComponent();
	GAMESPARKS_API UFunction* Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksAvailable__DelegateSignature();
	GAMESPARKS_API UClass* Z_Construct_UClass_UGameSparksComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_GameSparks();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksComponent_Connect();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksComponent_Disconnect();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksComponent_IsAuthenticated();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksComponent_IsAvailable();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksComponent_Logout();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksComponent_SetApiCredential();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksComponent_SetApiDomain();
	GAMESPARKS_API UFunction* Z_Construct_UFunction_UGameSparksComponent_SetApiStage();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksLogEvent__DelegateSignature_Statics
	{
		struct GameSparksComponent_eventOnGameSparksLogEvent_Parms
		{
			FString logMessage;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_logMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksLogEvent__DelegateSignature_Statics::NewProp_logMessage = { "logMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSparksComponent_eventOnGameSparksLogEvent_Parms, logMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksLogEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksLogEvent__DelegateSignature_Statics::NewProp_logMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksLogEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameSparksComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksLogEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksComponent, nullptr, "OnGameSparksLogEvent__DelegateSignature", sizeof(GameSparksComponent_eventOnGameSparksLogEvent_Parms), Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksLogEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksLogEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksLogEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksLogEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksLogEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksLogEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksAvailable__DelegateSignature_Statics
	{
		struct GameSparksComponent_eventOnGameSparksAvailable_Parms
		{
			bool available;
		};
		static void NewProp_available_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_available;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksAvailable__DelegateSignature_Statics::NewProp_available_SetBit(void* Obj)
	{
		((GameSparksComponent_eventOnGameSparksAvailable_Parms*)Obj)->available = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksAvailable__DelegateSignature_Statics::NewProp_available = { "available", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameSparksComponent_eventOnGameSparksAvailable_Parms), &Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksAvailable__DelegateSignature_Statics::NewProp_available_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksAvailable__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksAvailable__DelegateSignature_Statics::NewProp_available,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksAvailable__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GameSparksComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksAvailable__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksComponent, nullptr, "OnGameSparksAvailable__DelegateSignature", sizeof(GameSparksComponent_eventOnGameSparksAvailable_Parms), Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksAvailable__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksAvailable__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksAvailable__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksAvailable__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksAvailable__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksAvailable__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UGameSparksComponent::StaticRegisterNativesUGameSparksComponent()
	{
		UClass* Class = UGameSparksComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UGameSparksComponent::execConnect },
			{ "ConnectWithCredential", &UGameSparksComponent::execConnectWithCredential },
			{ "Disconnect", &UGameSparksComponent::execDisconnect },
			{ "IsAuthenticated", &UGameSparksComponent::execIsAuthenticated },
			{ "IsAvailable", &UGameSparksComponent::execIsAvailable },
			{ "Logout", &UGameSparksComponent::execLogout },
			{ "SetApiCredential", &UGameSparksComponent::execSetApiCredential },
			{ "SetApiDomain", &UGameSparksComponent::execSetApiDomain },
			{ "SetApiStage", &UGameSparksComponent::execSetApiStage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameSparksComponent_Connect_Statics
	{
		struct GameSparksComponent_eventConnect_Parms
		{
			FString apikey;
			FString secret;
			bool previewServer;
			bool clearCachedAuthentication;
		};
		static void NewProp_clearCachedAuthentication_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_clearCachedAuthentication;
		static void NewProp_previewServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_previewServer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_secret;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_apikey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::NewProp_clearCachedAuthentication_SetBit(void* Obj)
	{
		((GameSparksComponent_eventConnect_Parms*)Obj)->clearCachedAuthentication = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::NewProp_clearCachedAuthentication = { "clearCachedAuthentication", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameSparksComponent_eventConnect_Parms), &Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::NewProp_clearCachedAuthentication_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::NewProp_previewServer_SetBit(void* Obj)
	{
		((GameSparksComponent_eventConnect_Parms*)Obj)->previewServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::NewProp_previewServer = { "previewServer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameSparksComponent_eventConnect_Parms), &Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::NewProp_previewServer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::NewProp_secret = { "secret", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSparksComponent_eventConnect_Parms, secret), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::NewProp_apikey = { "apikey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSparksComponent_eventConnect_Parms, apikey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::NewProp_clearCachedAuthentication,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::NewProp_previewServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::NewProp_secret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::NewProp_apikey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparks" },
		{ "CPP_Default_clearCachedAuthentication", "false" },
		{ "CPP_Default_previewServer", "true" },
		{ "ModuleRelativePath", "Private/GameSparksComponent.h" },
		{ "ToolTip", "Connects to the GameSparks service with the supplied details\n* apiKey - The API Key of the game to connect to\n* secret - The API Secret of the game to connect to\n* Preview Server - Whether to connect to the live, or preview servers\n* clearCachedAuthentication - Forgets any cached authentication details before connecting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksComponent, nullptr, "Connect", sizeof(GameSparksComponent_eventConnect_Parms), Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSparksComponent_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSparksComponent_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics
	{
		struct GameSparksComponent_eventConnectWithCredential_Parms
		{
			FString apikey;
			FString secret;
			FString credential;
			bool previewServer;
			bool clearCachedAuthentication;
		};
		static void NewProp_clearCachedAuthentication_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_clearCachedAuthentication;
		static void NewProp_previewServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_previewServer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_credential;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_secret;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_apikey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::NewProp_clearCachedAuthentication_SetBit(void* Obj)
	{
		((GameSparksComponent_eventConnectWithCredential_Parms*)Obj)->clearCachedAuthentication = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::NewProp_clearCachedAuthentication = { "clearCachedAuthentication", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameSparksComponent_eventConnectWithCredential_Parms), &Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::NewProp_clearCachedAuthentication_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::NewProp_previewServer_SetBit(void* Obj)
	{
		((GameSparksComponent_eventConnectWithCredential_Parms*)Obj)->previewServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::NewProp_previewServer = { "previewServer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameSparksComponent_eventConnectWithCredential_Parms), &Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::NewProp_previewServer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::NewProp_credential = { "credential", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSparksComponent_eventConnectWithCredential_Parms, credential), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::NewProp_secret = { "secret", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSparksComponent_eventConnectWithCredential_Parms, secret), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::NewProp_apikey = { "apikey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSparksComponent_eventConnectWithCredential_Parms, apikey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::NewProp_clearCachedAuthentication,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::NewProp_previewServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::NewProp_credential,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::NewProp_secret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::NewProp_apikey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparks" },
		{ "CPP_Default_clearCachedAuthentication", "false" },
		{ "CPP_Default_credential", "device" },
		{ "CPP_Default_previewServer", "true" },
		{ "ModuleRelativePath", "Private/GameSparksComponent.h" },
		{ "ToolTip", "Connects to the GameSparks service with the supplied details and credential\n* apiKey - The API Key of the game to connect to\n* secret - The API Secret of the game to connect to\n* credential - The API credential to use, see https:docs.gamesparks.com/documentation/configurator/credentials.html\n* Preview Server - Whether to connect to the live, or preview servers\n* clearCachedAuthentication - Forgets any cached authentication details before connecting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksComponent, nullptr, "ConnectWithCredential", sizeof(GameSparksComponent_eventConnectWithCredential_Parms), Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSparksComponent_Disconnect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksComponent_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparks" },
		{ "ModuleRelativePath", "Private/GameSparksComponent.h" },
		{ "ToolTip", "Disconnects the from GameSparks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSparksComponent_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksComponent, nullptr, "Disconnect", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSparksComponent_Disconnect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksComponent_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSparksComponent_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSparksComponent_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSparksComponent_IsAuthenticated_Statics
	{
		struct GameSparksComponent_eventIsAuthenticated_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameSparksComponent_IsAuthenticated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameSparksComponent_eventIsAuthenticated_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSparksComponent_IsAuthenticated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameSparksComponent_eventIsAuthenticated_Parms), &Z_Construct_UFunction_UGameSparksComponent_IsAuthenticated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSparksComponent_IsAuthenticated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksComponent_IsAuthenticated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksComponent_IsAuthenticated_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparks" },
		{ "ModuleRelativePath", "Private/GameSparksComponent.h" },
		{ "ToolTip", "Indicates if the current socket is connected and has an associated player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSparksComponent_IsAuthenticated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksComponent, nullptr, "IsAuthenticated", sizeof(GameSparksComponent_eventIsAuthenticated_Parms), Z_Construct_UFunction_UGameSparksComponent_IsAuthenticated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksComponent_IsAuthenticated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSparksComponent_IsAuthenticated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksComponent_IsAuthenticated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSparksComponent_IsAuthenticated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSparksComponent_IsAuthenticated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSparksComponent_IsAvailable_Statics
	{
		struct GameSparksComponent_eventIsAvailable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameSparksComponent_IsAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameSparksComponent_eventIsAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameSparksComponent_IsAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameSparksComponent_eventIsAvailable_Parms), &Z_Construct_UFunction_UGameSparksComponent_IsAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSparksComponent_IsAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksComponent_IsAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksComponent_IsAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparks" },
		{ "ModuleRelativePath", "Private/GameSparksComponent.h" },
		{ "ToolTip", "Indicates if the current socket is connected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSparksComponent_IsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksComponent, nullptr, "IsAvailable", sizeof(GameSparksComponent_eventIsAvailable_Parms), Z_Construct_UFunction_UGameSparksComponent_IsAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksComponent_IsAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSparksComponent_IsAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksComponent_IsAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSparksComponent_IsAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSparksComponent_IsAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSparksComponent_Logout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksComponent_Logout_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparks" },
		{ "ModuleRelativePath", "Private/GameSparksComponent.h" },
		{ "ToolTip", "Disconnects the socket, clears cached authentication details, and reconnects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSparksComponent_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksComponent, nullptr, "Logout", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSparksComponent_Logout_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksComponent_Logout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSparksComponent_Logout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSparksComponent_Logout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSparksComponent_SetApiCredential_Statics
	{
		struct GameSparksComponent_eventSetApiCredential_Parms
		{
			FString credential;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_credential;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSparksComponent_SetApiCredential_Statics::NewProp_credential = { "credential", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSparksComponent_eventSetApiCredential_Parms, credential), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSparksComponent_SetApiCredential_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksComponent_SetApiCredential_Statics::NewProp_credential,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksComponent_SetApiCredential_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparks" },
		{ "ModuleRelativePath", "Private/GameSparksComponent.h" },
		{ "ToolTip", "! set the API credential type (like device, server, etc.) - use empty string to reset to the default. the default is \"device\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSparksComponent_SetApiCredential_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksComponent, nullptr, "SetApiCredential", sizeof(GameSparksComponent_eventSetApiCredential_Parms), Z_Construct_UFunction_UGameSparksComponent_SetApiCredential_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksComponent_SetApiCredential_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSparksComponent_SetApiCredential_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksComponent_SetApiCredential_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSparksComponent_SetApiCredential()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSparksComponent_SetApiCredential_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSparksComponent_SetApiDomain_Statics
	{
		struct GameSparksComponent_eventSetApiDomain_Parms
		{
			FString domain;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_domain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSparksComponent_SetApiDomain_Statics::NewProp_domain = { "domain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSparksComponent_eventSetApiDomain_Parms, domain), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSparksComponent_SetApiDomain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksComponent_SetApiDomain_Statics::NewProp_domain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksComponent_SetApiDomain_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparks" },
		{ "ModuleRelativePath", "Private/GameSparksComponent.h" },
		{ "ToolTip", "! set api domain to use. pass empty string to reset to the default. The default is \"ws.gamesparks.net\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSparksComponent_SetApiDomain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksComponent, nullptr, "SetApiDomain", sizeof(GameSparksComponent_eventSetApiDomain_Parms), Z_Construct_UFunction_UGameSparksComponent_SetApiDomain_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksComponent_SetApiDomain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSparksComponent_SetApiDomain_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksComponent_SetApiDomain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSparksComponent_SetApiDomain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSparksComponent_SetApiDomain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSparksComponent_SetApiStage_Statics
	{
		struct GameSparksComponent_eventSetApiStage_Parms
		{
			FString stage;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameSparksComponent_SetApiStage_Statics::NewProp_stage = { "stage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSparksComponent_eventSetApiStage_Parms, stage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSparksComponent_SetApiStage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSparksComponent_SetApiStage_Statics::NewProp_stage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSparksComponent_SetApiStage_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSparks" },
		{ "ModuleRelativePath", "Private/GameSparksComponent.h" },
		{ "ToolTip", "! Set the api stage. if you passed usePreviewServer=true into Connect(), this will be \"preview\", \"live\" otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSparksComponent_SetApiStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSparksComponent, nullptr, "SetApiStage", sizeof(GameSparksComponent_eventSetApiStage_Parms), Z_Construct_UFunction_UGameSparksComponent_SetApiStage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksComponent_SetApiStage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSparksComponent_SetApiStage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSparksComponent_SetApiStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSparksComponent_SetApiStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSparksComponent_SetApiStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameSparksComponent_NoRegister()
	{
		return UGameSparksComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGameSparksComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGameSparksDebugLog_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameSparksDebugLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGameSparksAvailableDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameSparksAvailableDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSparksComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSparks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSparksComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSparksComponent_Connect, "Connect" }, // 1131643891
		{ &Z_Construct_UFunction_UGameSparksComponent_ConnectWithCredential, "ConnectWithCredential" }, // 763332460
		{ &Z_Construct_UFunction_UGameSparksComponent_Disconnect, "Disconnect" }, // 1993336955
		{ &Z_Construct_UFunction_UGameSparksComponent_IsAuthenticated, "IsAuthenticated" }, // 449617854
		{ &Z_Construct_UFunction_UGameSparksComponent_IsAvailable, "IsAvailable" }, // 1338742256
		{ &Z_Construct_UFunction_UGameSparksComponent_Logout, "Logout" }, // 249952910
		{ &Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksAvailable__DelegateSignature, "OnGameSparksAvailable__DelegateSignature" }, // 1106147156
		{ &Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksLogEvent__DelegateSignature, "OnGameSparksLogEvent__DelegateSignature" }, // 1775528525
		{ &Z_Construct_UFunction_UGameSparksComponent_SetApiCredential, "SetApiCredential" }, // 1832263018
		{ &Z_Construct_UFunction_UGameSparksComponent_SetApiDomain, "SetApiDomain" }, // 1691950833
		{ &Z_Construct_UFunction_UGameSparksComponent_SetApiStage, "SetApiStage" }, // 2097889850
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSparksComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GameSparks" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GameSparksComponent.h" },
		{ "ModuleRelativePath", "Private/GameSparksComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSparksComponent_Statics::NewProp_OnGameSparksDebugLog_MetaData[] = {
		{ "Category", "GameSparks" },
		{ "ModuleRelativePath", "Private/GameSparksComponent.h" },
		{ "ToolTip", "Called by GameSparks when a new log message was generated, useful for debugging" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSparksComponent_Statics::NewProp_OnGameSparksDebugLog = { "OnGameSparksDebugLog", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSparksComponent, OnGameSparksDebugLog), Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksLogEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameSparksComponent_Statics::NewProp_OnGameSparksDebugLog_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameSparksComponent_Statics::NewProp_OnGameSparksDebugLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSparksComponent_Statics::NewProp_OnGameSparksAvailableDelegate_MetaData[] = {
		{ "Category", "GameSparks" },
		{ "ModuleRelativePath", "Private/GameSparksComponent.h" },
		{ "ToolTip", "Called by GameSparks when the availability changed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameSparksComponent_Statics::NewProp_OnGameSparksAvailableDelegate = { "OnGameSparksAvailableDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSparksComponent, OnGameSparksAvailableDelegate), Z_Construct_UDelegateFunction_UGameSparksComponent_OnGameSparksAvailable__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameSparksComponent_Statics::NewProp_OnGameSparksAvailableDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameSparksComponent_Statics::NewProp_OnGameSparksAvailableDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSparksComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSparksComponent_Statics::NewProp_OnGameSparksDebugLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSparksComponent_Statics::NewProp_OnGameSparksAvailableDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSparksComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSparksComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameSparksComponent_Statics::ClassParams = {
		&UGameSparksComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameSparksComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGameSparksComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSparksComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameSparksComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSparksComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameSparksComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameSparksComponent, 471157465);
	template<> GAMESPARKS_API UClass* StaticClass<UGameSparksComponent>()
	{
		return UGameSparksComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSparksComponent(Z_Construct_UClass_UGameSparksComponent, &UGameSparksComponent::StaticClass, TEXT("/Script/GameSparks"), TEXT("UGameSparksComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSparksComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

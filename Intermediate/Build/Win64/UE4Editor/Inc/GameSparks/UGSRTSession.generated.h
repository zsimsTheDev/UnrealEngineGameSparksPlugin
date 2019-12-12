// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGSRTSession;
class UGSRTData;
enum class DeliveryIntent : uint8;
class UObject;
#ifdef GAMESPARKS_UGSRTSession_generated_h
#error "UGSRTSession.generated.h already included, missing '#pragma once' in UGSRTSession.h"
#endif
#define GAMESPARKS_UGSRTSession_generated_h

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_72_DELEGATE \
struct GSRTSession_eventOnData_Parms \
{ \
	UGSRTSession* session; \
	int32 sender; \
	int32 opCode; \
	UGSRTData* data; \
}; \
static inline void FOnData_DelegateWrapper(const FMulticastScriptDelegate& OnData, UGSRTSession* session, int32 sender, int32 opCode, UGSRTData* data) \
{ \
	GSRTSession_eventOnData_Parms Parms; \
	Parms.session=session; \
	Parms.sender=sender; \
	Parms.opCode=opCode; \
	Parms.data=data; \
	OnData.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_68_DELEGATE \
struct GSRTSession_eventOnPlayerDisconnect_Parms \
{ \
	UGSRTSession* session; \
	int32 peerId; \
}; \
static inline void FOnPlayerDisconnect_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerDisconnect, UGSRTSession* session, int32 peerId) \
{ \
	GSRTSession_eventOnPlayerDisconnect_Parms Parms; \
	Parms.session=session; \
	Parms.peerId=peerId; \
	OnPlayerDisconnect.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_64_DELEGATE \
struct GSRTSession_eventOnPlayerConnect_Parms \
{ \
	UGSRTSession* session; \
	int32 peerId; \
}; \
static inline void FOnPlayerConnect_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerConnect, UGSRTSession* session, int32 peerId) \
{ \
	GSRTSession_eventOnPlayerConnect_Parms Parms; \
	Parms.session=session; \
	Parms.peerId=peerId; \
	OnPlayerConnect.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_60_DELEGATE \
struct GSRTSession_eventOnReady_Parms \
{ \
	UGSRTSession* session; \
	bool ready; \
}; \
static inline void FOnReady_DelegateWrapper(const FMulticastScriptDelegate& OnReady, UGSRTSession* session, bool ready) \
{ \
	GSRTSession_eventOnReady_Parms Parms; \
	Parms.session=session; \
	Parms.ready=ready ? true : false; \
	OnReady.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPeerId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPeerId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActivePeers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetActivePeers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSend) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_opCode); \
		P_GET_ENUM(DeliveryIntent,Z_Param_intent); \
		P_GET_OBJECT(UGSRTData,Z_Param_data); \
		P_GET_TARRAY(int32,Z_Param_peerIds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Send(Z_Param_opCode,DeliveryIntent(Z_Param_intent),Z_Param_data,Z_Param_peerIds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Start(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateRTSession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_host); \
		P_GET_PROPERTY(UStrProperty,Z_Param_port); \
		P_GET_PROPERTY(UStrProperty,Z_Param_token); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTSession**)Z_Param__Result=UGSRTSession::CreateRTSession(Z_Param_WorldContextObject,Z_Param_host,Z_Param_port,Z_Param_token); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPeerId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPeerId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActivePeers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetActivePeers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSend) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_opCode); \
		P_GET_ENUM(DeliveryIntent,Z_Param_intent); \
		P_GET_OBJECT(UGSRTData,Z_Param_data); \
		P_GET_TARRAY(int32,Z_Param_peerIds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Send(Z_Param_opCode,DeliveryIntent(Z_Param_intent),Z_Param_data,Z_Param_peerIds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Start(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateRTSession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_host); \
		P_GET_PROPERTY(UStrProperty,Z_Param_port); \
		P_GET_PROPERTY(UStrProperty,Z_Param_token); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTSession**)Z_Param__Result=UGSRTSession::CreateRTSession(Z_Param_WorldContextObject,Z_Param_host,Z_Param_port,Z_Param_token); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSRTSession(); \
	friend struct Z_Construct_UClass_UGSRTSession_Statics; \
public: \
	DECLARE_CLASS(UGSRTSession, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSRTSession)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUGSRTSession(); \
	friend struct Z_Construct_UClass_UGSRTSession_Statics; \
public: \
	DECLARE_CLASS(UGSRTSession, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSRTSession)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSRTSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSRTSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSRTSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSRTSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSRTSession(UGSRTSession&&); \
	NO_API UGSRTSession(const UGSRTSession&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSRTSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSRTSession(UGSRTSession&&); \
	NO_API UGSRTSession(const UGSRTSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSRTSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSRTSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSRTSession)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_37_PRIVATE_PROPERTY_OFFSET
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_34_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_37_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_37_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_37_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_37_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_37_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GSRTSession."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSRTSession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTSession_h


#define FOREACH_ENUM_DELIVERYINTENT(op) \
	op(DeliveryIntent::RELIABLE) \
	op(DeliveryIntent::UNRELIABLE) \
	op(DeliveryIntent::UNRELIABLE_SEQUENCED) 

enum class DeliveryIntent : uint8;
template<> GAMESPARKS_API UEnum* StaticEnum<DeliveryIntent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

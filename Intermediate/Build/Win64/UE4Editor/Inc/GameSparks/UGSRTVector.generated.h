// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UGSRTVector;
class UObject;
#ifdef GAMESPARKS_UGSRTVector_generated_h
#error "UGSRTVector.generated.h already included, missing '#pragma once' in UGSRTVector.h"
#endif
#define GAMESPARKS_UGSRTVector_generated_h

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFromFVector) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_v); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->SetFromFVector(Z_Param_Out_v); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetXYZW) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_w); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->SetXYZW(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetXYZ) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->SetXYZ(Z_Param_x,Z_Param_y,Z_Param_z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetXY) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->SetXY(Z_Param_x,Z_Param_y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetW) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_w); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->SetW(Z_Param_w); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetZ) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->SetZ(Z_Param_z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetY) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->SetY(Z_Param_y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetX) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->SetX(Z_Param_x); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetW) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetW(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetZ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetY) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetY(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetX(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasW) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasW(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasZ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasY) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasY(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasX(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateRTVector) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=UGSRTVector::CreateRTVector(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFromFVector) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_v); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->SetFromFVector(Z_Param_Out_v); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetXYZW) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_w); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->SetXYZW(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetXYZ) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->SetXYZ(Z_Param_x,Z_Param_y,Z_Param_z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetXY) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->SetXY(Z_Param_x,Z_Param_y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetW) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_w); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->SetW(Z_Param_w); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetZ) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->SetZ(Z_Param_z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetY) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->SetY(Z_Param_y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetX) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=P_THIS->SetX(Z_Param_x); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetW) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetW(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetZ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetY) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetY(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetX(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasW) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasW(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasZ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasY) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasY(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasX) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasX(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateRTVector) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRTVector**)Z_Param__Result=UGSRTVector::CreateRTVector(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSRTVector(); \
	friend struct Z_Construct_UClass_UGSRTVector_Statics; \
public: \
	DECLARE_CLASS(UGSRTVector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSRTVector)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGSRTVector(); \
	friend struct Z_Construct_UClass_UGSRTVector_Statics; \
public: \
	DECLARE_CLASS(UGSRTVector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSRTVector)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSRTVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSRTVector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSRTVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSRTVector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSRTVector(UGSRTVector&&); \
	NO_API UGSRTVector(const UGSRTVector&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSRTVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSRTVector(UGSRTVector&&); \
	NO_API UGSRTVector(const UGSRTVector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSRTVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSRTVector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSRTVector)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_PRIVATE_PROPERTY_OFFSET
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_13_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GSRTVector."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSRTVector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_RT_UGSRTVector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

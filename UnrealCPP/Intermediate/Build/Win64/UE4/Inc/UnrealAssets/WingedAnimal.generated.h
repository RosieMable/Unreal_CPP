// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef UNREALASSETS_WingedAnimal_generated_h
#error "WingedAnimal.generated.h already included, missing '#pragma once' in WingedAnimal.h"
#endif
#define UNREALASSETS_WingedAnimal_generated_h

#define UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFlyingTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlyingTick(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFlyingTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlyingTick(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_EVENT_PARMS \
	struct WingedAnimal_eventOnImpactDuringFlying_Parms \
	{ \
		FHitResult Hit; \
		bool bIsWalkableFloor; \
	};


#define UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_CALLBACK_WRAPPERS
#define UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWingedAnimal(); \
	friend struct Z_Construct_UClass_AWingedAnimal_Statics; \
public: \
	DECLARE_CLASS(AWingedAnimal, AAnimalController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAssets"), NO_API) \
	DECLARE_SERIALIZER(AWingedAnimal)


#define UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWingedAnimal(); \
	friend struct Z_Construct_UClass_AWingedAnimal_Statics; \
public: \
	DECLARE_CLASS(AWingedAnimal, AAnimalController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAssets"), NO_API) \
	DECLARE_SERIALIZER(AWingedAnimal)


#define UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWingedAnimal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWingedAnimal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWingedAnimal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWingedAnimal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWingedAnimal(AWingedAnimal&&); \
	NO_API AWingedAnimal(const AWingedAnimal&); \
public:


#define UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWingedAnimal(AWingedAnimal&&); \
	NO_API AWingedAnimal(const AWingedAnimal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWingedAnimal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWingedAnimal); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWingedAnimal)


#define UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(AWingedAnimal, Acceleration); } \
	FORCEINLINE static uint32 __PPO__TurnSpeed() { return STRUCT_OFFSET(AWingedAnimal, TurnSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(AWingedAnimal, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__MinSpeed() { return STRUCT_OFFSET(AWingedAnimal, MinSpeed); }


#define UnrealCPP_Source_UnrealAssets_WingedAnimal_h_12_PROLOG \
	UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_EVENT_PARMS


#define UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_CALLBACK_WRAPPERS \
	UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_INCLASS \
	UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_CALLBACK_WRAPPERS \
	UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealAssets_WingedAnimal_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALASSETS_API UClass* StaticClass<class AWingedAnimal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealAssets_WingedAnimal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALASSETS_FlyingPawn_generated_h
#error "FlyingPawn.generated.h already included, missing '#pragma once' in FlyingPawn.h"
#endif
#define UNREALASSETS_FlyingPawn_generated_h

#define UnrealCPP_Source_UnrealAssets_FlyingPawn_h_12_RPC_WRAPPERS
#define UnrealCPP_Source_UnrealAssets_FlyingPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealCPP_Source_UnrealAssets_FlyingPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlyingPawn(); \
	friend struct Z_Construct_UClass_AFlyingPawn_Statics; \
public: \
	DECLARE_CLASS(AFlyingPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAssets"), NO_API) \
	DECLARE_SERIALIZER(AFlyingPawn)


#define UnrealCPP_Source_UnrealAssets_FlyingPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFlyingPawn(); \
	friend struct Z_Construct_UClass_AFlyingPawn_Statics; \
public: \
	DECLARE_CLASS(AFlyingPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAssets"), NO_API) \
	DECLARE_SERIALIZER(AFlyingPawn)


#define UnrealCPP_Source_UnrealAssets_FlyingPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlyingPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlyingPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlyingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlyingPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlyingPawn(AFlyingPawn&&); \
	NO_API AFlyingPawn(const AFlyingPawn&); \
public:


#define UnrealCPP_Source_UnrealAssets_FlyingPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlyingPawn(AFlyingPawn&&); \
	NO_API AFlyingPawn(const AFlyingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlyingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlyingPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlyingPawn)


#define UnrealCPP_Source_UnrealAssets_FlyingPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaneMesh() { return STRUCT_OFFSET(AFlyingPawn, PlaneMesh); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AFlyingPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AFlyingPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(AFlyingPawn, Acceleration); } \
	FORCEINLINE static uint32 __PPO__TurnSpeed() { return STRUCT_OFFSET(AFlyingPawn, TurnSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(AFlyingPawn, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__MinSpeed() { return STRUCT_OFFSET(AFlyingPawn, MinSpeed); }


#define UnrealCPP_Source_UnrealAssets_FlyingPawn_h_9_PROLOG
#define UnrealCPP_Source_UnrealAssets_FlyingPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealAssets_FlyingPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealAssets_FlyingPawn_h_12_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealAssets_FlyingPawn_h_12_INCLASS \
	UnrealCPP_Source_UnrealAssets_FlyingPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealAssets_FlyingPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealAssets_FlyingPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealAssets_FlyingPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealAssets_FlyingPawn_h_12_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealAssets_FlyingPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALASSETS_API UClass* StaticClass<class AFlyingPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealAssets_FlyingPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

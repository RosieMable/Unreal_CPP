// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALASSETS_AnimalController_generated_h
#error "AnimalController.generated.h already included, missing '#pragma once' in AnimalController.h"
#endif
#define UNREALASSETS_AnimalController_generated_h

#define UnrealCPP_Source_UnrealAssets_AnimalController_h_12_RPC_WRAPPERS
#define UnrealCPP_Source_UnrealAssets_AnimalController_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealCPP_Source_UnrealAssets_AnimalController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnimalController(); \
	friend struct Z_Construct_UClass_AAnimalController_Statics; \
public: \
	DECLARE_CLASS(AAnimalController, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAssets"), NO_API) \
	DECLARE_SERIALIZER(AAnimalController)


#define UnrealCPP_Source_UnrealAssets_AnimalController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAnimalController(); \
	friend struct Z_Construct_UClass_AAnimalController_Statics; \
public: \
	DECLARE_CLASS(AAnimalController, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAssets"), NO_API) \
	DECLARE_SERIALIZER(AAnimalController)


#define UnrealCPP_Source_UnrealAssets_AnimalController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAnimalController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAnimalController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimalController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimalController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAnimalController(AAnimalController&&); \
	NO_API AAnimalController(const AAnimalController&); \
public:


#define UnrealCPP_Source_UnrealAssets_AnimalController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAnimalController(AAnimalController&&); \
	NO_API AAnimalController(const AAnimalController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimalController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimalController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAnimalController)


#define UnrealCPP_Source_UnrealAssets_AnimalController_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AAnimalController, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AAnimalController, FollowCamera); }


#define UnrealCPP_Source_UnrealAssets_AnimalController_h_9_PROLOG
#define UnrealCPP_Source_UnrealAssets_AnimalController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_12_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_12_INCLASS \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealAssets_AnimalController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_12_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALASSETS_API UClass* StaticClass<class AAnimalController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealAssets_AnimalController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

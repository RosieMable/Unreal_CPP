// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDialogueLines;
#ifdef UNREALASSETS_AnimalController_generated_h
#error "AnimalController.generated.h already included, missing '#pragma once' in AnimalController.h"
#endif
#define UNREALASSETS_AnimalController_generated_h

#define UnrealCPP_Source_UnrealAssets_AnimalController_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPossess) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Possess(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTalk) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Excerpt); \
		P_GET_TARRAY_REF(FDialogueLines,Z_Param_Out_Lines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Talk(Z_Param_Excerpt,Z_Param_Out_Lines); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealAssets_AnimalController_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPossess) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Possess(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTalk) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Excerpt); \
		P_GET_TARRAY_REF(FDialogueLines,Z_Param_Out_Lines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Talk(Z_Param_Excerpt,Z_Param_Out_Lines); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealAssets_AnimalController_h_31_EVENT_PARMS
#define UnrealCPP_Source_UnrealAssets_AnimalController_h_31_CALLBACK_WRAPPERS
#define UnrealCPP_Source_UnrealAssets_AnimalController_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnimalController(); \
	friend struct Z_Construct_UClass_AAnimalController_Statics; \
public: \
	DECLARE_CLASS(AAnimalController, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAssets"), NO_API) \
	DECLARE_SERIALIZER(AAnimalController)


#define UnrealCPP_Source_UnrealAssets_AnimalController_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAAnimalController(); \
	friend struct Z_Construct_UClass_AAnimalController_Statics; \
public: \
	DECLARE_CLASS(AAnimalController, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAssets"), NO_API) \
	DECLARE_SERIALIZER(AAnimalController)


#define UnrealCPP_Source_UnrealAssets_AnimalController_h_31_STANDARD_CONSTRUCTORS \
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


#define UnrealCPP_Source_UnrealAssets_AnimalController_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAnimalController(AAnimalController&&); \
	NO_API AAnimalController(const AAnimalController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimalController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimalController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAnimalController)


#define UnrealCPP_Source_UnrealAssets_AnimalController_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AAnimalController, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AAnimalController, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__DefaultMaterialBody() { return STRUCT_OFFSET(AAnimalController, DefaultMaterialBody); } \
	FORCEINLINE static uint32 __PPO__DefaultMaterialFur() { return STRUCT_OFFSET(AAnimalController, DefaultMaterialFur); } \
	FORCEINLINE static uint32 __PPO__PossessMaterialBody() { return STRUCT_OFFSET(AAnimalController, PossessMaterialBody); } \
	FORCEINLINE static uint32 __PPO__PossessMaterialFur() { return STRUCT_OFFSET(AAnimalController, PossessMaterialFur); } \
	FORCEINLINE static uint32 __PPO__AudioComp() { return STRUCT_OFFSET(AAnimalController, AudioComp); } \
	FORCEINLINE static uint32 __PPO__UI() { return STRUCT_OFFSET(AAnimalController, UI); }


#define UnrealCPP_Source_UnrealAssets_AnimalController_h_28_PROLOG \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_31_EVENT_PARMS


#define UnrealCPP_Source_UnrealAssets_AnimalController_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_31_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_31_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_31_CALLBACK_WRAPPERS \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_31_INCLASS \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealAssets_AnimalController_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_31_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_31_CALLBACK_WRAPPERS \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_31_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealAssets_AnimalController_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALASSETS_API UClass* StaticClass<class AAnimalController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealAssets_AnimalController_h


#define FOREACH_ENUM_ELOGOUTPUT(op) \
	op(ELogOutput::ALL) \
	op(ELogOutput::OUTPUT_LOG) \
	op(ELogOutput::SCREEN) 

enum class ELogOutput : uint8;
template<> UNREALASSETS_API UEnum* StaticEnum<ELogOutput>();

#define FOREACH_ENUM_ELOGLEVEL(op) \
	op(ELogLevel::TRACE) \
	op(ELogLevel::DEBUG) \
	op(ELogLevel::INFO) \
	op(ELogLevel::WARNING) \
	op(ELogLevel::ERROR) 

enum class ELogLevel : uint8;
template<> UNREALASSETS_API UEnum* StaticEnum<ELogLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

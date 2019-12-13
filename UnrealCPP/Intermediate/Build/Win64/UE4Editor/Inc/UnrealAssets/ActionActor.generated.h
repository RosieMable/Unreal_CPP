// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALASSETS_ActionActor_generated_h
#error "ActionActor.generated.h already included, missing '#pragma once' in ActionActor.h"
#endif
#define UNREALASSETS_ActionActor_generated_h

#define UnrealCPP_Source_UnrealAssets_ActionActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ResetRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->NextRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRotate) \
	{ \
		P_GET_UBOOL(Z_Param_doRotate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRotate(Z_Param_doRotate); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealAssets_ActionActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ResetRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->NextRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRotate) \
	{ \
		P_GET_UBOOL(Z_Param_doRotate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRotate(Z_Param_doRotate); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealAssets_ActionActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActionActor(); \
	friend struct Z_Construct_UClass_AActionActor_Statics; \
public: \
	DECLARE_CLASS(AActionActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAssets"), NO_API) \
	DECLARE_SERIALIZER(AActionActor)


#define UnrealCPP_Source_UnrealAssets_ActionActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAActionActor(); \
	friend struct Z_Construct_UClass_AActionActor_Statics; \
public: \
	DECLARE_CLASS(AActionActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAssets"), NO_API) \
	DECLARE_SERIALIZER(AActionActor)


#define UnrealCPP_Source_UnrealAssets_ActionActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActionActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActionActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActionActor(AActionActor&&); \
	NO_API AActionActor(const AActionActor&); \
public:


#define UnrealCPP_Source_UnrealAssets_ActionActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActionActor(AActionActor&&); \
	NO_API AActionActor(const AActionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActionActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActionActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActionActor)


#define UnrealCPP_Source_UnrealAssets_ActionActor_h_12_PRIVATE_PROPERTY_OFFSET
#define UnrealCPP_Source_UnrealAssets_ActionActor_h_9_PROLOG
#define UnrealCPP_Source_UnrealAssets_ActionActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealAssets_ActionActor_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealAssets_ActionActor_h_12_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealAssets_ActionActor_h_12_INCLASS \
	UnrealCPP_Source_UnrealAssets_ActionActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealAssets_ActionActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealAssets_ActionActor_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealAssets_ActionActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealAssets_ActionActor_h_12_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealAssets_ActionActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALASSETS_API UClass* StaticClass<class AActionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealAssets_ActionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

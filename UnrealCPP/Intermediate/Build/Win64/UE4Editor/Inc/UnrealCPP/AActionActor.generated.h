// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALCPP_AActionActor_generated_h
#error "AActionActor.generated.h already included, missing '#pragma once' in AActionActor.h"
#endif
#define UNREALCPP_AActionActor_generated_h

#define UnrealCPP_Source_UnrealCPP_AActionActor_h_12_RPC_WRAPPERS \
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


#define UnrealCPP_Source_UnrealCPP_AActionActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define UnrealCPP_Source_UnrealCPP_AActionActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAActionActor(); \
	friend struct Z_Construct_UClass_AAActionActor_Statics; \
public: \
	DECLARE_CLASS(AAActionActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AAActionActor)


#define UnrealCPP_Source_UnrealCPP_AActionActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAActionActor(); \
	friend struct Z_Construct_UClass_AAActionActor_Statics; \
public: \
	DECLARE_CLASS(AAActionActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AAActionActor)


#define UnrealCPP_Source_UnrealCPP_AActionActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAActionActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAActionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAActionActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAActionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAActionActor(AAActionActor&&); \
	NO_API AAActionActor(const AAActionActor&); \
public:


#define UnrealCPP_Source_UnrealCPP_AActionActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAActionActor(AAActionActor&&); \
	NO_API AAActionActor(const AAActionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAActionActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAActionActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAActionActor)


#define UnrealCPP_Source_UnrealCPP_AActionActor_h_12_PRIVATE_PROPERTY_OFFSET
#define UnrealCPP_Source_UnrealCPP_AActionActor_h_9_PROLOG
#define UnrealCPP_Source_UnrealCPP_AActionActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_AActionActor_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_AActionActor_h_12_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealCPP_AActionActor_h_12_INCLASS \
	UnrealCPP_Source_UnrealCPP_AActionActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealCPP_AActionActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_AActionActor_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_AActionActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_AActionActor_h_12_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_AActionActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCPP_API UClass* StaticClass<class AAActionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealCPP_AActionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

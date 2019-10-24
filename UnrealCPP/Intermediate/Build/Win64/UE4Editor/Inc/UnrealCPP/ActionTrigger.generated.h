// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef UNREALCPP_ActionTrigger_generated_h
#error "ActionTrigger.generated.h already included, missing '#pragma once' in ActionTrigger.h"
#endif
#define UNREALCPP_ActionTrigger_generated_h

#define UnrealCPP_Source_UnrealCPP_ActionTrigger_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginOverlap(Z_Param_OverlappedComponent,Z_Param_otherActor,Z_Param_otherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealCPP_ActionTrigger_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginOverlap(Z_Param_OverlappedComponent,Z_Param_otherActor,Z_Param_otherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealCPP_ActionTrigger_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActionTrigger(); \
	friend struct Z_Construct_UClass_UActionTrigger_Statics; \
public: \
	DECLARE_CLASS(UActionTrigger, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(UActionTrigger)


#define UnrealCPP_Source_UnrealCPP_ActionTrigger_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActionTrigger(); \
	friend struct Z_Construct_UClass_UActionTrigger_Statics; \
public: \
	DECLARE_CLASS(UActionTrigger, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(UActionTrigger)


#define UnrealCPP_Source_UnrealCPP_ActionTrigger_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActionTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActionTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActionTrigger(UActionTrigger&&); \
	NO_API UActionTrigger(const UActionTrigger&); \
public:


#define UnrealCPP_Source_UnrealCPP_ActionTrigger_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActionTrigger(UActionTrigger&&); \
	NO_API UActionTrigger(const UActionTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActionTrigger)


#define UnrealCPP_Source_UnrealCPP_ActionTrigger_h_14_PRIVATE_PROPERTY_OFFSET
#define UnrealCPP_Source_UnrealCPP_ActionTrigger_h_11_PROLOG
#define UnrealCPP_Source_UnrealCPP_ActionTrigger_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_ActionTrigger_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_ActionTrigger_h_14_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealCPP_ActionTrigger_h_14_INCLASS \
	UnrealCPP_Source_UnrealCPP_ActionTrigger_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealCPP_ActionTrigger_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_ActionTrigger_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_ActionTrigger_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_ActionTrigger_h_14_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_ActionTrigger_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCPP_API UClass* StaticClass<class UActionTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealCPP_ActionTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

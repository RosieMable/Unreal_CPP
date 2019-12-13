// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDialogueLines;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef UNREALASSETS_DialogueNPCCharacter_generated_h
#error "DialogueNPCCharacter.generated.h already included, missing '#pragma once' in DialogueNPCCharacter.h"
#endif
#define UNREALASSETS_DialogueNPCCharacter_generated_h

#define UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTalk) \
	{ \
		P_GET_TARRAY(FDialogueLines,Z_Param_DialogueLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Talk(Z_Param_DialogueLines); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTalk) \
	{ \
		P_GET_TARRAY(FDialogueLines,Z_Param_DialogueLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Talk(Z_Param_DialogueLines); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADialogueNPCCharacter(); \
	friend struct Z_Construct_UClass_ADialogueNPCCharacter_Statics; \
public: \
	DECLARE_CLASS(ADialogueNPCCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAssets"), NO_API) \
	DECLARE_SERIALIZER(ADialogueNPCCharacter)


#define UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesADialogueNPCCharacter(); \
	friend struct Z_Construct_UClass_ADialogueNPCCharacter_Statics; \
public: \
	DECLARE_CLASS(ADialogueNPCCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAssets"), NO_API) \
	DECLARE_SERIALIZER(ADialogueNPCCharacter)


#define UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADialogueNPCCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADialogueNPCCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADialogueNPCCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADialogueNPCCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADialogueNPCCharacter(ADialogueNPCCharacter&&); \
	NO_API ADialogueNPCCharacter(const ADialogueNPCCharacter&); \
public:


#define UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADialogueNPCCharacter(ADialogueNPCCharacter&&); \
	NO_API ADialogueNPCCharacter(const ADialogueNPCCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADialogueNPCCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADialogueNPCCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADialogueNPCCharacter)


#define UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxComp() { return STRUCT_OFFSET(ADialogueNPCCharacter, BoxComp); } \
	FORCEINLINE static uint32 __PPO__AudioComp() { return STRUCT_OFFSET(ADialogueNPCCharacter, AudioComp); } \
	FORCEINLINE static uint32 __PPO__PlayerLines() { return STRUCT_OFFSET(ADialogueNPCCharacter, PlayerLines); } \
	FORCEINLINE static uint32 __PPO__AILines() { return STRUCT_OFFSET(ADialogueNPCCharacter, AILines); }


#define UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_13_PROLOG
#define UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_16_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_16_INCLASS \
	UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_16_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALASSETS_API UClass* StaticClass<class ADialogueNPCCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealAssets_DialogueNPCCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

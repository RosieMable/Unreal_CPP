// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDialogueLines;
#ifdef UNREALASSETS_DialogUI_generated_h
#error "DialogUI.generated.h already included, missing '#pragma once' in DialogUI.h"
#endif
#define UNREALASSETS_DialogUI_generated_h

#define UnrealCPP_Source_UnrealAssets_DialogUI_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSubtitles) \
	{ \
		P_GET_TARRAY(FDialogueLines,Z_Param_DialoguesLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSubtitles(Z_Param_DialoguesLines); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealAssets_DialogUI_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSubtitles) \
	{ \
		P_GET_TARRAY(FDialogueLines,Z_Param_DialoguesLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSubtitles(Z_Param_DialoguesLines); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealAssets_DialogUI_h_16_EVENT_PARMS
#define UnrealCPP_Source_UnrealAssets_DialogUI_h_16_CALLBACK_WRAPPERS
#define UnrealCPP_Source_UnrealAssets_DialogUI_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogUI(); \
	friend struct Z_Construct_UClass_UDialogUI_Statics; \
public: \
	DECLARE_CLASS(UDialogUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAssets"), NO_API) \
	DECLARE_SERIALIZER(UDialogUI)


#define UnrealCPP_Source_UnrealAssets_DialogUI_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDialogUI(); \
	friend struct Z_Construct_UClass_UDialogUI_Statics; \
public: \
	DECLARE_CLASS(UDialogUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAssets"), NO_API) \
	DECLARE_SERIALIZER(UDialogUI)


#define UnrealCPP_Source_UnrealAssets_DialogUI_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogUI(UDialogUI&&); \
	NO_API UDialogUI(const UDialogUI&); \
public:


#define UnrealCPP_Source_UnrealAssets_DialogUI_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogUI(UDialogUI&&); \
	NO_API UDialogUI(const UDialogUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogUI)


#define UnrealCPP_Source_UnrealAssets_DialogUI_h_16_PRIVATE_PROPERTY_OFFSET
#define UnrealCPP_Source_UnrealAssets_DialogUI_h_13_PROLOG \
	UnrealCPP_Source_UnrealAssets_DialogUI_h_16_EVENT_PARMS


#define UnrealCPP_Source_UnrealAssets_DialogUI_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealAssets_DialogUI_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealAssets_DialogUI_h_16_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealAssets_DialogUI_h_16_CALLBACK_WRAPPERS \
	UnrealCPP_Source_UnrealAssets_DialogUI_h_16_INCLASS \
	UnrealCPP_Source_UnrealAssets_DialogUI_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealAssets_DialogUI_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealAssets_DialogUI_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealAssets_DialogUI_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealAssets_DialogUI_h_16_CALLBACK_WRAPPERS \
	UnrealCPP_Source_UnrealAssets_DialogUI_h_16_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealAssets_DialogUI_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALASSETS_API UClass* StaticClass<class UDialogUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealAssets_DialogUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

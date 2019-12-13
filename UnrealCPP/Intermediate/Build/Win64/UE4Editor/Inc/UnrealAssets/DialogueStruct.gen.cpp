// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAssets/DialogueStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueStruct() {}
// Cross Module References
	UNREALASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogue();
	UPackage* Z_Construct_UPackage__Script_UnrealAssets();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UNREALASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLines();
// End Cross Module References
class UScriptStruct* FDialogue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALASSETS_API uint32 Get_Z_Construct_UScriptStruct_FDialogue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogue, Z_Construct_UPackage__Script_UnrealAssets(), TEXT("Dialogue"), sizeof(FDialogue), Get_Z_Construct_UScriptStruct_FDialogue_Hash());
	}
	return Singleton;
}
template<> UNREALASSETS_API UScriptStruct* StaticStruct<FDialogue>()
{
	return FDialogue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogue(FDialogue::StaticStruct, TEXT("/Script/UnrealAssets"), TEXT("Dialogue"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealAssets_StaticRegisterNativesFDialogue
{
	FScriptStruct_UnrealAssets_StaticRegisterNativesFDialogue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Dialogue")),new UScriptStruct::TCppStructOps<FDialogue>);
	}
} ScriptStruct_UnrealAssets_StaticRegisterNativesFDialogue;
	struct Z_Construct_UScriptStruct_FDialogue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldAIAnswer_MetaData[];
#endif
		static void NewProp_ShouldAIAnswer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldAIAnswer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueLines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogueLines;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DialogueLines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Question_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Question;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_ShouldAIAnswer_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//Bool to set to true if we want the interlocutor to reply\n" },
		{ "ModuleRelativePath", "DialogueStruct.h" },
		{ "ToolTip", "Bool to set to true if we want the interlocutor to reply" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_ShouldAIAnswer_SetBit(void* Obj)
	{
		((FDialogue*)Obj)->ShouldAIAnswer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_ShouldAIAnswer = { "ShouldAIAnswer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDialogue), &Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_ShouldAIAnswer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_ShouldAIAnswer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_ShouldAIAnswer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueLines_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//An array of associated dialogue lines\n" },
		{ "ModuleRelativePath", "DialogueStruct.h" },
		{ "ToolTip", "An array of associated dialogue lines" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueLines = { "DialogueLines", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogue, DialogueLines), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueLines_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueLines_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueLines_Inner = { "DialogueLines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDialogueLines, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_Question_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "//Question that will appear on the screen (makes the dialogue system more interactable\n" },
		{ "ModuleRelativePath", "DialogueStruct.h" },
		{ "ToolTip", "Question that will appear on the screen (makes the dialogue system more interactable" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_Question = { "Question", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogue, Question), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_Question_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_Question_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_ShouldAIAnswer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueLines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_Question,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAssets,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Dialogue",
		sizeof(FDialogue),
		alignof(FDialogue),
		Z_Construct_UScriptStruct_FDialogue_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAssets();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Dialogue"), sizeof(FDialogue), Get_Z_Construct_UScriptStruct_FDialogue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDialogue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogue_Hash() { return 3503190203U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

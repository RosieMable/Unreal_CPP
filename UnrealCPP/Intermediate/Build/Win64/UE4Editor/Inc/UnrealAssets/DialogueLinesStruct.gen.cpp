// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAssets/DialogueLinesStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueLinesStruct() {}
// Cross Module References
	UNREALASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLines();
	UPackage* Z_Construct_UPackage__Script_UnrealAssets();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
class UScriptStruct* FDialogueLines::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALASSETS_API uint32 Get_Z_Construct_UScriptStruct_FDialogueLines_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueLines, Z_Construct_UPackage__Script_UnrealAssets(), TEXT("DialogueLines"), sizeof(FDialogueLines), Get_Z_Construct_UScriptStruct_FDialogueLines_Hash());
	}
	return Singleton;
}
template<> UNREALASSETS_API UScriptStruct* StaticStruct<FDialogueLines>()
{
	return FDialogueLines::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogueLines(FDialogueLines::StaticStruct, TEXT("/Script/UnrealAssets"), TEXT("DialogueLines"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealAssets_StaticRegisterNativesFDialogueLines
{
	FScriptStruct_UnrealAssets_StaticRegisterNativesFDialogueLines()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DialogueLines")),new UScriptStruct::TCppStructOps<FDialogueLines>);
	}
} ScriptStruct_UnrealAssets_StaticRegisterNativesFDialogueLines;
	struct Z_Construct_UScriptStruct_FDialogueLines_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogueLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLines_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueLinesStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueLines_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueLines>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLines_Statics::NewProp_DisplayTime_MetaData[] = {
		{ "Category", "DialogueLines" },
		{ "Comment", "//The relative time in seconds the dialogue line will appear for\n" },
		{ "ModuleRelativePath", "DialogueLinesStruct.h" },
		{ "ToolTip", "The relative time in seconds the dialogue line will appear for" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueLines_Statics::NewProp_DisplayTime = { "DisplayTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueLines, DisplayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLines_Statics::NewProp_DisplayTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLines_Statics::NewProp_DisplayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueLines_Statics::NewProp_DialogueLine_MetaData[] = {
		{ "Category", "DialogueLines" },
		{ "Comment", "//The dialogue line will be displayed for a specific period in the UI\n" },
		{ "ModuleRelativePath", "DialogueLinesStruct.h" },
		{ "ToolTip", "The dialogue line will be displayed for a specific period in the UI" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueLines_Statics::NewProp_DialogueLine = { "DialogueLine", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueLines, DialogueLine), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLines_Statics::NewProp_DialogueLine_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLines_Statics::NewProp_DialogueLine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueLines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLines_Statics::NewProp_DisplayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueLines_Statics::NewProp_DialogueLine,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueLines_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAssets,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"DialogueLines",
		sizeof(FDialogueLines),
		alignof(FDialogueLines),
		Z_Construct_UScriptStruct_FDialogueLines_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLines_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueLines_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueLines_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueLines()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogueLines_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAssets();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialogueLines"), sizeof(FDialogueLines), Get_Z_Construct_UScriptStruct_FDialogueLines_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDialogueLines_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogueLines_Hash() { return 2950696637U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

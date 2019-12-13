// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAssets/DialogUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogUI() {}
// Cross Module References
	UNREALASSETS_API UClass* Z_Construct_UClass_UDialogUI_NoRegister();
	UNREALASSETS_API UClass* Z_Construct_UClass_UDialogUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UnrealAssets();
	UNREALASSETS_API UFunction* Z_Construct_UFunction_UDialogUI_Show();
	UNREALASSETS_API UFunction* Z_Construct_UFunction_UDialogUI_UpdateSubtitles();
	UNREALASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLines();
// End Cross Module References
	static FName NAME_UDialogUI_Show = FName(TEXT("Show"));
	void UDialogUI::Show()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDialogUI_Show),NULL);
	}
	void UDialogUI::StaticRegisterNativesUDialogUI()
	{
		UClass* Class = UDialogUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateSubtitles", &UDialogUI::execUpdateSubtitles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogUI_Show_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogUI_Show_Statics::Function_MetaDataParams[] = {
		{ "Category", "DialogueSystem" },
		{ "Comment", "//Adds the widget to the viewport and populates the buttons with the given questions\n" },
		{ "ModuleRelativePath", "DialogUI.h" },
		{ "ToolTip", "Adds the widget to the viewport and populates the buttons with the given questions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogUI_Show_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogUI, nullptr, "Show", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogUI_Show_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogUI_Show_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogUI_Show()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogUI_Show_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics
	{
		struct DialogUI_eventUpdateSubtitles_Parms
		{
			TArray<FDialogueLines> DialoguesLines;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialoguesLines;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DialoguesLines_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::NewProp_DialoguesLines = { "DialoguesLines", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogUI_eventUpdateSubtitles_Parms, DialoguesLines), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::NewProp_DialoguesLines_Inner = { "DialoguesLines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDialogueLines, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::NewProp_DialoguesLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::NewProp_DialoguesLines_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::Function_MetaDataParams[] = {
		{ "Category", "DialogueSystem" },
		{ "Comment", "//Update the displayed subtitles based on the given array\n" },
		{ "ModuleRelativePath", "DialogUI.h" },
		{ "ToolTip", "Update the displayed subtitles based on the given array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogUI, nullptr, "UpdateSubtitles", nullptr, nullptr, sizeof(DialogUI_eventUpdateSubtitles_Parms), Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogUI_UpdateSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDialogUI_NoRegister()
	{
		return UDialogUI::StaticClass();
	}
	struct Z_Construct_UClass_UDialogUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestionsToAsk_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuestionsToAsk;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestionsToAsk_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinesToDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LinesToDisplay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogUI_Show, "Show" }, // 312706422
		{ &Z_Construct_UFunction_UDialogUI_UpdateSubtitles, "UpdateSubtitles" }, // 2814034233
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogUI.h" },
		{ "ModuleRelativePath", "DialogUI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogUI_Statics::NewProp_QuestionsToAsk_MetaData[] = {
		{ "Category", "DialogUI" },
		{ "Comment", "//This Array will populate our buttons from within the show function\n" },
		{ "ModuleRelativePath", "DialogUI.h" },
		{ "ToolTip", "This Array will populate our buttons from within the show function" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogUI_Statics::NewProp_QuestionsToAsk = { "QuestionsToAsk", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogUI, QuestionsToAsk), METADATA_PARAMS(Z_Construct_UClass_UDialogUI_Statics::NewProp_QuestionsToAsk_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogUI_Statics::NewProp_QuestionsToAsk_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogUI_Statics::NewProp_QuestionsToAsk_Inner = { "QuestionsToAsk", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogUI_Statics::NewProp_LinesToDisplay_MetaData[] = {
		{ "Category", "DialogUI" },
		{ "Comment", "//Used to bind the subtitles to the UI\n" },
		{ "ModuleRelativePath", "DialogUI.h" },
		{ "ToolTip", "Used to bind the subtitles to the UI" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogUI_Statics::NewProp_LinesToDisplay = { "LinesToDisplay", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogUI, LinesToDisplay), METADATA_PARAMS(Z_Construct_UClass_UDialogUI_Statics::NewProp_LinesToDisplay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogUI_Statics::NewProp_LinesToDisplay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogUI_Statics::NewProp_QuestionsToAsk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogUI_Statics::NewProp_QuestionsToAsk_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogUI_Statics::NewProp_LinesToDisplay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogUI_Statics::ClassParams = {
		&UDialogUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogUI_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UDialogUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogUI_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDialogUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogUI, 3593104240);
	template<> UNREALASSETS_API UClass* StaticClass<UDialogUI>()
	{
		return UDialogUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogUI(Z_Construct_UClass_UDialogUI, &UDialogUI::StaticClass, TEXT("/Script/UnrealAssets"), TEXT("UDialogUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

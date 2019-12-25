// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAssets/AnimalController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimalController() {}
// Cross Module References
	UNREALASSETS_API UClass* Z_Construct_UClass_AAnimalController_NoRegister();
	UNREALASSETS_API UClass* Z_Construct_UClass_AAnimalController();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UnrealAssets();
	UNREALASSETS_API UFunction* Z_Construct_UFunction_AAnimalController_Talk();
	UNREALASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueLines();
	UNREALASSETS_API UFunction* Z_Construct_UFunction_AAnimalController_ToggleUI();
	UNREALASSETS_API UClass* Z_Construct_UClass_UDialogUI_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static FName NAME_AAnimalController_ToggleUI = FName(TEXT("ToggleUI"));
	void AAnimalController::ToggleUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAnimalController_ToggleUI),NULL);
	}
	void AAnimalController::StaticRegisterNativesAAnimalController()
	{
		UClass* Class = AAnimalController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Talk", &AAnimalController::execTalk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAnimalController_Talk_Statics
	{
		struct AnimalController_eventTalk_Parms
		{
			FString Excerpt;
			TArray<FDialogueLines> Lines;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Lines;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Lines_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Excerpt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAnimalController_Talk_Statics::NewProp_Lines = { "Lines", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimalController_eventTalk_Parms, Lines), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAnimalController_Talk_Statics::NewProp_Lines_Inner = { "Lines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDialogueLines, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAnimalController_Talk_Statics::NewProp_Excerpt = { "Excerpt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimalController_eventTalk_Parms, Excerpt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimalController_Talk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimalController_Talk_Statics::NewProp_Lines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimalController_Talk_Statics::NewProp_Lines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimalController_Talk_Statics::NewProp_Excerpt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimalController_Talk_Statics::Function_MetaDataParams[] = {
		{ "Category", "DialogueSystem" },
		{ "Comment", "/*Performs the actual talking - informs the associated pawn if necessary in order to answer\n\x09The subtitles array contain all the subtitles for this talk - it should be passed to our UI*/" },
		{ "ModuleRelativePath", "AnimalController.h" },
		{ "ToolTip", "Performs the actual talking - informs the associated pawn if necessary in order to answer\n       The subtitles array contain all the subtitles for this talk - it should be passed to our UI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimalController_Talk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimalController, nullptr, "Talk", nullptr, nullptr, sizeof(AnimalController_eventTalk_Parms), Z_Construct_UFunction_AAnimalController_Talk_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAnimalController_Talk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimalController_Talk_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAnimalController_Talk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimalController_Talk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimalController_Talk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimalController_ToggleUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimalController_ToggleUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "DialogSystem" },
		{ "Comment", "/*Opens or closes the conversation UI*/" },
		{ "ModuleRelativePath", "AnimalController.h" },
		{ "ToolTip", "Opens or closes the conversation UI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimalController_ToggleUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimalController, nullptr, "ToggleUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimalController_ToggleUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAnimalController_ToggleUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimalController_ToggleUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimalController_ToggleUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAnimalController_NoRegister()
	{
		return AAnimalController::StaticClass();
	}
	struct Z_Construct_UClass_AAnimalController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Questions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Questions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Questions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAnimalController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAnimalController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAnimalController_Talk, "Talk" }, // 1079395289
		{ &Z_Construct_UFunction_AAnimalController_ToggleUI, "ToggleUI" }, // 1258022637
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimalController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AnimalController.h" },
		{ "ModuleRelativePath", "AnimalController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimalController_Statics::NewProp_UI_MetaData[] = {
		{ "Category", "AnimalController" },
		{ "Comment", "/*UI Reference*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AnimalController.h" },
		{ "ToolTip", "UI Reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnimalController_Statics::NewProp_UI = { "UI", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimalController, UI), Z_Construct_UClass_UDialogUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAnimalController_Statics::NewProp_UI_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAnimalController_Statics::NewProp_UI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimalController_Statics::NewProp_AudioComp_MetaData[] = {
		{ "Category", "AnimalController" },
		{ "Comment", "/*The component responsible for playing our SFX*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AnimalController.h" },
		{ "ToolTip", "The component responsible for playing our SFX" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnimalController_Statics::NewProp_AudioComp = { "AudioComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimalController, AudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAnimalController_Statics::NewProp_AudioComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAnimalController_Statics::NewProp_AudioComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimalController_Statics::NewProp_Questions_MetaData[] = {
		{ "Category", "AnimalController" },
		{ "Comment", "//Array that will be populated with the Questions from the Dialogue class' questions, retrieved from the actor talking\n" },
		{ "ModuleRelativePath", "AnimalController.h" },
		{ "ToolTip", "Array that will be populated with the Questions from the Dialogue class' questions, retrieved from the actor talking" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAnimalController_Statics::NewProp_Questions = { "Questions", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimalController, Questions), METADATA_PARAMS(Z_Construct_UClass_AAnimalController_Statics::NewProp_Questions_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAnimalController_Statics::NewProp_Questions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAnimalController_Statics::NewProp_Questions_Inner = { "Questions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimalController_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "AnimalController.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAnimalController_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimalController, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AAnimalController_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAnimalController_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimalController_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "AnimalController.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAnimalController_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimalController, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AAnimalController_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAnimalController_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimalController_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AnimalController.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnimalController_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimalController, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAnimalController_Statics::NewProp_FollowCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAnimalController_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimalController_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AnimalController.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnimalController_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimalController, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAnimalController_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAnimalController_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAnimalController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimalController_Statics::NewProp_UI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimalController_Statics::NewProp_AudioComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimalController_Statics::NewProp_Questions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimalController_Statics::NewProp_Questions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimalController_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimalController_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimalController_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimalController_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAnimalController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnimalController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAnimalController_Statics::ClassParams = {
		&AAnimalController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAnimalController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAnimalController_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAnimalController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAnimalController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAnimalController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAnimalController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAnimalController, 1205009069);
	template<> UNREALASSETS_API UClass* StaticClass<AAnimalController>()
	{
		return AAnimalController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAnimalController(Z_Construct_UClass_AAnimalController, &AAnimalController::StaticClass, TEXT("/Script/UnrealAssets"), TEXT("AAnimalController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAnimalController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

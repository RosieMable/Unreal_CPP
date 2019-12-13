// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAssets/ActionActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionActor() {}
// Cross Module References
	UNREALASSETS_API UClass* Z_Construct_UClass_AActionActor_NoRegister();
	UNREALASSETS_API UClass* Z_Construct_UClass_AActionActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealAssets();
	UNREALASSETS_API UFunction* Z_Construct_UFunction_AActionActor_NextRotation();
	UNREALASSETS_API UFunction* Z_Construct_UFunction_AActionActor_ResetRotation();
	UNREALASSETS_API UFunction* Z_Construct_UFunction_AActionActor_SetRotate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void AActionActor::StaticRegisterNativesAActionActor()
	{
		UClass* Class = AActionActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NextRotation", &AActionActor::execNextRotation },
			{ "ResetRotation", &AActionActor::execResetRotation },
			{ "SetRotate", &AActionActor::execSetRotate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AActionActor_NextRotation_Statics
	{
		struct ActionActor_eventNextRotation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActionActor_NextRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActionActor_eventNextRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActionActor_NextRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionActor_eventNextRotation_Parms), &Z_Construct_UFunction_AActionActor_NextRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActionActor_NextRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActionActor_NextRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActionActor_NextRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "Comment", "//Go to next rotation\n" },
		{ "ModuleRelativePath", "ActionActor.h" },
		{ "ToolTip", "Go to next rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActionActor_NextRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActionActor, nullptr, "NextRotation", nullptr, nullptr, sizeof(ActionActor_eventNextRotation_Parms), Z_Construct_UFunction_AActionActor_NextRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AActionActor_NextRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActionActor_NextRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AActionActor_NextRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActionActor_NextRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActionActor_NextRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActionActor_ResetRotation_Statics
	{
		struct ActionActor_eventResetRotation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActionActor_ResetRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActionActor_eventResetRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActionActor_ResetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionActor_eventResetRotation_Parms), &Z_Construct_UFunction_AActionActor_ResetRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActionActor_ResetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActionActor_ResetRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActionActor_ResetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "Comment", "//Go reset to first rotation\n" },
		{ "ModuleRelativePath", "ActionActor.h" },
		{ "ToolTip", "Go reset to first rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActionActor_ResetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActionActor, nullptr, "ResetRotation", nullptr, nullptr, sizeof(ActionActor_eventResetRotation_Parms), Z_Construct_UFunction_AActionActor_ResetRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AActionActor_ResetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActionActor_ResetRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AActionActor_ResetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActionActor_ResetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActionActor_ResetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActionActor_SetRotate_Statics
	{
		struct ActionActor_eventSetRotate_Parms
		{
			bool doRotate;
		};
		static void NewProp_doRotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_doRotate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AActionActor_SetRotate_Statics::NewProp_doRotate_SetBit(void* Obj)
	{
		((ActionActor_eventSetRotate_Parms*)Obj)->doRotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AActionActor_SetRotate_Statics::NewProp_doRotate = { "doRotate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActionActor_eventSetRotate_Parms), &Z_Construct_UFunction_AActionActor_SetRotate_Statics::NewProp_doRotate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActionActor_SetRotate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActionActor_SetRotate_Statics::NewProp_doRotate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActionActor_SetRotate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "ActionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActionActor_SetRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActionActor, nullptr, "SetRotate", nullptr, nullptr, sizeof(ActionActor_eventSetRotate_Parms), Z_Construct_UFunction_AActionActor_SetRotate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AActionActor_SetRotate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActionActor_SetRotate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AActionActor_SetRotate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActionActor_SetRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActionActor_SetRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AActionActor_NoRegister()
	{
		return AActionActor::StaticClass();
	}
	struct Z_Construct_UClass_AActionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RotateValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotateValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotateValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AActionActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AActionActor_NextRotation, "NextRotation" }, // 116648512
		{ &Z_Construct_UFunction_AActionActor_ResetRotation, "ResetRotation" }, // 2085897938
		{ &Z_Construct_UFunction_AActionActor_SetRotate, "SetRotate" }, // 2091964824
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActionActor.h" },
		{ "ModuleRelativePath", "ActionActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionActor_Statics::NewProp_RotateValues_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "ActionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActionActor_Statics::NewProp_RotateValues = { "RotateValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActionActor, RotateValues), METADATA_PARAMS(Z_Construct_UClass_AActionActor_Statics::NewProp_RotateValues_MetaData, ARRAY_COUNT(Z_Construct_UClass_AActionActor_Statics::NewProp_RotateValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActionActor_Statics::NewProp_RotateValues_Inner = { "RotateValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionActor_Statics::NewProp_RotateValue_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "ActionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActionActor_Statics::NewProp_RotateValue = { "RotateValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActionActor, RotateValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AActionActor_Statics::NewProp_RotateValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AActionActor_Statics::NewProp_RotateValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActionActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionActor_Statics::NewProp_RotateValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionActor_Statics::NewProp_RotateValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActionActor_Statics::NewProp_RotateValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActionActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActionActor_Statics::ClassParams = {
		&AActionActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AActionActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AActionActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AActionActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AActionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActionActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActionActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActionActor, 3512230465);
	template<> UNREALASSETS_API UClass* StaticClass<AActionActor>()
	{
		return AActionActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActionActor(Z_Construct_UClass_AActionActor, &AActionActor::StaticClass, TEXT("/Script/UnrealAssets"), TEXT("AActionActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActionActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

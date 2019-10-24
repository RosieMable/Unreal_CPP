// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCPP/AActionActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAActionActor() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AAActionActor_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AAActionActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AAActionActor_NextRotation();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AAActionActor_ResetRotation();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AAActionActor_SetRotate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void AAActionActor::StaticRegisterNativesAAActionActor()
	{
		UClass* Class = AAActionActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NextRotation", &AAActionActor::execNextRotation },
			{ "ResetRotation", &AAActionActor::execResetRotation },
			{ "SetRotate", &AAActionActor::execSetRotate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAActionActor_NextRotation_Statics
	{
		struct AActionActor_eventNextRotation_Parms
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
	void Z_Construct_UFunction_AAActionActor_NextRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AActionActor_eventNextRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAActionActor_NextRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AActionActor_eventNextRotation_Parms), &Z_Construct_UFunction_AAActionActor_NextRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAActionActor_NextRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAActionActor_NextRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAActionActor_NextRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "Comment", "//Go to next rotation\n" },
		{ "ModuleRelativePath", "AActionActor.h" },
		{ "ToolTip", "Go to next rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAActionActor_NextRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAActionActor, nullptr, "NextRotation", nullptr, nullptr, sizeof(AActionActor_eventNextRotation_Parms), Z_Construct_UFunction_AAActionActor_NextRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAActionActor_NextRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAActionActor_NextRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAActionActor_NextRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAActionActor_NextRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAActionActor_NextRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAActionActor_ResetRotation_Statics
	{
		struct AActionActor_eventResetRotation_Parms
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
	void Z_Construct_UFunction_AAActionActor_ResetRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AActionActor_eventResetRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAActionActor_ResetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AActionActor_eventResetRotation_Parms), &Z_Construct_UFunction_AAActionActor_ResetRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAActionActor_ResetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAActionActor_ResetRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAActionActor_ResetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "Comment", "//Go reset to first rotation\n" },
		{ "ModuleRelativePath", "AActionActor.h" },
		{ "ToolTip", "Go reset to first rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAActionActor_ResetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAActionActor, nullptr, "ResetRotation", nullptr, nullptr, sizeof(AActionActor_eventResetRotation_Parms), Z_Construct_UFunction_AAActionActor_ResetRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAActionActor_ResetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAActionActor_ResetRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAActionActor_ResetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAActionActor_ResetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAActionActor_ResetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAActionActor_SetRotate_Statics
	{
		struct AActionActor_eventSetRotate_Parms
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
	void Z_Construct_UFunction_AAActionActor_SetRotate_Statics::NewProp_doRotate_SetBit(void* Obj)
	{
		((AActionActor_eventSetRotate_Parms*)Obj)->doRotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAActionActor_SetRotate_Statics::NewProp_doRotate = { "doRotate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AActionActor_eventSetRotate_Parms), &Z_Construct_UFunction_AAActionActor_SetRotate_Statics::NewProp_doRotate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAActionActor_SetRotate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAActionActor_SetRotate_Statics::NewProp_doRotate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAActionActor_SetRotate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "AActionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAActionActor_SetRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAActionActor, nullptr, "SetRotate", nullptr, nullptr, sizeof(AActionActor_eventSetRotate_Parms), Z_Construct_UFunction_AAActionActor_SetRotate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAActionActor_SetRotate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAActionActor_SetRotate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAActionActor_SetRotate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAActionActor_SetRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAActionActor_SetRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAActionActor_NoRegister()
	{
		return AAActionActor::StaticClass();
	}
	struct Z_Construct_UClass_AAActionActor_Statics
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
	UObject* (*const Z_Construct_UClass_AAActionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAActionActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAActionActor_NextRotation, "NextRotation" }, // 2876471814
		{ &Z_Construct_UFunction_AAActionActor_ResetRotation, "ResetRotation" }, // 1891881218
		{ &Z_Construct_UFunction_AAActionActor_SetRotate, "SetRotate" }, // 2533524879
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAActionActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AActionActor.h" },
		{ "ModuleRelativePath", "AActionActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAActionActor_Statics::NewProp_RotateValues_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "AActionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAActionActor_Statics::NewProp_RotateValues = { "RotateValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAActionActor, RotateValues), METADATA_PARAMS(Z_Construct_UClass_AAActionActor_Statics::NewProp_RotateValues_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAActionActor_Statics::NewProp_RotateValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAActionActor_Statics::NewProp_RotateValues_Inner = { "RotateValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAActionActor_Statics::NewProp_RotateValue_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "AActionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAActionActor_Statics::NewProp_RotateValue = { "RotateValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAActionActor, RotateValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AAActionActor_Statics::NewProp_RotateValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAActionActor_Statics::NewProp_RotateValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAActionActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAActionActor_Statics::NewProp_RotateValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAActionActor_Statics::NewProp_RotateValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAActionActor_Statics::NewProp_RotateValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAActionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAActionActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAActionActor_Statics::ClassParams = {
		&AAActionActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAActionActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAActionActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAActionActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAActionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAActionActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAActionActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAActionActor, 477175162);
	template<> UNREALCPP_API UClass* StaticClass<AAActionActor>()
	{
		return AAActionActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAActionActor(Z_Construct_UClass_AAActionActor, &AAActionActor::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AAActionActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAActionActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAssets/AWingedCharacterMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAWingedCharacterMovement() {}
// Cross Module References
	UNREALASSETS_API UClass* Z_Construct_UClass_UAWingedCharacterMovement_NoRegister();
	UNREALASSETS_API UClass* Z_Construct_UClass_UAWingedCharacterMovement();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_UnrealAssets();
// End Cross Module References
	void UAWingedCharacterMovement::StaticRegisterNativesUAWingedCharacterMovement()
	{
	}
	UClass* Z_Construct_UClass_UAWingedCharacterMovement_NoRegister()
	{
		return UAWingedCharacterMovement::StaticClass();
	}
	struct Z_Construct_UClass_UAWingedCharacterMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAWingedCharacterMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAssets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAWingedCharacterMovement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AWingedCharacterMovement.h" },
		{ "ModuleRelativePath", "AWingedCharacterMovement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAWingedCharacterMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAWingedCharacterMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAWingedCharacterMovement_Statics::ClassParams = {
		&UAWingedCharacterMovement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAWingedCharacterMovement_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAWingedCharacterMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAWingedCharacterMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAWingedCharacterMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAWingedCharacterMovement, 420224896);
	template<> UNREALASSETS_API UClass* StaticClass<UAWingedCharacterMovement>()
	{
		return UAWingedCharacterMovement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAWingedCharacterMovement(Z_Construct_UClass_UAWingedCharacterMovement, &UAWingedCharacterMovement::StaticClass, TEXT("/Script/UnrealAssets"), TEXT("UAWingedCharacterMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAWingedCharacterMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

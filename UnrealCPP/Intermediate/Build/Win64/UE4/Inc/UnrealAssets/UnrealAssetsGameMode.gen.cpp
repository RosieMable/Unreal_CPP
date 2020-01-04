// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAssets/UnrealAssetsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealAssetsGameMode() {}
// Cross Module References
	UNREALASSETS_API UClass* Z_Construct_UClass_AUnrealAssetsGameMode_NoRegister();
	UNREALASSETS_API UClass* Z_Construct_UClass_AUnrealAssetsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealAssets();
// End Cross Module References
	void AUnrealAssetsGameMode::StaticRegisterNativesAUnrealAssetsGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUnrealAssetsGameMode_NoRegister()
	{
		return AUnrealAssetsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealAssetsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealAssetsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAssets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealAssetsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealAssetsGameMode.h" },
		{ "ModuleRelativePath", "UnrealAssetsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealAssetsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealAssetsGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealAssetsGameMode_Statics::ClassParams = {
		&AUnrealAssetsGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealAssetsGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnrealAssetsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealAssetsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealAssetsGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealAssetsGameMode, 174872669);
	template<> UNREALASSETS_API UClass* StaticClass<AUnrealAssetsGameMode>()
	{
		return AUnrealAssetsGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealAssetsGameMode(Z_Construct_UClass_AUnrealAssetsGameMode, &AUnrealAssetsGameMode::StaticClass, TEXT("/Script/UnrealAssets"), TEXT("AUnrealAssetsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealAssetsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

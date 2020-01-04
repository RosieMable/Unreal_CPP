// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAssets/TryGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTryGameMode() {}
// Cross Module References
	UNREALASSETS_API UClass* Z_Construct_UClass_ATryGameMode_NoRegister();
	UNREALASSETS_API UClass* Z_Construct_UClass_ATryGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealAssets();
// End Cross Module References
	void ATryGameMode::StaticRegisterNativesATryGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATryGameMode_NoRegister()
	{
		return ATryGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATryGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATryGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAssets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATryGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TryGameMode.h" },
		{ "ModuleRelativePath", "TryGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATryGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATryGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATryGameMode_Statics::ClassParams = {
		&ATryGameMode::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ATryGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATryGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATryGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATryGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATryGameMode, 3531563900);
	template<> UNREALASSETS_API UClass* StaticClass<ATryGameMode>()
	{
		return ATryGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATryGameMode(Z_Construct_UClass_ATryGameMode, &ATryGameMode::StaticClass, TEXT("/Script/UnrealAssets"), TEXT("ATryGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATryGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

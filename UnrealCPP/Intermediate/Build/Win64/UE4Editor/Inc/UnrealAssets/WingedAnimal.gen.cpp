// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAssets/WingedAnimal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWingedAnimal() {}
// Cross Module References
	UNREALASSETS_API UClass* Z_Construct_UClass_AWingedAnimal_NoRegister();
	UNREALASSETS_API UClass* Z_Construct_UClass_AWingedAnimal();
	UNREALASSETS_API UClass* Z_Construct_UClass_AAnimalController();
	UPackage* Z_Construct_UPackage__Script_UnrealAssets();
	UNREALASSETS_API UFunction* Z_Construct_UFunction_AWingedAnimal_FlyingTick();
	UNREALASSETS_API UFunction* Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	static FName NAME_AWingedAnimal_OnImpactDuringFlying = FName(TEXT("OnImpactDuringFlying"));
	void AWingedAnimal::OnImpactDuringFlying(FHitResult const& Hit, bool bIsWalkableFloor)
	{
		WingedAnimal_eventOnImpactDuringFlying_Parms Parms;
		Parms.Hit=Hit;
		Parms.bIsWalkableFloor=bIsWalkableFloor ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AWingedAnimal_OnImpactDuringFlying),&Parms);
	}
	void AWingedAnimal::StaticRegisterNativesAWingedAnimal()
	{
		UClass* Class = AWingedAnimal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlyingTick", &AWingedAnimal::execFlyingTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWingedAnimal_FlyingTick_Statics
	{
		struct WingedAnimal_eventFlyingTick_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWingedAnimal_FlyingTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WingedAnimal_eventFlyingTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWingedAnimal_FlyingTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWingedAnimal_FlyingTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWingedAnimal_FlyingTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character Movement: Flying" },
		{ "Comment", "/**\n\x09* --------------------------------------------\n\x09* Entry point for handling of flying movement.\n\x09* --------------------------------------------\n\x09* Added a \"FlyingTick\" into CharacterMovementComponent because calculating the movement\n\x09* from within the physics loop results in high accuracy that wont cause significant\n\x09* indiscrepancies at varied frame rates.\n\x09*/" },
		{ "ModuleRelativePath", "WingedAnimal.h" },
		{ "ToolTip", "Entry point for handling of flying movement.\n--------------------------------------------\nAdded a \"FlyingTick\" into CharacterMovementComponent because calculating the movement\nfrom within the physics loop results in high accuracy that wont cause significant\nindiscrepancies at varied frame rates." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWingedAnimal_FlyingTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWingedAnimal, nullptr, "FlyingTick", nullptr, nullptr, sizeof(WingedAnimal_eventFlyingTick_Parms), Z_Construct_UFunction_AWingedAnimal_FlyingTick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWingedAnimal_FlyingTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWingedAnimal_FlyingTick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWingedAnimal_FlyingTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWingedAnimal_FlyingTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWingedAnimal_FlyingTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics
	{
		static void NewProp_bIsWalkableFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWalkableFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics::NewProp_bIsWalkableFloor_SetBit(void* Obj)
	{
		((WingedAnimal_eventOnImpactDuringFlying_Parms*)Obj)->bIsWalkableFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics::NewProp_bIsWalkableFloor = { "bIsWalkableFloor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WingedAnimal_eventOnImpactDuringFlying_Parms), &Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics::NewProp_bIsWalkableFloor_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WingedAnimal_eventOnImpactDuringFlying_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics::NewProp_bIsWalkableFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character Movement: Flying" },
		{ "Comment", "/**\n\x09* Called by WSCharacterMovementComponent to notify that we have impacted another\n\x09* object while flying.\n\x09* @param Hit : The hit result for the impacted object\n\x09* @param bIsWalkableFloor : True if the impacted object can be walked on\n\x09*/" },
		{ "ModuleRelativePath", "WingedAnimal.h" },
		{ "ToolTip", "Called by WSCharacterMovementComponent to notify that we have impacted another\nobject while flying.\n@param Hit : The hit result for the impacted object\n@param bIsWalkableFloor : True if the impacted object can be walked on" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWingedAnimal, nullptr, "OnImpactDuringFlying", nullptr, nullptr, sizeof(WingedAnimal_eventOnImpactDuringFlying_Parms), Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWingedAnimal_NoRegister()
	{
		return AWingedAnimal::StaticClass();
	}
	struct Z_Construct_UClass_AWingedAnimal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWingedAnimal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAnimalController,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWingedAnimal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWingedAnimal_FlyingTick, "FlyingTick" }, // 3696309963
		{ &Z_Construct_UFunction_AWingedAnimal_OnImpactDuringFlying, "OnImpactDuringFlying" }, // 1243954434
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWingedAnimal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WingedAnimal.h" },
		{ "ModuleRelativePath", "WingedAnimal.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWingedAnimal_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Yaw" },
		{ "Comment", "/** Min forward speed */" },
		{ "ModuleRelativePath", "WingedAnimal.h" },
		{ "ToolTip", "Min forward speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWingedAnimal_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWingedAnimal, MinSpeed), METADATA_PARAMS(Z_Construct_UClass_AWingedAnimal_Statics::NewProp_MinSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWingedAnimal_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWingedAnimal_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Pitch" },
		{ "Comment", "/** Max forward speed */" },
		{ "ModuleRelativePath", "WingedAnimal.h" },
		{ "ToolTip", "Max forward speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWingedAnimal_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWingedAnimal, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_AWingedAnimal_Statics::NewProp_MaxSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWingedAnimal_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWingedAnimal_Statics::NewProp_TurnSpeed_MetaData[] = {
		{ "Category", "Bird" },
		{ "Comment", "/** How quickly pawn can steer */" },
		{ "ModuleRelativePath", "WingedAnimal.h" },
		{ "ToolTip", "How quickly pawn can steer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWingedAnimal_Statics::NewProp_TurnSpeed = { "TurnSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWingedAnimal, TurnSpeed), METADATA_PARAMS(Z_Construct_UClass_AWingedAnimal_Statics::NewProp_TurnSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWingedAnimal_Statics::NewProp_TurnSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWingedAnimal_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "Bird" },
		{ "Comment", "/** How quickly forward speed changes */" },
		{ "ModuleRelativePath", "WingedAnimal.h" },
		{ "ToolTip", "How quickly forward speed changes" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWingedAnimal_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWingedAnimal, Acceleration), METADATA_PARAMS(Z_Construct_UClass_AWingedAnimal_Statics::NewProp_Acceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWingedAnimal_Statics::NewProp_Acceleration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWingedAnimal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWingedAnimal_Statics::NewProp_MinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWingedAnimal_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWingedAnimal_Statics::NewProp_TurnSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWingedAnimal_Statics::NewProp_Acceleration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWingedAnimal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWingedAnimal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWingedAnimal_Statics::ClassParams = {
		&AWingedAnimal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWingedAnimal_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AWingedAnimal_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AWingedAnimal_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWingedAnimal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWingedAnimal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWingedAnimal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWingedAnimal, 388867292);
	template<> UNREALASSETS_API UClass* StaticClass<AWingedAnimal>()
	{
		return AWingedAnimal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWingedAnimal(Z_Construct_UClass_AWingedAnimal, &AWingedAnimal::StaticClass, TEXT("/Script/UnrealAssets"), TEXT("AWingedAnimal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWingedAnimal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

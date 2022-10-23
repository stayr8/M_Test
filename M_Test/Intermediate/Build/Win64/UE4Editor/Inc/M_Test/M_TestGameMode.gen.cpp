// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "M_Test/M_TestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeM_TestGameMode() {}
// Cross Module References
	M_TEST_API UClass* Z_Construct_UClass_AM_TestGameMode_NoRegister();
	M_TEST_API UClass* Z_Construct_UClass_AM_TestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_M_Test();
// End Cross Module References
	void AM_TestGameMode::StaticRegisterNativesAM_TestGameMode()
	{
	}
	UClass* Z_Construct_UClass_AM_TestGameMode_NoRegister()
	{
		return AM_TestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AM_TestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AM_TestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_M_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AM_TestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "M_TestGameMode.h" },
		{ "ModuleRelativePath", "M_TestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AM_TestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AM_TestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AM_TestGameMode_Statics::ClassParams = {
		&AM_TestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AM_TestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AM_TestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AM_TestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AM_TestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AM_TestGameMode, 4067923988);
	template<> M_TEST_API UClass* StaticClass<AM_TestGameMode>()
	{
		return AM_TestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AM_TestGameMode(Z_Construct_UClass_AM_TestGameMode, &AM_TestGameMode::StaticClass, TEXT("/Script/M_Test"), TEXT("AM_TestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AM_TestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

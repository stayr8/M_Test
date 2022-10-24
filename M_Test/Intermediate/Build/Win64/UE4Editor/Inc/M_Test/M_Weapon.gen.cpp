// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "M_Test/M_Weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeM_Weapon() {}
// Cross Module References
	M_TEST_API UClass* Z_Construct_UClass_AM_Weapon_NoRegister();
	M_TEST_API UClass* Z_Construct_UClass_AM_Weapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_M_Test();
// End Cross Module References
	void AM_Weapon::StaticRegisterNativesAM_Weapon()
	{
	}
	UClass* Z_Construct_UClass_AM_Weapon_NoRegister()
	{
		return AM_Weapon::StaticClass();
	}
	struct Z_Construct_UClass_AM_Weapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AM_Weapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_M_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AM_Weapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "M_Weapon.h" },
		{ "ModuleRelativePath", "M_Weapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AM_Weapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AM_Weapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AM_Weapon_Statics::ClassParams = {
		&AM_Weapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AM_Weapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AM_Weapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AM_Weapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AM_Weapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AM_Weapon, 1943329506);
	template<> M_TEST_API UClass* StaticClass<AM_Weapon>()
	{
		return AM_Weapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AM_Weapon(Z_Construct_UClass_AM_Weapon, &AM_Weapon::StaticClass, TEXT("/Script/M_Test"), TEXT("AM_Weapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AM_Weapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

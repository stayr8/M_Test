// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "M_Test/Gauntlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGauntlet() {}
// Cross Module References
	M_TEST_API UClass* Z_Construct_UClass_AGauntlet_NoRegister();
	M_TEST_API UClass* Z_Construct_UClass_AGauntlet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_M_Test();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AGauntlet::StaticRegisterNativesAGauntlet()
	{
	}
	UClass* Z_Construct_UClass_AGauntlet_NoRegister()
	{
		return AGauntlet::StaticClass();
	}
	struct Z_Construct_UClass_AGauntlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStaticMesh2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mStaticMesh2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGauntlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_M_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGauntlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gauntlet.h" },
		{ "ModuleRelativePath", "Gauntlet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGauntlet_Statics::NewProp_mStaticMesh2_MetaData[] = {
		{ "Category", "Gauntlet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gauntlet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGauntlet_Statics::NewProp_mStaticMesh2 = { "mStaticMesh2", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGauntlet, mStaticMesh2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGauntlet_Statics::NewProp_mStaticMesh2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGauntlet_Statics::NewProp_mStaticMesh2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGauntlet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGauntlet_Statics::NewProp_mStaticMesh2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGauntlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGauntlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGauntlet_Statics::ClassParams = {
		&AGauntlet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGauntlet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGauntlet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGauntlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGauntlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGauntlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGauntlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGauntlet, 2665978439);
	template<> M_TEST_API UClass* StaticClass<AGauntlet>()
	{
		return AGauntlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGauntlet(Z_Construct_UClass_AGauntlet, &AGauntlet::StaticClass, TEXT("/Script/M_Test"), TEXT("AGauntlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGauntlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

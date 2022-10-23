// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "M_Test/M_CharacterStatComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeM_CharacterStatComponent() {}
// Cross Module References
	M_TEST_API UClass* Z_Construct_UClass_UM_CharacterStatComponent_NoRegister();
	M_TEST_API UClass* Z_Construct_UClass_UM_CharacterStatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_M_Test();
// End Cross Module References
	void UM_CharacterStatComponent::StaticRegisterNativesUM_CharacterStatComponent()
	{
	}
	UClass* Z_Construct_UClass_UM_CharacterStatComponent_NoRegister()
	{
		return UM_CharacterStatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UM_CharacterStatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentHP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UM_CharacterStatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_M_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UM_CharacterStatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "M_CharacterStatComponent.h" },
		{ "ModuleRelativePath", "M_CharacterStatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UM_CharacterStatComponent_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "M_CharacterStatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UM_CharacterStatComponent_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UM_CharacterStatComponent, Level), METADATA_PARAMS(Z_Construct_UClass_UM_CharacterStatComponent_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UM_CharacterStatComponent_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UM_CharacterStatComponent_Statics::NewProp_CurrentHP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "M_CharacterStatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UM_CharacterStatComponent_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0040000000002801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UM_CharacterStatComponent, CurrentHP), METADATA_PARAMS(Z_Construct_UClass_UM_CharacterStatComponent_Statics::NewProp_CurrentHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UM_CharacterStatComponent_Statics::NewProp_CurrentHP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UM_CharacterStatComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UM_CharacterStatComponent_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UM_CharacterStatComponent_Statics::NewProp_CurrentHP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UM_CharacterStatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UM_CharacterStatComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UM_CharacterStatComponent_Statics::ClassParams = {
		&UM_CharacterStatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UM_CharacterStatComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UM_CharacterStatComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UM_CharacterStatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UM_CharacterStatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UM_CharacterStatComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UM_CharacterStatComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UM_CharacterStatComponent, 1619976741);
	template<> M_TEST_API UClass* StaticClass<UM_CharacterStatComponent>()
	{
		return UM_CharacterStatComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UM_CharacterStatComponent(Z_Construct_UClass_UM_CharacterStatComponent, &UM_CharacterStatComponent::StaticClass, TEXT("/Script/M_Test"), TEXT("UM_CharacterStatComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UM_CharacterStatComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

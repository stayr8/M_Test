// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "M_Test/M_GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeM_GameInstance() {}
// Cross Module References
	M_TEST_API UScriptStruct* Z_Construct_UScriptStruct_FM_CharacterData();
	UPackage* Z_Construct_UPackage__Script_M_Test();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	M_TEST_API UClass* Z_Construct_UClass_UM_GameInstance_NoRegister();
	M_TEST_API UClass* Z_Construct_UClass_UM_GameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FM_CharacterData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FM_CharacterData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FM_CharacterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern M_TEST_API uint32 Get_Z_Construct_UScriptStruct_FM_CharacterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FM_CharacterData, Z_Construct_UPackage__Script_M_Test(), TEXT("M_CharacterData"), sizeof(FM_CharacterData), Get_Z_Construct_UScriptStruct_FM_CharacterData_Hash());
	}
	return Singleton;
}
template<> M_TEST_API UScriptStruct* StaticStruct<FM_CharacterData>()
{
	return FM_CharacterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FM_CharacterData(FM_CharacterData::StaticStruct, TEXT("/Script/M_Test"), TEXT("M_CharacterData"), false, nullptr, nullptr);
static struct FScriptStruct_M_Test_StaticRegisterNativesFM_CharacterData
{
	FScriptStruct_M_Test_StaticRegisterNativesFM_CharacterData()
	{
		UScriptStruct::DeferCppStructOps<FM_CharacterData>(FName(TEXT("M_CharacterData")));
	}
} ScriptStruct_M_Test_StaticRegisterNativesFM_CharacterData;
	struct Z_Construct_UScriptStruct_FM_CharacterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Attack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FM_CharacterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ????\xc3\xbc ????\n" },
		{ "ModuleRelativePath", "M_GameInstance.h" },
		{ "ToolTip", "????\xc3\xbc ????" },
	};
#endif
	void* Z_Construct_UScriptStruct_FM_CharacterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FM_CharacterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FM_CharacterData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "M_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FM_CharacterData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FM_CharacterData, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FM_CharacterData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FM_CharacterData_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FM_CharacterData_Statics::NewProp_MaxHP_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "M_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FM_CharacterData_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FM_CharacterData, MaxHP), METADATA_PARAMS(Z_Construct_UScriptStruct_FM_CharacterData_Statics::NewProp_MaxHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FM_CharacterData_Statics::NewProp_MaxHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FM_CharacterData_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "M_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FM_CharacterData_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FM_CharacterData, Attack), METADATA_PARAMS(Z_Construct_UScriptStruct_FM_CharacterData_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FM_CharacterData_Statics::NewProp_Attack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FM_CharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FM_CharacterData_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FM_CharacterData_Statics::NewProp_MaxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FM_CharacterData_Statics::NewProp_Attack,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FM_CharacterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_M_Test,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"M_CharacterData",
		sizeof(FM_CharacterData),
		alignof(FM_CharacterData),
		Z_Construct_UScriptStruct_FM_CharacterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FM_CharacterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FM_CharacterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FM_CharacterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FM_CharacterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FM_CharacterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_M_Test();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("M_CharacterData"), sizeof(FM_CharacterData), Get_Z_Construct_UScriptStruct_FM_CharacterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FM_CharacterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FM_CharacterData_Hash() { return 2846397788U; }
	void UM_GameInstance::StaticRegisterNativesUM_GameInstance()
	{
	}
	UClass* Z_Construct_UClass_UM_GameInstance_NoRegister()
	{
		return UM_GameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UM_GameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M_CharacterTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M_CharacterTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UM_GameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_M_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UM_GameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "M_GameInstance.h" },
		{ "ModuleRelativePath", "M_GameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UM_GameInstance_Statics::NewProp_M_CharacterTable_MetaData[] = {
		{ "ModuleRelativePath", "M_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UM_GameInstance_Statics::NewProp_M_CharacterTable = { "M_CharacterTable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UM_GameInstance, M_CharacterTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UM_GameInstance_Statics::NewProp_M_CharacterTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UM_GameInstance_Statics::NewProp_M_CharacterTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UM_GameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UM_GameInstance_Statics::NewProp_M_CharacterTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UM_GameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UM_GameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UM_GameInstance_Statics::ClassParams = {
		&UM_GameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UM_GameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UM_GameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UM_GameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UM_GameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UM_GameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UM_GameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UM_GameInstance, 2282596060);
	template<> M_TEST_API UClass* StaticClass<UM_GameInstance>()
	{
		return UM_GameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UM_GameInstance(Z_Construct_UClass_UM_GameInstance, &UM_GameInstance::StaticClass, TEXT("/Script/M_Test"), TEXT("UM_GameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UM_GameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

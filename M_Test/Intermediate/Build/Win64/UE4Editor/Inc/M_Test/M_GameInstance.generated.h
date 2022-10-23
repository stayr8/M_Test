// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef M_TEST_M_GameInstance_generated_h
#error "M_GameInstance.generated.h already included, missing '#pragma once' in M_GameInstance.h"
#endif
#define M_TEST_M_GameInstance_generated_h

#define M_Test_Source_M_Test_M_GameInstance_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FM_CharacterData_Statics; \
	M_TEST_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> M_TEST_API UScriptStruct* StaticStruct<struct FM_CharacterData>();

#define M_Test_Source_M_Test_M_GameInstance_h_32_SPARSE_DATA
#define M_Test_Source_M_Test_M_GameInstance_h_32_RPC_WRAPPERS
#define M_Test_Source_M_Test_M_GameInstance_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define M_Test_Source_M_Test_M_GameInstance_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUM_GameInstance(); \
	friend struct Z_Construct_UClass_UM_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UM_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/M_Test"), NO_API) \
	DECLARE_SERIALIZER(UM_GameInstance)


#define M_Test_Source_M_Test_M_GameInstance_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUM_GameInstance(); \
	friend struct Z_Construct_UClass_UM_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UM_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/M_Test"), NO_API) \
	DECLARE_SERIALIZER(UM_GameInstance)


#define M_Test_Source_M_Test_M_GameInstance_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UM_GameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UM_GameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UM_GameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UM_GameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UM_GameInstance(UM_GameInstance&&); \
	NO_API UM_GameInstance(const UM_GameInstance&); \
public:


#define M_Test_Source_M_Test_M_GameInstance_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UM_GameInstance(UM_GameInstance&&); \
	NO_API UM_GameInstance(const UM_GameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UM_GameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UM_GameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UM_GameInstance)


#define M_Test_Source_M_Test_M_GameInstance_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__M_CharacterTable() { return STRUCT_OFFSET(UM_GameInstance, M_CharacterTable); }


#define M_Test_Source_M_Test_M_GameInstance_h_29_PROLOG
#define M_Test_Source_M_Test_M_GameInstance_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	M_Test_Source_M_Test_M_GameInstance_h_32_PRIVATE_PROPERTY_OFFSET \
	M_Test_Source_M_Test_M_GameInstance_h_32_SPARSE_DATA \
	M_Test_Source_M_Test_M_GameInstance_h_32_RPC_WRAPPERS \
	M_Test_Source_M_Test_M_GameInstance_h_32_INCLASS \
	M_Test_Source_M_Test_M_GameInstance_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define M_Test_Source_M_Test_M_GameInstance_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	M_Test_Source_M_Test_M_GameInstance_h_32_PRIVATE_PROPERTY_OFFSET \
	M_Test_Source_M_Test_M_GameInstance_h_32_SPARSE_DATA \
	M_Test_Source_M_Test_M_GameInstance_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	M_Test_Source_M_Test_M_GameInstance_h_32_INCLASS_NO_PURE_DECLS \
	M_Test_Source_M_Test_M_GameInstance_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> M_TEST_API UClass* StaticClass<class UM_GameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID M_Test_Source_M_Test_M_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

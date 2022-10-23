// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef M_TEST_M_TestGameMode_generated_h
#error "M_TestGameMode.generated.h already included, missing '#pragma once' in M_TestGameMode.h"
#endif
#define M_TEST_M_TestGameMode_generated_h

#define M_Test_Source_M_Test_M_TestGameMode_h_12_SPARSE_DATA
#define M_Test_Source_M_Test_M_TestGameMode_h_12_RPC_WRAPPERS
#define M_Test_Source_M_Test_M_TestGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define M_Test_Source_M_Test_M_TestGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAM_TestGameMode(); \
	friend struct Z_Construct_UClass_AM_TestGameMode_Statics; \
public: \
	DECLARE_CLASS(AM_TestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/M_Test"), M_TEST_API) \
	DECLARE_SERIALIZER(AM_TestGameMode)


#define M_Test_Source_M_Test_M_TestGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAM_TestGameMode(); \
	friend struct Z_Construct_UClass_AM_TestGameMode_Statics; \
public: \
	DECLARE_CLASS(AM_TestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/M_Test"), M_TEST_API) \
	DECLARE_SERIALIZER(AM_TestGameMode)


#define M_Test_Source_M_Test_M_TestGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	M_TEST_API AM_TestGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AM_TestGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(M_TEST_API, AM_TestGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AM_TestGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	M_TEST_API AM_TestGameMode(AM_TestGameMode&&); \
	M_TEST_API AM_TestGameMode(const AM_TestGameMode&); \
public:


#define M_Test_Source_M_Test_M_TestGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	M_TEST_API AM_TestGameMode(AM_TestGameMode&&); \
	M_TEST_API AM_TestGameMode(const AM_TestGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(M_TEST_API, AM_TestGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AM_TestGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AM_TestGameMode)


#define M_Test_Source_M_Test_M_TestGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AM_TestGameMode, CurrentWidget); } \
	FORCEINLINE static uint32 __PPO__HUDWidget() { return STRUCT_OFFSET(AM_TestGameMode, HUDWidget); }


#define M_Test_Source_M_Test_M_TestGameMode_h_9_PROLOG
#define M_Test_Source_M_Test_M_TestGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	M_Test_Source_M_Test_M_TestGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	M_Test_Source_M_Test_M_TestGameMode_h_12_SPARSE_DATA \
	M_Test_Source_M_Test_M_TestGameMode_h_12_RPC_WRAPPERS \
	M_Test_Source_M_Test_M_TestGameMode_h_12_INCLASS \
	M_Test_Source_M_Test_M_TestGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define M_Test_Source_M_Test_M_TestGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	M_Test_Source_M_Test_M_TestGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	M_Test_Source_M_Test_M_TestGameMode_h_12_SPARSE_DATA \
	M_Test_Source_M_Test_M_TestGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	M_Test_Source_M_Test_M_TestGameMode_h_12_INCLASS_NO_PURE_DECLS \
	M_Test_Source_M_Test_M_TestGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> M_TEST_API UClass* StaticClass<class AM_TestGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID M_Test_Source_M_Test_M_TestGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

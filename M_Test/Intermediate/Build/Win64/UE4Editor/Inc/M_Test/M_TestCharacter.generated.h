// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDamageEvent;
class AController;
class AActor;
#ifdef M_TEST_M_TestCharacter_generated_h
#error "M_TestCharacter.generated.h already included, missing '#pragma once' in M_TestCharacter.h"
#endif
#define M_TEST_M_TestCharacter_generated_h

#define M_Test_Source_M_Test_M_TestCharacter_h_12_SPARSE_DATA
#define M_Test_Source_M_Test_M_TestCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execattach_Weapon);


#define M_Test_Source_M_Test_M_TestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execattach_Weapon);


#define M_Test_Source_M_Test_M_TestCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAM_TestCharacter(); \
	friend struct Z_Construct_UClass_AM_TestCharacter_Statics; \
public: \
	DECLARE_CLASS(AM_TestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/M_Test"), NO_API) \
	DECLARE_SERIALIZER(AM_TestCharacter)


#define M_Test_Source_M_Test_M_TestCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAM_TestCharacter(); \
	friend struct Z_Construct_UClass_AM_TestCharacter_Statics; \
public: \
	DECLARE_CLASS(AM_TestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/M_Test"), NO_API) \
	DECLARE_SERIALIZER(AM_TestCharacter)


#define M_Test_Source_M_Test_M_TestCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AM_TestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AM_TestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AM_TestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AM_TestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AM_TestCharacter(AM_TestCharacter&&); \
	NO_API AM_TestCharacter(const AM_TestCharacter&); \
public:


#define M_Test_Source_M_Test_M_TestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AM_TestCharacter(AM_TestCharacter&&); \
	NO_API AM_TestCharacter(const AM_TestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AM_TestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AM_TestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AM_TestCharacter)


#define M_Test_Source_M_Test_M_TestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AM_TestCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AM_TestCharacter, FollowCamera); }


#define M_Test_Source_M_Test_M_TestCharacter_h_9_PROLOG
#define M_Test_Source_M_Test_M_TestCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	M_Test_Source_M_Test_M_TestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	M_Test_Source_M_Test_M_TestCharacter_h_12_SPARSE_DATA \
	M_Test_Source_M_Test_M_TestCharacter_h_12_RPC_WRAPPERS \
	M_Test_Source_M_Test_M_TestCharacter_h_12_INCLASS \
	M_Test_Source_M_Test_M_TestCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define M_Test_Source_M_Test_M_TestCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	M_Test_Source_M_Test_M_TestCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	M_Test_Source_M_Test_M_TestCharacter_h_12_SPARSE_DATA \
	M_Test_Source_M_Test_M_TestCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	M_Test_Source_M_Test_M_TestCharacter_h_12_INCLASS_NO_PURE_DECLS \
	M_Test_Source_M_Test_M_TestCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> M_TEST_API UClass* StaticClass<class AM_TestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID M_Test_Source_M_Test_M_TestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

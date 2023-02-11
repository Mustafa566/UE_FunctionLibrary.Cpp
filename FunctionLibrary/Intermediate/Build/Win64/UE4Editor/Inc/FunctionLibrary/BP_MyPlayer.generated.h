// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FUNCTIONLIBRARY_BP_MyPlayer_generated_h
#error "BP_MyPlayer.generated.h already included, missing '#pragma once' in BP_MyPlayer.h"
#endif
#define FUNCTIONLIBRARY_BP_MyPlayer_generated_h

#define FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_SPARSE_DATA
#define FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOwnPrint); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOwnPrint); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_MyPlayer(); \
	friend struct Z_Construct_UClass_ABP_MyPlayer_Statics; \
public: \
	DECLARE_CLASS(ABP_MyPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ABP_MyPlayer)


#define FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABP_MyPlayer(); \
	friend struct Z_Construct_UClass_ABP_MyPlayer_Statics; \
public: \
	DECLARE_CLASS(ABP_MyPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionLibrary"), NO_API) \
	DECLARE_SERIALIZER(ABP_MyPlayer)


#define FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_MyPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_MyPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_MyPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_MyPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_MyPlayer(ABP_MyPlayer&&); \
	NO_API ABP_MyPlayer(const ABP_MyPlayer&); \
public:


#define FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_MyPlayer(ABP_MyPlayer&&); \
	NO_API ABP_MyPlayer(const ABP_MyPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_MyPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_MyPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABP_MyPlayer)


#define FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_PRIVATE_PROPERTY_OFFSET
#define FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_9_PROLOG
#define FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_SPARSE_DATA \
	FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_RPC_WRAPPERS \
	FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_INCLASS \
	FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_SPARSE_DATA \
	FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_INCLASS_NO_PURE_DECLS \
	FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONLIBRARY_API UClass* StaticClass<class ABP_MyPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FunctionLibrary_Source_FunctionLibrary_Public_BP_MyPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

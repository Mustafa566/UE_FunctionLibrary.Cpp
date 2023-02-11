// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionLibrary/Public/BP_MyPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_MyPlayer() {}
// Cross Module References
	FUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ABP_MyPlayer_NoRegister();
	FUNCTIONLIBRARY_API UClass* Z_Construct_UClass_ABP_MyPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FunctionLibrary();
// End Cross Module References
	DEFINE_FUNCTION(ABP_MyPlayer::execOwnPrint)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Subject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OwnPrint(Z_Param_Subject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MyPlayer::execInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MyPlayer::execStopJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MyPlayer::execStartJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MyPlayer::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MyPlayer::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_value);
		P_NATIVE_END;
	}
	void ABP_MyPlayer::StaticRegisterNativesABP_MyPlayer()
	{
		UClass* Class = ABP_MyPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &ABP_MyPlayer::execInteract },
			{ "MoveForward", &ABP_MyPlayer::execMoveForward },
			{ "MoveRight", &ABP_MyPlayer::execMoveRight },
			{ "OwnPrint", &ABP_MyPlayer::execOwnPrint },
			{ "StartJump", &ABP_MyPlayer::execStartJump },
			{ "StopJump", &ABP_MyPlayer::execStopJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_MyPlayer_Interact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MyPlayer_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MyPlayer_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MyPlayer, nullptr, "Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MyPlayer_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MyPlayer_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MyPlayer_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MyPlayer_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MyPlayer_MoveForward_Statics
	{
		struct BP_MyPlayer_eventMoveForward_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_MyPlayer_MoveForward_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_MyPlayer_eventMoveForward_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_MyPlayer_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MyPlayer_MoveForward_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MyPlayer_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MyPlayer_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MyPlayer, nullptr, "MoveForward", nullptr, nullptr, sizeof(BP_MyPlayer_eventMoveForward_Parms), Z_Construct_UFunction_ABP_MyPlayer_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MyPlayer_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MyPlayer_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MyPlayer_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MyPlayer_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MyPlayer_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MyPlayer_MoveRight_Statics
	{
		struct BP_MyPlayer_eventMoveRight_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_MyPlayer_MoveRight_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_MyPlayer_eventMoveRight_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_MyPlayer_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MyPlayer_MoveRight_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MyPlayer_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MyPlayer_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MyPlayer, nullptr, "MoveRight", nullptr, nullptr, sizeof(BP_MyPlayer_eventMoveRight_Parms), Z_Construct_UFunction_ABP_MyPlayer_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MyPlayer_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MyPlayer_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MyPlayer_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MyPlayer_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MyPlayer_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MyPlayer_OwnPrint_Statics
	{
		struct BP_MyPlayer_eventOwnPrint_Parms
		{
			FString Subject;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABP_MyPlayer_OwnPrint_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_MyPlayer_eventOwnPrint_Parms, Subject), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_MyPlayer_OwnPrint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MyPlayer_OwnPrint_Statics::NewProp_Subject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MyPlayer_OwnPrint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MyPlayer_OwnPrint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MyPlayer, nullptr, "OwnPrint", nullptr, nullptr, sizeof(BP_MyPlayer_eventOwnPrint_Parms), Z_Construct_UFunction_ABP_MyPlayer_OwnPrint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MyPlayer_OwnPrint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MyPlayer_OwnPrint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MyPlayer_OwnPrint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MyPlayer_OwnPrint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MyPlayer_OwnPrint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MyPlayer_StartJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MyPlayer_StartJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MyPlayer_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MyPlayer, nullptr, "StartJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MyPlayer_StartJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MyPlayer_StartJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MyPlayer_StartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MyPlayer_StartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MyPlayer_StopJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MyPlayer_StopJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_MyPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MyPlayer_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MyPlayer, nullptr, "StopJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MyPlayer_StopJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MyPlayer_StopJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MyPlayer_StopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MyPlayer_StopJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_MyPlayer_NoRegister()
	{
		return ABP_MyPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ABP_MyPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_MyPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_MyPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_MyPlayer_Interact, "Interact" }, // 797285212
		{ &Z_Construct_UFunction_ABP_MyPlayer_MoveForward, "MoveForward" }, // 1749628087
		{ &Z_Construct_UFunction_ABP_MyPlayer_MoveRight, "MoveRight" }, // 3503487265
		{ &Z_Construct_UFunction_ABP_MyPlayer_OwnPrint, "OwnPrint" }, // 1026844975
		{ &Z_Construct_UFunction_ABP_MyPlayer_StartJump, "StartJump" }, // 2403460595
		{ &Z_Construct_UFunction_ABP_MyPlayer_StopJump, "StopJump" }, // 1923800317
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MyPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BP_MyPlayer.h" },
		{ "ModuleRelativePath", "Public/BP_MyPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_MyPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_MyPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_MyPlayer_Statics::ClassParams = {
		&ABP_MyPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_MyPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MyPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_MyPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_MyPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABP_MyPlayer, 1604181180);
	template<> FUNCTIONLIBRARY_API UClass* StaticClass<ABP_MyPlayer>()
	{
		return ABP_MyPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_MyPlayer(Z_Construct_UClass_ABP_MyPlayer, &ABP_MyPlayer::StaticClass, TEXT("/Script/FunctionLibrary"), TEXT("ABP_MyPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_MyPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

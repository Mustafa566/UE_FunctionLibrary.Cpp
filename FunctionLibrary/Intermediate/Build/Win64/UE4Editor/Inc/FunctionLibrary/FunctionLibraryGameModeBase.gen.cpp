// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionLibrary/FunctionLibraryGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionLibraryGameModeBase() {}
// Cross Module References
	FUNCTIONLIBRARY_API UClass* Z_Construct_UClass_AFunctionLibraryGameModeBase_NoRegister();
	FUNCTIONLIBRARY_API UClass* Z_Construct_UClass_AFunctionLibraryGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FunctionLibrary();
// End Cross Module References
	void AFunctionLibraryGameModeBase::StaticRegisterNativesAFunctionLibraryGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFunctionLibraryGameModeBase_NoRegister()
	{
		return AFunctionLibraryGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFunctionLibraryGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFunctionLibraryGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionLibraryGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FunctionLibraryGameModeBase.h" },
		{ "ModuleRelativePath", "FunctionLibraryGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFunctionLibraryGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFunctionLibraryGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFunctionLibraryGameModeBase_Statics::ClassParams = {
		&AFunctionLibraryGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFunctionLibraryGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFunctionLibraryGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFunctionLibraryGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFunctionLibraryGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFunctionLibraryGameModeBase, 2201574348);
	template<> FUNCTIONLIBRARY_API UClass* StaticClass<AFunctionLibraryGameModeBase>()
	{
		return AFunctionLibraryGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFunctionLibraryGameModeBase(Z_Construct_UClass_AFunctionLibraryGameModeBase, &AFunctionLibraryGameModeBase::StaticClass, TEXT("/Script/FunctionLibrary"), TEXT("AFunctionLibraryGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFunctionLibraryGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

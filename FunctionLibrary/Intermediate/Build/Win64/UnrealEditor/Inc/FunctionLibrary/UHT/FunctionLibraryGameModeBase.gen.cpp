// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionLibrary/FunctionLibraryGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionLibraryGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FUNCTIONLIBRARY_API UClass* Z_Construct_UClass_AFunctionLibraryGameModeBase();
	FUNCTIONLIBRARY_API UClass* Z_Construct_UClass_AFunctionLibraryGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FunctionLibrary();
// End Cross Module References
	void AFunctionLibraryGameModeBase::StaticRegisterNativesAFunctionLibraryGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFunctionLibraryGameModeBase);
	UClass* Z_Construct_UClass_AFunctionLibraryGameModeBase_NoRegister()
	{
		return AFunctionLibraryGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFunctionLibraryGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFunctionLibraryGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionLibrary,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionLibraryGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FunctionLibraryGameModeBase.h" },
		{ "ModuleRelativePath", "FunctionLibraryGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFunctionLibraryGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFunctionLibraryGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFunctionLibraryGameModeBase_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_AFunctionLibraryGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFunctionLibraryGameModeBase.OuterSingleton, Z_Construct_UClass_AFunctionLibraryGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFunctionLibraryGameModeBase.OuterSingleton;
	}
	template<> FUNCTIONLIBRARY_API UClass* StaticClass<AFunctionLibraryGameModeBase>()
	{
		return AFunctionLibraryGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFunctionLibraryGameModeBase);
	AFunctionLibraryGameModeBase::~AFunctionLibraryGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Git_Repository_UE_FunctionLibrary_Cpp_FunctionLibrary_Source_FunctionLibrary_FunctionLibraryGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Repository_UE_FunctionLibrary_Cpp_FunctionLibrary_Source_FunctionLibrary_FunctionLibraryGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFunctionLibraryGameModeBase, AFunctionLibraryGameModeBase::StaticClass, TEXT("AFunctionLibraryGameModeBase"), &Z_Registration_Info_UClass_AFunctionLibraryGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFunctionLibraryGameModeBase), 3009517575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Repository_UE_FunctionLibrary_Cpp_FunctionLibrary_Source_FunctionLibrary_FunctionLibraryGameModeBase_h_192246613(TEXT("/Script/FunctionLibrary"),
		Z_CompiledInDeferFile_FID_Git_Repository_UE_FunctionLibrary_Cpp_FunctionLibrary_Source_FunctionLibrary_FunctionLibraryGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Repository_UE_FunctionLibrary_Cpp_FunctionLibrary_Source_FunctionLibrary_FunctionLibraryGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

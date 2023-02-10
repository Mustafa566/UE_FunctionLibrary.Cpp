// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionLibrary/Public/MustafaLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMustafaLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UMustafaLibrary();
	FUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UMustafaLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FunctionLibrary();
// End Cross Module References
	DEFINE_FUNCTION(UMustafaLibrary::execMyPureMethod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMustafaLibrary::MyPureMethod();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMustafaLibrary::execAddTwoNumbers)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_A);
		P_GET_PROPERTY(FFloatProperty,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMustafaLibrary::AddTwoNumbers(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMustafaLibrary::exectext)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMustafaLibrary::text(Z_Param_Name);
		P_NATIVE_END;
	}
	void UMustafaLibrary::StaticRegisterNativesUMustafaLibrary()
	{
		UClass* Class = UMustafaLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTwoNumbers", &UMustafaLibrary::execAddTwoNumbers },
			{ "MyPureMethod", &UMustafaLibrary::execMyPureMethod },
			{ "text", &UMustafaLibrary::exectext },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics
	{
		struct MustafaLibrary_eventAddTwoNumbers_Parms
		{
			float A;
			float B;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MustafaLibrary_eventAddTwoNumbers_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MustafaLibrary_eventAddTwoNumbers_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MustafaLibrary_eventAddTwoNumbers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::Function_MetaDataParams[] = {
		{ "Category", "mustafa library" },
		{ "ModuleRelativePath", "Public/MustafaLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMustafaLibrary, nullptr, "AddTwoNumbers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::MustafaLibrary_eventAddTwoNumbers_Parms), Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics
	{
		struct MustafaLibrary_eventMyPureMethod_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MustafaLibrary_eventMyPureMethod_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MustafaLibrary_eventMyPureMethod_Parms), &Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "mustafa library" },
		{ "Comment", "// Pure function with bool\n" },
		{ "ModuleRelativePath", "Public/MustafaLibrary.h" },
		{ "ToolTip", "Pure function with bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMustafaLibrary, nullptr, "MyPureMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::MustafaLibrary_eventMyPureMethod_Parms), Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMustafaLibrary_MyPureMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMustafaLibrary_text_Statics
	{
		struct MustafaLibrary_eventtext_Parms
		{
			FString Name;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMustafaLibrary_text_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MustafaLibrary_eventtext_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMustafaLibrary_text_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MustafaLibrary_eventtext_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMustafaLibrary_text_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMustafaLibrary_text_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMustafaLibrary_text_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMustafaLibrary_text_Statics::Function_MetaDataParams[] = {
		{ "Category", "mustafa library" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Public/MustafaLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMustafaLibrary_text_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMustafaLibrary, nullptr, "text", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMustafaLibrary_text_Statics::MustafaLibrary_eventtext_Parms), Z_Construct_UFunction_UMustafaLibrary_text_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMustafaLibrary_text_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMustafaLibrary_text_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMustafaLibrary_text_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMustafaLibrary_text()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMustafaLibrary_text_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMustafaLibrary);
	UClass* Z_Construct_UClass_UMustafaLibrary_NoRegister()
	{
		return UMustafaLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMustafaLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMustafaLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMustafaLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers, "AddTwoNumbers" }, // 2330112882
		{ &Z_Construct_UFunction_UMustafaLibrary_MyPureMethod, "MyPureMethod" }, // 1574315131
		{ &Z_Construct_UFunction_UMustafaLibrary_text, "text" }, // 3870441955
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMustafaLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MustafaLibrary.h" },
		{ "ModuleRelativePath", "Public/MustafaLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMustafaLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMustafaLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMustafaLibrary_Statics::ClassParams = {
		&UMustafaLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMustafaLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMustafaLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMustafaLibrary()
	{
		if (!Z_Registration_Info_UClass_UMustafaLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMustafaLibrary.OuterSingleton, Z_Construct_UClass_UMustafaLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMustafaLibrary.OuterSingleton;
	}
	template<> FUNCTIONLIBRARY_API UClass* StaticClass<UMustafaLibrary>()
	{
		return UMustafaLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMustafaLibrary);
	UMustafaLibrary::~UMustafaLibrary() {}
	struct Z_CompiledInDeferFile_FID_Git_Repository_UE_FunctionLibrary_Cpp_FunctionLibrary_Source_FunctionLibrary_Public_MustafaLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Repository_UE_FunctionLibrary_Cpp_FunctionLibrary_Source_FunctionLibrary_Public_MustafaLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMustafaLibrary, UMustafaLibrary::StaticClass, TEXT("UMustafaLibrary"), &Z_Registration_Info_UClass_UMustafaLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMustafaLibrary), 2298714372U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Repository_UE_FunctionLibrary_Cpp_FunctionLibrary_Source_FunctionLibrary_Public_MustafaLibrary_h_4113373280(TEXT("/Script/FunctionLibrary"),
		Z_CompiledInDeferFile_FID_Git_Repository_UE_FunctionLibrary_Cpp_FunctionLibrary_Source_FunctionLibrary_Public_MustafaLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Repository_UE_FunctionLibrary_Cpp_FunctionLibrary_Source_FunctionLibrary_Public_MustafaLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

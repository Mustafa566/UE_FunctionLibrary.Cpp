// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionLibrary/Public/MustafaLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMustafaLibrary() {}
// Cross Module References
	FUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UMustafaLibrary_NoRegister();
	FUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UMustafaLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FunctionLibrary();
// End Cross Module References
	DEFINE_FUNCTION(UMustafaLibrary::execIncVariable)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_variable);
		P_GET_PROPERTY(FFloatProperty,Z_Param_number);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->IncVariable(Z_Param_variable,Z_Param_number);
		P_NATIVE_END;
	}
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
			{ "IncVariable", &UMustafaLibrary::execIncVariable },
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
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MustafaLibrary_eventAddTwoNumbers_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MustafaLibrary_eventAddTwoNumbers_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MustafaLibrary_eventAddTwoNumbers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::Function_MetaDataParams[] = {
		{ "Category", "mustafa library" },
		{ "ModuleRelativePath", "Public/MustafaLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMustafaLibrary, nullptr, "AddTwoNumbers", nullptr, nullptr, sizeof(MustafaLibrary_eventAddTwoNumbers_Parms), Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMustafaLibrary_IncVariable_Statics
	{
		struct MustafaLibrary_eventIncVariable_Parms
		{
			float variable;
			float number;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_variable;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_number;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMustafaLibrary_IncVariable_Statics::NewProp_variable = { "variable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MustafaLibrary_eventIncVariable_Parms, variable), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMustafaLibrary_IncVariable_Statics::NewProp_number = { "number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MustafaLibrary_eventIncVariable_Parms, number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMustafaLibrary_IncVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MustafaLibrary_eventIncVariable_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMustafaLibrary_IncVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMustafaLibrary_IncVariable_Statics::NewProp_variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMustafaLibrary_IncVariable_Statics::NewProp_number,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMustafaLibrary_IncVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMustafaLibrary_IncVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "mustafa library" },
		{ "ModuleRelativePath", "Public/MustafaLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMustafaLibrary_IncVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMustafaLibrary, nullptr, "IncVariable", nullptr, nullptr, sizeof(MustafaLibrary_eventIncVariable_Parms), Z_Construct_UFunction_UMustafaLibrary_IncVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMustafaLibrary_IncVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMustafaLibrary_IncVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMustafaLibrary_IncVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMustafaLibrary_IncVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMustafaLibrary_IncVariable_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MustafaLibrary_eventMyPureMethod_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MustafaLibrary_eventMyPureMethod_Parms), &Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "mustafa library" },
		{ "Comment", "// Pure function with bool\n" },
		{ "ModuleRelativePath", "Public/MustafaLibrary.h" },
		{ "ToolTip", "Pure function with bool" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMustafaLibrary, nullptr, "MyPureMethod", nullptr, nullptr, sizeof(MustafaLibrary_eventMyPureMethod_Parms), Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMustafaLibrary_MyPureMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMustafaLibrary_MyPureMethod_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMustafaLibrary_text_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MustafaLibrary_eventtext_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMustafaLibrary_text_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MustafaLibrary_eventtext_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMustafaLibrary_text_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMustafaLibrary_text_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMustafaLibrary_text_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMustafaLibrary_text_Statics::Function_MetaDataParams[] = {
		{ "Category", "mustafa library" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "Public/MustafaLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMustafaLibrary_text_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMustafaLibrary, nullptr, "text", nullptr, nullptr, sizeof(MustafaLibrary_eventtext_Parms), Z_Construct_UFunction_UMustafaLibrary_text_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMustafaLibrary_text_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMustafaLibrary_text_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMustafaLibrary_text_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMustafaLibrary_text()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMustafaLibrary_text_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMustafaLibrary_NoRegister()
	{
		return UMustafaLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMustafaLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMustafaLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMustafaLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMustafaLibrary_AddTwoNumbers, "AddTwoNumbers" }, // 977094576
		{ &Z_Construct_UFunction_UMustafaLibrary_IncVariable, "IncVariable" }, // 755884776
		{ &Z_Construct_UFunction_UMustafaLibrary_MyPureMethod, "MyPureMethod" }, // 2119091932
		{ &Z_Construct_UFunction_UMustafaLibrary_text, "text" }, // 960973338
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMustafaLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MustafaLibrary.h" },
		{ "ModuleRelativePath", "Public/MustafaLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMustafaLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMustafaLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMustafaLibrary_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMustafaLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMustafaLibrary, 2060921996);
	template<> FUNCTIONLIBRARY_API UClass* StaticClass<UMustafaLibrary>()
	{
		return UMustafaLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMustafaLibrary(Z_Construct_UClass_UMustafaLibrary, &UMustafaLibrary::StaticClass, TEXT("/Script/FunctionLibrary"), TEXT("UMustafaLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMustafaLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

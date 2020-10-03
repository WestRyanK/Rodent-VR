// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/StopConditions/TimeLimitStopCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeLimitStopCondition() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UTimeLimitStopCondition_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UTimeLimitStopCondition();
	RODENTVR_API UClass* Z_Construct_UClass_UStopCondition();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
// End Cross Module References
	DEFINE_FUNCTION(UTimeLimitStopCondition::execSetTimeLimitSec)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeLimitSecValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeLimitSec(Z_Param_TimeLimitSecValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimeLimitStopCondition::execGetTimeLimitSec)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeLimitSec();
		P_NATIVE_END;
	}
	void UTimeLimitStopCondition::StaticRegisterNativesUTimeLimitStopCondition()
	{
		UClass* Class = UTimeLimitStopCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTimeLimitSec", &UTimeLimitStopCondition::execGetTimeLimitSec },
			{ "SetTimeLimitSec", &UTimeLimitStopCondition::execSetTimeLimitSec },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimeLimitStopCondition_GetTimeLimitSec_Statics
	{
		struct TimeLimitStopCondition_eventGetTimeLimitSec_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimeLimitStopCondition_GetTimeLimitSec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeLimitStopCondition_eventGetTimeLimitSec_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeLimitStopCondition_GetTimeLimitSec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeLimitStopCondition_GetTimeLimitSec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeLimitStopCondition_GetTimeLimitSec_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/StopConditions/TimeLimitStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeLimitStopCondition_GetTimeLimitSec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeLimitStopCondition, nullptr, "GetTimeLimitSec", nullptr, nullptr, sizeof(TimeLimitStopCondition_eventGetTimeLimitSec_Parms), Z_Construct_UFunction_UTimeLimitStopCondition_GetTimeLimitSec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeLimitStopCondition_GetTimeLimitSec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeLimitStopCondition_GetTimeLimitSec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeLimitStopCondition_GetTimeLimitSec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeLimitStopCondition_GetTimeLimitSec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeLimitStopCondition_GetTimeLimitSec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeLimitStopCondition_SetTimeLimitSec_Statics
	{
		struct TimeLimitStopCondition_eventSetTimeLimitSec_Parms
		{
			float TimeLimitSecValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLimitSecValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimeLimitStopCondition_SetTimeLimitSec_Statics::NewProp_TimeLimitSecValue = { "TimeLimitSecValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeLimitStopCondition_eventSetTimeLimitSec_Parms, TimeLimitSecValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeLimitStopCondition_SetTimeLimitSec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeLimitStopCondition_SetTimeLimitSec_Statics::NewProp_TimeLimitSecValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeLimitStopCondition_SetTimeLimitSec_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/StopConditions/TimeLimitStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeLimitStopCondition_SetTimeLimitSec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeLimitStopCondition, nullptr, "SetTimeLimitSec", nullptr, nullptr, sizeof(TimeLimitStopCondition_eventSetTimeLimitSec_Parms), Z_Construct_UFunction_UTimeLimitStopCondition_SetTimeLimitSec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeLimitStopCondition_SetTimeLimitSec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeLimitStopCondition_SetTimeLimitSec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeLimitStopCondition_SetTimeLimitSec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeLimitStopCondition_SetTimeLimitSec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeLimitStopCondition_SetTimeLimitSec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTimeLimitStopCondition_NoRegister()
	{
		return UTimeLimitStopCondition::StaticClass();
	}
	struct Z_Construct_UClass_UTimeLimitStopCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLimitSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLimitSec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeLimitStopCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStopCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimeLimitStopCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimeLimitStopCondition_GetTimeLimitSec, "GetTimeLimitSec" }, // 3502570420
		{ &Z_Construct_UFunction_UTimeLimitStopCondition_SetTimeLimitSec, "SetTimeLimitSec" }, // 241379044
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeLimitStopCondition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "StopConditions/TimeLimitStopCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/StopConditions/TimeLimitStopCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeLimitStopCondition_Statics::NewProp_TimeLimitSec_MetaData[] = {
		{ "BlueprintGetter", "GetTimeLimitSec" },
		{ "BlueprintSetter", "SetTimeLimitSec" },
		{ "Category", "TimeLimitStopCondition" },
		{ "ModuleRelativePath", "Private/StopConditions/TimeLimitStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimeLimitStopCondition_Statics::NewProp_TimeLimitSec = { "TimeLimitSec", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimeLimitStopCondition, TimeLimitSec), METADATA_PARAMS(Z_Construct_UClass_UTimeLimitStopCondition_Statics::NewProp_TimeLimitSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeLimitStopCondition_Statics::NewProp_TimeLimitSec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimeLimitStopCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeLimitStopCondition_Statics::NewProp_TimeLimitSec,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeLimitStopCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeLimitStopCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimeLimitStopCondition_Statics::ClassParams = {
		&UTimeLimitStopCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTimeLimitStopCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimeLimitStopCondition_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTimeLimitStopCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeLimitStopCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimeLimitStopCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimeLimitStopCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimeLimitStopCondition, 1835441130);
	template<> RODENTVR_API UClass* StaticClass<UTimeLimitStopCondition>()
	{
		return UTimeLimitStopCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimeLimitStopCondition(Z_Construct_UClass_UTimeLimitStopCondition, &UTimeLimitStopCondition::StaticClass, TEXT("/Script/RodentVR"), TEXT("UTimeLimitStopCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeLimitStopCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

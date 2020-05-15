// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/StopConditions/StopCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStopCondition() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UStopCondition_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UStopCondition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UFunction* Z_Construct_UFunction_UStopCondition_GetConditionType();
// End Cross Module References
	void UStopCondition::StaticRegisterNativesUStopCondition()
	{
		UClass* Class = UStopCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConditionType", &UStopCondition::execGetConditionType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStopCondition_GetConditionType_Statics
	{
		struct StopCondition_eventGetConditionType_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStopCondition_GetConditionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StopCondition_eventGetConditionType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStopCondition_GetConditionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStopCondition_GetConditionType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStopCondition_GetConditionType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/StopConditions/StopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStopCondition_GetConditionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStopCondition, nullptr, "GetConditionType", nullptr, nullptr, sizeof(StopCondition_eventGetConditionType_Parms), Z_Construct_UFunction_UStopCondition_GetConditionType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStopCondition_GetConditionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStopCondition_GetConditionType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStopCondition_GetConditionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStopCondition_GetConditionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStopCondition_GetConditionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStopCondition_NoRegister()
	{
		return UStopCondition::StaticClass();
	}
	struct Z_Construct_UClass_UStopCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConditionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStopCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStopCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStopCondition_GetConditionType, "GetConditionType" }, // 3689387819
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStopCondition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StopConditions/StopCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/StopConditions/StopCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStopCondition_Statics::NewProp_ConditionType_MetaData[] = {
		{ "BlueprintGetter", "GetConditionType" },
		{ "Category", "StopCondition" },
		{ "ModuleRelativePath", "Private/StopConditions/StopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStopCondition_Statics::NewProp_ConditionType = { "ConditionType", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStopCondition, ConditionType), METADATA_PARAMS(Z_Construct_UClass_UStopCondition_Statics::NewProp_ConditionType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStopCondition_Statics::NewProp_ConditionType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStopCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStopCondition_Statics::NewProp_ConditionType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStopCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStopCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStopCondition_Statics::ClassParams = {
		&UStopCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStopCondition_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UStopCondition_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStopCondition_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStopCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStopCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStopCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStopCondition, 4215663032);
	template<> RODENTVR_API UClass* StaticClass<UStopCondition>()
	{
		return UStopCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStopCondition(Z_Construct_UClass_UStopCondition, &UStopCondition::StaticClass, TEXT("/Script/RodentVR"), TEXT("UStopCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStopCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/StopConditions/EnterRegionStopCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnterRegionStopCondition() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UEnterRegionStopCondition_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UEnterRegionStopCondition();
	RODENTVR_API UClass* Z_Construct_UClass_UStopCondition();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UFunction* Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter();
// End Cross Module References
	void UEnterRegionStopCondition::StaticRegisterNativesUEnterRegionStopCondition()
	{
		UClass* Class = UEnterRegionStopCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRewardRegionEnter", &UEnterRegionStopCondition::execOnRewardRegionEnter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics
	{
		struct EnterRegionStopCondition_eventOnRewardRegionEnter_Parms
		{
			int32 RegionEnteredId;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RegionEnteredId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::NewProp_RegionEnteredId = { "RegionEnteredId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnterRegionStopCondition_eventOnRewardRegionEnter_Parms, RegionEnteredId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::NewProp_RegionEnteredId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnterRegionStopCondition, nullptr, "OnRewardRegionEnter", nullptr, nullptr, sizeof(EnterRegionStopCondition_eventOnRewardRegionEnter_Parms), Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnterRegionStopCondition_NoRegister()
	{
		return UEnterRegionStopCondition::StaticClass();
	}
	struct Z_Construct_UClass_UEnterRegionStopCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnterRegionStopCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStopCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnterRegionStopCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnterRegionStopCondition_OnRewardRegionEnter, "OnRewardRegionEnter" }, // 1070730222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnterRegionStopCondition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StopConditions/EnterRegionStopCondition.h" },
		{ "ModuleRelativePath", "Private/StopConditions/EnterRegionStopCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnterRegionStopCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnterRegionStopCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnterRegionStopCondition_Statics::ClassParams = {
		&UEnterRegionStopCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnterRegionStopCondition_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnterRegionStopCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnterRegionStopCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnterRegionStopCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnterRegionStopCondition, 2694906454);
	template<> RODENTVR_API UClass* StaticClass<UEnterRegionStopCondition>()
	{
		return UEnterRegionStopCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnterRegionStopCondition(Z_Construct_UClass_UEnterRegionStopCondition, &UEnterRegionStopCondition::StaticClass, TEXT("/Script/RodentVR"), TEXT("UEnterRegionStopCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnterRegionStopCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

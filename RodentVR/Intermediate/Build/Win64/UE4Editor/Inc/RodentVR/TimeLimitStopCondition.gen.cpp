// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
	void UTimeLimitStopCondition::StaticRegisterNativesUTimeLimitStopCondition()
	{
	}
	UClass* Z_Construct_UClass_UTimeLimitStopCondition_NoRegister()
	{
		return UTimeLimitStopCondition::StaticClass();
	}
	struct Z_Construct_UClass_UTimeLimitStopCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeLimitStopCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStopCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeLimitStopCondition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StopConditions/TimeLimitStopCondition.h" },
		{ "ModuleRelativePath", "Private/StopConditions/TimeLimitStopCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeLimitStopCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeLimitStopCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimeLimitStopCondition_Statics::ClassParams = {
		&UTimeLimitStopCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTimeLimitStopCondition_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTimeLimitStopCondition_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(UTimeLimitStopCondition, 859390482);
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

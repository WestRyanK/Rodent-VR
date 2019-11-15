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
// End Cross Module References
	void UStopCondition::StaticRegisterNativesUStopCondition()
	{
	}
	UClass* Z_Construct_UClass_UStopCondition_NoRegister()
	{
		return UStopCondition::StaticClass();
	}
	struct Z_Construct_UClass_UStopCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStopCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStopCondition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StopConditions/StopCondition.h" },
		{ "ModuleRelativePath", "Private/StopConditions/StopCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStopCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStopCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStopCondition_Statics::ClassParams = {
		&UStopCondition::StaticClass,
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
	IMPLEMENT_CLASS(UStopCondition, 2179307670);
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

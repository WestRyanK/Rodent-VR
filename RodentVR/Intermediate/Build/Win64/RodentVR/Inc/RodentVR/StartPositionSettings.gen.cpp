// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/StartPositionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartPositionSettings() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UStartPositionSettings_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UStartPositionSettings();
	RODENTVR_API UClass* Z_Construct_UClass_UActorSettings();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
// End Cross Module References
	void UStartPositionSettings::StaticRegisterNativesUStartPositionSettings()
	{
	}
	UClass* Z_Construct_UClass_UStartPositionSettings_NoRegister()
	{
		return UStartPositionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UStartPositionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStartPositionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartPositionSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Settings/StartPositionSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/StartPositionSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStartPositionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStartPositionSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStartPositionSettings_Statics::ClassParams = {
		&UStartPositionSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStartPositionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStartPositionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStartPositionSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStartPositionSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStartPositionSettings, 3465180412);
	template<> RODENTVR_API UClass* StaticClass<UStartPositionSettings>()
	{
		return UStartPositionSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStartPositionSettings(Z_Construct_UClass_UStartPositionSettings, &UStartPositionSettings::StaticClass, TEXT("/Script/RodentVR"), TEXT("UStartPositionSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStartPositionSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

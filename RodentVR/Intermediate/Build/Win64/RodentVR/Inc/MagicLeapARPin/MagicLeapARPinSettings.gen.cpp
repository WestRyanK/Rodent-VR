// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapARPin/Public/MagicLeapARPinSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapARPinSettings() {}
// Cross Module References
	MAGICLEAPARPIN_API UClass* Z_Construct_UClass_UMagicLeapARPinSettings_NoRegister();
	MAGICLEAPARPIN_API UClass* Z_Construct_UClass_UMagicLeapARPinSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MagicLeapARPin();
	MAGICLEAPARPIN_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapARPinState();
// End Cross Module References
	void UMagicLeapARPinSettings::StaticRegisterNativesUMagicLeapARPinSettings()
	{
	}
	UClass* Z_Construct_UClass_UMagicLeapARPinSettings_NoRegister()
	{
		return UMagicLeapARPinSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapARPinSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUpdatedEventTriggerDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnUpdatedEventTriggerDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateCheckFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateCheckFrequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapARPinSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapARPin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n\n* Implements the settings for the Magic Leap AR Pin.\n\n*/" },
		{ "IncludePath", "MagicLeapARPinSettings.h" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinSettings.h" },
		{ "ToolTip", "Implements the settings for the Magic Leap AR Pin." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinSettings_Statics::NewProp_OnUpdatedEventTriggerDelta_MetaData[] = {
		{ "Category", "ARPin" },
		{ "Comment", "/** What should be the delta of the ARPin state properties to trigger an OnUpdated event for that pin. A pin will be considered \"updated\" if at least one of it's state property deltas are above the specified thresholds. */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinSettings.h" },
		{ "ToolTip", "What should be the delta of the ARPin state properties to trigger an OnUpdated event for that pin. A pin will be considered \"updated\" if at least one of it's state property deltas are above the specified thresholds." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMagicLeapARPinSettings_Statics::NewProp_OnUpdatedEventTriggerDelta = { "OnUpdatedEventTriggerDelta", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinSettings, OnUpdatedEventTriggerDelta), Z_Construct_UScriptStruct_FMagicLeapARPinState, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinSettings_Statics::NewProp_OnUpdatedEventTriggerDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinSettings_Statics::NewProp_OnUpdatedEventTriggerDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinSettings_Statics::NewProp_UpdateCheckFrequency_MetaData[] = {
		{ "Category", "ARPin" },
		{ "Comment", "/** Time (in seconds) to check for updates in ARPins (Lumin-only). Set 0 to check every frame. */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinSettings.h" },
		{ "ToolTip", "Time (in seconds) to check for updates in ARPins (Lumin-only). Set 0 to check every frame." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMagicLeapARPinSettings_Statics::NewProp_UpdateCheckFrequency = { "UpdateCheckFrequency", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinSettings, UpdateCheckFrequency), METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinSettings_Statics::NewProp_UpdateCheckFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinSettings_Statics::NewProp_UpdateCheckFrequency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMagicLeapARPinSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinSettings_Statics::NewProp_OnUpdatedEventTriggerDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinSettings_Statics::NewProp_UpdateCheckFrequency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapARPinSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapARPinSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapARPinSettings_Statics::ClassParams = {
		&UMagicLeapARPinSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMagicLeapARPinSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapARPinSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapARPinSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapARPinSettings, 2641732507);
	template<> MAGICLEAPARPIN_API UClass* StaticClass<UMagicLeapARPinSettings>()
	{
		return UMagicLeapARPinSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapARPinSettings(Z_Construct_UClass_UMagicLeapARPinSettings, &UMagicLeapARPinSettings::StaticClass, TEXT("/Script/MagicLeapARPin"), TEXT("UMagicLeapARPinSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapARPinSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

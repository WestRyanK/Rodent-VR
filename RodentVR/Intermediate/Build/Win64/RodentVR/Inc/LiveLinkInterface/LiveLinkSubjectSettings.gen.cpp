// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/LiveLinkSubjectSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSubjectSettings() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister();
// End Cross Module References
	void ULiveLinkSubjectSettings::StaticRegisterNativesULiveLinkSubjectSettings()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister()
	{
		return ULiveLinkSubjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkSubjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Role;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Translators;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translators_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Translators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationProcessor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterpolationProcessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreProcessors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreProcessors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreProcessors_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreProcessors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Base class for live link subject settings\n" },
		{ "IncludePath", "LiveLinkSubjectSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "Base class for live link subject settings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Role_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSubjectSettings, Role), Z_Construct_UClass_ULiveLinkRole_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Role_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available translator the subject can use. */" },
		{ "DisplayName", "Translators" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "List of available translator the subject can use." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators = { "Translators", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSubjectSettings, Translators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_Inner_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available translator the subject can use. */" },
		{ "DisplayName", "Translators" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "List of available translator the subject can use." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_Inner = { "Translators", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_InterpolationProcessor_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The interpolation processor the subject will use. */" },
		{ "DisplayName", "Interpolation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "The interpolation processor the subject will use." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_InterpolationProcessor = { "InterpolationProcessor", nullptr, (EPropertyFlags)0x0012000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSubjectSettings, InterpolationProcessor), Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_InterpolationProcessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_InterpolationProcessor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available preprocessor the subject will use. */" },
		{ "DisplayName", "Pre Processors" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "List of available preprocessor the subject will use." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors = { "PreProcessors", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSubjectSettings, PreProcessors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_Inner_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available preprocessor the subject will use. */" },
		{ "DisplayName", "Pre Processors" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "List of available preprocessor the subject will use." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_Inner = { "PreProcessors", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_Inner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_InterpolationProcessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkSubjectSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::ClassParams = {
		&ULiveLinkSubjectSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkSubjectSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkSubjectSettings, 1653098189);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkSubjectSettings>()
	{
		return ULiveLinkSubjectSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkSubjectSettings(Z_Construct_UClass_ULiveLinkSubjectSettings, &ULiveLinkSubjectSettings::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkSubjectSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSubjectSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

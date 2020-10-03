// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeap/Public/MagicLeapSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapSettings() {}
// Cross Module References
	MAGICLEAP_API UClass* Z_Construct_UClass_UMagicLeapSettings_NoRegister();
	MAGICLEAP_API UClass* Z_Construct_UClass_UMagicLeapSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MagicLeap();
// End Cross Module References
	void UMagicLeapSettings::StaticRegisterNativesUMagicLeapSettings()
	{
	}
	UClass* Z_Construct_UClass_UMagicLeapSettings_NoRegister()
	{
		return UMagicLeapSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMLAudioForZI_MetaData[];
#endif
		static void NewProp_bUseMLAudioForZI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMLAudioForZI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVulkanForZI_MetaData[];
#endif
		static void NewProp_bUseVulkanForZI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVulkanForZI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableZI_MetaData[];
#endif
		static void NewProp_bEnableZI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableZI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for the Magic Leap SDK setup.\n*/" },
		{ "IncludePath", "MagicLeapSettings.h" },
		{ "ModuleRelativePath", "Public/MagicLeapSettings.h" },
		{ "ToolTip", "Implements the settings for the Magic Leap SDK setup." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bUseMLAudioForZI_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Use the MagicLeapAudio mixer module when using ZI. This will play audio via the ML device. Otherwise, the audio is played on the host machine itself.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Use MLAudio for Zero Iteration (host audio otherwise)" },
		{ "ModuleRelativePath", "Public/MagicLeapSettings.h" },
		{ "ToolTip", "Use the MagicLeapAudio mixer module when using ZI. This will play audio via the ML device. Otherwise, the audio is played on the host machine itself." },
	};
#endif
	void Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bUseMLAudioForZI_SetBit(void* Obj)
	{
		((UMagicLeapSettings*)Obj)->bUseMLAudioForZI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bUseMLAudioForZI = { "bUseMLAudioForZI", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMagicLeapSettings), &Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bUseMLAudioForZI_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bUseMLAudioForZI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bUseMLAudioForZI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bUseVulkanForZI_MetaData[] = {
		{ "Comment", "// Use the editor in Vulkan. If False, OpenGL is used with ZI.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/MagicLeapSettings.h" },
		{ "ToolTip", "Use the editor in Vulkan. If False, OpenGL is used with ZI." },
	};
#endif
	void Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bUseVulkanForZI_SetBit(void* Obj)
	{
		((UMagicLeapSettings*)Obj)->bUseVulkanForZI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bUseVulkanForZI = { "bUseVulkanForZI", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMagicLeapSettings), &Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bUseVulkanForZI_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bUseVulkanForZI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bUseVulkanForZI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bEnableZI_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Enables 'Zero Iteration mode'. Note: Vulkan rendering will be used by default. Set bUseVulkan to false to use OpenGL instead.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Enable Zero Iteration" },
		{ "ModuleRelativePath", "Public/MagicLeapSettings.h" },
		{ "ToolTip", "Enables 'Zero Iteration mode'. Note: Vulkan rendering will be used by default. Set bUseVulkan to false to use OpenGL instead." },
	};
#endif
	void Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bEnableZI_SetBit(void* Obj)
	{
		((UMagicLeapSettings*)Obj)->bEnableZI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bEnableZI = { "bEnableZI", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMagicLeapSettings), &Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bEnableZI_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bEnableZI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bEnableZI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMagicLeapSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bUseMLAudioForZI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bUseVulkanForZI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapSettings_Statics::NewProp_bEnableZI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapSettings_Statics::ClassParams = {
		&UMagicLeapSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMagicLeapSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapSettings, 3504372297);
	template<> MAGICLEAP_API UClass* StaticClass<UMagicLeapSettings>()
	{
		return UMagicLeapSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapSettings(Z_Construct_UClass_UMagicLeapSettings, &UMagicLeapSettings::StaticClass, TEXT("/Script/MagicLeap"), TEXT("UMagicLeapSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

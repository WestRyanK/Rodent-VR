// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LuminRuntimeSettings/Classes/LuminRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuminRuntimeSettings() {}
// Cross Module References
	LUMINRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_LuminRuntimeSettings_ELuminPrivilege();
	UPackage* Z_Construct_UPackage__Script_LuminRuntimeSettings();
	LUMINRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_LuminRuntimeSettings_ELuminFrameTimingHint();
	LUMINRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_LuminRuntimeSettings_ELuminComponentType();
	LUMINRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_LuminRuntimeSettings_ELuminComponentSubElementType();
	LUMINRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizedIconInfos();
	LUMINRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizedIconInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	LUMINRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizedAppName();
	LUMINRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FLuminComponentElement();
	LUMINRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FLuminComponentSubElement();
	LUMINRUNTIMESETTINGS_API UClass* Z_Construct_UClass_ULuminRuntimeSettings_NoRegister();
	LUMINRUNTIMESETTINGS_API UClass* Z_Construct_UClass_ULuminRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
// End Cross Module References
	static UEnum* ELuminPrivilege_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LuminRuntimeSettings_ELuminPrivilege, Z_Construct_UPackage__Script_LuminRuntimeSettings(), TEXT("ELuminPrivilege"));
		}
		return Singleton;
	}
	template<> LUMINRUNTIMESETTINGS_API UEnum* StaticEnum<ELuminPrivilege>()
	{
		return ELuminPrivilege_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELuminPrivilege(ELuminPrivilege_StaticEnum, TEXT("/Script/LuminRuntimeSettings"), TEXT("ELuminPrivilege"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LuminRuntimeSettings_ELuminPrivilege_Hash() { return 32402626U; }
	UEnum* Z_Construct_UEnum_LuminRuntimeSettings_ELuminPrivilege()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LuminRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELuminPrivilege"), 0, Get_Z_Construct_UEnum_LuminRuntimeSettings_ELuminPrivilege_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELuminPrivilege::Invalid", (int64)ELuminPrivilege::Invalid },
				{ "ELuminPrivilege::BatteryInfo", (int64)ELuminPrivilege::BatteryInfo },
				{ "ELuminPrivilege::CameraCapture", (int64)ELuminPrivilege::CameraCapture },
				{ "ELuminPrivilege::ComputerVision", (int64)ELuminPrivilege::ComputerVision },
				{ "ELuminPrivilege::WorldReconstruction", (int64)ELuminPrivilege::WorldReconstruction },
				{ "ELuminPrivilege::InAppPurchase", (int64)ELuminPrivilege::InAppPurchase },
				{ "ELuminPrivilege::AudioCaptureMic", (int64)ELuminPrivilege::AudioCaptureMic },
				{ "ELuminPrivilege::DrmCertificates", (int64)ELuminPrivilege::DrmCertificates },
				{ "ELuminPrivilege::Occlusion", (int64)ELuminPrivilege::Occlusion },
				{ "ELuminPrivilege::LowLatencyLightwear", (int64)ELuminPrivilege::LowLatencyLightwear },
				{ "ELuminPrivilege::Internet", (int64)ELuminPrivilege::Internet },
				{ "ELuminPrivilege::IdentityRead", (int64)ELuminPrivilege::IdentityRead },
				{ "ELuminPrivilege::BackgroundDownload", (int64)ELuminPrivilege::BackgroundDownload },
				{ "ELuminPrivilege::BackgroundUpload", (int64)ELuminPrivilege::BackgroundUpload },
				{ "ELuminPrivilege::MediaDrm", (int64)ELuminPrivilege::MediaDrm },
				{ "ELuminPrivilege::Media", (int64)ELuminPrivilege::Media },
				{ "ELuminPrivilege::MediaMetadata", (int64)ELuminPrivilege::MediaMetadata },
				{ "ELuminPrivilege::PowerInfo", (int64)ELuminPrivilege::PowerInfo },
				{ "ELuminPrivilege::LocalAreaNetwork", (int64)ELuminPrivilege::LocalAreaNetwork },
				{ "ELuminPrivilege::VoiceInput", (int64)ELuminPrivilege::VoiceInput },
				{ "ELuminPrivilege::Documents", (int64)ELuminPrivilege::Documents },
				{ "ELuminPrivilege::ConnectBackgroundMusicService", (int64)ELuminPrivilege::ConnectBackgroundMusicService },
				{ "ELuminPrivilege::RegisterBackgroundMusicService", (int64)ELuminPrivilege::RegisterBackgroundMusicService },
				{ "ELuminPrivilege::PcfRead", (int64)ELuminPrivilege::PcfRead },
				{ "ELuminPrivilege::PwFoundObjRead", (int64)ELuminPrivilege::PwFoundObjRead },
				{ "ELuminPrivilege::NormalNotificationsUsage", (int64)ELuminPrivilege::NormalNotificationsUsage },
				{ "ELuminPrivilege::MusicService", (int64)ELuminPrivilege::MusicService },
				{ "ELuminPrivilege::ControllerPose", (int64)ELuminPrivilege::ControllerPose },
				{ "ELuminPrivilege::GesturesSubscribe", (int64)ELuminPrivilege::GesturesSubscribe },
				{ "ELuminPrivilege::GesturesConfig", (int64)ELuminPrivilege::GesturesConfig },
				{ "ELuminPrivilege::AddressBookRead", (int64)ELuminPrivilege::AddressBookRead },
				{ "ELuminPrivilege::AddressBookWrite", (int64)ELuminPrivilege::AddressBookWrite },
				{ "ELuminPrivilege::AddressBookBasicAccess", (int64)ELuminPrivilege::AddressBookBasicAccess },
				{ "ELuminPrivilege::CoarseLocation", (int64)ELuminPrivilege::CoarseLocation },
				{ "ELuminPrivilege::FineLocation", (int64)ELuminPrivilege::FineLocation },
				{ "ELuminPrivilege::HandMesh", (int64)ELuminPrivilege::HandMesh },
				{ "ELuminPrivilege::WifiStatusRead", (int64)ELuminPrivilege::WifiStatusRead },
				{ "ELuminPrivilege::SocialConnectionsInvitesAccess", (int64)ELuminPrivilege::SocialConnectionsInvitesAccess },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AddressBookBasicAccess.Name", "ELuminPrivilege::AddressBookBasicAccess" },
				{ "AddressBookRead.Name", "ELuminPrivilege::AddressBookRead" },
				{ "AddressBookWrite.Name", "ELuminPrivilege::AddressBookWrite" },
				{ "AudioCaptureMic.Name", "ELuminPrivilege::AudioCaptureMic" },
				{ "BackgroundDownload.Name", "ELuminPrivilege::BackgroundDownload" },
				{ "BackgroundUpload.Name", "ELuminPrivilege::BackgroundUpload" },
				{ "BatteryInfo.Name", "ELuminPrivilege::BatteryInfo" },
				{ "BlueprintType", "true" },
				{ "CameraCapture.Name", "ELuminPrivilege::CameraCapture" },
				{ "CoarseLocation.Name", "ELuminPrivilege::CoarseLocation" },
				{ "ComputerVision.Name", "ELuminPrivilege::ComputerVision" },
				{ "ConnectBackgroundMusicService.Name", "ELuminPrivilege::ConnectBackgroundMusicService" },
				{ "ControllerPose.Name", "ELuminPrivilege::ControllerPose" },
				{ "Documents.Name", "ELuminPrivilege::Documents" },
				{ "DrmCertificates.Name", "ELuminPrivilege::DrmCertificates" },
				{ "FineLocation.Name", "ELuminPrivilege::FineLocation" },
				{ "GesturesConfig.Name", "ELuminPrivilege::GesturesConfig" },
				{ "GesturesSubscribe.Name", "ELuminPrivilege::GesturesSubscribe" },
				{ "HandMesh.Name", "ELuminPrivilege::HandMesh" },
				{ "IdentityRead.Name", "ELuminPrivilege::IdentityRead" },
				{ "InAppPurchase.Name", "ELuminPrivilege::InAppPurchase" },
				{ "Internet.Name", "ELuminPrivilege::Internet" },
				{ "Invalid.Name", "ELuminPrivilege::Invalid" },
				{ "LocalAreaNetwork.Name", "ELuminPrivilege::LocalAreaNetwork" },
				{ "LowLatencyLightwear.Name", "ELuminPrivilege::LowLatencyLightwear" },
				{ "Media.Name", "ELuminPrivilege::Media" },
				{ "MediaDrm.Name", "ELuminPrivilege::MediaDrm" },
				{ "MediaMetadata.Name", "ELuminPrivilege::MediaMetadata" },
				{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
				{ "MusicService.Name", "ELuminPrivilege::MusicService" },
				{ "NormalNotificationsUsage.Name", "ELuminPrivilege::NormalNotificationsUsage" },
				{ "Occlusion.Name", "ELuminPrivilege::Occlusion" },
				{ "PcfRead.Name", "ELuminPrivilege::PcfRead" },
				{ "PowerInfo.Name", "ELuminPrivilege::PowerInfo" },
				{ "PwFoundObjRead.Name", "ELuminPrivilege::PwFoundObjRead" },
				{ "RegisterBackgroundMusicService.Name", "ELuminPrivilege::RegisterBackgroundMusicService" },
				{ "SocialConnectionsInvitesAccess.Name", "ELuminPrivilege::SocialConnectionsInvitesAccess" },
				{ "VoiceInput.Name", "ELuminPrivilege::VoiceInput" },
				{ "WifiStatusRead.Name", "ELuminPrivilege::WifiStatusRead" },
				{ "WorldReconstruction.Name", "ELuminPrivilege::WorldReconstruction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LuminRuntimeSettings,
				nullptr,
				"ELuminPrivilege",
				"ELuminPrivilege",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELuminFrameTimingHint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LuminRuntimeSettings_ELuminFrameTimingHint, Z_Construct_UPackage__Script_LuminRuntimeSettings(), TEXT("ELuminFrameTimingHint"));
		}
		return Singleton;
	}
	template<> LUMINRUNTIMESETTINGS_API UEnum* StaticEnum<ELuminFrameTimingHint>()
	{
		return ELuminFrameTimingHint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELuminFrameTimingHint(ELuminFrameTimingHint_StaticEnum, TEXT("/Script/LuminRuntimeSettings"), TEXT("ELuminFrameTimingHint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LuminRuntimeSettings_ELuminFrameTimingHint_Hash() { return 2478064685U; }
	UEnum* Z_Construct_UEnum_LuminRuntimeSettings_ELuminFrameTimingHint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LuminRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELuminFrameTimingHint"), 0, Get_Z_Construct_UEnum_LuminRuntimeSettings_ELuminFrameTimingHint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELuminFrameTimingHint::Unspecified", (int64)ELuminFrameTimingHint::Unspecified },
				{ "ELuminFrameTimingHint::Maximum", (int64)ELuminFrameTimingHint::Maximum },
				{ "ELuminFrameTimingHint::FPS_60", (int64)ELuminFrameTimingHint::FPS_60 },
				{ "ELuminFrameTimingHint::FPS_120", (int64)ELuminFrameTimingHint::FPS_120 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FPS_120.Comment", "/* Run at a specified rate of 120Hz (i.e. one frame every ~8.33 ms). */" },
				{ "FPS_120.Name", "ELuminFrameTimingHint::FPS_120" },
				{ "FPS_120.ToolTip", "Run at a specified rate of 120Hz (i.e. one frame every ~8.33 ms)." },
				{ "FPS_60.Comment", "/* Run at a specified rate of 60Hz (i.e. one frame every ~16.67 ms). */" },
				{ "FPS_60.Name", "ELuminFrameTimingHint::FPS_60" },
				{ "FPS_60.ToolTip", "Run at a specified rate of 60Hz (i.e. one frame every ~16.67 ms)." },
				{ "Maximum.Comment", "/* Run at the maximum rate allowed by the system. */" },
				{ "Maximum.Name", "ELuminFrameTimingHint::Maximum" },
				{ "Maximum.ToolTip", "Run at the maximum rate allowed by the system." },
				{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
				{ "Unspecified.Comment", "/* Default rate is unspecified, adjusted based on system conditions. */" },
				{ "Unspecified.Name", "ELuminFrameTimingHint::Unspecified" },
				{ "Unspecified.ToolTip", "Default rate is unspecified, adjusted based on system conditions." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LuminRuntimeSettings,
				nullptr,
				"ELuminFrameTimingHint",
				"ELuminFrameTimingHint",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELuminComponentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LuminRuntimeSettings_ELuminComponentType, Z_Construct_UPackage__Script_LuminRuntimeSettings(), TEXT("ELuminComponentType"));
		}
		return Singleton;
	}
	template<> LUMINRUNTIMESETTINGS_API UEnum* StaticEnum<ELuminComponentType>()
	{
		return ELuminComponentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELuminComponentType(ELuminComponentType_StaticEnum, TEXT("/Script/LuminRuntimeSettings"), TEXT("ELuminComponentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LuminRuntimeSettings_ELuminComponentType_Hash() { return 1031925096U; }
	UEnum* Z_Construct_UEnum_LuminRuntimeSettings_ELuminComponentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LuminRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELuminComponentType"), 0, Get_Z_Construct_UEnum_LuminRuntimeSettings_ELuminComponentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELuminComponentType::Universe", (int64)ELuminComponentType::Universe },
				{ "ELuminComponentType::Fullscreen", (int64)ELuminComponentType::Fullscreen },
				{ "ELuminComponentType::SearchProvider", (int64)ELuminComponentType::SearchProvider },
				{ "ELuminComponentType::MusicService", (int64)ELuminComponentType::MusicService },
				{ "ELuminComponentType::Screens", (int64)ELuminComponentType::Screens },
				{ "ELuminComponentType::ScreensImmersive", (int64)ELuminComponentType::ScreensImmersive },
				{ "ELuminComponentType::Console", (int64)ELuminComponentType::Console },
				{ "ELuminComponentType::SystemUI", (int64)ELuminComponentType::SystemUI },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Console.Name", "ELuminComponentType::Console" },
				{ "Fullscreen.Name", "ELuminComponentType::Fullscreen" },
				{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
				{ "MusicService.Name", "ELuminComponentType::MusicService" },
				{ "Screens.Name", "ELuminComponentType::Screens" },
				{ "ScreensImmersive.Name", "ELuminComponentType::ScreensImmersive" },
				{ "SearchProvider.Name", "ELuminComponentType::SearchProvider" },
				{ "SystemUI.Name", "ELuminComponentType::SystemUI" },
				{ "Universe.Name", "ELuminComponentType::Universe" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LuminRuntimeSettings,
				nullptr,
				"ELuminComponentType",
				"ELuminComponentType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELuminComponentSubElementType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LuminRuntimeSettings_ELuminComponentSubElementType, Z_Construct_UPackage__Script_LuminRuntimeSettings(), TEXT("ELuminComponentSubElementType"));
		}
		return Singleton;
	}
	template<> LUMINRUNTIMESETTINGS_API UEnum* StaticEnum<ELuminComponentSubElementType>()
	{
		return ELuminComponentSubElementType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELuminComponentSubElementType(ELuminComponentSubElementType_StaticEnum, TEXT("/Script/LuminRuntimeSettings"), TEXT("ELuminComponentSubElementType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LuminRuntimeSettings_ELuminComponentSubElementType_Hash() { return 642726551U; }
	UEnum* Z_Construct_UEnum_LuminRuntimeSettings_ELuminComponentSubElementType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LuminRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELuminComponentSubElementType"), 0, Get_Z_Construct_UEnum_LuminRuntimeSettings_ELuminComponentSubElementType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELuminComponentSubElementType::FileExtension", (int64)ELuminComponentSubElementType::FileExtension },
				{ "ELuminComponentSubElementType::MimeType", (int64)ELuminComponentSubElementType::MimeType },
				{ "ELuminComponentSubElementType::Mode", (int64)ELuminComponentSubElementType::Mode },
				{ "ELuminComponentSubElementType::MusicAttribute", (int64)ELuminComponentSubElementType::MusicAttribute },
				{ "ELuminComponentSubElementType::Schema", (int64)ELuminComponentSubElementType::Schema },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FileExtension.Name", "ELuminComponentSubElementType::FileExtension" },
				{ "MimeType.Name", "ELuminComponentSubElementType::MimeType" },
				{ "Mode.Name", "ELuminComponentSubElementType::Mode" },
				{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
				{ "MusicAttribute.Name", "ELuminComponentSubElementType::MusicAttribute" },
				{ "Schema.Name", "ELuminComponentSubElementType::Schema" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LuminRuntimeSettings,
				nullptr,
				"ELuminComponentSubElementType",
				"ELuminComponentSubElementType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FLocalizedIconInfos::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LUMINRUNTIMESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FLocalizedIconInfos_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizedIconInfos, Z_Construct_UPackage__Script_LuminRuntimeSettings(), TEXT("LocalizedIconInfos"), sizeof(FLocalizedIconInfos), Get_Z_Construct_UScriptStruct_FLocalizedIconInfos_Hash());
	}
	return Singleton;
}
template<> LUMINRUNTIMESETTINGS_API UScriptStruct* StaticStruct<FLocalizedIconInfos>()
{
	return FLocalizedIconInfos::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizedIconInfos(FLocalizedIconInfos::StaticStruct, TEXT("/Script/LuminRuntimeSettings"), TEXT("LocalizedIconInfos"), false, nullptr, nullptr);
static struct FScriptStruct_LuminRuntimeSettings_StaticRegisterNativesFLocalizedIconInfos
{
	FScriptStruct_LuminRuntimeSettings_StaticRegisterNativesFLocalizedIconInfos()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalizedIconInfos")),new UScriptStruct::TCppStructOps<FLocalizedIconInfos>);
	}
} ScriptStruct_LuminRuntimeSettings_StaticRegisterNativesFLocalizedIconInfos;
	struct Z_Construct_UScriptStruct_FLocalizedIconInfos_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IconData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizedIconInfos_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalizedIconInfos_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizedIconInfos>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizedIconInfos_Statics::NewProp_IconData_MetaData[] = {
		{ "Category", "Localization" },
		{ "DisplayName", "Icon Data" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLocalizedIconInfos_Statics::NewProp_IconData = { "IconData", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizedIconInfos, IconData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizedIconInfos_Statics::NewProp_IconData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedIconInfos_Statics::NewProp_IconData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizedIconInfos_Statics::NewProp_IconData_Inner = { "IconData", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLocalizedIconInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizedIconInfos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizedIconInfos_Statics::NewProp_IconData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizedIconInfos_Statics::NewProp_IconData_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizedIconInfos_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LuminRuntimeSettings,
		nullptr,
		&NewStructOps,
		"LocalizedIconInfos",
		sizeof(FLocalizedIconInfos),
		alignof(FLocalizedIconInfos),
		Z_Construct_UScriptStruct_FLocalizedIconInfos_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedIconInfos_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizedIconInfos_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedIconInfos_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizedIconInfos()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizedIconInfos_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LuminRuntimeSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizedIconInfos"), sizeof(FLocalizedIconInfos), Get_Z_Construct_UScriptStruct_FLocalizedIconInfos_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocalizedIconInfos_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizedIconInfos_Hash() { return 3204898260U; }
class UScriptStruct* FLocalizedIconInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LUMINRUNTIMESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FLocalizedIconInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizedIconInfo, Z_Construct_UPackage__Script_LuminRuntimeSettings(), TEXT("LocalizedIconInfo"), sizeof(FLocalizedIconInfo), Get_Z_Construct_UScriptStruct_FLocalizedIconInfo_Hash());
	}
	return Singleton;
}
template<> LUMINRUNTIMESETTINGS_API UScriptStruct* StaticStruct<FLocalizedIconInfo>()
{
	return FLocalizedIconInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizedIconInfo(FLocalizedIconInfo::StaticStruct, TEXT("/Script/LuminRuntimeSettings"), TEXT("LocalizedIconInfo"), false, nullptr, nullptr);
static struct FScriptStruct_LuminRuntimeSettings_StaticRegisterNativesFLocalizedIconInfo
{
	FScriptStruct_LuminRuntimeSettings_StaticRegisterNativesFLocalizedIconInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalizedIconInfo")),new UScriptStruct::TCppStructOps<FLocalizedIconInfo>);
	}
} ScriptStruct_LuminRuntimeSettings_StaticRegisterNativesFLocalizedIconInfo;
	struct Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconPortalPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconPortalPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconModelPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconModelPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LanguageCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LanguageCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizedIconInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::NewProp_IconPortalPath_MetaData[] = {
		{ "Category", "Localization" },
		{ "DisplayName", "Icon Portal Path" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::NewProp_IconPortalPath = { "IconPortalPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizedIconInfo, IconPortalPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::NewProp_IconPortalPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::NewProp_IconPortalPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::NewProp_IconModelPath_MetaData[] = {
		{ "Category", "Localization" },
		{ "DisplayName", "Icon Model Path" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::NewProp_IconModelPath = { "IconModelPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizedIconInfo, IconModelPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::NewProp_IconModelPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::NewProp_IconModelPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::NewProp_LanguageCode_MetaData[] = {
		{ "Category", "Localization" },
		{ "DisplayName", "Language Code" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::NewProp_LanguageCode = { "LanguageCode", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizedIconInfo, LanguageCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::NewProp_LanguageCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::NewProp_LanguageCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::NewProp_IconPortalPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::NewProp_IconModelPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::NewProp_LanguageCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LuminRuntimeSettings,
		nullptr,
		&NewStructOps,
		"LocalizedIconInfo",
		sizeof(FLocalizedIconInfo),
		alignof(FLocalizedIconInfo),
		Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizedIconInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizedIconInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LuminRuntimeSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizedIconInfo"), sizeof(FLocalizedIconInfo), Get_Z_Construct_UScriptStruct_FLocalizedIconInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocalizedIconInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizedIconInfo_Hash() { return 1735251737U; }
class UScriptStruct* FLocalizedAppName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LUMINRUNTIMESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FLocalizedAppName_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizedAppName, Z_Construct_UPackage__Script_LuminRuntimeSettings(), TEXT("LocalizedAppName"), sizeof(FLocalizedAppName), Get_Z_Construct_UScriptStruct_FLocalizedAppName_Hash());
	}
	return Singleton;
}
template<> LUMINRUNTIMESETTINGS_API UScriptStruct* StaticStruct<FLocalizedAppName>()
{
	return FLocalizedAppName::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizedAppName(FLocalizedAppName::StaticStruct, TEXT("/Script/LuminRuntimeSettings"), TEXT("LocalizedAppName"), false, nullptr, nullptr);
static struct FScriptStruct_LuminRuntimeSettings_StaticRegisterNativesFLocalizedAppName
{
	FScriptStruct_LuminRuntimeSettings_StaticRegisterNativesFLocalizedAppName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalizedAppName")),new UScriptStruct::TCppStructOps<FLocalizedAppName>);
	}
} ScriptStruct_LuminRuntimeSettings_StaticRegisterNativesFLocalizedAppName;
	struct Z_Construct_UScriptStruct_FLocalizedAppName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LanguageCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LanguageCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizedAppName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalizedAppName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizedAppName>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizedAppName_Statics::NewProp_AppName_MetaData[] = {
		{ "Category", "Localization" },
		{ "DisplayName", "App Name" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizedAppName_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizedAppName, AppName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizedAppName_Statics::NewProp_AppName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedAppName_Statics::NewProp_AppName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizedAppName_Statics::NewProp_LanguageCode_MetaData[] = {
		{ "Category", "Localization" },
		{ "DisplayName", "Language Code" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizedAppName_Statics::NewProp_LanguageCode = { "LanguageCode", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizedAppName, LanguageCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizedAppName_Statics::NewProp_LanguageCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedAppName_Statics::NewProp_LanguageCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizedAppName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizedAppName_Statics::NewProp_AppName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizedAppName_Statics::NewProp_LanguageCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizedAppName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LuminRuntimeSettings,
		nullptr,
		&NewStructOps,
		"LocalizedAppName",
		sizeof(FLocalizedAppName),
		alignof(FLocalizedAppName),
		Z_Construct_UScriptStruct_FLocalizedAppName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedAppName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizedAppName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedAppName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizedAppName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizedAppName_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LuminRuntimeSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizedAppName"), sizeof(FLocalizedAppName), Get_Z_Construct_UScriptStruct_FLocalizedAppName_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocalizedAppName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizedAppName_Hash() { return 2845422113U; }
class UScriptStruct* FLuminComponentElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LUMINRUNTIMESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FLuminComponentElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLuminComponentElement, Z_Construct_UPackage__Script_LuminRuntimeSettings(), TEXT("LuminComponentElement"), sizeof(FLuminComponentElement), Get_Z_Construct_UScriptStruct_FLuminComponentElement_Hash());
	}
	return Singleton;
}
template<> LUMINRUNTIMESETTINGS_API UScriptStruct* StaticStruct<FLuminComponentElement>()
{
	return FLuminComponentElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLuminComponentElement(FLuminComponentElement::StaticStruct, TEXT("/Script/LuminRuntimeSettings"), TEXT("LuminComponentElement"), false, nullptr, nullptr);
static struct FScriptStruct_LuminRuntimeSettings_StaticRegisterNativesFLuminComponentElement
{
	FScriptStruct_LuminRuntimeSettings_StaticRegisterNativesFLuminComponentElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LuminComponentElement")),new UScriptStruct::TCppStructOps<FLuminComponentElement>);
	}
} ScriptStruct_LuminRuntimeSettings_StaticRegisterNativesFLuminComponentElement;
	struct Z_Construct_UScriptStruct_FLuminComponentElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraComponentSubElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraComponentSubElements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraComponentSubElements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ComponentType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ComponentType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExecutableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VisibleName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuminComponentElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLuminComponentElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ExtraComponentSubElements_MetaData[] = {
		{ "Category", "Runtime" },
		{ "DisplayName", "Extra sub-elements" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ExtraComponentSubElements = { "ExtraComponentSubElements", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLuminComponentElement, ExtraComponentSubElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ExtraComponentSubElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ExtraComponentSubElements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ExtraComponentSubElements_Inner = { "ExtraComponentSubElements", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLuminComponentSubElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ComponentType_MetaData[] = {
		{ "Category", "Runtime" },
		{ "DisplayName", "Component type" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ComponentType = { "ComponentType", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLuminComponentElement, ComponentType), Z_Construct_UEnum_LuminRuntimeSettings_ELuminComponentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ComponentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ComponentType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ComponentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ExecutableName_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** Name of the executable for this component. This binary should be packaged into the bin folder of the mpk. Refer to ResonanceAudio_LPL.xml for an example. */" },
		{ "DisplayName", "Executable name" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Name of the executable for this component. This binary should be packaged into the bin folder of the mpk. Refer to ResonanceAudio_LPL.xml for an example." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ExecutableName = { "ExecutableName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLuminComponentElement, ExecutableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ExecutableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ExecutableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_VisibleName_MetaData[] = {
		{ "Category", "Runtime" },
		{ "DisplayName", "Visiable name" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_VisibleName = { "VisibleName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLuminComponentElement, VisibleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_VisibleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_VisibleName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Runtime" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLuminComponentElement, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLuminComponentElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ExtraComponentSubElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ExtraComponentSubElements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ComponentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ComponentType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_ExecutableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_VisibleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuminComponentElement_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLuminComponentElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LuminRuntimeSettings,
		nullptr,
		&NewStructOps,
		"LuminComponentElement",
		sizeof(FLuminComponentElement),
		alignof(FLuminComponentElement),
		Z_Construct_UScriptStruct_FLuminComponentElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuminComponentElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLuminComponentElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuminComponentElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLuminComponentElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLuminComponentElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LuminRuntimeSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LuminComponentElement"), sizeof(FLuminComponentElement), Get_Z_Construct_UScriptStruct_FLuminComponentElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLuminComponentElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLuminComponentElement_Hash() { return 178642110U; }
class UScriptStruct* FLuminComponentSubElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LUMINRUNTIMESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FLuminComponentSubElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLuminComponentSubElement, Z_Construct_UPackage__Script_LuminRuntimeSettings(), TEXT("LuminComponentSubElement"), sizeof(FLuminComponentSubElement), Get_Z_Construct_UScriptStruct_FLuminComponentSubElement_Hash());
	}
	return Singleton;
}
template<> LUMINRUNTIMESETTINGS_API UScriptStruct* StaticStruct<FLuminComponentSubElement>()
{
	return FLuminComponentSubElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLuminComponentSubElement(FLuminComponentSubElement::StaticStruct, TEXT("/Script/LuminRuntimeSettings"), TEXT("LuminComponentSubElement"), false, nullptr, nullptr);
static struct FScriptStruct_LuminRuntimeSettings_StaticRegisterNativesFLuminComponentSubElement
{
	FScriptStruct_LuminRuntimeSettings_StaticRegisterNativesFLuminComponentSubElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LuminComponentSubElement")),new UScriptStruct::TCppStructOps<FLuminComponentSubElement>);
	}
} ScriptStruct_LuminRuntimeSettings_StaticRegisterNativesFLuminComponentSubElement;
	struct Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ElementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ElementType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLuminComponentSubElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Runtime" },
		{ "DisplayName", "Component sub-node value" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLuminComponentSubElement, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::NewProp_ElementType_MetaData[] = {
		{ "Category", "Runtime" },
		{ "DisplayName", "Component sub-node type" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLuminComponentSubElement, ElementType), Z_Construct_UEnum_LuminRuntimeSettings_ELuminComponentSubElementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::NewProp_ElementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::NewProp_ElementType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::NewProp_ElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::NewProp_ElementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::NewProp_ElementType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LuminRuntimeSettings,
		nullptr,
		&NewStructOps,
		"LuminComponentSubElement",
		sizeof(FLuminComponentSubElement),
		alignof(FLuminComponentSubElement),
		Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLuminComponentSubElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLuminComponentSubElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LuminRuntimeSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LuminComponentSubElement"), sizeof(FLuminComponentSubElement), Get_Z_Construct_UScriptStruct_FLuminComponentSubElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLuminComponentSubElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLuminComponentSubElement_Hash() { return 238419090U; }
	void ULuminRuntimeSettings::StaticRegisterNativesULuminRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_ULuminRuntimeSettings_NoRegister()
	{
		return ULuminRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULuminRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedAppNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizedAppNames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalizedAppNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFrameVignette_MetaData[];
#endif
		static void NewProp_bFrameVignette_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFrameVignette;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VulkanValidationLayerLibs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VulkanValidationLayerLibs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveDebugInfo_MetaData[];
#endif
		static void NewProp_bRemoveDebugInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveDebugInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCueCookQualityIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SoundCueCookQualityIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionPlugin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OcclusionPlugin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbPlugin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReverbPlugin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatializationPlugin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpatializationPlugin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraComponentElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraComponentElements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraComponentElements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraComponentSubElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraComponentSubElements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtraComponentSubElements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppPrivileges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AppPrivileges;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AppPrivileges_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AppPrivileges_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumAPILevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumAPILevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VersionCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedIconInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalizedIconInfos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconPortalPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconPortalPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconModelPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconModelPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Certificate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Certificate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVulkan_MetaData[];
#endif
		static void NewProp_bUseVulkan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVulkan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMobileRendering_MetaData[];
#endif
		static void NewProp_bUseMobileRendering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMobileRendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManualCallToAppReady_MetaData[];
#endif
		static void NewProp_bManualCallToAppReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManualCallToAppReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProtectedContent_MetaData[];
#endif
		static void NewProp_bProtectedContent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProtectedContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameTimingHint_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrameTimingHint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrameTimingHint_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApplicationDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuminRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LuminRuntimeSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the Lumin runtime platform.\n */" },
		{ "IncludePath", "LuminRuntimeSettings.h" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the Lumin runtime platform." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_LocalizedAppNames_MetaData[] = {
		{ "Category", "Advanced MPK Packaging" },
		{ "DisplayName", "Localized App Names" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_LocalizedAppNames = { "LocalizedAppNames", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, LocalizedAppNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_LocalizedAppNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_LocalizedAppNames_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_LocalizedAppNames_Inner = { "LocalizedAppNames", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLocalizedAppName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bFrameVignette_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Render frame vignette. */" },
		{ "DisplayName", "Render frame vignette" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Render frame vignette." },
	};
#endif
	void Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bFrameVignette_SetBit(void* Obj)
	{
		((ULuminRuntimeSettings*)Obj)->bFrameVignette = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bFrameVignette = { "bFrameVignette", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULuminRuntimeSettings), &Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bFrameVignette_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bFrameVignette_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bFrameVignette_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_VulkanValidationLayerLibs_MetaData[] = {
		{ "Category", "AdvancedBuild" },
		{ "Comment", "/** Folder containing the libraries required for vulkan validation layers. Can be found under %NDKROOT%/sources/third_party/vulkan/src/build-android/jniLibs/arm64-v8a */" },
		{ "DisplayName", "Vulkan Validation Layer libs" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Folder containing the libraries required for vulkan validation layers. Can be found under %NDKROOT%/sources/third_party/vulkan/src/build-android/jniLibs/arm64-v8a" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_VulkanValidationLayerLibs = { "VulkanValidationLayerLibs", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, VulkanValidationLayerLibs), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_VulkanValidationLayerLibs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_VulkanValidationLayerLibs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bRemoveDebugInfo_MetaData[] = {
		{ "Category", "AdvancedBuild" },
		{ "Comment", "// Strip debug symbols from packaged builds even if they aren't shipping builds.\n" },
		{ "DisplayName", "Strip debug symbols from packaged builds even if they aren't shipping builds" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Strip debug symbols from packaged builds even if they aren't shipping builds." },
	};
#endif
	void Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bRemoveDebugInfo_SetBit(void* Obj)
	{
		((ULuminRuntimeSettings*)Obj)->bRemoveDebugInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bRemoveDebugInfo = { "bRemoveDebugInfo", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULuminRuntimeSettings), &Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bRemoveDebugInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bRemoveDebugInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bRemoveDebugInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_SoundCueCookQualityIndex_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "Comment", "/** Quality Level to COOK SoundCues at (if set, all other levels will be stripped by the cooker). */" },
		{ "DisplayName", "Sound Cue Cook Quality" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Quality Level to COOK SoundCues at (if set, all other levels will be stripped by the cooker)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_SoundCueCookQualityIndex = { "SoundCueCookQualityIndex", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, SoundCueCookQualityIndex), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_SoundCueCookQualityIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_SoundCueCookQualityIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Which of the currently enabled occlusion plugins to use on Lumin. */" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled occlusion plugins to use on Lumin." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_OcclusionPlugin = { "OcclusionPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, OcclusionPlugin), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Which of the currently enabled reverb plugins to use on Lumin. */" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled reverb plugins to use on Lumin." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ReverbPlugin = { "ReverbPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, ReverbPlugin), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Which of the currently enabled spatialization plugins to use on Lumin. */" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled spatialization plugins to use on Lumin." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_SpatializationPlugin = { "SpatializationPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, SpatializationPlugin), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentElements_MetaData[] = {
		{ "Category", "Advanced MPK Packaging" },
		{ "Comment", "/** Extra component elements. */" },
		{ "DisplayName", "Extra <component> elements." },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Extra component elements." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentElements = { "ExtraComponentElements", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, ExtraComponentElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentElements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentElements_Inner = { "ExtraComponentElements", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLuminComponentElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentSubElements_MetaData[] = {
		{ "Category", "Advanced MPK Packaging" },
		{ "Comment", "/** Extra nodes under the <component> node like <mime-type>, <schema> etc. */" },
		{ "DisplayName", "Extra nodes under the <component> node" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Extra nodes under the <component> node like <mime-type>, <schema> etc." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentSubElements = { "ExtraComponentSubElements", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, ExtraComponentSubElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentSubElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentSubElements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentSubElements_Inner = { "ExtraComponentSubElements", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLuminComponentSubElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges_MetaData[] = {
		{ "Category", "Advanced MPK Packaging" },
		{ "Comment", "/** Any privileges your app needs. */" },
		{ "DisplayName", "App Privileges" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Any privileges your app needs." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges = { "AppPrivileges", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, AppPrivileges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges_Inner = { "AppPrivileges", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_LuminRuntimeSettings_ELuminPrivilege, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_MinimumAPILevel_MetaData[] = {
		{ "Category", "Advanced MPK Packaging" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Minimum API level required based on which APIs have been integrated into the base engine. Developers can set higher API levels if they are implementing newer APIs. */" },
		{ "DisplayName", "Minimum API Level" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Minimum API level required based on which APIs have been integrated into the base engine. Developers can set higher API levels if they are implementing newer APIs." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_MinimumAPILevel = { "MinimumAPILevel", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, MinimumAPILevel), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_MinimumAPILevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_MinimumAPILevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_VersionCode_MetaData[] = {
		{ "Category", "Advanced MPK Packaging" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Used as an internal version number. This number is used only to determine whether one version is more recent than another, with higher numbers indicating more recent versions. This is not the version number shown to users. */" },
		{ "DisplayName", "Version Code" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Used as an internal version number. This number is used only to determine whether one version is more recent than another, with higher numbers indicating more recent versions. This is not the version number shown to users." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_VersionCode = { "VersionCode", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, VersionCode), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_VersionCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_VersionCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_LocalizedIconInfos_MetaData[] = {
		{ "Category", "Magic Leap App Tile" },
		{ "DisplayName", "Localized Icon Infos" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_LocalizedIconInfos = { "LocalizedIconInfos", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, LocalizedIconInfos), Z_Construct_UScriptStruct_FLocalizedIconInfos, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_LocalizedIconInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_LocalizedIconInfos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconPortalPath_MetaData[] = {
		{ "Category", "Magic Leap App Tile" },
		{ "Comment", "/** Folder containing the assets (FBX / OBJ / MTL / PNG files) used for the Magic Leap App Icon portal. */" },
		{ "DisplayName", "Icon Portal" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Folder containing the assets (FBX / OBJ / MTL / PNG files) used for the Magic Leap App Icon portal." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconPortalPath = { "IconPortalPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, IconPortalPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconPortalPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconPortalPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconModelPath_MetaData[] = {
		{ "Category", "Magic Leap App Tile" },
		{ "Comment", "/** Folder containing the assets (FBX / OBJ / MTL / PNG files) used for the Magic Leap App Icon model. */" },
		{ "DisplayName", "Icon Model" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Folder containing the assets (FBX / OBJ / MTL / PNG files) used for the Magic Leap App Icon model." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconModelPath = { "IconModelPath", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, IconModelPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconModelPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconModelPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_Certificate_MetaData[] = {
		{ "Category", "Distribution Signing" },
		{ "Comment", "/** Certificate File used to sign builds for distribution. */" },
		{ "DisplayName", "Certificate File Path" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Certificate File used to sign builds for distribution." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_Certificate = { "Certificate", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, Certificate), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_Certificate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_Certificate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseVulkan_MetaData[] = {
		{ "DisplayName", "Use Vulkan (otherwise, OpenGL)" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseVulkan_SetBit(void* Obj)
	{
		((ULuminRuntimeSettings*)Obj)->bUseVulkan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseVulkan = { "bUseVulkan", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULuminRuntimeSettings), &Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseVulkan_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseVulkan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseVulkan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseMobileRendering_MetaData[] = {
		{ "Category", "Build" },
		{ "Comment", "/** If checked, use Mobile Rendering. Otherwise, use Desktop Rendering. */" },
		{ "DisplayName", "Use Mobile Rendering (otherwise, Desktop Rendering)" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "If checked, use Mobile Rendering. Otherwise, use Desktop Rendering." },
	};
#endif
	void Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseMobileRendering_SetBit(void* Obj)
	{
		((ULuminRuntimeSettings*)Obj)->bUseMobileRendering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseMobileRendering = { "bUseMobileRendering", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULuminRuntimeSettings), &Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseMobileRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseMobileRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseMobileRendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bManualCallToAppReady_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/**\n\x09 * Check this if you wish to manually control when the start up loading animation is dismissed.\n\x09 * @note If this is checked, the developer MUST call MagicLeapHMDFunctionLibrary::SetAppReady\n\x09 *       in order for their application to finish booting.\n\x09 */" },
		{ "DisplayName", "Manual call to 'set ready indication'" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Check this if you wish to manually control when the start up loading animation is dismissed.\n@note If this is checked, the developer MUST call MagicLeapHMDFunctionLibrary::SetAppReady\n      in order for their application to finish booting." },
	};
#endif
	void Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bManualCallToAppReady_SetBit(void* Obj)
	{
		((ULuminRuntimeSettings*)Obj)->bManualCallToAppReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bManualCallToAppReady = { "bManualCallToAppReady", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULuminRuntimeSettings), &Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bManualCallToAppReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bManualCallToAppReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bManualCallToAppReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bProtectedContent_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** Content for this app is protected and should not be recorded or captured outside the graphics system. */" },
		{ "DisplayName", "Protected Content" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Content for this app is protected and should not be recorded or captured outside the graphics system." },
	};
#endif
	void Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bProtectedContent_SetBit(void* Obj)
	{
		((ULuminRuntimeSettings*)Obj)->bProtectedContent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bProtectedContent = { "bProtectedContent", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULuminRuntimeSettings), &Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bProtectedContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bProtectedContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bProtectedContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_FrameTimingHint_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** Indicates to the Lumin OS what the application's target framerate is, to improve prediction and reprojection */" },
		{ "DisplayName", "Frame timing hint" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "Indicates to the Lumin OS what the application's target framerate is, to improve prediction and reprojection" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_FrameTimingHint = { "FrameTimingHint", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, FrameTimingHint), Z_Construct_UEnum_LuminRuntimeSettings_ELuminFrameTimingHint, METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_FrameTimingHint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_FrameTimingHint_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_FrameTimingHint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ApplicationDisplayName_MetaData[] = {
		{ "Category", "MPK Packaging" },
		{ "Comment", "/** The visual application name displayed for end users. */" },
		{ "DisplayName", "Application Display Name (project name if blank)" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "The visual application name displayed for end users." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ApplicationDisplayName = { "ApplicationDisplayName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, ApplicationDisplayName), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ApplicationDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ApplicationDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_PackageName_MetaData[] = {
		{ "Category", "MPK Packaging" },
		{ "Comment", "/** The official name of the project. Note: Must have at least 2 sections separated by a period and be unique! */" },
		{ "DisplayName", "Magic Leap Package Name ('com.Company.Project', [PROJECT] is replaced with project name)" },
		{ "ModuleRelativePath", "Classes/LuminRuntimeSettings.h" },
		{ "ToolTip", "The official name of the project. Note: Must have at least 2 sections separated by a period and be unique!" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuminRuntimeSettings, PackageName), METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_PackageName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULuminRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_LocalizedAppNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_LocalizedAppNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bFrameVignette,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_VulkanValidationLayerLibs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bRemoveDebugInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_SoundCueCookQualityIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_OcclusionPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ReverbPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_SpatializationPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentElements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentSubElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ExtraComponentSubElements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_AppPrivileges_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_MinimumAPILevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_VersionCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_LocalizedIconInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconPortalPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_IconModelPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_Certificate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseVulkan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bUseMobileRendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bManualCallToAppReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_bProtectedContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_FrameTimingHint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_FrameTimingHint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_ApplicationDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuminRuntimeSettings_Statics::NewProp_PackageName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuminRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuminRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuminRuntimeSettings_Statics::ClassParams = {
		&ULuminRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULuminRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULuminRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuminRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuminRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuminRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuminRuntimeSettings, 2886554478);
	template<> LUMINRUNTIMESETTINGS_API UClass* StaticClass<ULuminRuntimeSettings>()
	{
		return ULuminRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuminRuntimeSettings(Z_Construct_UClass_ULuminRuntimeSettings, &ULuminRuntimeSettings::StaticClass, TEXT("/Script/LuminRuntimeSettings"), TEXT("ULuminRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuminRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

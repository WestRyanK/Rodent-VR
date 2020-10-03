// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapPrivileges/Public/MagicLeapPrivilegeTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapPrivilegeTypes() {}
// Cross Module References
	MAGICLEAPPRIVILEGES_API UFunction* Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MagicLeapPrivileges();
	MAGICLEAPPRIVILEGES_API UEnum* Z_Construct_UEnum_MagicLeapPrivileges_EMagicLeapPrivilege();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature_Statics
	{
		struct _Script_MagicLeapPrivileges_eventMagicLeapPrivilegeRequestDelegate_Parms
		{
			EMagicLeapPrivilege RequestedPrivilege;
			bool WasGranted;
		};
		static void NewProp_WasGranted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasGranted;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RequestedPrivilege;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RequestedPrivilege_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature_Statics::NewProp_WasGranted_SetBit(void* Obj)
	{
		((_Script_MagicLeapPrivileges_eventMagicLeapPrivilegeRequestDelegate_Parms*)Obj)->WasGranted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature_Statics::NewProp_WasGranted = { "WasGranted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_MagicLeapPrivileges_eventMagicLeapPrivilegeRequestDelegate_Parms), &Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature_Statics::NewProp_WasGranted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature_Statics::NewProp_RequestedPrivilege = { "RequestedPrivilege", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MagicLeapPrivileges_eventMagicLeapPrivilegeRequestDelegate_Parms, RequestedPrivilege), Z_Construct_UEnum_MagicLeapPrivileges_EMagicLeapPrivilege, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature_Statics::NewProp_RequestedPrivilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature_Statics::NewProp_WasGranted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature_Statics::NewProp_RequestedPrivilege,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature_Statics::NewProp_RequestedPrivilege_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MagicLeapPrivilegeTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MagicLeapPrivileges, nullptr, "MagicLeapPrivilegeRequestDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_MagicLeapPrivileges_eventMagicLeapPrivilegeRequestDelegate_Parms), Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MagicLeapPrivileges_MagicLeapPrivilegeRequestDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EMagicLeapPrivilege_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapPrivileges_EMagicLeapPrivilege, Z_Construct_UPackage__Script_MagicLeapPrivileges(), TEXT("EMagicLeapPrivilege"));
		}
		return Singleton;
	}
	template<> MAGICLEAPPRIVILEGES_API UEnum* StaticEnum<EMagicLeapPrivilege>()
	{
		return EMagicLeapPrivilege_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapPrivilege(EMagicLeapPrivilege_StaticEnum, TEXT("/Script/MagicLeapPrivileges"), TEXT("EMagicLeapPrivilege"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapPrivileges_EMagicLeapPrivilege_Hash() { return 2255277312U; }
	UEnum* Z_Construct_UEnum_MagicLeapPrivileges_EMagicLeapPrivilege()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapPrivileges();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapPrivilege"), 0, Get_Z_Construct_UEnum_MagicLeapPrivileges_EMagicLeapPrivilege_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapPrivilege::Invalid", (int64)EMagicLeapPrivilege::Invalid },
				{ "EMagicLeapPrivilege::BatteryInfo", (int64)EMagicLeapPrivilege::BatteryInfo },
				{ "EMagicLeapPrivilege::CameraCapture", (int64)EMagicLeapPrivilege::CameraCapture },
				{ "EMagicLeapPrivilege::ComputerVision", (int64)EMagicLeapPrivilege::ComputerVision },
				{ "EMagicLeapPrivilege::WorldReconstruction", (int64)EMagicLeapPrivilege::WorldReconstruction },
				{ "EMagicLeapPrivilege::InAppPurchase", (int64)EMagicLeapPrivilege::InAppPurchase },
				{ "EMagicLeapPrivilege::AudioCaptureMic", (int64)EMagicLeapPrivilege::AudioCaptureMic },
				{ "EMagicLeapPrivilege::DrmCertificates", (int64)EMagicLeapPrivilege::DrmCertificates },
				{ "EMagicLeapPrivilege::Occlusion", (int64)EMagicLeapPrivilege::Occlusion },
				{ "EMagicLeapPrivilege::LowLatencyLightwear", (int64)EMagicLeapPrivilege::LowLatencyLightwear },
				{ "EMagicLeapPrivilege::Internet", (int64)EMagicLeapPrivilege::Internet },
				{ "EMagicLeapPrivilege::IdentityRead", (int64)EMagicLeapPrivilege::IdentityRead },
				{ "EMagicLeapPrivilege::BackgroundDownload", (int64)EMagicLeapPrivilege::BackgroundDownload },
				{ "EMagicLeapPrivilege::BackgroundUpload", (int64)EMagicLeapPrivilege::BackgroundUpload },
				{ "EMagicLeapPrivilege::MediaDrm", (int64)EMagicLeapPrivilege::MediaDrm },
				{ "EMagicLeapPrivilege::Media", (int64)EMagicLeapPrivilege::Media },
				{ "EMagicLeapPrivilege::MediaMetadata", (int64)EMagicLeapPrivilege::MediaMetadata },
				{ "EMagicLeapPrivilege::PowerInfo", (int64)EMagicLeapPrivilege::PowerInfo },
				{ "EMagicLeapPrivilege::LocalAreaNetwork", (int64)EMagicLeapPrivilege::LocalAreaNetwork },
				{ "EMagicLeapPrivilege::VoiceInput", (int64)EMagicLeapPrivilege::VoiceInput },
				{ "EMagicLeapPrivilege::Documents", (int64)EMagicLeapPrivilege::Documents },
				{ "EMagicLeapPrivilege::ConnectBackgroundMusicService", (int64)EMagicLeapPrivilege::ConnectBackgroundMusicService },
				{ "EMagicLeapPrivilege::RegisterBackgroundMusicService", (int64)EMagicLeapPrivilege::RegisterBackgroundMusicService },
				{ "EMagicLeapPrivilege::PcfRead", (int64)EMagicLeapPrivilege::PcfRead },
				{ "EMagicLeapPrivilege::PwFoundObjRead", (int64)EMagicLeapPrivilege::PwFoundObjRead },
				{ "EMagicLeapPrivilege::NormalNotificationsUsage", (int64)EMagicLeapPrivilege::NormalNotificationsUsage },
				{ "EMagicLeapPrivilege::MusicService", (int64)EMagicLeapPrivilege::MusicService },
				{ "EMagicLeapPrivilege::ControllerPose", (int64)EMagicLeapPrivilege::ControllerPose },
				{ "EMagicLeapPrivilege::GesturesSubscribe", (int64)EMagicLeapPrivilege::GesturesSubscribe },
				{ "EMagicLeapPrivilege::GesturesConfig", (int64)EMagicLeapPrivilege::GesturesConfig },
				{ "EMagicLeapPrivilege::AddressBookRead", (int64)EMagicLeapPrivilege::AddressBookRead },
				{ "EMagicLeapPrivilege::AddressBookWrite", (int64)EMagicLeapPrivilege::AddressBookWrite },
				{ "EMagicLeapPrivilege::AddressBookBasicAccess", (int64)EMagicLeapPrivilege::AddressBookBasicAccess },
				{ "EMagicLeapPrivilege::CoarseLocation", (int64)EMagicLeapPrivilege::CoarseLocation },
				{ "EMagicLeapPrivilege::FineLocation", (int64)EMagicLeapPrivilege::FineLocation },
				{ "EMagicLeapPrivilege::HandMesh", (int64)EMagicLeapPrivilege::HandMesh },
				{ "EMagicLeapPrivilege::WifiStatusRead", (int64)EMagicLeapPrivilege::WifiStatusRead },
				{ "EMagicLeapPrivilege::SocialConnectionsInvitesAccess", (int64)EMagicLeapPrivilege::SocialConnectionsInvitesAccess },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AddressBookBasicAccess.Name", "EMagicLeapPrivilege::AddressBookBasicAccess" },
				{ "AddressBookRead.Name", "EMagicLeapPrivilege::AddressBookRead" },
				{ "AddressBookWrite.Name", "EMagicLeapPrivilege::AddressBookWrite" },
				{ "AudioCaptureMic.Name", "EMagicLeapPrivilege::AudioCaptureMic" },
				{ "BackgroundDownload.Name", "EMagicLeapPrivilege::BackgroundDownload" },
				{ "BackgroundUpload.Name", "EMagicLeapPrivilege::BackgroundUpload" },
				{ "BatteryInfo.Name", "EMagicLeapPrivilege::BatteryInfo" },
				{ "BlueprintType", "true" },
				{ "CameraCapture.Name", "EMagicLeapPrivilege::CameraCapture" },
				{ "CoarseLocation.Name", "EMagicLeapPrivilege::CoarseLocation" },
				{ "Comment", "/** Privileges an app can request for from the system. */" },
				{ "ComputerVision.Name", "EMagicLeapPrivilege::ComputerVision" },
				{ "ConnectBackgroundMusicService.Name", "EMagicLeapPrivilege::ConnectBackgroundMusicService" },
				{ "ControllerPose.Name", "EMagicLeapPrivilege::ControllerPose" },
				{ "Documents.Name", "EMagicLeapPrivilege::Documents" },
				{ "DrmCertificates.Name", "EMagicLeapPrivilege::DrmCertificates" },
				{ "FineLocation.Name", "EMagicLeapPrivilege::FineLocation" },
				{ "GesturesConfig.Name", "EMagicLeapPrivilege::GesturesConfig" },
				{ "GesturesSubscribe.Name", "EMagicLeapPrivilege::GesturesSubscribe" },
				{ "HandMesh.Name", "EMagicLeapPrivilege::HandMesh" },
				{ "IdentityRead.Name", "EMagicLeapPrivilege::IdentityRead" },
				{ "InAppPurchase.Name", "EMagicLeapPrivilege::InAppPurchase" },
				{ "Internet.Name", "EMagicLeapPrivilege::Internet" },
				{ "Invalid.Name", "EMagicLeapPrivilege::Invalid" },
				{ "LocalAreaNetwork.Name", "EMagicLeapPrivilege::LocalAreaNetwork" },
				{ "LowLatencyLightwear.Name", "EMagicLeapPrivilege::LowLatencyLightwear" },
				{ "Media.Name", "EMagicLeapPrivilege::Media" },
				{ "MediaDrm.Name", "EMagicLeapPrivilege::MediaDrm" },
				{ "MediaMetadata.Name", "EMagicLeapPrivilege::MediaMetadata" },
				{ "ModuleRelativePath", "Public/MagicLeapPrivilegeTypes.h" },
				{ "MusicService.Name", "EMagicLeapPrivilege::MusicService" },
				{ "NormalNotificationsUsage.Name", "EMagicLeapPrivilege::NormalNotificationsUsage" },
				{ "Occlusion.Name", "EMagicLeapPrivilege::Occlusion" },
				{ "PcfRead.Name", "EMagicLeapPrivilege::PcfRead" },
				{ "PowerInfo.Name", "EMagicLeapPrivilege::PowerInfo" },
				{ "PwFoundObjRead.Name", "EMagicLeapPrivilege::PwFoundObjRead" },
				{ "RegisterBackgroundMusicService.Name", "EMagicLeapPrivilege::RegisterBackgroundMusicService" },
				{ "SocialConnectionsInvitesAccess.Name", "EMagicLeapPrivilege::SocialConnectionsInvitesAccess" },
				{ "ToolTip", "Privileges an app can request for from the system." },
				{ "VoiceInput.Name", "EMagicLeapPrivilege::VoiceInput" },
				{ "WifiStatusRead.Name", "EMagicLeapPrivilege::WifiStatusRead" },
				{ "WorldReconstruction.Name", "EMagicLeapPrivilege::WorldReconstruction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapPrivileges,
				nullptr,
				"EMagicLeapPrivilege",
				"EMagicLeapPrivilege",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

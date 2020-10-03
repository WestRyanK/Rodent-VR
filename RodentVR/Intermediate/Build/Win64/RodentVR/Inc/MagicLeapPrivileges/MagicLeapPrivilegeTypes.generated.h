// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMagicLeapPrivilege : uint8;
#ifdef MAGICLEAPPRIVILEGES_MagicLeapPrivilegeTypes_generated_h
#error "MagicLeapPrivilegeTypes.generated.h already included, missing '#pragma once' in MagicLeapPrivilegeTypes.h"
#endif
#define MAGICLEAPPRIVILEGES_MagicLeapPrivilegeTypes_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPrivileges_Public_MagicLeapPrivilegeTypes_h_58_DELEGATE \
struct _Script_MagicLeapPrivileges_eventMagicLeapPrivilegeRequestDelegate_Parms \
{ \
	EMagicLeapPrivilege RequestedPrivilege; \
	bool WasGranted; \
}; \
static inline void FMagicLeapPrivilegeRequestDelegate_DelegateWrapper(const FScriptDelegate& MagicLeapPrivilegeRequestDelegate, EMagicLeapPrivilege RequestedPrivilege, bool WasGranted) \
{ \
	_Script_MagicLeapPrivileges_eventMagicLeapPrivilegeRequestDelegate_Parms Parms; \
	Parms.RequestedPrivilege=RequestedPrivilege; \
	Parms.WasGranted=WasGranted ? true : false; \
	MagicLeapPrivilegeRequestDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapPrivileges_Public_MagicLeapPrivilegeTypes_h


#define FOREACH_ENUM_EMAGICLEAPPRIVILEGE(op) \
	op(EMagicLeapPrivilege::Invalid) \
	op(EMagicLeapPrivilege::BatteryInfo) \
	op(EMagicLeapPrivilege::CameraCapture) \
	op(EMagicLeapPrivilege::ComputerVision) \
	op(EMagicLeapPrivilege::WorldReconstruction) \
	op(EMagicLeapPrivilege::InAppPurchase) \
	op(EMagicLeapPrivilege::AudioCaptureMic) \
	op(EMagicLeapPrivilege::DrmCertificates) \
	op(EMagicLeapPrivilege::Occlusion) \
	op(EMagicLeapPrivilege::LowLatencyLightwear) \
	op(EMagicLeapPrivilege::Internet) \
	op(EMagicLeapPrivilege::IdentityRead) \
	op(EMagicLeapPrivilege::BackgroundDownload) \
	op(EMagicLeapPrivilege::BackgroundUpload) \
	op(EMagicLeapPrivilege::MediaDrm) \
	op(EMagicLeapPrivilege::Media) \
	op(EMagicLeapPrivilege::MediaMetadata) \
	op(EMagicLeapPrivilege::PowerInfo) \
	op(EMagicLeapPrivilege::LocalAreaNetwork) \
	op(EMagicLeapPrivilege::VoiceInput) \
	op(EMagicLeapPrivilege::Documents) \
	op(EMagicLeapPrivilege::ConnectBackgroundMusicService) \
	op(EMagicLeapPrivilege::RegisterBackgroundMusicService) \
	op(EMagicLeapPrivilege::PcfRead) \
	op(EMagicLeapPrivilege::PwFoundObjRead) \
	op(EMagicLeapPrivilege::NormalNotificationsUsage) \
	op(EMagicLeapPrivilege::MusicService) \
	op(EMagicLeapPrivilege::ControllerPose) \
	op(EMagicLeapPrivilege::GesturesSubscribe) \
	op(EMagicLeapPrivilege::GesturesConfig) \
	op(EMagicLeapPrivilege::AddressBookRead) \
	op(EMagicLeapPrivilege::AddressBookWrite) \
	op(EMagicLeapPrivilege::AddressBookBasicAccess) \
	op(EMagicLeapPrivilege::CoarseLocation) \
	op(EMagicLeapPrivilege::FineLocation) \
	op(EMagicLeapPrivilege::HandMesh) \
	op(EMagicLeapPrivilege::WifiStatusRead) \
	op(EMagicLeapPrivilege::SocialConnectionsInvitesAccess) 

enum class EMagicLeapPrivilege : uint8;
template<> MAGICLEAPPRIVILEGES_API UEnum* StaticEnum<EMagicLeapPrivilege>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

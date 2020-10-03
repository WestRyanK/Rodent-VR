// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGICLEAPIDENTITY_MagicLeapIdentityTypes_generated_h
#error "MagicLeapIdentityTypes.generated.h already included, missing '#pragma once' in MagicLeapIdentityTypes.h"
#endif
#define MAGICLEAPIDENTITY_MagicLeapIdentityTypes_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentityTypes_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics; \
	MAGICLEAPIDENTITY_API static class UScriptStruct* StaticStruct();


template<> MAGICLEAPIDENTITY_API UScriptStruct* StaticStruct<struct FMagicLeapIdentityAttribute>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapIdentity_Public_MagicLeapIdentityTypes_h


#define FOREACH_ENUM_EMAGICLEAPIDENTITYERROR(op) \
	op(EMagicLeapIdentityError::Ok) \
	op(EMagicLeapIdentityError::InvalidParam) \
	op(EMagicLeapIdentityError::AllocFailed) \
	op(EMagicLeapIdentityError::PrivilegeDenied) \
	op(EMagicLeapIdentityError::FailedToConnectToLocalService) \
	op(EMagicLeapIdentityError::FailedToConnectToCloudService) \
	op(EMagicLeapIdentityError::CloudAuthentication) \
	op(EMagicLeapIdentityError::InvalidInformationFromCloud) \
	op(EMagicLeapIdentityError::NotLoggedIn) \
	op(EMagicLeapIdentityError::ExpiredCredentials) \
	op(EMagicLeapIdentityError::FailedToGetUserProfile) \
	op(EMagicLeapIdentityError::Unauthorized) \
	op(EMagicLeapIdentityError::CertificateError) \
	op(EMagicLeapIdentityError::RejectedByCloud) \
	op(EMagicLeapIdentityError::AlreadyLoggedIn) \
	op(EMagicLeapIdentityError::ModifyIsNotSupported) \
	op(EMagicLeapIdentityError::NetworkError) \
	op(EMagicLeapIdentityError::UnspecifiedFailure) 

enum class EMagicLeapIdentityError : uint8;
template<> MAGICLEAPIDENTITY_API UEnum* StaticEnum<EMagicLeapIdentityError>();

#define FOREACH_ENUM_EMAGICLEAPIDENTITYKEY(op) \
	op(EMagicLeapIdentityKey::GivenName) \
	op(EMagicLeapIdentityKey::FamilyName) \
	op(EMagicLeapIdentityKey::Email) \
	op(EMagicLeapIdentityKey::Bio) \
	op(EMagicLeapIdentityKey::PhoneNumber) \
	op(EMagicLeapIdentityKey::Avatar2D) \
	op(EMagicLeapIdentityKey::Avatar3D) \
	op(EMagicLeapIdentityKey::Unknown) 

enum class EMagicLeapIdentityKey : uint8;
template<> MAGICLEAPIDENTITY_API UEnum* StaticEnum<EMagicLeapIdentityKey>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

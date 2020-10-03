// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapIdentity/Public/MagicLeapIdentityTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapIdentityTypes() {}
// Cross Module References
	MAGICLEAPIDENTITY_API UEnum* Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityError();
	UPackage* Z_Construct_UPackage__Script_MagicLeapIdentity();
	MAGICLEAPIDENTITY_API UEnum* Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityKey();
	MAGICLEAPIDENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute();
// End Cross Module References
	static UEnum* EMagicLeapIdentityError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityError, Z_Construct_UPackage__Script_MagicLeapIdentity(), TEXT("EMagicLeapIdentityError"));
		}
		return Singleton;
	}
	template<> MAGICLEAPIDENTITY_API UEnum* StaticEnum<EMagicLeapIdentityError>()
	{
		return EMagicLeapIdentityError_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapIdentityError(EMagicLeapIdentityError_StaticEnum, TEXT("/Script/MagicLeapIdentity"), TEXT("EMagicLeapIdentityError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityError_Hash() { return 3563687628U; }
	UEnum* Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapIdentity();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapIdentityError"), 0, Get_Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityError_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapIdentityError::Ok", (int64)EMagicLeapIdentityError::Ok },
				{ "EMagicLeapIdentityError::InvalidParam", (int64)EMagicLeapIdentityError::InvalidParam },
				{ "EMagicLeapIdentityError::AllocFailed", (int64)EMagicLeapIdentityError::AllocFailed },
				{ "EMagicLeapIdentityError::PrivilegeDenied", (int64)EMagicLeapIdentityError::PrivilegeDenied },
				{ "EMagicLeapIdentityError::FailedToConnectToLocalService", (int64)EMagicLeapIdentityError::FailedToConnectToLocalService },
				{ "EMagicLeapIdentityError::FailedToConnectToCloudService", (int64)EMagicLeapIdentityError::FailedToConnectToCloudService },
				{ "EMagicLeapIdentityError::CloudAuthentication", (int64)EMagicLeapIdentityError::CloudAuthentication },
				{ "EMagicLeapIdentityError::InvalidInformationFromCloud", (int64)EMagicLeapIdentityError::InvalidInformationFromCloud },
				{ "EMagicLeapIdentityError::NotLoggedIn", (int64)EMagicLeapIdentityError::NotLoggedIn },
				{ "EMagicLeapIdentityError::ExpiredCredentials", (int64)EMagicLeapIdentityError::ExpiredCredentials },
				{ "EMagicLeapIdentityError::FailedToGetUserProfile", (int64)EMagicLeapIdentityError::FailedToGetUserProfile },
				{ "EMagicLeapIdentityError::Unauthorized", (int64)EMagicLeapIdentityError::Unauthorized },
				{ "EMagicLeapIdentityError::CertificateError", (int64)EMagicLeapIdentityError::CertificateError },
				{ "EMagicLeapIdentityError::RejectedByCloud", (int64)EMagicLeapIdentityError::RejectedByCloud },
				{ "EMagicLeapIdentityError::AlreadyLoggedIn", (int64)EMagicLeapIdentityError::AlreadyLoggedIn },
				{ "EMagicLeapIdentityError::ModifyIsNotSupported", (int64)EMagicLeapIdentityError::ModifyIsNotSupported },
				{ "EMagicLeapIdentityError::NetworkError", (int64)EMagicLeapIdentityError::NetworkError },
				{ "EMagicLeapIdentityError::UnspecifiedFailure", (int64)EMagicLeapIdentityError::UnspecifiedFailure },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllocFailed.Name", "EMagicLeapIdentityError::AllocFailed" },
				{ "AlreadyLoggedIn.Name", "EMagicLeapIdentityError::AlreadyLoggedIn" },
				{ "BlueprintType", "true" },
				{ "CertificateError.Name", "EMagicLeapIdentityError::CertificateError" },
				{ "CloudAuthentication.Name", "EMagicLeapIdentityError::CloudAuthentication" },
				{ "Comment", "/** List of possible errors when calling the Identity functions. */" },
				{ "ExpiredCredentials.Name", "EMagicLeapIdentityError::ExpiredCredentials" },
				{ "FailedToConnectToCloudService.Name", "EMagicLeapIdentityError::FailedToConnectToCloudService" },
				{ "FailedToConnectToLocalService.Name", "EMagicLeapIdentityError::FailedToConnectToLocalService" },
				{ "FailedToGetUserProfile.Name", "EMagicLeapIdentityError::FailedToGetUserProfile" },
				{ "InvalidInformationFromCloud.Name", "EMagicLeapIdentityError::InvalidInformationFromCloud" },
				{ "InvalidParam.Name", "EMagicLeapIdentityError::InvalidParam" },
				{ "ModifyIsNotSupported.Name", "EMagicLeapIdentityError::ModifyIsNotSupported" },
				{ "ModuleRelativePath", "Public/MagicLeapIdentityTypes.h" },
				{ "NetworkError.Name", "EMagicLeapIdentityError::NetworkError" },
				{ "NotLoggedIn.Name", "EMagicLeapIdentityError::NotLoggedIn" },
				{ "Ok.Name", "EMagicLeapIdentityError::Ok" },
				{ "PrivilegeDenied.Name", "EMagicLeapIdentityError::PrivilegeDenied" },
				{ "RejectedByCloud.Name", "EMagicLeapIdentityError::RejectedByCloud" },
				{ "ToolTip", "List of possible errors when calling the Identity functions." },
				{ "Unauthorized.Name", "EMagicLeapIdentityError::Unauthorized" },
				{ "UnspecifiedFailure.Name", "EMagicLeapIdentityError::UnspecifiedFailure" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapIdentity,
				nullptr,
				"EMagicLeapIdentityError",
				"EMagicLeapIdentityError",
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
	static UEnum* EMagicLeapIdentityKey_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityKey, Z_Construct_UPackage__Script_MagicLeapIdentity(), TEXT("EMagicLeapIdentityKey"));
		}
		return Singleton;
	}
	template<> MAGICLEAPIDENTITY_API UEnum* StaticEnum<EMagicLeapIdentityKey>()
	{
		return EMagicLeapIdentityKey_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapIdentityKey(EMagicLeapIdentityKey_StaticEnum, TEXT("/Script/MagicLeapIdentity"), TEXT("EMagicLeapIdentityKey"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityKey_Hash() { return 2702551258U; }
	UEnum* Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityKey()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapIdentity();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapIdentityKey"), 0, Get_Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityKey_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapIdentityKey::GivenName", (int64)EMagicLeapIdentityKey::GivenName },
				{ "EMagicLeapIdentityKey::FamilyName", (int64)EMagicLeapIdentityKey::FamilyName },
				{ "EMagicLeapIdentityKey::Email", (int64)EMagicLeapIdentityKey::Email },
				{ "EMagicLeapIdentityKey::Bio", (int64)EMagicLeapIdentityKey::Bio },
				{ "EMagicLeapIdentityKey::PhoneNumber", (int64)EMagicLeapIdentityKey::PhoneNumber },
				{ "EMagicLeapIdentityKey::Avatar2D", (int64)EMagicLeapIdentityKey::Avatar2D },
				{ "EMagicLeapIdentityKey::Avatar3D", (int64)EMagicLeapIdentityKey::Avatar3D },
				{ "EMagicLeapIdentityKey::Unknown", (int64)EMagicLeapIdentityKey::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Avatar2D.Name", "EMagicLeapIdentityKey::Avatar2D" },
				{ "Avatar3D.Name", "EMagicLeapIdentityKey::Avatar3D" },
				{ "Bio.Name", "EMagicLeapIdentityKey::Bio" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Identifies an attribute in a user profile. */" },
				{ "Email.Name", "EMagicLeapIdentityKey::Email" },
				{ "FamilyName.Name", "EMagicLeapIdentityKey::FamilyName" },
				{ "GivenName.Name", "EMagicLeapIdentityKey::GivenName" },
				{ "ModuleRelativePath", "Public/MagicLeapIdentityTypes.h" },
				{ "PhoneNumber.Name", "EMagicLeapIdentityKey::PhoneNumber" },
				{ "ScriptName", "MagicLeapIdentityAttributeType" },
				{ "ToolTip", "Identifies an attribute in a user profile." },
				{ "Unknown.Name", "EMagicLeapIdentityKey::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapIdentity,
				nullptr,
				"EMagicLeapIdentityKey",
				"EMagicLeapIdentityKey",
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
class UScriptStruct* FMagicLeapIdentityAttribute::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAPIDENTITY_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute, Z_Construct_UPackage__Script_MagicLeapIdentity(), TEXT("MagicLeapIdentityAttribute"), sizeof(FMagicLeapIdentityAttribute), Get_Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Hash());
	}
	return Singleton;
}
template<> MAGICLEAPIDENTITY_API UScriptStruct* StaticStruct<FMagicLeapIdentityAttribute>()
{
	return FMagicLeapIdentityAttribute::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapIdentityAttribute(FMagicLeapIdentityAttribute::StaticStruct, TEXT("/Script/MagicLeapIdentity"), TEXT("MagicLeapIdentityAttribute"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeapIdentity_StaticRegisterNativesFMagicLeapIdentityAttribute
{
	FScriptStruct_MagicLeapIdentity_StaticRegisterNativesFMagicLeapIdentityAttribute()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapIdentityAttribute")),new UScriptStruct::TCppStructOps<FMagicLeapIdentityAttribute>);
	}
} ScriptStruct_MagicLeapIdentity_StaticRegisterNativesFMagicLeapIdentityAttribute;
	struct Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Attribute_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Represents an attribute and its value of a user's profile. */" },
		{ "ModuleRelativePath", "Public/MagicLeapIdentityTypes.h" },
		{ "ToolTip", "Represents an attribute and its value of a user's profile." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapIdentityAttribute>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Identity|MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapIdentityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapIdentityAttribute, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::NewProp_Attribute_MetaData[] = {
		{ "Category", "Identity|MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapIdentityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapIdentityAttribute, Attribute), Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::NewProp_Attribute_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::NewProp_Attribute_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapIdentity,
		nullptr,
		&NewStructOps,
		"MagicLeapIdentityAttribute",
		sizeof(FMagicLeapIdentityAttribute),
		alignof(FMagicLeapIdentityAttribute),
		Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapIdentity();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapIdentityAttribute"), sizeof(FMagicLeapIdentityAttribute), Get_Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute_Hash() { return 1852873842U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

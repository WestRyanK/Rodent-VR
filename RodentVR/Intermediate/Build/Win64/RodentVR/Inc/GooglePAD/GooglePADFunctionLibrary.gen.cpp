// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GooglePAD/Classes/GooglePADFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGooglePADFunctionLibrary() {}
// Cross Module References
	GOOGLEPAD_API UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus();
	UPackage* Z_Construct_UPackage__Script_GooglePAD();
	GOOGLEPAD_API UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod();
	GOOGLEPAD_API UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus();
	GOOGLEPAD_API UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode();
	GOOGLEPAD_API UClass* Z_Construct_UClass_UGooglePADFunctionLibrary_NoRegister();
	GOOGLEPAD_API UClass* Z_Construct_UClass_UGooglePADFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static UEnum* EGooglePADCellularDataConfirmStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus, Z_Construct_UPackage__Script_GooglePAD(), TEXT("EGooglePADCellularDataConfirmStatus"));
		}
		return Singleton;
	}
	template<> GOOGLEPAD_API UEnum* StaticEnum<EGooglePADCellularDataConfirmStatus>()
	{
		return EGooglePADCellularDataConfirmStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGooglePADCellularDataConfirmStatus(EGooglePADCellularDataConfirmStatus_StaticEnum, TEXT("/Script/GooglePAD"), TEXT("EGooglePADCellularDataConfirmStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus_Hash() { return 2063704388U; }
	UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GooglePAD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGooglePADCellularDataConfirmStatus"), 0, Get_Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_UNKNOWN", (int64)EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_UNKNOWN },
				{ "EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_PENDING", (int64)EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_PENDING },
				{ "EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_USER_APPROVED", (int64)EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_USER_APPROVED },
				{ "EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_USER_CANCELED", (int64)EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_USER_CANCELED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AssetPack_CONFIRM_PENDING.Comment", "// AssetPackManager_showCellularDataConfirmation() has been called, but the user hasn't made a choice.\n" },
				{ "AssetPack_CONFIRM_PENDING.Name", "EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_PENDING" },
				{ "AssetPack_CONFIRM_PENDING.ToolTip", "AssetPackManager_showCellularDataConfirmation() has been called, but the user hasn't made a choice." },
				{ "AssetPack_CONFIRM_UNKNOWN.Comment", "// AssetPackManager_showCellularDataConfirmation() has not been called.\n" },
				{ "AssetPack_CONFIRM_UNKNOWN.Name", "EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_UNKNOWN" },
				{ "AssetPack_CONFIRM_UNKNOWN.ToolTip", "AssetPackManager_showCellularDataConfirmation() has not been called." },
				{ "AssetPack_CONFIRM_USER_APPROVED.Comment", "// The user approved of downloading Asset Packs over cellular data.\n" },
				{ "AssetPack_CONFIRM_USER_APPROVED.Name", "EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_USER_APPROVED" },
				{ "AssetPack_CONFIRM_USER_APPROVED.ToolTip", "The user approved of downloading Asset Packs over cellular data." },
				{ "AssetPack_CONFIRM_USER_CANCELED.Comment", "// The user declined to download Asset Packs over cellular data.\n" },
				{ "AssetPack_CONFIRM_USER_CANCELED.Name", "EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_USER_CANCELED" },
				{ "AssetPack_CONFIRM_USER_CANCELED.ToolTip", "The user declined to download Asset Packs over cellular data." },
				{ "BlueprintType", "true" },
				{ "Comment", "// The status associated with a request to display a cellular data confirmation dialog.\n" },
				{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
				{ "ToolTip", "The status associated with a request to display a cellular data confirmation dialog." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GooglePAD,
				nullptr,
				"EGooglePADCellularDataConfirmStatus",
				"EGooglePADCellularDataConfirmStatus",
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
	static UEnum* EGooglePADStorageMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod, Z_Construct_UPackage__Script_GooglePAD(), TEXT("EGooglePADStorageMethod"));
		}
		return Singleton;
	}
	template<> GOOGLEPAD_API UEnum* StaticEnum<EGooglePADStorageMethod>()
	{
		return EGooglePADStorageMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGooglePADStorageMethod(EGooglePADStorageMethod_StaticEnum, TEXT("/Script/GooglePAD"), TEXT("EGooglePADStorageMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod_Hash() { return 2622204073U; }
	UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GooglePAD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGooglePADStorageMethod"), 0, Get_Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGooglePADStorageMethod::AssetPack_STORAGE_FILES", (int64)EGooglePADStorageMethod::AssetPack_STORAGE_FILES },
				{ "EGooglePADStorageMethod::AssetPack_STORAGE_APK", (int64)EGooglePADStorageMethod::AssetPack_STORAGE_APK },
				{ "EGooglePADStorageMethod::AssetPack_STORAGE_UNKNOWN", (int64)EGooglePADStorageMethod::AssetPack_STORAGE_UNKNOWN },
				{ "EGooglePADStorageMethod::AssetPack_STORAGE_NOT_INSTALLED", (int64)EGooglePADStorageMethod::AssetPack_STORAGE_NOT_INSTALLED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AssetPack_STORAGE_APK.Comment", "// The Asset Pack is installed as an APK containing packed asset files. Assets can be accessed via AAssetManager.\n" },
				{ "AssetPack_STORAGE_APK.Name", "EGooglePADStorageMethod::AssetPack_STORAGE_APK" },
				{ "AssetPack_STORAGE_APK.ToolTip", "The Asset Pack is installed as an APK containing packed asset files. Assets can be accessed via AAssetManager." },
				{ "AssetPack_STORAGE_FILES.Comment", "// The Asset Pack is unpacked into a folder containing individual asset files. Assets can be accessed via standard File APIs.\n" },
				{ "AssetPack_STORAGE_FILES.Name", "EGooglePADStorageMethod::AssetPack_STORAGE_FILES" },
				{ "AssetPack_STORAGE_FILES.ToolTip", "The Asset Pack is unpacked into a folder containing individual asset files. Assets can be accessed via standard File APIs." },
				{ "AssetPack_STORAGE_NOT_INSTALLED.Comment", "// The Asset Pack is not installed.\n" },
				{ "AssetPack_STORAGE_NOT_INSTALLED.Name", "EGooglePADStorageMethod::AssetPack_STORAGE_NOT_INSTALLED" },
				{ "AssetPack_STORAGE_NOT_INSTALLED.ToolTip", "The Asset Pack is not installed." },
				{ "AssetPack_STORAGE_UNKNOWN.Comment", "// Nothing is known, perhaps due to an error.\n" },
				{ "AssetPack_STORAGE_UNKNOWN.Name", "EGooglePADStorageMethod::AssetPack_STORAGE_UNKNOWN" },
				{ "AssetPack_STORAGE_UNKNOWN.ToolTip", "Nothing is known, perhaps due to an error." },
				{ "BlueprintType", "true" },
				{ "Comment", "// The method used to store an Asset Pack on the device.\n" },
				{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
				{ "ToolTip", "The method used to store an Asset Pack on the device." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GooglePAD,
				nullptr,
				"EGooglePADStorageMethod",
				"EGooglePADStorageMethod",
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
	static UEnum* EGooglePADDownloadStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus, Z_Construct_UPackage__Script_GooglePAD(), TEXT("EGooglePADDownloadStatus"));
		}
		return Singleton;
	}
	template<> GOOGLEPAD_API UEnum* StaticEnum<EGooglePADDownloadStatus>()
	{
		return EGooglePADDownloadStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGooglePADDownloadStatus(EGooglePADDownloadStatus_StaticEnum, TEXT("/Script/GooglePAD"), TEXT("EGooglePADDownloadStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus_Hash() { return 568570002U; }
	UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GooglePAD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGooglePADDownloadStatus"), 0, Get_Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGooglePADDownloadStatus::AssetPack_UNKNOWN", (int64)EGooglePADDownloadStatus::AssetPack_UNKNOWN },
				{ "EGooglePADDownloadStatus::AssetPack_DOWNLOAD_PENDING", (int64)EGooglePADDownloadStatus::AssetPack_DOWNLOAD_PENDING },
				{ "EGooglePADDownloadStatus::AssetPack_DOWNLOADING", (int64)EGooglePADDownloadStatus::AssetPack_DOWNLOADING },
				{ "EGooglePADDownloadStatus::AssetPack_TRANSFERRING", (int64)EGooglePADDownloadStatus::AssetPack_TRANSFERRING },
				{ "EGooglePADDownloadStatus::AssetPack_DOWNLOAD_COMPLETED", (int64)EGooglePADDownloadStatus::AssetPack_DOWNLOAD_COMPLETED },
				{ "EGooglePADDownloadStatus::AssetPack_DOWNLOAD_FAILED", (int64)EGooglePADDownloadStatus::AssetPack_DOWNLOAD_FAILED },
				{ "EGooglePADDownloadStatus::AssetPack_DOWNLOAD_CANCELED", (int64)EGooglePADDownloadStatus::AssetPack_DOWNLOAD_CANCELED },
				{ "EGooglePADDownloadStatus::AssetPack_WAITING_FOR_WIFI", (int64)EGooglePADDownloadStatus::AssetPack_WAITING_FOR_WIFI },
				{ "EGooglePADDownloadStatus::AssetPack_NOT_INSTALLED", (int64)EGooglePADDownloadStatus::AssetPack_NOT_INSTALLED },
				{ "EGooglePADDownloadStatus::AssetPack_INFO_PENDING", (int64)EGooglePADDownloadStatus::AssetPack_INFO_PENDING },
				{ "EGooglePADDownloadStatus::AssetPack_INFO_FAILED", (int64)EGooglePADDownloadStatus::AssetPack_INFO_FAILED },
				{ "EGooglePADDownloadStatus::AssetPack_REMOVAL_PENDING", (int64)EGooglePADDownloadStatus::AssetPack_REMOVAL_PENDING },
				{ "EGooglePADDownloadStatus::AssetPack_REMOVAL_FAILED", (int64)EGooglePADDownloadStatus::AssetPack_REMOVAL_FAILED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AssetPack_DOWNLOAD_CANCELED.Comment", "// Asset Pack download has been canceled.\n" },
				{ "AssetPack_DOWNLOAD_CANCELED.Name", "EGooglePADDownloadStatus::AssetPack_DOWNLOAD_CANCELED" },
				{ "AssetPack_DOWNLOAD_CANCELED.ToolTip", "Asset Pack download has been canceled." },
				{ "AssetPack_DOWNLOAD_COMPLETED.Comment", "// Download and transfer are complete; the assets are available to the app.\n" },
				{ "AssetPack_DOWNLOAD_COMPLETED.Name", "EGooglePADDownloadStatus::AssetPack_DOWNLOAD_COMPLETED" },
				{ "AssetPack_DOWNLOAD_COMPLETED.ToolTip", "Download and transfer are complete; the assets are available to the app." },
				{ "AssetPack_DOWNLOAD_FAILED.Comment", "// An AssetPackManager_requestDownload() has failed.\n" },
				{ "AssetPack_DOWNLOAD_FAILED.Name", "EGooglePADDownloadStatus::AssetPack_DOWNLOAD_FAILED" },
				{ "AssetPack_DOWNLOAD_FAILED.ToolTip", "An AssetPackManager_requestDownload() has failed." },
				{ "AssetPack_DOWNLOAD_PENDING.Comment", "// An AssetPackManager_requestDownload() async request is pending.\n" },
				{ "AssetPack_DOWNLOAD_PENDING.Name", "EGooglePADDownloadStatus::AssetPack_DOWNLOAD_PENDING" },
				{ "AssetPack_DOWNLOAD_PENDING.ToolTip", "An AssetPackManager_requestDownload() async request is pending." },
				{ "AssetPack_DOWNLOADING.Comment", "// The Asset Pack download is in progress.\n" },
				{ "AssetPack_DOWNLOADING.Name", "EGooglePADDownloadStatus::AssetPack_DOWNLOADING" },
				{ "AssetPack_DOWNLOADING.ToolTip", "The Asset Pack download is in progress." },
				{ "AssetPack_INFO_FAILED.Comment", "// An AssetPackManager_requestInfo() async request has failed.\n" },
				{ "AssetPack_INFO_FAILED.Name", "EGooglePADDownloadStatus::AssetPack_INFO_FAILED" },
				{ "AssetPack_INFO_FAILED.ToolTip", "An AssetPackManager_requestInfo() async request has failed." },
				{ "AssetPack_INFO_PENDING.Comment", "// An AssetPackManager_requestInfo() async request started, but the result isn't known yet.\n" },
				{ "AssetPack_INFO_PENDING.Name", "EGooglePADDownloadStatus::AssetPack_INFO_PENDING" },
				{ "AssetPack_INFO_PENDING.ToolTip", "An AssetPackManager_requestInfo() async request started, but the result isn't known yet." },
				{ "AssetPack_NOT_INSTALLED.Comment", "// The Asset Pack isn't installed.\n" },
				{ "AssetPack_NOT_INSTALLED.Name", "EGooglePADDownloadStatus::AssetPack_NOT_INSTALLED" },
				{ "AssetPack_NOT_INSTALLED.ToolTip", "The Asset Pack isn't installed." },
				{ "AssetPack_REMOVAL_FAILED.Comment", "// An AssetPackManager_requestRemoval() async request has failed.\n" },
				{ "AssetPack_REMOVAL_FAILED.Name", "EGooglePADDownloadStatus::AssetPack_REMOVAL_FAILED" },
				{ "AssetPack_REMOVAL_FAILED.ToolTip", "An AssetPackManager_requestRemoval() async request has failed." },
				{ "AssetPack_REMOVAL_PENDING.Comment", "// An AssetPackManager_requestRemoval() async request started.\n" },
				{ "AssetPack_REMOVAL_PENDING.Name", "EGooglePADDownloadStatus::AssetPack_REMOVAL_PENDING" },
				{ "AssetPack_REMOVAL_PENDING.ToolTip", "An AssetPackManager_requestRemoval() async request started." },
				{ "AssetPack_TRANSFERRING.Comment", "// The Asset Pack is being transferred to the app.\n" },
				{ "AssetPack_TRANSFERRING.Name", "EGooglePADDownloadStatus::AssetPack_TRANSFERRING" },
				{ "AssetPack_TRANSFERRING.ToolTip", "The Asset Pack is being transferred to the app." },
				{ "AssetPack_UNKNOWN.Comment", "// Nothing is known about the Asset Pack.\n" },
				{ "AssetPack_UNKNOWN.Name", "EGooglePADDownloadStatus::AssetPack_UNKNOWN" },
				{ "AssetPack_UNKNOWN.ToolTip", "Nothing is known about the Asset Pack." },
				{ "AssetPack_WAITING_FOR_WIFI.Comment", "// The Asset Pack download is waiting for Wi-Fi to proceed.\n" },
				{ "AssetPack_WAITING_FOR_WIFI.Name", "EGooglePADDownloadStatus::AssetPack_WAITING_FOR_WIFI" },
				{ "AssetPack_WAITING_FOR_WIFI.ToolTip", "The Asset Pack download is waiting for Wi-Fi to proceed." },
				{ "BlueprintType", "true" },
				{ "Comment", "// The status associated with Asset Pack download operations.\n" },
				{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
				{ "ToolTip", "The status associated with Asset Pack download operations." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GooglePAD,
				nullptr,
				"EGooglePADDownloadStatus",
				"EGooglePADDownloadStatus",
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
	static UEnum* EGooglePADErrorCode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, Z_Construct_UPackage__Script_GooglePAD(), TEXT("EGooglePADErrorCode"));
		}
		return Singleton;
	}
	template<> GOOGLEPAD_API UEnum* StaticEnum<EGooglePADErrorCode>()
	{
		return EGooglePADErrorCode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGooglePADErrorCode(EGooglePADErrorCode_StaticEnum, TEXT("/Script/GooglePAD"), TEXT("EGooglePADErrorCode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode_Hash() { return 3834092638U; }
	UEnum* Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GooglePAD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGooglePADErrorCode"), 0, Get_Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGooglePADErrorCode::AssetPack_NO_ERROR", (int64)EGooglePADErrorCode::AssetPack_NO_ERROR },
				{ "EGooglePADErrorCode::AssetPack_APP_UNAVAILABLE", (int64)EGooglePADErrorCode::AssetPack_APP_UNAVAILABLE },
				{ "EGooglePADErrorCode::AssetPack_UNAVAILABLE", (int64)EGooglePADErrorCode::AssetPack_UNAVAILABLE },
				{ "EGooglePADErrorCode::AssetPack_INVALID_REQUEST", (int64)EGooglePADErrorCode::AssetPack_INVALID_REQUEST },
				{ "EGooglePADErrorCode::AssetPack_DOWNLOAD_NOT_FOUND", (int64)EGooglePADErrorCode::AssetPack_DOWNLOAD_NOT_FOUND },
				{ "EGooglePADErrorCode::AssetPack_API_NOT_AVAILABLE", (int64)EGooglePADErrorCode::AssetPack_API_NOT_AVAILABLE },
				{ "EGooglePADErrorCode::AssetPack_NETWORK_ERROR", (int64)EGooglePADErrorCode::AssetPack_NETWORK_ERROR },
				{ "EGooglePADErrorCode::AssetPack_ACCESS_DENIED", (int64)EGooglePADErrorCode::AssetPack_ACCESS_DENIED },
				{ "EGooglePADErrorCode::AssetPack_INSUFFICIENT_STORAGE", (int64)EGooglePADErrorCode::AssetPack_INSUFFICIENT_STORAGE },
				{ "EGooglePADErrorCode::AssetPack_PLAY_STORE_NOT_FOUND", (int64)EGooglePADErrorCode::AssetPack_PLAY_STORE_NOT_FOUND },
				{ "EGooglePADErrorCode::AssetPack_NETWORK_UNRESTRICTED", (int64)EGooglePADErrorCode::AssetPack_NETWORK_UNRESTRICTED },
				{ "EGooglePADErrorCode::AssetPack_INTERNAL_ERROR", (int64)EGooglePADErrorCode::AssetPack_INTERNAL_ERROR },
				{ "EGooglePADErrorCode::AssetPack_INITIALIZATION_NEEDED", (int64)EGooglePADErrorCode::AssetPack_INITIALIZATION_NEEDED },
				{ "EGooglePADErrorCode::AssetPack_INITIALIZATION_FAILED", (int64)EGooglePADErrorCode::AssetPack_INITIALIZATION_FAILED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AssetPack_ACCESS_DENIED.Comment", "// Download not permitted under current device circumstances, e.g. app in\n// background or device not signed into a Google account.\n" },
				{ "AssetPack_ACCESS_DENIED.Name", "EGooglePADErrorCode::AssetPack_ACCESS_DENIED" },
				{ "AssetPack_ACCESS_DENIED.ToolTip", "Download not permitted under current device circumstances, e.g. app in\nbackground or device not signed into a Google account." },
				{ "AssetPack_API_NOT_AVAILABLE.Comment", "// The Asset Pack API is unavailable.\n" },
				{ "AssetPack_API_NOT_AVAILABLE.Name", "EGooglePADErrorCode::AssetPack_API_NOT_AVAILABLE" },
				{ "AssetPack_API_NOT_AVAILABLE.ToolTip", "The Asset Pack API is unavailable." },
				{ "AssetPack_APP_UNAVAILABLE.Comment", "// The requesting app is unavailable.\n" },
				{ "AssetPack_APP_UNAVAILABLE.Name", "EGooglePADErrorCode::AssetPack_APP_UNAVAILABLE" },
				{ "AssetPack_APP_UNAVAILABLE.ToolTip", "The requesting app is unavailable." },
				{ "AssetPack_DOWNLOAD_NOT_FOUND.Comment", "// The requested download isn't found.\n" },
				{ "AssetPack_DOWNLOAD_NOT_FOUND.Name", "EGooglePADErrorCode::AssetPack_DOWNLOAD_NOT_FOUND" },
				{ "AssetPack_DOWNLOAD_NOT_FOUND.ToolTip", "The requested download isn't found." },
				{ "AssetPack_INITIALIZATION_FAILED.Comment", "// There was an error initializing the Asset Pack API.\n" },
				{ "AssetPack_INITIALIZATION_FAILED.Name", "EGooglePADErrorCode::AssetPack_INITIALIZATION_FAILED" },
				{ "AssetPack_INITIALIZATION_FAILED.ToolTip", "There was an error initializing the Asset Pack API." },
				{ "AssetPack_INITIALIZATION_NEEDED.Comment", "// The requested operation failed: need to call AssetPackManager_init() first.\n" },
				{ "AssetPack_INITIALIZATION_NEEDED.Name", "EGooglePADErrorCode::AssetPack_INITIALIZATION_NEEDED" },
				{ "AssetPack_INITIALIZATION_NEEDED.ToolTip", "The requested operation failed: need to call AssetPackManager_init() first." },
				{ "AssetPack_INSUFFICIENT_STORAGE.Comment", "// Asset Packs download failed due to insufficient storage.\n" },
				{ "AssetPack_INSUFFICIENT_STORAGE.Name", "EGooglePADErrorCode::AssetPack_INSUFFICIENT_STORAGE" },
				{ "AssetPack_INSUFFICIENT_STORAGE.ToolTip", "Asset Packs download failed due to insufficient storage." },
				{ "AssetPack_INTERNAL_ERROR.Comment", "// Unknown error downloading Asset Pack.\n" },
				{ "AssetPack_INTERNAL_ERROR.Name", "EGooglePADErrorCode::AssetPack_INTERNAL_ERROR" },
				{ "AssetPack_INTERNAL_ERROR.ToolTip", "Unknown error downloading Asset Pack." },
				{ "AssetPack_INVALID_REQUEST.Comment", "// The request is invalid.\n" },
				{ "AssetPack_INVALID_REQUEST.Name", "EGooglePADErrorCode::AssetPack_INVALID_REQUEST" },
				{ "AssetPack_INVALID_REQUEST.ToolTip", "The request is invalid." },
				{ "AssetPack_NETWORK_ERROR.Comment", "// Network error. Unable to obtain Asset Pack details.\n" },
				{ "AssetPack_NETWORK_ERROR.Name", "EGooglePADErrorCode::AssetPack_NETWORK_ERROR" },
				{ "AssetPack_NETWORK_ERROR.ToolTip", "Network error. Unable to obtain Asset Pack details." },
				{ "AssetPack_NETWORK_UNRESTRICTED.Comment", "// Returned if showCellularDataConfirmation is called but no Asset Packs are waiting for Wi-Fi.\n" },
				{ "AssetPack_NETWORK_UNRESTRICTED.Name", "EGooglePADErrorCode::AssetPack_NETWORK_UNRESTRICTED" },
				{ "AssetPack_NETWORK_UNRESTRICTED.ToolTip", "Returned if showCellularDataConfirmation is called but no Asset Packs are waiting for Wi-Fi." },
				{ "AssetPack_NO_ERROR.Comment", "// There was no error with the request.\n" },
				{ "AssetPack_NO_ERROR.Name", "EGooglePADErrorCode::AssetPack_NO_ERROR" },
				{ "AssetPack_NO_ERROR.ToolTip", "There was no error with the request." },
				{ "AssetPack_PLAY_STORE_NOT_FOUND.Comment", "// The Play Store app is either not installed or not the official version.\n" },
				{ "AssetPack_PLAY_STORE_NOT_FOUND.Name", "EGooglePADErrorCode::AssetPack_PLAY_STORE_NOT_FOUND" },
				{ "AssetPack_PLAY_STORE_NOT_FOUND.ToolTip", "The Play Store app is either not installed or not the official version." },
				{ "AssetPack_UNAVAILABLE.Comment", "// The requested Asset Pack isn't available for this app version.\n" },
				{ "AssetPack_UNAVAILABLE.Name", "EGooglePADErrorCode::AssetPack_UNAVAILABLE" },
				{ "AssetPack_UNAVAILABLE.ToolTip", "The requested Asset Pack isn't available for this app version." },
				{ "BlueprintType", "true" },
				{ "Comment", "// An error code associated with Asset Pack operations.\n" },
				{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
				{ "ToolTip", "An error code associated with Asset Pack operations." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GooglePAD,
				nullptr,
				"EGooglePADErrorCode",
				"EGooglePADErrorCode",
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
	DEFINE_FUNCTION(UGooglePADFunctionLibrary::execGetAssetsPath)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGooglePADFunctionLibrary::GetAssetsPath(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGooglePADFunctionLibrary::execGetStorageMethod)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGooglePADStorageMethod*)Z_Param__Result=UGooglePADFunctionLibrary::GetStorageMethod(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGooglePADFunctionLibrary::execReleaseAssetPackLocation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGooglePADFunctionLibrary::ReleaseAssetPackLocation(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGooglePADFunctionLibrary::execGetAssetPackLocation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::GetAssetPackLocation(Z_Param_Name,Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGooglePADFunctionLibrary::execGetShowCellularDataConfirmationStatus)
	{
		P_GET_ENUM_REF(EGooglePADCellularDataConfirmStatus,Z_Param_Out_Status);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::GetShowCellularDataConfirmationStatus((EGooglePADCellularDataConfirmStatus&)(Z_Param_Out_Status));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGooglePADFunctionLibrary::execShowCellularDataConfirmation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::ShowCellularDataConfirmation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGooglePADFunctionLibrary::execRequestRemoval)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::RequestRemoval(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGooglePADFunctionLibrary::execGetTotalBytesToDownload)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGooglePADFunctionLibrary::GetTotalBytesToDownload(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGooglePADFunctionLibrary::execGetBytesDownloaded)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGooglePADFunctionLibrary::GetBytesDownloaded(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGooglePADFunctionLibrary::execGetDownloadStatus)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGooglePADDownloadStatus*)Z_Param__Result=UGooglePADFunctionLibrary::GetDownloadStatus(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGooglePADFunctionLibrary::execReleaseDownloadState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGooglePADFunctionLibrary::ReleaseDownloadState(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGooglePADFunctionLibrary::execGetDownloadState)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::GetDownloadState(Z_Param_Name,Z_Param_Out_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGooglePADFunctionLibrary::execCancelDownload)
	{
		P_GET_TARRAY(FString,Z_Param_AssetPacks);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::CancelDownload(Z_Param_AssetPacks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGooglePADFunctionLibrary::execRequestDownload)
	{
		P_GET_TARRAY(FString,Z_Param_AssetPacks);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::RequestDownload(Z_Param_AssetPacks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGooglePADFunctionLibrary::execRequestInfo)
	{
		P_GET_TARRAY(FString,Z_Param_AssetPacks);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGooglePADErrorCode*)Z_Param__Result=UGooglePADFunctionLibrary::RequestInfo(Z_Param_AssetPacks);
		P_NATIVE_END;
	}
	void UGooglePADFunctionLibrary::StaticRegisterNativesUGooglePADFunctionLibrary()
	{
		UClass* Class = UGooglePADFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelDownload", &UGooglePADFunctionLibrary::execCancelDownload },
			{ "GetAssetPackLocation", &UGooglePADFunctionLibrary::execGetAssetPackLocation },
			{ "GetAssetsPath", &UGooglePADFunctionLibrary::execGetAssetsPath },
			{ "GetBytesDownloaded", &UGooglePADFunctionLibrary::execGetBytesDownloaded },
			{ "GetDownloadState", &UGooglePADFunctionLibrary::execGetDownloadState },
			{ "GetDownloadStatus", &UGooglePADFunctionLibrary::execGetDownloadStatus },
			{ "GetShowCellularDataConfirmationStatus", &UGooglePADFunctionLibrary::execGetShowCellularDataConfirmationStatus },
			{ "GetStorageMethod", &UGooglePADFunctionLibrary::execGetStorageMethod },
			{ "GetTotalBytesToDownload", &UGooglePADFunctionLibrary::execGetTotalBytesToDownload },
			{ "ReleaseAssetPackLocation", &UGooglePADFunctionLibrary::execReleaseAssetPackLocation },
			{ "ReleaseDownloadState", &UGooglePADFunctionLibrary::execReleaseDownloadState },
			{ "RequestDownload", &UGooglePADFunctionLibrary::execRequestDownload },
			{ "RequestInfo", &UGooglePADFunctionLibrary::execRequestInfo },
			{ "RequestRemoval", &UGooglePADFunctionLibrary::execRequestRemoval },
			{ "ShowCellularDataConfirmation", &UGooglePADFunctionLibrary::execShowCellularDataConfirmation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics
	{
		struct GooglePADFunctionLibrary_eventCancelDownload_Parms
		{
			TArray<FString> AssetPacks;
			EGooglePADErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetPacks;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPacks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventCancelDownload_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_AssetPacks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_AssetPacks = { "AssetPacks", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventCancelDownload_Parms, AssetPacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_AssetPacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_AssetPacks_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_AssetPacks_Inner = { "AssetPacks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_AssetPacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::NewProp_AssetPacks_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Cancel download of a set of asset packs */" },
		{ "DisplayName", "Cancel Download" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Cancel download of a set of asset packs" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "CancelDownload", nullptr, nullptr, sizeof(GooglePADFunctionLibrary_eventCancelDownload_Parms), Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics
	{
		struct GooglePADFunctionLibrary_eventGetAssetPackLocation_Parms
		{
			FString Name;
			int32 Location;
			EGooglePADErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetAssetPackLocation_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetAssetPackLocation_Parms, Location), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetAssetPackLocation_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Get location handle of requested asset pack (release when done) */" },
		{ "DisplayName", "Get AssetPack Location" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Get location handle of requested asset pack (release when done)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "GetAssetPackLocation", nullptr, nullptr, sizeof(GooglePADFunctionLibrary_eventGetAssetPackLocation_Parms), Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics
	{
		struct GooglePADFunctionLibrary_eventGetAssetsPath_Parms
		{
			int32 Location;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetAssetsPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetAssetsPath_Parms, Location), METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Get asset path from from location  */" },
		{ "DisplayName", "Get Assets Path" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Get asset path from from location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "GetAssetsPath", nullptr, nullptr, sizeof(GooglePADFunctionLibrary_eventGetAssetsPath_Parms), Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics
	{
		struct GooglePADFunctionLibrary_eventGetBytesDownloaded_Parms
		{
			int32 State;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetBytesDownloaded_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetBytesDownloaded_Parms, State), METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Get the number of bytes downloaded from a download state */" },
		{ "DisplayName", "Get Bytes Downloaded" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Get the number of bytes downloaded from a download state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "GetBytesDownloaded", nullptr, nullptr, sizeof(GooglePADFunctionLibrary_eventGetBytesDownloaded_Parms), Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics
	{
		struct GooglePADFunctionLibrary_eventGetDownloadState_Parms
		{
			FString Name;
			int32 State;
			EGooglePADErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetDownloadState_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetDownloadState_Parms, State), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetDownloadState_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Get download state handle of an asset pack (release when done) */" },
		{ "DisplayName", "Get Download State" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Get download state handle of an asset pack (release when done)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "GetDownloadState", nullptr, nullptr, sizeof(GooglePADFunctionLibrary_eventGetDownloadState_Parms), Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics
	{
		struct GooglePADFunctionLibrary_eventGetDownloadStatus_Parms
		{
			int32 State;
			EGooglePADDownloadStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetDownloadStatus_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADDownloadStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetDownloadStatus_Parms, State), METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Get download status from a download state */" },
		{ "DisplayName", "Get Download Status" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Get download status from a download state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "GetDownloadStatus", nullptr, nullptr, sizeof(GooglePADFunctionLibrary_eventGetDownloadStatus_Parms), Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics
	{
		struct GooglePADFunctionLibrary_eventGetShowCellularDataConfirmationStatus_Parms
		{
			EGooglePADCellularDataConfirmStatus Status;
			EGooglePADErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetShowCellularDataConfirmationStatus_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetShowCellularDataConfirmationStatus_Parms, Status), Z_Construct_UEnum_GooglePAD_EGooglePADCellularDataConfirmStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::NewProp_Status_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Get status of cellular confirmation dialog  */" },
		{ "DisplayName", "Get Cellular Data Confirmation Status" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Get status of cellular confirmation dialog" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "GetShowCellularDataConfirmationStatus", nullptr, nullptr, sizeof(GooglePADFunctionLibrary_eventGetShowCellularDataConfirmationStatus_Parms), Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics
	{
		struct GooglePADFunctionLibrary_eventGetStorageMethod_Parms
		{
			int32 Location;
			EGooglePADStorageMethod ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetStorageMethod_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADStorageMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetStorageMethod_Parms, Location), METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Get storage method from location  */" },
		{ "DisplayName", "Get Storage Method" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Get storage method from location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "GetStorageMethod", nullptr, nullptr, sizeof(GooglePADFunctionLibrary_eventGetStorageMethod_Parms), Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics
	{
		struct GooglePADFunctionLibrary_eventGetTotalBytesToDownload_Parms
		{
			int32 State;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetTotalBytesToDownload_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventGetTotalBytesToDownload_Parms, State), METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Get the total number of bytes to download from a download state */" },
		{ "DisplayName", "Get Total Bytes To Download" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Get the total number of bytes to download from a download state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "GetTotalBytesToDownload", nullptr, nullptr, sizeof(GooglePADFunctionLibrary_eventGetTotalBytesToDownload_Parms), Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics
	{
		struct GooglePADFunctionLibrary_eventReleaseAssetPackLocation_Parms
		{
			int32 Location;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventReleaseAssetPackLocation_Parms, Location), METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Release location resources */" },
		{ "DisplayName", "Release AssetPack Location" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Release location resources" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "ReleaseAssetPackLocation", nullptr, nullptr, sizeof(GooglePADFunctionLibrary_eventReleaseAssetPackLocation_Parms), Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics
	{
		struct GooglePADFunctionLibrary_eventReleaseDownloadState_Parms
		{
			int32 State;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventReleaseDownloadState_Parms, State), METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Release download state resources */" },
		{ "DisplayName", "Release Download State" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Release download state resources" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "ReleaseDownloadState", nullptr, nullptr, sizeof(GooglePADFunctionLibrary_eventReleaseDownloadState_Parms), Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics
	{
		struct GooglePADFunctionLibrary_eventRequestDownload_Parms
		{
			TArray<FString> AssetPacks;
			EGooglePADErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetPacks;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPacks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventRequestDownload_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_AssetPacks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_AssetPacks = { "AssetPacks", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventRequestDownload_Parms, AssetPacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_AssetPacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_AssetPacks_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_AssetPacks_Inner = { "AssetPacks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_AssetPacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::NewProp_AssetPacks_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Request download of a set of asset packs */" },
		{ "DisplayName", "Request Download" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Request download of a set of asset packs" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "RequestDownload", nullptr, nullptr, sizeof(GooglePADFunctionLibrary_eventRequestDownload_Parms), Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics
	{
		struct GooglePADFunctionLibrary_eventRequestInfo_Parms
		{
			TArray<FString> AssetPacks;
			EGooglePADErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetPacks;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPacks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventRequestInfo_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_AssetPacks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_AssetPacks = { "AssetPacks", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventRequestInfo_Parms, AssetPacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_AssetPacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_AssetPacks_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_AssetPacks_Inner = { "AssetPacks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_AssetPacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::NewProp_AssetPacks_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Request information about a set of asset packs */" },
		{ "DisplayName", "Request Info" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Request information about a set of asset packs" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "RequestInfo", nullptr, nullptr, sizeof(GooglePADFunctionLibrary_eventRequestInfo_Parms), Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics
	{
		struct GooglePADFunctionLibrary_eventRequestRemoval_Parms
		{
			FString Name;
			EGooglePADErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventRequestRemoval_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventRequestRemoval_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Request removal of an asset pack */" },
		{ "DisplayName", "Request Removal" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Request removal of an asset pack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "RequestRemoval", nullptr, nullptr, sizeof(GooglePADFunctionLibrary_eventRequestRemoval_Parms), Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics
	{
		struct GooglePADFunctionLibrary_eventShowCellularDataConfirmation_Parms
		{
			EGooglePADErrorCode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GooglePADFunctionLibrary_eventShowCellularDataConfirmation_Parms, ReturnValue), Z_Construct_UEnum_GooglePAD_EGooglePADErrorCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GooglePAD" },
		{ "Comment", "/** Show confirmation dialog requesting data download over cellular network */" },
		{ "DisplayName", "Show Cellular Data Confirmation" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
		{ "ToolTip", "Show confirmation dialog requesting data download over cellular network" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGooglePADFunctionLibrary, nullptr, "ShowCellularDataConfirmation", nullptr, nullptr, sizeof(GooglePADFunctionLibrary_eventShowCellularDataConfirmation_Parms), Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGooglePADFunctionLibrary_NoRegister()
	{
		return UGooglePADFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGooglePADFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGooglePADFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GooglePAD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGooglePADFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_CancelDownload, "CancelDownload" }, // 890847980
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetPackLocation, "GetAssetPackLocation" }, // 3124120303
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetAssetsPath, "GetAssetsPath" }, // 245994827
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetBytesDownloaded, "GetBytesDownloaded" }, // 1317647783
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadState, "GetDownloadState" }, // 1374563121
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetDownloadStatus, "GetDownloadStatus" }, // 1003537130
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus, "GetShowCellularDataConfirmationStatus" }, // 3712168406
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetStorageMethod, "GetStorageMethod" }, // 4135193278
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_GetTotalBytesToDownload, "GetTotalBytesToDownload" }, // 496085851
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseAssetPackLocation, "ReleaseAssetPackLocation" }, // 910966471
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_ReleaseDownloadState, "ReleaseDownloadState" }, // 3418391757
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestDownload, "RequestDownload" }, // 563294810
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestInfo, "RequestInfo" }, // 381467578
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_RequestRemoval, "RequestRemoval" }, // 215132801
		{ &Z_Construct_UFunction_UGooglePADFunctionLibrary_ShowCellularDataConfirmation, "ShowCellularDataConfirmation" }, // 2615496509
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGooglePADFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GooglePADFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/GooglePADFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGooglePADFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGooglePADFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGooglePADFunctionLibrary_Statics::ClassParams = {
		&UGooglePADFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGooglePADFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGooglePADFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGooglePADFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGooglePADFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGooglePADFunctionLibrary, 3503960706);
	template<> GOOGLEPAD_API UClass* StaticClass<UGooglePADFunctionLibrary>()
	{
		return UGooglePADFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGooglePADFunctionLibrary(Z_Construct_UClass_UGooglePADFunctionLibrary, &UGooglePADFunctionLibrary::StaticClass, TEXT("/Script/GooglePAD"), TEXT("UGooglePADFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGooglePADFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

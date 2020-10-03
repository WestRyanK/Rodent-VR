// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGooglePADStorageMethod : uint8;
enum class EGooglePADErrorCode : uint8;
enum class EGooglePADCellularDataConfirmStatus : uint8;
enum class EGooglePADDownloadStatus : uint8;
#ifdef GOOGLEPAD_GooglePADFunctionLibrary_generated_h
#error "GooglePADFunctionLibrary.generated.h already included, missing '#pragma once' in GooglePADFunctionLibrary.h"
#endif
#define GOOGLEPAD_GooglePADFunctionLibrary_generated_h

#define Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_SPARSE_DATA
#define Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAssetsPath); \
	DECLARE_FUNCTION(execGetStorageMethod); \
	DECLARE_FUNCTION(execReleaseAssetPackLocation); \
	DECLARE_FUNCTION(execGetAssetPackLocation); \
	DECLARE_FUNCTION(execGetShowCellularDataConfirmationStatus); \
	DECLARE_FUNCTION(execShowCellularDataConfirmation); \
	DECLARE_FUNCTION(execRequestRemoval); \
	DECLARE_FUNCTION(execGetTotalBytesToDownload); \
	DECLARE_FUNCTION(execGetBytesDownloaded); \
	DECLARE_FUNCTION(execGetDownloadStatus); \
	DECLARE_FUNCTION(execReleaseDownloadState); \
	DECLARE_FUNCTION(execGetDownloadState); \
	DECLARE_FUNCTION(execCancelDownload); \
	DECLARE_FUNCTION(execRequestDownload); \
	DECLARE_FUNCTION(execRequestInfo);


#define Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAssetsPath); \
	DECLARE_FUNCTION(execGetStorageMethod); \
	DECLARE_FUNCTION(execReleaseAssetPackLocation); \
	DECLARE_FUNCTION(execGetAssetPackLocation); \
	DECLARE_FUNCTION(execGetShowCellularDataConfirmationStatus); \
	DECLARE_FUNCTION(execShowCellularDataConfirmation); \
	DECLARE_FUNCTION(execRequestRemoval); \
	DECLARE_FUNCTION(execGetTotalBytesToDownload); \
	DECLARE_FUNCTION(execGetBytesDownloaded); \
	DECLARE_FUNCTION(execGetDownloadStatus); \
	DECLARE_FUNCTION(execReleaseDownloadState); \
	DECLARE_FUNCTION(execGetDownloadState); \
	DECLARE_FUNCTION(execCancelDownload); \
	DECLARE_FUNCTION(execRequestDownload); \
	DECLARE_FUNCTION(execRequestInfo);


#define Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGooglePADFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGooglePADFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGooglePADFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GooglePAD"), NO_API) \
	DECLARE_SERIALIZER(UGooglePADFunctionLibrary)


#define Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_INCLASS \
private: \
	static void StaticRegisterNativesUGooglePADFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGooglePADFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGooglePADFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GooglePAD"), NO_API) \
	DECLARE_SERIALIZER(UGooglePADFunctionLibrary)


#define Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGooglePADFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGooglePADFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGooglePADFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGooglePADFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGooglePADFunctionLibrary(UGooglePADFunctionLibrary&&); \
	NO_API UGooglePADFunctionLibrary(const UGooglePADFunctionLibrary&); \
public:


#define Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGooglePADFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGooglePADFunctionLibrary(UGooglePADFunctionLibrary&&); \
	NO_API UGooglePADFunctionLibrary(const UGooglePADFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGooglePADFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGooglePADFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGooglePADFunctionLibrary)


#define Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_142_PROLOG
#define Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_SPARSE_DATA \
	Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_RPC_WRAPPERS \
	Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_INCLASS \
	Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_SPARSE_DATA \
	Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h_145_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOGLEPAD_API UClass* StaticClass<class UGooglePADFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_GooglePAD_Source_GooglePAD_Classes_GooglePADFunctionLibrary_h


#define FOREACH_ENUM_EGOOGLEPADCELLULARDATACONFIRMSTATUS(op) \
	op(EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_UNKNOWN) \
	op(EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_PENDING) \
	op(EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_USER_APPROVED) \
	op(EGooglePADCellularDataConfirmStatus::AssetPack_CONFIRM_USER_CANCELED) 

enum class EGooglePADCellularDataConfirmStatus : uint8;
template<> GOOGLEPAD_API UEnum* StaticEnum<EGooglePADCellularDataConfirmStatus>();

#define FOREACH_ENUM_EGOOGLEPADSTORAGEMETHOD(op) \
	op(EGooglePADStorageMethod::AssetPack_STORAGE_FILES) \
	op(EGooglePADStorageMethod::AssetPack_STORAGE_APK) \
	op(EGooglePADStorageMethod::AssetPack_STORAGE_UNKNOWN) \
	op(EGooglePADStorageMethod::AssetPack_STORAGE_NOT_INSTALLED) 

enum class EGooglePADStorageMethod : uint8;
template<> GOOGLEPAD_API UEnum* StaticEnum<EGooglePADStorageMethod>();

#define FOREACH_ENUM_EGOOGLEPADDOWNLOADSTATUS(op) \
	op(EGooglePADDownloadStatus::AssetPack_UNKNOWN) \
	op(EGooglePADDownloadStatus::AssetPack_DOWNLOAD_PENDING) \
	op(EGooglePADDownloadStatus::AssetPack_DOWNLOADING) \
	op(EGooglePADDownloadStatus::AssetPack_TRANSFERRING) \
	op(EGooglePADDownloadStatus::AssetPack_DOWNLOAD_COMPLETED) \
	op(EGooglePADDownloadStatus::AssetPack_DOWNLOAD_FAILED) \
	op(EGooglePADDownloadStatus::AssetPack_DOWNLOAD_CANCELED) \
	op(EGooglePADDownloadStatus::AssetPack_WAITING_FOR_WIFI) \
	op(EGooglePADDownloadStatus::AssetPack_NOT_INSTALLED) \
	op(EGooglePADDownloadStatus::AssetPack_INFO_PENDING) \
	op(EGooglePADDownloadStatus::AssetPack_INFO_FAILED) \
	op(EGooglePADDownloadStatus::AssetPack_REMOVAL_PENDING) \
	op(EGooglePADDownloadStatus::AssetPack_REMOVAL_FAILED) 

enum class EGooglePADDownloadStatus : uint8;
template<> GOOGLEPAD_API UEnum* StaticEnum<EGooglePADDownloadStatus>();

#define FOREACH_ENUM_EGOOGLEPADERRORCODE(op) \
	op(EGooglePADErrorCode::AssetPack_NO_ERROR) \
	op(EGooglePADErrorCode::AssetPack_APP_UNAVAILABLE) \
	op(EGooglePADErrorCode::AssetPack_UNAVAILABLE) \
	op(EGooglePADErrorCode::AssetPack_INVALID_REQUEST) \
	op(EGooglePADErrorCode::AssetPack_DOWNLOAD_NOT_FOUND) \
	op(EGooglePADErrorCode::AssetPack_API_NOT_AVAILABLE) \
	op(EGooglePADErrorCode::AssetPack_NETWORK_ERROR) \
	op(EGooglePADErrorCode::AssetPack_ACCESS_DENIED) \
	op(EGooglePADErrorCode::AssetPack_INSUFFICIENT_STORAGE) \
	op(EGooglePADErrorCode::AssetPack_PLAY_STORE_NOT_FOUND) \
	op(EGooglePADErrorCode::AssetPack_NETWORK_UNRESTRICTED) \
	op(EGooglePADErrorCode::AssetPack_INTERNAL_ERROR) \
	op(EGooglePADErrorCode::AssetPack_INITIALIZATION_NEEDED) \
	op(EGooglePADErrorCode::AssetPack_INITIALIZATION_FAILED) 

enum class EGooglePADErrorCode : uint8;
template<> GOOGLEPAD_API UEnum* StaticEnum<EGooglePADErrorCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

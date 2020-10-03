// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeap_init() {}
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature();
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature();
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature();
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature();
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature();
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature();
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature();
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_ULuminApplicationLifecycleComponent_LuminApplicationLifetimeDelegate__DelegateSignature();
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_ULuminApplicationLifecycleComponent_LuminApplicationLifetimeFocusLostDelegate__DelegateSignature();
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature();
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MagicLeap()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ULuminApplicationLifecycleComponent_LuminApplicationLifetimeDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ULuminApplicationLifecycleComponent_LuminApplicationLifetimeFocusLostDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/MagicLeap",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3FF69AE5,
				0xB8CD6C25,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

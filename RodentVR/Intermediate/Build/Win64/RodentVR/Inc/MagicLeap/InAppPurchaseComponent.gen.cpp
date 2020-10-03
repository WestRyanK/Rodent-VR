// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeap/Public/InAppPurchaseComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppPurchaseComponent() {}
// Cross Module References
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature();
	MAGICLEAP_API UClass* Z_Construct_UClass_UInAppPurchaseComponent();
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature();
	MAGICLEAP_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseConfirmation();
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature();
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature();
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature();
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature();
	MAGICLEAP_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseItemDetails();
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature();
	MAGICLEAP_API UEnum* Z_Construct_UEnum_MagicLeap_CloudStatus();
	UPackage* Z_Construct_UPackage__Script_MagicLeap();
	MAGICLEAP_API UEnum* Z_Construct_UEnum_MagicLeap_PurchaseType();
	MAGICLEAP_API UClass* Z_Construct_UClass_UInAppPurchaseComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09""Delegate used to pass a purchase history request failure back to the instigating blueprint.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
		{ "ToolTip", "Delegate used to pass a purchase history request failure back to the instigating blueprint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseComponent, nullptr, "GetPurchaseHistoryFailure__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Statics
	{
		struct InAppPurchaseComponent_eventGetPurchaseHistorySuccess_Parms
		{
			TArray<FPurchaseConfirmation> PurchaseHistory;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseHistory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PurchaseHistory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PurchaseHistory_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Statics::NewProp_PurchaseHistory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Statics::NewProp_PurchaseHistory = { "PurchaseHistory", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseComponent_eventGetPurchaseHistorySuccess_Parms, PurchaseHistory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Statics::NewProp_PurchaseHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Statics::NewProp_PurchaseHistory_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Statics::NewProp_PurchaseHistory_Inner = { "PurchaseHistory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPurchaseConfirmation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Statics::NewProp_PurchaseHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Statics::NewProp_PurchaseHistory_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09""Delegate used to report a successful item purchase history retrieval.\n\x09\x09@param PurchasesHistory The current purchases history of the app.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
		{ "ToolTip", "Delegate used to report a successful item purchase history retrieval.\n@param PurchasesHistory The current purchases history of the app." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseComponent, nullptr, "GetPurchaseHistorySuccess__DelegateSignature", nullptr, nullptr, sizeof(InAppPurchaseComponent_eventGetPurchaseHistorySuccess_Parms), Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09""Delegate used to report a failure to retrieve an item purchase confirmation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
		{ "ToolTip", "Delegate used to report a failure to retrieve an item purchase confirmation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseComponent, nullptr, "PurchaseConfirmationFailure__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Statics
	{
		struct InAppPurchaseComponent_eventPurchaseConfirmationSuccess_Parms
		{
			FPurchaseConfirmation PurchaseConfirmations;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseConfirmations_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PurchaseConfirmations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Statics::NewProp_PurchaseConfirmations_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Statics::NewProp_PurchaseConfirmations = { "PurchaseConfirmations", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseComponent_eventPurchaseConfirmationSuccess_Parms, PurchaseConfirmations), Z_Construct_UScriptStruct_FPurchaseConfirmation, METADATA_PARAMS(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Statics::NewProp_PurchaseConfirmations_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Statics::NewProp_PurchaseConfirmations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Statics::NewProp_PurchaseConfirmations,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09""Delegate used to report a successful item purchase confirmation.\n\x09\x09@param PurchaseConfirmations A list of item purchase confirmations.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
		{ "ToolTip", "Delegate used to report a successful item purchase confirmation.\n@param PurchaseConfirmations A list of item purchase confirmations." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseComponent, nullptr, "PurchaseConfirmationSuccess__DelegateSignature", nullptr, nullptr, sizeof(InAppPurchaseComponent_eventPurchaseConfirmationSuccess_Parms), Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09""Delegate used to report a failure to retrieve the requested items details.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
		{ "ToolTip", "Delegate used to report a failure to retrieve the requested items details." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseComponent, nullptr, "GetItemsDetailsFailure__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Statics
	{
		struct InAppPurchaseComponent_eventGetItemsDetailsSuccess_Parms
		{
			TArray<FPurchaseItemDetails> ItemsDetails;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemsDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemsDetails;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemsDetails_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Statics::NewProp_ItemsDetails_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Statics::NewProp_ItemsDetails = { "ItemsDetails", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseComponent_eventGetItemsDetailsSuccess_Parms, ItemsDetails), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Statics::NewProp_ItemsDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Statics::NewProp_ItemsDetails_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Statics::NewProp_ItemsDetails_Inner = { "ItemsDetails", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPurchaseItemDetails, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Statics::NewProp_ItemsDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Statics::NewProp_ItemsDetails_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09""Delegate used to report a successful retrieval of items details.\n\x09\x09@param ItemsDetails A list of items details.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
		{ "ToolTip", "Delegate used to report a successful retrieval of items details.\n@param ItemsDetails A list of items details." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseComponent, nullptr, "GetItemsDetailsSuccess__DelegateSignature", nullptr, nullptr, sizeof(InAppPurchaseComponent_eventGetItemsDetailsSuccess_Parms), Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Statics
	{
		struct InAppPurchaseComponent_eventInAppPurchaseLogMessage_Parms
		{
			FString LogMessage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LogMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Statics::NewProp_LogMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Statics::NewProp_LogMessage = { "LogMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseComponent_eventInAppPurchaseLogMessage_Parms, LogMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Statics::NewProp_LogMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Statics::NewProp_LogMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Statics::NewProp_LogMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09""Delegate used to report log messages.\n\x09\x09@note This is useful if the user wishes to have log messages in 3D space.\n\x09\x09@param LogMessage A string containing the log message.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
		{ "ToolTip", "Delegate used to report log messages.\n@note This is useful if the user wishes to have log messages in 3D space.\n@param LogMessage A string containing the log message." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseComponent, nullptr, "InAppPurchaseLogMessage__DelegateSignature", nullptr, nullptr, sizeof(InAppPurchaseComponent_eventInAppPurchaseLogMessage_Parms), Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* CloudStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeap_CloudStatus, Z_Construct_UPackage__Script_MagicLeap(), TEXT("CloudStatus"));
		}
		return Singleton;
	}
	template<> MAGICLEAP_API UEnum* StaticEnum<CloudStatus>()
	{
		return CloudStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CloudStatus(CloudStatus_StaticEnum, TEXT("/Script/MagicLeap"), TEXT("CloudStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeap_CloudStatus_Hash() { return 1832646893U; }
	UEnum* Z_Construct_UEnum_MagicLeap_CloudStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CloudStatus"), 0, Get_Z_Construct_UEnum_MagicLeap_CloudStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CloudStatus::CloudStatus_NotDone", (int64)CloudStatus::CloudStatus_NotDone },
				{ "CloudStatus::CloudStatus_Done", (int64)CloudStatus::CloudStatus_Done },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CloudStatus_Done.Comment", "/*! The current request is complete. It may have succeeded or failed. */" },
				{ "CloudStatus_Done.Name", "CloudStatus::CloudStatus_Done" },
				{ "CloudStatus_Done.ToolTip", "! The current request is complete. It may have succeeded or failed." },
				{ "CloudStatus_NotDone.Comment", "/*! The current request is still in-progress. */" },
				{ "CloudStatus_NotDone.Name", "CloudStatus::CloudStatus_NotDone" },
				{ "CloudStatus_NotDone.ToolTip", "! The current request is still in-progress." },
				{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeap,
				nullptr,
				"CloudStatus",
				"CloudStatus",
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
	static UEnum* PurchaseType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeap_PurchaseType, Z_Construct_UPackage__Script_MagicLeap(), TEXT("PurchaseType"));
		}
		return Singleton;
	}
	template<> MAGICLEAP_API UEnum* StaticEnum<PurchaseType>()
	{
		return PurchaseType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_PurchaseType(PurchaseType_StaticEnum, TEXT("/Script/MagicLeap"), TEXT("PurchaseType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeap_PurchaseType_Hash() { return 3283530774U; }
	UEnum* Z_Construct_UEnum_MagicLeap_PurchaseType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("PurchaseType"), 0, Get_Z_Construct_UEnum_MagicLeap_PurchaseType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PurchaseType::Consumable", (int64)PurchaseType::Consumable },
				{ "PurchaseType::Nonconsumable", (int64)PurchaseType::Nonconsumable },
				{ "PurchaseType::Undefined", (int64)PurchaseType::Undefined },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Consumable.Comment", "/*!\n\x09\\brief This represents an item that can be bought multiple times. The\n\x09""application is responsible for managing the consumption of this item.\n\x09*/" },
				{ "Consumable.Name", "PurchaseType::Consumable" },
				{ "Consumable.ToolTip", "!\n       \\brief This represents an item that can be bought multiple times. The\n       application is responsible for managing the consumption of this item." },
				{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
				{ "Nonconsumable.Comment", "/*!\n\x09\\brief This represents an item that can only be bought once. This will\n\x09""be enforced by the services.\n\x09*/" },
				{ "Nonconsumable.Name", "PurchaseType::Nonconsumable" },
				{ "Nonconsumable.ToolTip", "!\n       \\brief This represents an item that can only be bought once. This will\n       be enforced by the services." },
				{ "Undefined.Name", "PurchaseType::Undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeap,
				nullptr,
				"PurchaseType",
				"PurchaseType",
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
class UScriptStruct* FPurchaseConfirmation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAP_API uint32 Get_Z_Construct_UScriptStruct_FPurchaseConfirmation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPurchaseConfirmation, Z_Construct_UPackage__Script_MagicLeap(), TEXT("PurchaseConfirmation"), sizeof(FPurchaseConfirmation), Get_Z_Construct_UScriptStruct_FPurchaseConfirmation_Hash());
	}
	return Singleton;
}
template<> MAGICLEAP_API UScriptStruct* StaticStruct<FPurchaseConfirmation>()
{
	return FPurchaseConfirmation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPurchaseConfirmation(FPurchaseConfirmation::StaticStruct, TEXT("/Script/MagicLeap"), TEXT("PurchaseConfirmation"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeap_StaticRegisterNativesFPurchaseConfirmation
{
	FScriptStruct_MagicLeap_StaticRegisterNativesFPurchaseConfirmation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PurchaseConfirmation")),new UScriptStruct::TCppStructOps<FPurchaseConfirmation>);
	}
} ScriptStruct_MagicLeap_StaticRegisterNativesFPurchaseConfirmation;
	struct Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPurchaseConfirmation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "PurchaseConfirmation|MagicLeap" },
		{ "Comment", "/*! This is the type of purchase. */" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
		{ "ToolTip", "! This is the type of purchase." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPurchaseConfirmation, Type), Z_Construct_UEnum_MagicLeap_PurchaseType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::NewProp_PackageName_MetaData[] = {
		{ "Category", "PurchaseConfirmation|MagicLeap" },
		{ "Comment", "/*! This is the name of the item from where this purchase originated. */" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
		{ "ToolTip", "! This is the name of the item from where this purchase originated." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPurchaseConfirmation, PackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::NewProp_PackageName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::NewProp_PackageName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
		nullptr,
		&NewStructOps,
		"PurchaseConfirmation",
		sizeof(FPurchaseConfirmation),
		alignof(FPurchaseConfirmation),
		Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPurchaseConfirmation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPurchaseConfirmation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PurchaseConfirmation"), sizeof(FPurchaseConfirmation), Get_Z_Construct_UScriptStruct_FPurchaseConfirmation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPurchaseConfirmation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPurchaseConfirmation_Hash() { return 4042416956U; }
class UScriptStruct* FPurchaseItemDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAP_API uint32 Get_Z_Construct_UScriptStruct_FPurchaseItemDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPurchaseItemDetails, Z_Construct_UPackage__Script_MagicLeap(), TEXT("PurchaseItemDetails"), sizeof(FPurchaseItemDetails), Get_Z_Construct_UScriptStruct_FPurchaseItemDetails_Hash());
	}
	return Singleton;
}
template<> MAGICLEAP_API UScriptStruct* StaticStruct<FPurchaseItemDetails>()
{
	return FPurchaseItemDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPurchaseItemDetails(FPurchaseItemDetails::StaticStruct, TEXT("/Script/MagicLeap"), TEXT("PurchaseItemDetails"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeap_StaticRegisterNativesFPurchaseItemDetails
{
	FScriptStruct_MagicLeap_StaticRegisterNativesFPurchaseItemDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PurchaseItemDetails")),new UScriptStruct::TCppStructOps<FPurchaseItemDetails>);
	}
} ScriptStruct_MagicLeap_StaticRegisterNativesFPurchaseItemDetails;
	struct Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Price;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPurchaseItemDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "PurchaseItemDetails|MagicLeap" },
		{ "Comment", "/*! This is the type of purchase. */" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
		{ "ToolTip", "! This is the type of purchase." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPurchaseItemDetails, Type), Z_Construct_UEnum_MagicLeap_PurchaseType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "PurchaseItemDetails|MagicLeap" },
		{ "Comment", "/*! This is the name of the item. */" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
		{ "ToolTip", "! This is the name of the item." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPurchaseItemDetails, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewProp_Price_MetaData[] = {
		{ "Category", "PurchaseItemDetails|MagicLeap" },
		{ "Comment", "/*! This is the formatted price for the item. */" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
		{ "ToolTip", "! This is the formatted price for the item." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPurchaseItemDetails, Price), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewProp_Price_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::NewProp_Price,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
		nullptr,
		&NewStructOps,
		"PurchaseItemDetails",
		sizeof(FPurchaseItemDetails),
		alignof(FPurchaseItemDetails),
		Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPurchaseItemDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPurchaseItemDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PurchaseItemDetails"), sizeof(FPurchaseItemDetails), Get_Z_Construct_UScriptStruct_FPurchaseItemDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPurchaseItemDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPurchaseItemDetails_Hash() { return 3400976441U; }
	DEFINE_FUNCTION(UInAppPurchaseComponent::execTryGetPurchaseHistoryAsync)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumPages);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetPurchaseHistoryAsync(Z_Param_InNumPages);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInAppPurchaseComponent::execTryPurchaseItemAsync)
	{
		P_GET_STRUCT_REF(FPurchaseItemDetails,Z_Param_Out_ItemDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryPurchaseItemAsync(Z_Param_Out_ItemDetails);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInAppPurchaseComponent::execTryGetItemsDetailsAsync)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_ItemIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryGetItemsDetailsAsync(Z_Param_Out_ItemIDs);
		P_NATIVE_END;
	}
	void UInAppPurchaseComponent::StaticRegisterNativesUInAppPurchaseComponent()
	{
		UClass* Class = UInAppPurchaseComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TryGetItemsDetailsAsync", &UInAppPurchaseComponent::execTryGetItemsDetailsAsync },
			{ "TryGetPurchaseHistoryAsync", &UInAppPurchaseComponent::execTryGetPurchaseHistoryAsync },
			{ "TryPurchaseItemAsync", &UInAppPurchaseComponent::execTryPurchaseItemAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics
	{
		struct InAppPurchaseComponent_eventTryGetItemsDetailsAsync_Parms
		{
			TArray<FString> ItemIDs;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemIDs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InAppPurchaseComponent_eventTryGetItemsDetailsAsync_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InAppPurchaseComponent_eventTryGetItemsDetailsAsync_Parms), &Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::NewProp_ItemIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::NewProp_ItemIDs = { "ItemIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseComponent_eventTryGetItemsDetailsAsync_Parms, ItemIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::NewProp_ItemIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::NewProp_ItemIDs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::NewProp_ItemIDs_Inner = { "ItemIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::NewProp_ItemIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::NewProp_ItemIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "InAppPurchase|MagicLeap" },
		{ "Comment", "/**\n\x09\x09""Attempts to retrieve details for the specified items.\n\x09\x09@brief\x09This call instigates an items details query which is handled on a separate thread.  The result of this asynchronous\n\x09\x09\x09\x09operation is reported back to the calling blueprint via the FGetItemsDetailsSuccess or FGetItemsDetailsFailure event handlers.\n\x09\x09@param\x09ItemIDs An array of FString objects specifying the names of the items whose details will be queried.\n\x09\x09@return\x09""False if an items details query is already running, true otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
		{ "ToolTip", "Attempts to retrieve details for the specified items.\n@brief  This call instigates an items details query which is handled on a separate thread.  The result of this asynchronous\n                operation is reported back to the calling blueprint via the FGetItemsDetailsSuccess or FGetItemsDetailsFailure event handlers.\n@param  ItemIDs An array of FString objects specifying the names of the items whose details will be queried.\n@return False if an items details query is already running, true otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseComponent, nullptr, "TryGetItemsDetailsAsync", nullptr, nullptr, sizeof(InAppPurchaseComponent_eventTryGetItemsDetailsAsync_Parms), Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Statics
	{
		struct InAppPurchaseComponent_eventTryGetPurchaseHistoryAsync_Parms
		{
			int32 InNumPages;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNumPages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InAppPurchaseComponent_eventTryGetPurchaseHistoryAsync_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InAppPurchaseComponent_eventTryGetPurchaseHistoryAsync_Parms), &Z_Construct_UFunction_UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Statics::NewProp_InNumPages = { "InNumPages", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseComponent_eventTryGetPurchaseHistoryAsync_Parms, InNumPages), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Statics::NewProp_InNumPages,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "InAppPurchase|MagicLeap" },
		{ "Comment", "/**\n\x09\x09""Attempts to retrieve the app's purchase history.\n\x09\x09@brief\x09This call instigates a purchase history request which is handled on a separate thread.  The result of this asynchronous\n\x09\x09\x09\x09operation is reported back to the calling blueprint via the FGetPurchaseHistorySuccess or FGetPurchaseHistoryFailure event handlers.\n\x09\x09@param\x09InNumPages Specifies the number of history pages to retrieve.\n\x09\x09@return\x09""False if a purchase history query is already running or InNumPages is less than or equal to zero, true otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
		{ "ToolTip", "Attempts to retrieve the app's purchase history.\n@brief  This call instigates a purchase history request which is handled on a separate thread.  The result of this asynchronous\n                operation is reported back to the calling blueprint via the FGetPurchaseHistorySuccess or FGetPurchaseHistoryFailure event handlers.\n@param  InNumPages Specifies the number of history pages to retrieve.\n@return False if a purchase history query is already running or InNumPages is less than or equal to zero, true otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseComponent, nullptr, "TryGetPurchaseHistoryAsync", nullptr, nullptr, sizeof(InAppPurchaseComponent_eventTryGetPurchaseHistoryAsync_Parms), Z_Construct_UFunction_UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInAppPurchaseComponent_TryGetPurchaseHistoryAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics
	{
		struct InAppPurchaseComponent_eventTryPurchaseItemAsync_Parms
		{
			FPurchaseItemDetails ItemDetails;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InAppPurchaseComponent_eventTryPurchaseItemAsync_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InAppPurchaseComponent_eventTryPurchaseItemAsync_Parms), &Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics::NewProp_ItemDetails_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics::NewProp_ItemDetails = { "ItemDetails", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseComponent_eventTryPurchaseItemAsync_Parms, ItemDetails), Z_Construct_UScriptStruct_FPurchaseItemDetails, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics::NewProp_ItemDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics::NewProp_ItemDetails_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics::NewProp_ItemDetails,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "InAppPurchase|MagicLeap" },
		{ "Comment", "/**\n\x09\x09""Attempts to purchase the specified item.\n\x09\x09@brief\x09This call instigates a purchase request which is handled on a separate thread.  The result of this asynchronous operation is\n\x09\x09\x09\x09reported back to the calling blueprint via the FPurchaseConfirmationSuccess or FPurchaseConfirmationFailure event handlers.\n\x09\x09@param\x09ItemDetails The details of the item to be purchased.\n\x09\x09@return\x09""False if a purchase confirmation is already running, true otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
		{ "ToolTip", "Attempts to purchase the specified item.\n@brief  This call instigates a purchase request which is handled on a separate thread.  The result of this asynchronous operation is\n                reported back to the calling blueprint via the FPurchaseConfirmationSuccess or FPurchaseConfirmationFailure event handlers.\n@param  ItemDetails The details of the item to be purchased.\n@return False if a purchase confirmation is already running, true otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseComponent, nullptr, "TryPurchaseItemAsync", nullptr, nullptr, sizeof(InAppPurchaseComponent_eventTryPurchaseItemAsync_Parms), Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInAppPurchaseComponent_NoRegister()
	{
		return UInAppPurchaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInAppPurchaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetPurchaseHistoryFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetPurchaseHistoryFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetPurchaseHistorySuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetPurchaseHistorySuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseConfirmationFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PurchaseConfirmationFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseConfirmationSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PurchaseConfirmationSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetItemsDetailsFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetItemsDetailsFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetItemsDetailsSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetItemsDetailsSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAppPurchaseLogMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_InAppPurchaseLogMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInAppPurchaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInAppPurchaseComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature, "GetItemsDetailsFailure__DelegateSignature" }, // 3740979029
		{ &Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature, "GetItemsDetailsSuccess__DelegateSignature" }, // 2865368544
		{ &Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature, "GetPurchaseHistoryFailure__DelegateSignature" }, // 2724218174
		{ &Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature, "GetPurchaseHistorySuccess__DelegateSignature" }, // 2887009077
		{ &Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature, "InAppPurchaseLogMessage__DelegateSignature" }, // 1556975
		{ &Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature, "PurchaseConfirmationFailure__DelegateSignature" }, // 1759300120
		{ &Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature, "PurchaseConfirmationSuccess__DelegateSignature" }, // 281973026
		{ &Z_Construct_UFunction_UInAppPurchaseComponent_TryGetItemsDetailsAsync, "TryGetItemsDetailsAsync" }, // 594427284
		{ &Z_Construct_UFunction_UInAppPurchaseComponent_TryGetPurchaseHistoryAsync, "TryGetPurchaseHistoryAsync" }, // 3416937023
		{ &Z_Construct_UFunction_UInAppPurchaseComponent_TryPurchaseItemAsync, "TryPurchaseItemAsync" }, // 2918711469
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MagicLeap" },
		{ "Comment", "/**\n\x09The CameraCaptureComponent provides access to and maintains state for camera capture functionality.\n\x09The connection to the device's camera is managed internally.  Users of this component\n\x09""are able to asynchronously capture camera images and footage to file.  Alternatively,\n\x09""a camera image can be captured directly to texture.  The user need only make the relevant\n\x09""asynchronous call and then register the appropriate success/fail event handlers for the\n\x09operation's completion.\n*/" },
		{ "IncludePath", "InAppPurchaseComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
		{ "ToolTip", "The CameraCaptureComponent provides access to and maintains state for camera capture functionality.\nThe connection to the device's camera is managed internally.  Users of this component\nare able to asynchronously capture camera images and footage to file.  Alternatively,\na camera image can be captured directly to texture.  The user need only make the relevant\nasynchronous call and then register the appropriate success/fail event handlers for the\noperation's completion." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetPurchaseHistoryFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InAppPurchase|MagicLeap" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetPurchaseHistoryFailure = { "GetPurchaseHistoryFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseComponent, GetPurchaseHistoryFailure), Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetPurchaseHistoryFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetPurchaseHistoryFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetPurchaseHistorySuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InAppPurchase|MagicLeap" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetPurchaseHistorySuccess = { "GetPurchaseHistorySuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseComponent, GetPurchaseHistorySuccess), Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetPurchaseHistorySuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetPurchaseHistorySuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_PurchaseConfirmationFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InAppPurchase|MagicLeap" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_PurchaseConfirmationFailure = { "PurchaseConfirmationFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseComponent, PurchaseConfirmationFailure), Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_PurchaseConfirmationFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_PurchaseConfirmationFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_PurchaseConfirmationSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InAppPurchase|MagicLeap" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_PurchaseConfirmationSuccess = { "PurchaseConfirmationSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseComponent, PurchaseConfirmationSuccess), Z_Construct_UDelegateFunction_UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_PurchaseConfirmationSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_PurchaseConfirmationSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetItemsDetailsFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InAppPurchase|MagicLeap" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetItemsDetailsFailure = { "GetItemsDetailsFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseComponent, GetItemsDetailsFailure), Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetItemsDetailsFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetItemsDetailsFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetItemsDetailsSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InAppPurchase|MagicLeap" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetItemsDetailsSuccess = { "GetItemsDetailsSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseComponent, GetItemsDetailsSuccess), Z_Construct_UDelegateFunction_UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetItemsDetailsSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetItemsDetailsSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_InAppPurchaseLogMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InAppPurchase|MagicLeap" },
		{ "ModuleRelativePath", "Public/InAppPurchaseComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_InAppPurchaseLogMessage = { "InAppPurchaseLogMessage", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseComponent, InAppPurchaseLogMessage), Z_Construct_UDelegateFunction_UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_InAppPurchaseLogMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_InAppPurchaseLogMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInAppPurchaseComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetPurchaseHistoryFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetPurchaseHistorySuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_PurchaseConfirmationFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_PurchaseConfirmationSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetItemsDetailsFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_GetItemsDetailsSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseComponent_Statics::NewProp_InAppPurchaseLogMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInAppPurchaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppPurchaseComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInAppPurchaseComponent_Statics::ClassParams = {
		&UInAppPurchaseComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInAppPurchaseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInAppPurchaseComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInAppPurchaseComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInAppPurchaseComponent, 1103448189);
	template<> MAGICLEAP_API UClass* StaticClass<UInAppPurchaseComponent>()
	{
		return UInAppPurchaseComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInAppPurchaseComponent(Z_Construct_UClass_UInAppPurchaseComponent, &UInAppPurchaseComponent::StaticClass, TEXT("/Script/MagicLeap"), TEXT("UInAppPurchaseComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppPurchaseComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapIdentity/Public/MagicLeapIdentity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapIdentity() {}
// Cross Module References
	MAGICLEAPIDENTITY_API UFunction* Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature();
	MAGICLEAPIDENTITY_API UClass* Z_Construct_UClass_UMagicLeapIdentity();
	MAGICLEAPIDENTITY_API UEnum* Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityKey();
	MAGICLEAPIDENTITY_API UEnum* Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityError();
	MAGICLEAPIDENTITY_API UFunction* Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature();
	MAGICLEAPIDENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute();
	MAGICLEAPIDENTITY_API UFunction* Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature();
	MAGICLEAPIDENTITY_API UClass* Z_Construct_UClass_UMagicLeapIdentity_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MagicLeapIdentity();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics
	{
		struct MagicLeapIdentity_eventModifyIdentityAttributeValueDelegate_Parms
		{
			EMagicLeapIdentityError ResultCode;
			TArray<EMagicLeapIdentityKey> AttributesUpdatedSuccessfully;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributesUpdatedSuccessfully_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttributesUpdatedSuccessfully;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttributesUpdatedSuccessfully_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttributesUpdatedSuccessfully_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResultCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResultCode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_AttributesUpdatedSuccessfully_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_AttributesUpdatedSuccessfully = { "AttributesUpdatedSuccessfully", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapIdentity_eventModifyIdentityAttributeValueDelegate_Parms, AttributesUpdatedSuccessfully), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_AttributesUpdatedSuccessfully_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_AttributesUpdatedSuccessfully_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_AttributesUpdatedSuccessfully_Inner = { "AttributesUpdatedSuccessfully", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_AttributesUpdatedSuccessfully_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapIdentity_eventModifyIdentityAttributeValueDelegate_Parms, ResultCode), Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_ResultCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_AttributesUpdatedSuccessfully,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_AttributesUpdatedSuccessfully_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_AttributesUpdatedSuccessfully_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_ResultCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_ResultCode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09  Delegate for the result of modifying the attribute values of a user's Magic Leap profile.\n\x09  @param ResultCode Error code when modifying the attribute values.\n\x09  @param AttributesUpdatedSuccessfully List of attributes whose values were successfully modified.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapIdentity.h" },
		{ "ToolTip", "Delegate for the result of modifying the attribute values of a user's Magic Leap profile.\n@param ResultCode Error code when modifying the attribute values.\n@param AttributesUpdatedSuccessfully List of attributes whose values were successfully modified." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapIdentity, nullptr, "ModifyIdentityAttributeValueDelegate__DelegateSignature", nullptr, nullptr, sizeof(MagicLeapIdentity_eventModifyIdentityAttributeValueDelegate_Parms), Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics
	{
		struct MagicLeapIdentity_eventRequestIdentityAttributeValueDelegate_Parms
		{
			EMagicLeapIdentityError ResultCode;
			TArray<FMagicLeapIdentityAttribute> AttributeValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttributeValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeValue_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResultCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResultCode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapIdentity_eventRequestIdentityAttributeValueDelegate_Parms, AttributeValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_AttributeValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_AttributeValue_Inner = { "AttributeValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapIdentity_eventRequestIdentityAttributeValueDelegate_Parms, ResultCode), Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_ResultCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_AttributeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_AttributeValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_ResultCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::NewProp_ResultCode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09  Delegate for the result of attribute values for the user's Magic Leap profile.\n\x09  @param ResultCode Error code when getting the attribute values.\n\x09  @param AttributeValue List of attribute values for the user's Magic Leap profile.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapIdentity.h" },
		{ "ToolTip", "Delegate for the result of attribute values for the user's Magic Leap profile.\n@param ResultCode Error code when getting the attribute values.\n@param AttributeValue List of attribute values for the user's Magic Leap profile." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapIdentity, nullptr, "RequestIdentityAttributeValueDelegate__DelegateSignature", nullptr, nullptr, sizeof(MagicLeapIdentity_eventRequestIdentityAttributeValueDelegate_Parms), Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics
	{
		struct MagicLeapIdentity_eventAvailableIdentityAttributesDelegate_Parms
		{
			EMagicLeapIdentityError ResultCode;
			TArray<EMagicLeapIdentityKey> AvailableAttributes;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableAttributes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AvailableAttributes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AvailableAttributes_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResultCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResultCode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::NewProp_AvailableAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::NewProp_AvailableAttributes = { "AvailableAttributes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapIdentity_eventAvailableIdentityAttributesDelegate_Parms, AvailableAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::NewProp_AvailableAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::NewProp_AvailableAttributes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::NewProp_AvailableAttributes_Inner = { "AvailableAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::NewProp_AvailableAttributes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapIdentity_eventAvailableIdentityAttributesDelegate_Parms, ResultCode), Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::NewProp_ResultCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::NewProp_AvailableAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::NewProp_AvailableAttributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::NewProp_AvailableAttributes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::NewProp_ResultCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::NewProp_ResultCode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09  Delegate for the result of available attributes for the user's Magic Leap profile.\n\x09  @param ResultCode Error code when getting the available attributes.\n\x09  @param AvailableAttributes List of attributes available for the user's Magic Leap profile.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapIdentity.h" },
		{ "ToolTip", "Delegate for the result of available attributes for the user's Magic Leap profile.\n@param ResultCode Error code when getting the available attributes.\n@param AvailableAttributes List of attributes available for the user's Magic Leap profile." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapIdentity, nullptr, "AvailableIdentityAttributesDelegate__DelegateSignature", nullptr, nullptr, sizeof(MagicLeapIdentity_eventAvailableIdentityAttributesDelegate_Parms), Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMagicLeapIdentity::execRequestAttributeValueAsync)
	{
		P_GET_TARRAY_REF(EMagicLeapIdentityKey,Z_Param_Out_RequestedAttributeList);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMagicLeapIdentityError*)Z_Param__Result=P_THIS->RequestAttributeValueAsync(Z_Param_Out_RequestedAttributeList,FRequestIdentityAttributeValueDelegate(Z_Param_Out_ResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapIdentity::execRequestAttributeValue)
	{
		P_GET_TARRAY_REF(EMagicLeapIdentityKey,Z_Param_Out_RequestedAttributeList);
		P_GET_TARRAY_REF(FMagicLeapIdentityAttribute,Z_Param_Out_RequestedAttributeValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMagicLeapIdentityError*)Z_Param__Result=P_THIS->RequestAttributeValue(Z_Param_Out_RequestedAttributeList,Z_Param_Out_RequestedAttributeValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapIdentity::execGetAllAvailableAttributesAsync)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllAvailableAttributesAsync(FAvailableIdentityAttributesDelegate(Z_Param_Out_ResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapIdentity::execGetAllAvailableAttributes)
	{
		P_GET_TARRAY_REF(EMagicLeapIdentityKey,Z_Param_Out_AvailableAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMagicLeapIdentityError*)Z_Param__Result=P_THIS->GetAllAvailableAttributes(Z_Param_Out_AvailableAttributes);
		P_NATIVE_END;
	}
	void UMagicLeapIdentity::StaticRegisterNativesUMagicLeapIdentity()
	{
		UClass* Class = UMagicLeapIdentity::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllAvailableAttributes", &UMagicLeapIdentity::execGetAllAvailableAttributes },
			{ "GetAllAvailableAttributesAsync", &UMagicLeapIdentity::execGetAllAvailableAttributesAsync },
			{ "RequestAttributeValue", &UMagicLeapIdentity::execRequestAttributeValue },
			{ "RequestAttributeValueAsync", &UMagicLeapIdentity::execRequestAttributeValueAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics
	{
		struct MagicLeapIdentity_eventGetAllAvailableAttributes_Parms
		{
			TArray<EMagicLeapIdentityKey> AvailableAttributes;
			EMagicLeapIdentityError ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableAttributes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AvailableAttributes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AvailableAttributes_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapIdentity_eventGetAllAvailableAttributes_Parms, ReturnValue), Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::NewProp_AvailableAttributes = { "AvailableAttributes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapIdentity_eventGetAllAvailableAttributes_Parms, AvailableAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::NewProp_AvailableAttributes_Inner = { "AvailableAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::NewProp_AvailableAttributes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::NewProp_AvailableAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::NewProp_AvailableAttributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::NewProp_AvailableAttributes_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Identity|MagicLeap" },
		{ "Comment", "/**\n\x09  Get the attributes available for the user's Magic Leap profile. Note that this does not request the values for these attribtues.\n\x09  This function makes a blocking call to the cloud. You can alternatively use GetAllAvailableAttributesAsync() to request the attributes asynchronously.\n\x09  @param AvailableAttributes Output parameter populated with the list of attributes available for the user's Magic Leap profile.\n\x09  @return Error code when getting the list of available attributes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapIdentity.h" },
		{ "ToolTip", "Get the attributes available for the user's Magic Leap profile. Note that this does not request the values for these attribtues.\nThis function makes a blocking call to the cloud. You can alternatively use GetAllAvailableAttributesAsync() to request the attributes asynchronously.\n@param AvailableAttributes Output parameter populated with the list of attributes available for the user's Magic Leap profile.\n@return Error code when getting the list of available attributes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapIdentity, nullptr, "GetAllAvailableAttributes", nullptr, nullptr, sizeof(MagicLeapIdentity_eventGetAllAvailableAttributes_Parms), Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributesAsync_Statics
	{
		struct MagicLeapIdentity_eventGetAllAvailableAttributesAsync_Parms
		{
			FScriptDelegate ResultDelegate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributesAsync_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributesAsync_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapIdentity_eventGetAllAvailableAttributesAsync_Parms, ResultDelegate), Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributesAsync_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributesAsync_Statics::NewProp_ResultDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributesAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributesAsync_Statics::NewProp_ResultDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributesAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Identity|MagicLeap" },
		{ "Comment", "/**\n\x09  Asynchronous call to get the attributes available for the user's Magic Leap profile. Note that this does not request the values for these attribtues.\n\x09  @param ResultDelegate Callback which reports the list of available attributes.\n\x09  @return Error code when getting the list of available attributes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapIdentity.h" },
		{ "ToolTip", "Asynchronous call to get the attributes available for the user's Magic Leap profile. Note that this does not request the values for these attribtues.\n@param ResultDelegate Callback which reports the list of available attributes.\n@return Error code when getting the list of available attributes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapIdentity, nullptr, "GetAllAvailableAttributesAsync", nullptr, nullptr, sizeof(MagicLeapIdentity_eventGetAllAvailableAttributesAsync_Parms), Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics
	{
		struct MagicLeapIdentity_eventRequestAttributeValue_Parms
		{
			TArray<EMagicLeapIdentityKey> RequestedAttributeList;
			TArray<FMagicLeapIdentityAttribute> RequestedAttributeValues;
			EMagicLeapIdentityError ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequestedAttributeValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestedAttributeValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedAttributeList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequestedAttributeList;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RequestedAttributeList_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RequestedAttributeList_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapIdentity_eventRequestAttributeValue_Parms, ReturnValue), Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::NewProp_RequestedAttributeValues = { "RequestedAttributeValues", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapIdentity_eventRequestAttributeValue_Parms, RequestedAttributeValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::NewProp_RequestedAttributeValues_Inner = { "RequestedAttributeValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagicLeapIdentityAttribute, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::NewProp_RequestedAttributeList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::NewProp_RequestedAttributeList = { "RequestedAttributeList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapIdentity_eventRequestAttributeValue_Parms, RequestedAttributeList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::NewProp_RequestedAttributeList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::NewProp_RequestedAttributeList_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::NewProp_RequestedAttributeList_Inner = { "RequestedAttributeList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::NewProp_RequestedAttributeList_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::NewProp_RequestedAttributeValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::NewProp_RequestedAttributeValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::NewProp_RequestedAttributeList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::NewProp_RequestedAttributeList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::NewProp_RequestedAttributeList_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Identity|MagicLeap" },
		{ "Comment", "/**\n\x09  Get the values for the attributes of the user's Magic Leap profile.\n\x09  This function makes a blocking call to the cloud. You can alternatively use RequestAttributeValueAsync() to request the attribute values asynchronously.\n\x09  @param RequestedAttributeList List of attributes to request the value for.\n\x09  @param RequestedAttributeValues Output parameter populated with the list of attributes and their values.\n\x09  @return Error code when getting the attribute values.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapIdentity.h" },
		{ "ToolTip", "Get the values for the attributes of the user's Magic Leap profile.\nThis function makes a blocking call to the cloud. You can alternatively use RequestAttributeValueAsync() to request the attribute values asynchronously.\n@param RequestedAttributeList List of attributes to request the value for.\n@param RequestedAttributeValues Output parameter populated with the list of attributes and their values.\n@return Error code when getting the attribute values." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapIdentity, nullptr, "RequestAttributeValue", nullptr, nullptr, sizeof(MagicLeapIdentity_eventRequestAttributeValue_Parms), Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics
	{
		struct MagicLeapIdentity_eventRequestAttributeValueAsync_Parms
		{
			TArray<EMagicLeapIdentityKey> RequestedAttributeList;
			FScriptDelegate ResultDelegate;
			EMagicLeapIdentityError ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedAttributeList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequestedAttributeList;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RequestedAttributeList_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RequestedAttributeList_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapIdentity_eventRequestAttributeValueAsync_Parms, ReturnValue), Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapIdentity_eventRequestAttributeValueAsync_Parms, ResultDelegate), Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_ResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_RequestedAttributeList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_RequestedAttributeList = { "RequestedAttributeList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapIdentity_eventRequestAttributeValueAsync_Parms, RequestedAttributeList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_RequestedAttributeList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_RequestedAttributeList_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_RequestedAttributeList_Inner = { "RequestedAttributeList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapIdentity_EMagicLeapIdentityKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_RequestedAttributeList_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_ResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_RequestedAttributeList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_RequestedAttributeList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::NewProp_RequestedAttributeList_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Identity|MagicLeap" },
		{ "Comment", "/**\n\x09  Asynchronous call to get the values for the attributes of the user's Magic Leap profile.\n\x09  @param RequestedAttributeList List of attributes to request the value for.\n\x09  @param ResultDelegate Callback which reports the list of attributes and their values.\n\x09  @return Error code when getting the attribute values.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapIdentity.h" },
		{ "ToolTip", "Asynchronous call to get the values for the attributes of the user's Magic Leap profile.\n@param RequestedAttributeList List of attributes to request the value for.\n@param ResultDelegate Callback which reports the list of attributes and their values.\n@return Error code when getting the attribute values." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapIdentity, nullptr, "RequestAttributeValueAsync", nullptr, nullptr, sizeof(MagicLeapIdentity_eventRequestAttributeValueAsync_Parms), Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapIdentity_NoRegister()
	{
		return UMagicLeapIdentity::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapIdentity_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapIdentity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapIdentity,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapIdentity_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature, "AvailableIdentityAttributesDelegate__DelegateSignature" }, // 903336738
		{ &Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributes, "GetAllAvailableAttributes" }, // 126452827
		{ &Z_Construct_UFunction_UMagicLeapIdentity_GetAllAvailableAttributesAsync, "GetAllAvailableAttributesAsync" }, // 1023494045
		{ &Z_Construct_UDelegateFunction_UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature, "ModifyIdentityAttributeValueDelegate__DelegateSignature" }, // 3757733820
		{ &Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValue, "RequestAttributeValue" }, // 4069836297
		{ &Z_Construct_UFunction_UMagicLeapIdentity_RequestAttributeValueAsync, "RequestAttributeValueAsync" }, // 2681096878
		{ &Z_Construct_UDelegateFunction_UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature, "RequestIdentityAttributeValueDelegate__DelegateSignature" }, // 2537104286
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapIdentity_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MagicLeap" },
		{ "Comment", "/**\n *  Class which provides functions to read and update the user's Magic Leap profile.\n */" },
		{ "IncludePath", "MagicLeapIdentity.h" },
		{ "ModuleRelativePath", "Public/MagicLeapIdentity.h" },
		{ "ToolTip", "Class which provides functions to read and update the user's Magic Leap profile." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapIdentity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapIdentity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapIdentity_Statics::ClassParams = {
		&UMagicLeapIdentity::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapIdentity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapIdentity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapIdentity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapIdentity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapIdentity, 2894376850);
	template<> MAGICLEAPIDENTITY_API UClass* StaticClass<UMagicLeapIdentity>()
	{
		return UMagicLeapIdentity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapIdentity(Z_Construct_UClass_UMagicLeapIdentity, &UMagicLeapIdentity::StaticClass, TEXT("/Script/MagicLeapIdentity"), TEXT("UMagicLeapIdentity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapIdentity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

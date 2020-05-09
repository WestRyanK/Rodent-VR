// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/Device.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDevice() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UDevice_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UDevice();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UFunction* Z_Construct_UFunction_UDevice_GetDeviceId();
	RODENTVR_API UFunction* Z_Construct_UFunction_UDevice_GetDeviceLine();
	RODENTVR_API UFunction* Z_Construct_UFunction_UDevice_GetDeviceName();
	RODENTVR_API UFunction* Z_Construct_UFunction_UDevice_GetDevicePath();
	RODENTVR_API UFunction* Z_Construct_UFunction_UDevice_GetDevicePort();
	RODENTVR_API UFunction* Z_Construct_UFunction_UDevice_SetDeviceId();
	RODENTVR_API UFunction* Z_Construct_UFunction_UDevice_SetDeviceLine();
	RODENTVR_API UFunction* Z_Construct_UFunction_UDevice_SetDeviceName();
	RODENTVR_API UFunction* Z_Construct_UFunction_UDevice_SetDevicePort();
// End Cross Module References
	void UDevice::StaticRegisterNativesUDevice()
	{
		UClass* Class = UDevice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDeviceId", &UDevice::execGetDeviceId },
			{ "GetDeviceLine", &UDevice::execGetDeviceLine },
			{ "GetDeviceName", &UDevice::execGetDeviceName },
			{ "GetDevicePath", &UDevice::execGetDevicePath },
			{ "GetDevicePort", &UDevice::execGetDevicePort },
			{ "SetDeviceId", &UDevice::execSetDeviceId },
			{ "SetDeviceLine", &UDevice::execSetDeviceLine },
			{ "SetDeviceName", &UDevice::execSetDeviceName },
			{ "SetDevicePort", &UDevice::execSetDevicePort },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDevice_GetDeviceId_Statics
	{
		struct Device_eventGetDeviceId_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDevice_GetDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Device_eventGetDeviceId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevice_GetDeviceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevice_GetDeviceId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevice_GetDeviceId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/Device.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevice_GetDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevice, nullptr, "GetDeviceId", nullptr, nullptr, sizeof(Device_eventGetDeviceId_Parms), Z_Construct_UFunction_UDevice_GetDeviceId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDevice_GetDeviceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevice_GetDeviceId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDevice_GetDeviceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevice_GetDeviceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevice_GetDeviceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevice_GetDeviceLine_Statics
	{
		struct Device_eventGetDeviceLine_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDevice_GetDeviceLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Device_eventGetDeviceLine_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevice_GetDeviceLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevice_GetDeviceLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevice_GetDeviceLine_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/Device.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevice_GetDeviceLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevice, nullptr, "GetDeviceLine", nullptr, nullptr, sizeof(Device_eventGetDeviceLine_Parms), Z_Construct_UFunction_UDevice_GetDeviceLine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDevice_GetDeviceLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevice_GetDeviceLine_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDevice_GetDeviceLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevice_GetDeviceLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevice_GetDeviceLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevice_GetDeviceName_Statics
	{
		struct Device_eventGetDeviceName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDevice_GetDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Device_eventGetDeviceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevice_GetDeviceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevice_GetDeviceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevice_GetDeviceName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/Device.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevice_GetDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevice, nullptr, "GetDeviceName", nullptr, nullptr, sizeof(Device_eventGetDeviceName_Parms), Z_Construct_UFunction_UDevice_GetDeviceName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDevice_GetDeviceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevice_GetDeviceName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDevice_GetDeviceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevice_GetDeviceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevice_GetDeviceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevice_GetDevicePath_Statics
	{
		struct Device_eventGetDevicePath_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDevice_GetDevicePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Device_eventGetDevicePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevice_GetDevicePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevice_GetDevicePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevice_GetDevicePath_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/Device.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevice_GetDevicePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevice, nullptr, "GetDevicePath", nullptr, nullptr, sizeof(Device_eventGetDevicePath_Parms), Z_Construct_UFunction_UDevice_GetDevicePath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDevice_GetDevicePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevice_GetDevicePath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDevice_GetDevicePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevice_GetDevicePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevice_GetDevicePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevice_GetDevicePort_Statics
	{
		struct Device_eventGetDevicePort_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDevice_GetDevicePort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Device_eventGetDevicePort_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevice_GetDevicePort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevice_GetDevicePort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevice_GetDevicePort_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/Device.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevice_GetDevicePort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevice, nullptr, "GetDevicePort", nullptr, nullptr, sizeof(Device_eventGetDevicePort_Parms), Z_Construct_UFunction_UDevice_GetDevicePort_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDevice_GetDevicePort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevice_GetDevicePort_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDevice_GetDevicePort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevice_GetDevicePort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevice_GetDevicePort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevice_SetDeviceId_Statics
	{
		struct Device_eventSetDeviceId_Parms
		{
			FString DeviceIdValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceIdValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDevice_SetDeviceId_Statics::NewProp_DeviceIdValue = { "DeviceIdValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Device_eventSetDeviceId_Parms, DeviceIdValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevice_SetDeviceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevice_SetDeviceId_Statics::NewProp_DeviceIdValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevice_SetDeviceId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/Device.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevice_SetDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevice, nullptr, "SetDeviceId", nullptr, nullptr, sizeof(Device_eventSetDeviceId_Parms), Z_Construct_UFunction_UDevice_SetDeviceId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDevice_SetDeviceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevice_SetDeviceId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDevice_SetDeviceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevice_SetDeviceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevice_SetDeviceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevice_SetDeviceLine_Statics
	{
		struct Device_eventSetDeviceLine_Parms
		{
			FString DeviceLineValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceLineValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDevice_SetDeviceLine_Statics::NewProp_DeviceLineValue = { "DeviceLineValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Device_eventSetDeviceLine_Parms, DeviceLineValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevice_SetDeviceLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevice_SetDeviceLine_Statics::NewProp_DeviceLineValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevice_SetDeviceLine_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/Device.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevice_SetDeviceLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevice, nullptr, "SetDeviceLine", nullptr, nullptr, sizeof(Device_eventSetDeviceLine_Parms), Z_Construct_UFunction_UDevice_SetDeviceLine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDevice_SetDeviceLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevice_SetDeviceLine_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDevice_SetDeviceLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevice_SetDeviceLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevice_SetDeviceLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevice_SetDeviceName_Statics
	{
		struct Device_eventSetDeviceName_Parms
		{
			FString DeviceNameValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceNameValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDevice_SetDeviceName_Statics::NewProp_DeviceNameValue = { "DeviceNameValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Device_eventSetDeviceName_Parms, DeviceNameValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevice_SetDeviceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevice_SetDeviceName_Statics::NewProp_DeviceNameValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevice_SetDeviceName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/Device.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevice_SetDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevice, nullptr, "SetDeviceName", nullptr, nullptr, sizeof(Device_eventSetDeviceName_Parms), Z_Construct_UFunction_UDevice_SetDeviceName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDevice_SetDeviceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevice_SetDeviceName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDevice_SetDeviceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevice_SetDeviceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevice_SetDeviceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevice_SetDevicePort_Statics
	{
		struct Device_eventSetDevicePort_Parms
		{
			FString DevicePortValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DevicePortValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDevice_SetDevicePort_Statics::NewProp_DevicePortValue = { "DevicePortValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Device_eventSetDevicePort_Parms, DevicePortValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevice_SetDevicePort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevice_SetDevicePort_Statics::NewProp_DevicePortValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevice_SetDevicePort_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/Device.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevice_SetDevicePort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevice, nullptr, "SetDevicePort", nullptr, nullptr, sizeof(Device_eventSetDevicePort_Parms), Z_Construct_UFunction_UDevice_SetDevicePort_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDevice_SetDevicePort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevice_SetDevicePort_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDevice_SetDevicePort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevice_SetDevicePort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevice_SetDevicePort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDevice_NoRegister()
	{
		return UDevice::StaticClass();
	}
	struct Z_Construct_UClass_UDevice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DevicePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DevicePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DevicePort_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DevicePort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDevice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDevice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDevice_GetDeviceId, "GetDeviceId" }, // 3808934465
		{ &Z_Construct_UFunction_UDevice_GetDeviceLine, "GetDeviceLine" }, // 1912904908
		{ &Z_Construct_UFunction_UDevice_GetDeviceName, "GetDeviceName" }, // 643727199
		{ &Z_Construct_UFunction_UDevice_GetDevicePath, "GetDevicePath" }, // 2938469330
		{ &Z_Construct_UFunction_UDevice_GetDevicePort, "GetDevicePort" }, // 3433718213
		{ &Z_Construct_UFunction_UDevice_SetDeviceId, "SetDeviceId" }, // 40774067
		{ &Z_Construct_UFunction_UDevice_SetDeviceLine, "SetDeviceLine" }, // 3891964387
		{ &Z_Construct_UFunction_UDevice_SetDeviceName, "SetDeviceName" }, // 1268897086
		{ &Z_Construct_UFunction_UDevice_SetDevicePort, "SetDevicePort" }, // 1213629689
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Settings/Device.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Settings/Device.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevice_Statics::NewProp_DevicePath_MetaData[] = {
		{ "BlueprintGetter", "GetDevicePath" },
		{ "Category", "Device" },
		{ "ModuleRelativePath", "Private/Settings/Device.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDevice_Statics::NewProp_DevicePath = { "DevicePath", nullptr, (EPropertyFlags)0x0040000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDevice, DevicePath), METADATA_PARAMS(Z_Construct_UClass_UDevice_Statics::NewProp_DevicePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDevice_Statics::NewProp_DevicePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevice_Statics::NewProp_DeviceLine_MetaData[] = {
		{ "BlueprintGetter", "GetDeviceLine" },
		{ "BlueprintSetter", "SetDeviceLine" },
		{ "Category", "Device" },
		{ "ModuleRelativePath", "Private/Settings/Device.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDevice_Statics::NewProp_DeviceLine = { "DeviceLine", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDevice, DeviceLine), METADATA_PARAMS(Z_Construct_UClass_UDevice_Statics::NewProp_DeviceLine_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDevice_Statics::NewProp_DeviceLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevice_Statics::NewProp_DevicePort_MetaData[] = {
		{ "BlueprintGetter", "GetDevicePort" },
		{ "BlueprintSetter", "SetDevicePort" },
		{ "Category", "Device" },
		{ "ModuleRelativePath", "Private/Settings/Device.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDevice_Statics::NewProp_DevicePort = { "DevicePort", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDevice, DevicePort), METADATA_PARAMS(Z_Construct_UClass_UDevice_Statics::NewProp_DevicePort_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDevice_Statics::NewProp_DevicePort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevice_Statics::NewProp_DeviceName_MetaData[] = {
		{ "BlueprintGetter", "GetDeviceName" },
		{ "BlueprintSetter", "SetDeviceName" },
		{ "Category", "Device" },
		{ "ModuleRelativePath", "Private/Settings/Device.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDevice_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDevice, DeviceName), METADATA_PARAMS(Z_Construct_UClass_UDevice_Statics::NewProp_DeviceName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDevice_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevice_Statics::NewProp_DeviceId_MetaData[] = {
		{ "BlueprintGetter", "GetDeviceId" },
		{ "BlueprintSetter", "SetDeviceId" },
		{ "Category", "Device" },
		{ "ModuleRelativePath", "Private/Settings/Device.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDevice_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDevice, DeviceId), METADATA_PARAMS(Z_Construct_UClass_UDevice_Statics::NewProp_DeviceId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDevice_Statics::NewProp_DeviceId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDevice_Statics::NewProp_DevicePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDevice_Statics::NewProp_DeviceLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDevice_Statics::NewProp_DevicePort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDevice_Statics::NewProp_DeviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDevice_Statics::NewProp_DeviceId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDevice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDevice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDevice_Statics::ClassParams = {
		&UDevice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDevice_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UDevice_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDevice_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDevice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDevice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDevice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDevice, 368512163);
	template<> RODENTVR_API UClass* StaticClass<UDevice>()
	{
		return UDevice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDevice(Z_Construct_UClass_UDevice, &UDevice::StaticClass, TEXT("/Script/RodentVR"), TEXT("UDevice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDevice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

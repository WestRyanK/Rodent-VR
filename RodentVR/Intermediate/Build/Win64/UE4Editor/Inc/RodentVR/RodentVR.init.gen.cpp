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
void EmptyLinkFunctionForGeneratedCodeRodentVR_init() {}
	RODENTVR_API UFunction* Z_Construct_UDelegateFunction_RodentVR_RodentVRSettingsChangedDelegate__DelegateSignature();
	RODENTVR_API UFunction* Z_Construct_UDelegateFunction_RodentVR_SettingsLoadedDelegate__DelegateSignature();
	RODENTVR_API UFunction* Z_Construct_UDelegateFunction_RodentVR_RegionEnterDelegate__DelegateSignature();
	RODENTVR_API UFunction* Z_Construct_UDelegateFunction_RodentVR_MazeLoadedDelegate__DelegateSignature();
	RODENTVR_API UFunction* Z_Construct_UDelegateFunction_RodentVR_MazeFinishedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RodentVR()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RodentVR_RodentVRSettingsChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RodentVR_SettingsLoadedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RodentVR_RegionEnterDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RodentVR_MazeLoadedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RodentVR_MazeFinishedDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/RodentVR",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA3BFBFB9,
				0x1DB75ADF,
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

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
void EmptyLinkFunctionForGeneratedCodeMagicLeapARPin_init() {}
	MAGICLEAPARPIN_API UFunction* Z_Construct_UDelegateFunction_MagicLeapARPin_MagicLeapARPinUpdatedDelegate__DelegateSignature();
	MAGICLEAPARPIN_API UFunction* Z_Construct_UDelegateFunction_MagicLeapARPin_MagicLeapARPinUpdatedMultiDelegate__DelegateSignature();
	MAGICLEAPARPIN_API UFunction* Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature();
	MAGICLEAPARPIN_API UFunction* Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MagicLeapARPin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MagicLeapARPin_MagicLeapARPinUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MagicLeapARPin_MagicLeapARPinUpdatedMultiDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/MagicLeapARPin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1A25D936,
				0x7A14559A,
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

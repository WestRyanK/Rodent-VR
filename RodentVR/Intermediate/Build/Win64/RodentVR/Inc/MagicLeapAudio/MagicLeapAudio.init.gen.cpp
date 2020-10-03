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
void EmptyLinkFunctionForGeneratedCodeMagicLeapAudio_init() {}
	MAGICLEAPAUDIO_API UFunction* Z_Construct_UDelegateFunction_MagicLeapAudio_MagicLeapAudioJackPluggedDelegate__DelegateSignature();
	MAGICLEAPAUDIO_API UFunction* Z_Construct_UDelegateFunction_MagicLeapAudio_MagicLeapAudioJackPluggedDelegateMulti__DelegateSignature();
	MAGICLEAPAUDIO_API UFunction* Z_Construct_UDelegateFunction_MagicLeapAudio_MagicLeapAudioJackUnpluggedDelegate__DelegateSignature();
	MAGICLEAPAUDIO_API UFunction* Z_Construct_UDelegateFunction_MagicLeapAudio_MagicLeapAudioJackUnpluggedDelegateMulti__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MagicLeapAudio()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MagicLeapAudio_MagicLeapAudioJackPluggedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MagicLeapAudio_MagicLeapAudioJackPluggedDelegateMulti__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MagicLeapAudio_MagicLeapAudioJackUnpluggedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MagicLeapAudio_MagicLeapAudioJackUnpluggedDelegateMulti__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/MagicLeapAudio",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x73989435,
				0x4CABCB3A,
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

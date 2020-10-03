// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapAudio/Public/MagicLeapAudioFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapAudioFunctionLibrary() {}
// Cross Module References
	MAGICLEAPAUDIO_API UClass* Z_Construct_UClass_UMagicLeapAudioFunctionLibrary_NoRegister();
	MAGICLEAPAUDIO_API UClass* Z_Construct_UClass_UMagicLeapAudioFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MagicLeapAudio();
	MAGICLEAPAUDIO_API UFunction* Z_Construct_UDelegateFunction_MagicLeapAudio_MagicLeapAudioJackPluggedDelegate__DelegateSignature();
	MAGICLEAPAUDIO_API UFunction* Z_Construct_UDelegateFunction_MagicLeapAudio_MagicLeapAudioJackUnpluggedDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UMagicLeapAudioFunctionLibrary::execIsMicMuted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapAudioFunctionLibrary::IsMicMuted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapAudioFunctionLibrary::execSetMicMute)
	{
		P_GET_UBOOL(Z_Param_IsMuted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapAudioFunctionLibrary::SetMicMute(Z_Param_IsMuted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapAudioFunctionLibrary::execSetOnAudioJackUnpluggedDelegate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapAudioFunctionLibrary::SetOnAudioJackUnpluggedDelegate(FMagicLeapAudioJackUnpluggedDelegate(Z_Param_Out_ResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapAudioFunctionLibrary::execSetOnAudioJackPluggedDelegate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapAudioFunctionLibrary::SetOnAudioJackPluggedDelegate(FMagicLeapAudioJackPluggedDelegate(Z_Param_Out_ResultDelegate));
		P_NATIVE_END;
	}
	void UMagicLeapAudioFunctionLibrary::StaticRegisterNativesUMagicLeapAudioFunctionLibrary()
	{
		UClass* Class = UMagicLeapAudioFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsMicMuted", &UMagicLeapAudioFunctionLibrary::execIsMicMuted },
			{ "SetMicMute", &UMagicLeapAudioFunctionLibrary::execSetMicMute },
			{ "SetOnAudioJackPluggedDelegate", &UMagicLeapAudioFunctionLibrary::execSetOnAudioJackPluggedDelegate },
			{ "SetOnAudioJackUnpluggedDelegate", &UMagicLeapAudioFunctionLibrary::execSetOnAudioJackUnpluggedDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_IsMicMuted_Statics
	{
		struct MagicLeapAudioFunctionLibrary_eventIsMicMuted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_IsMicMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapAudioFunctionLibrary_eventIsMicMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_IsMicMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapAudioFunctionLibrary_eventIsMicMuted_Parms), &Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_IsMicMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_IsMicMuted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_IsMicMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_IsMicMuted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Function Library | MagicLeap" },
		{ "Comment", "/**\n\x09\x09Returns whether all microphone capture is muted or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapAudioFunctionLibrary.h" },
		{ "ToolTip", "Returns whether all microphone capture is muted or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_IsMicMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapAudioFunctionLibrary, nullptr, "IsMicMuted", nullptr, nullptr, sizeof(MagicLeapAudioFunctionLibrary_eventIsMicMuted_Parms), Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_IsMicMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_IsMicMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_IsMicMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_IsMicMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_IsMicMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_IsMicMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute_Statics
	{
		struct MagicLeapAudioFunctionLibrary_eventSetMicMute_Parms
		{
			bool IsMuted;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_IsMuted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMuted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapAudioFunctionLibrary_eventSetMicMute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapAudioFunctionLibrary_eventSetMicMute_Parms), &Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute_Statics::NewProp_IsMuted_SetBit(void* Obj)
	{
		((MagicLeapAudioFunctionLibrary_eventSetMicMute_Parms*)Obj)->IsMuted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute_Statics::NewProp_IsMuted = { "IsMuted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapAudioFunctionLibrary_eventSetMicMute_Parms), &Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute_Statics::NewProp_IsMuted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute_Statics::NewProp_IsMuted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Function Library | MagicLeap" },
		{ "Comment", "/**\n\x09\x09Mute or unmute all microphone capture.\n\x09\x09Note: When mic capture is muted or unmuted by one app, it is muted or unmuted for all apps.\n\x09\x09Note: this setting is separate from any muting done by the audio policy manager (such as when the \"reality button\"\n\x09\x09is pressed).\n\x09\x09@param IsMuted Boolean value indicating whether or not to mute\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapAudioFunctionLibrary.h" },
		{ "ToolTip", "Mute or unmute all microphone capture.\nNote: When mic capture is muted or unmuted by one app, it is muted or unmuted for all apps.\nNote: this setting is separate from any muting done by the audio policy manager (such as when the \"reality button\"\nis pressed).\n@param IsMuted Boolean value indicating whether or not to mute" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapAudioFunctionLibrary, nullptr, "SetMicMute", nullptr, nullptr, sizeof(MagicLeapAudioFunctionLibrary_eventSetMicMute_Parms), Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics
	{
		struct MagicLeapAudioFunctionLibrary_eventSetOnAudioJackPluggedDelegate_Parms
		{
			FScriptDelegate ResultDelegate;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
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
	void Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapAudioFunctionLibrary_eventSetOnAudioJackPluggedDelegate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapAudioFunctionLibrary_eventSetOnAudioJackPluggedDelegate_Parms), &Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapAudioFunctionLibrary_eventSetOnAudioJackPluggedDelegate_Parms, ResultDelegate), Z_Construct_UDelegateFunction_MagicLeapAudio_MagicLeapAudioJackPluggedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics::NewProp_ResultDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics::NewProp_ResultDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Function Library | MagicLeap" },
		{ "Comment", "/** \n\x09\x09Sets the delegate used to notify that an audio device has been plugged into the audio jack.\n\x09\x09@param ResultDelegate The delegate that will be notified when an audio device has been plugged into the audio jack.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapAudioFunctionLibrary.h" },
		{ "ToolTip", "Sets the delegate used to notify that an audio device has been plugged into the audio jack.\n@param ResultDelegate The delegate that will be notified when an audio device has been plugged into the audio jack." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapAudioFunctionLibrary, nullptr, "SetOnAudioJackPluggedDelegate", nullptr, nullptr, sizeof(MagicLeapAudioFunctionLibrary_eventSetOnAudioJackPluggedDelegate_Parms), Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics
	{
		struct MagicLeapAudioFunctionLibrary_eventSetOnAudioJackUnpluggedDelegate_Parms
		{
			FScriptDelegate ResultDelegate;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
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
	void Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapAudioFunctionLibrary_eventSetOnAudioJackUnpluggedDelegate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapAudioFunctionLibrary_eventSetOnAudioJackUnpluggedDelegate_Parms), &Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapAudioFunctionLibrary_eventSetOnAudioJackUnpluggedDelegate_Parms, ResultDelegate), Z_Construct_UDelegateFunction_MagicLeapAudio_MagicLeapAudioJackUnpluggedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics::NewProp_ResultDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics::NewProp_ResultDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Function Library | MagicLeap" },
		{ "Comment", "/**\n\x09\x09Sets the delegate used to notify that an audio device has been unplugged from the audio jack.\n\x09\x09@param ResultDelegate The delegate that will be notified when an audio device has been unplugged from the audio jack.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapAudioFunctionLibrary.h" },
		{ "ToolTip", "Sets the delegate used to notify that an audio device has been unplugged from the audio jack.\n@param ResultDelegate The delegate that will be notified when an audio device has been unplugged from the audio jack." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapAudioFunctionLibrary, nullptr, "SetOnAudioJackUnpluggedDelegate", nullptr, nullptr, sizeof(MagicLeapAudioFunctionLibrary_eventSetOnAudioJackUnpluggedDelegate_Parms), Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapAudioFunctionLibrary_NoRegister()
	{
		return UMagicLeapAudioFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapAudioFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapAudioFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapAudioFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_IsMicMuted, "IsMicMuted" }, // 3720341971
		{ &Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetMicMute, "SetMicMute" }, // 3960699379
		{ &Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate, "SetOnAudioJackPluggedDelegate" }, // 953261328
		{ &Z_Construct_UFunction_UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate, "SetOnAudioJackUnpluggedDelegate" }, // 881589381
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapAudioFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MagicLeap" },
		{ "IncludePath", "MagicLeapAudioFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MagicLeapAudioFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapAudioFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapAudioFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapAudioFunctionLibrary_Statics::ClassParams = {
		&UMagicLeapAudioFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapAudioFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapAudioFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapAudioFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapAudioFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapAudioFunctionLibrary, 2824743356);
	template<> MAGICLEAPAUDIO_API UClass* StaticClass<UMagicLeapAudioFunctionLibrary>()
	{
		return UMagicLeapAudioFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapAudioFunctionLibrary(Z_Construct_UClass_UMagicLeapAudioFunctionLibrary, &UMagicLeapAudioFunctionLibrary::StaticClass, TEXT("/Script/MagicLeapAudio"), TEXT("UMagicLeapAudioFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapAudioFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

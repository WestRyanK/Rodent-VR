// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapController/Public/MagicLeapControllerFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapControllerFunctionLibrary() {}
// Cross Module References
	MAGICLEAPCONTROLLER_API UClass* Z_Construct_UClass_UMagicLeapControllerFunctionLibrary_NoRegister();
	MAGICLEAPCONTROLLER_API UClass* Z_Construct_UClass_UMagicLeapControllerFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MagicLeapController();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerTrackingMode();
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerType();
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerHapticIntensity();
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerHapticPattern();
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDColor();
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDPattern();
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDSpeed();
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDEffect();
// End Cross Module References
	DEFINE_FUNCTION(UMagicLeapControllerFunctionLibrary::execPlayControllerHapticFeedback)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_ENUM(EMagicLeapControllerHapticPattern,Z_Param_HapticPattern);
		P_GET_ENUM(EMagicLeapControllerHapticIntensity,Z_Param_Intensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapControllerFunctionLibrary::PlayControllerHapticFeedback(EControllerHand(Z_Param_Hand),EMagicLeapControllerHapticPattern(Z_Param_HapticPattern),EMagicLeapControllerHapticIntensity(Z_Param_Intensity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapControllerFunctionLibrary::execPlayControllerLEDEffect)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_ENUM(EMagicLeapControllerLEDEffect,Z_Param_LEDEffect);
		P_GET_ENUM(EMagicLeapControllerLEDSpeed,Z_Param_LEDSpeed);
		P_GET_ENUM(EMagicLeapControllerLEDPattern,Z_Param_LEDPattern);
		P_GET_ENUM(EMagicLeapControllerLEDColor,Z_Param_LEDColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DurationInSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapControllerFunctionLibrary::PlayControllerLEDEffect(EControllerHand(Z_Param_Hand),EMagicLeapControllerLEDEffect(Z_Param_LEDEffect),EMagicLeapControllerLEDSpeed(Z_Param_LEDSpeed),EMagicLeapControllerLEDPattern(Z_Param_LEDPattern),EMagicLeapControllerLEDColor(Z_Param_LEDColor),Z_Param_DurationInSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapControllerFunctionLibrary::execPlayControllerLED)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_ENUM(EMagicLeapControllerLEDPattern,Z_Param_LEDPattern);
		P_GET_ENUM(EMagicLeapControllerLEDColor,Z_Param_LEDColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DurationInSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapControllerFunctionLibrary::PlayControllerLED(EControllerHand(Z_Param_Hand),EMagicLeapControllerLEDPattern(Z_Param_LEDPattern),EMagicLeapControllerLEDColor(Z_Param_LEDColor),Z_Param_DurationInSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapControllerFunctionLibrary::execInvertControllerMapping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UMagicLeapControllerFunctionLibrary::InvertControllerMapping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapControllerFunctionLibrary::execGetMLControllerType)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMagicLeapControllerType*)Z_Param__Result=UMagicLeapControllerFunctionLibrary::GetMLControllerType(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapControllerFunctionLibrary::execGetControllerMapping)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_GET_ENUM_REF(EControllerHand,Z_Param_Out_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapControllerFunctionLibrary::GetControllerMapping(Z_Param_ControllerIndex,(EControllerHand&)(Z_Param_Out_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapControllerFunctionLibrary::execMaxSupportedMagicLeapControllers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMagicLeapControllerFunctionLibrary::MaxSupportedMagicLeapControllers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapControllerFunctionLibrary::execIsMLControllerConnected)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MotionSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapControllerFunctionLibrary::IsMLControllerConnected(Z_Param_MotionSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapControllerFunctionLibrary::execGetControllerType)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MotionSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMagicLeapControllerType*)Z_Param__Result=UMagicLeapControllerFunctionLibrary::GetControllerType(Z_Param_MotionSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapControllerFunctionLibrary::execSetMotionSourceForHand)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_PROPERTY(FNameProperty,Z_Param_MotionSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapControllerFunctionLibrary::SetMotionSourceForHand(EControllerHand(Z_Param_Hand),Z_Param_MotionSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapControllerFunctionLibrary::execGetHandForMotionSource)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MotionSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EControllerHand*)Z_Param__Result=UMagicLeapControllerFunctionLibrary::GetHandForMotionSource(Z_Param_MotionSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapControllerFunctionLibrary::execGetMotionSourceForHand)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UMagicLeapControllerFunctionLibrary::GetMotionSourceForHand(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapControllerFunctionLibrary::execGetControllerTrackingMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMagicLeapControllerTrackingMode*)Z_Param__Result=UMagicLeapControllerFunctionLibrary::GetControllerTrackingMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapControllerFunctionLibrary::execSetControllerTrackingMode)
	{
		P_GET_ENUM(EMagicLeapControllerTrackingMode,Z_Param_TrackingMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapControllerFunctionLibrary::SetControllerTrackingMode(EMagicLeapControllerTrackingMode(Z_Param_TrackingMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapControllerFunctionLibrary::execPlayHapticPattern)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MotionSource);
		P_GET_ENUM(EMagicLeapControllerHapticPattern,Z_Param_HapticPattern);
		P_GET_ENUM(EMagicLeapControllerHapticIntensity,Z_Param_Intensity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapControllerFunctionLibrary::PlayHapticPattern(Z_Param_MotionSource,EMagicLeapControllerHapticPattern(Z_Param_HapticPattern),EMagicLeapControllerHapticIntensity(Z_Param_Intensity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapControllerFunctionLibrary::execPlayLEDEffect)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MotionSource);
		P_GET_ENUM(EMagicLeapControllerLEDEffect,Z_Param_LEDEffect);
		P_GET_ENUM(EMagicLeapControllerLEDSpeed,Z_Param_LEDSpeed);
		P_GET_ENUM(EMagicLeapControllerLEDPattern,Z_Param_LEDPattern);
		P_GET_ENUM(EMagicLeapControllerLEDColor,Z_Param_LEDColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DurationInSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapControllerFunctionLibrary::PlayLEDEffect(Z_Param_MotionSource,EMagicLeapControllerLEDEffect(Z_Param_LEDEffect),EMagicLeapControllerLEDSpeed(Z_Param_LEDSpeed),EMagicLeapControllerLEDPattern(Z_Param_LEDPattern),EMagicLeapControllerLEDColor(Z_Param_LEDColor),Z_Param_DurationInSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapControllerFunctionLibrary::execPlayLEDPattern)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MotionSource);
		P_GET_ENUM(EMagicLeapControllerLEDPattern,Z_Param_LEDPattern);
		P_GET_ENUM(EMagicLeapControllerLEDColor,Z_Param_LEDColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DurationInSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapControllerFunctionLibrary::PlayLEDPattern(Z_Param_MotionSource,EMagicLeapControllerLEDPattern(Z_Param_LEDPattern),EMagicLeapControllerLEDColor(Z_Param_LEDColor),Z_Param_DurationInSec);
		P_NATIVE_END;
	}
	void UMagicLeapControllerFunctionLibrary::StaticRegisterNativesUMagicLeapControllerFunctionLibrary()
	{
		UClass* Class = UMagicLeapControllerFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetControllerMapping", &UMagicLeapControllerFunctionLibrary::execGetControllerMapping },
			{ "GetControllerTrackingMode", &UMagicLeapControllerFunctionLibrary::execGetControllerTrackingMode },
			{ "GetControllerType", &UMagicLeapControllerFunctionLibrary::execGetControllerType },
			{ "GetHandForMotionSource", &UMagicLeapControllerFunctionLibrary::execGetHandForMotionSource },
			{ "GetMLControllerType", &UMagicLeapControllerFunctionLibrary::execGetMLControllerType },
			{ "GetMotionSourceForHand", &UMagicLeapControllerFunctionLibrary::execGetMotionSourceForHand },
			{ "InvertControllerMapping", &UMagicLeapControllerFunctionLibrary::execInvertControllerMapping },
			{ "IsMLControllerConnected", &UMagicLeapControllerFunctionLibrary::execIsMLControllerConnected },
			{ "MaxSupportedMagicLeapControllers", &UMagicLeapControllerFunctionLibrary::execMaxSupportedMagicLeapControllers },
			{ "PlayControllerHapticFeedback", &UMagicLeapControllerFunctionLibrary::execPlayControllerHapticFeedback },
			{ "PlayControllerLED", &UMagicLeapControllerFunctionLibrary::execPlayControllerLED },
			{ "PlayControllerLEDEffect", &UMagicLeapControllerFunctionLibrary::execPlayControllerLEDEffect },
			{ "PlayHapticPattern", &UMagicLeapControllerFunctionLibrary::execPlayHapticPattern },
			{ "PlayLEDEffect", &UMagicLeapControllerFunctionLibrary::execPlayLEDEffect },
			{ "PlayLEDPattern", &UMagicLeapControllerFunctionLibrary::execPlayLEDPattern },
			{ "SetControllerTrackingMode", &UMagicLeapControllerFunctionLibrary::execSetControllerTrackingMode },
			{ "SetMotionSourceForHand", &UMagicLeapControllerFunctionLibrary::execSetMotionSourceForHand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics
	{
		struct MagicLeapControllerFunctionLibrary_eventGetControllerMapping_Parms
		{
			int32 ControllerIndex;
			EControllerHand Hand;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapControllerFunctionLibrary_eventGetControllerMapping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapControllerFunctionLibrary_eventGetControllerMapping_Parms), &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventGetControllerMapping_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventGetControllerMapping_Parms, ControllerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::NewProp_ControllerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController|MagicLeap" },
		{ "Comment", "/**\n\x09  Returns the hand to which given controller index has been mapped to in the device backend.\n\n\x09  The native api does not have a concept of left vs right controller. They deal with indices. The first connected\n\x09  controller is index 0 and so on. By default, index 0 is mapped to the right hand in Unreal.\n\x09  You can invert these mappings by calling InvertControllerMapping() function.\n\x09  @param ControllerIndex Zero based controller index to get the hand mapping for. Should be less than MaxSupportedMagicLeapControllers().\n\x09  @param Hand Output parameter which is the hand the given index maps to. Valid only if the function returns true.\n\x09  @return true of the controller index maps to a valid hand, false otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
		{ "ToolTip", "Returns the hand to which given controller index has been mapped to in the device backend.\n\nThe native api does not have a concept of left vs right controller. They deal with indices. The first connected\ncontroller is index 0 and so on. By default, index 0 is mapped to the right hand in Unreal.\nYou can invert these mappings by calling InvertControllerMapping() function.\n@param ControllerIndex Zero based controller index to get the hand mapping for. Should be less than MaxSupportedMagicLeapControllers().\n@param Hand Output parameter which is the hand the given index maps to. Valid only if the function returns true.\n@return true of the controller index maps to a valid hand, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, nullptr, "GetControllerMapping", nullptr, nullptr, sizeof(MagicLeapControllerFunctionLibrary_eventGetControllerMapping_Parms), Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Statics
	{
		struct MagicLeapControllerFunctionLibrary_eventGetControllerTrackingMode_Parms
		{
			EMagicLeapControllerTrackingMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventGetControllerTrackingMode_Parms, ReturnValue), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerTrackingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController|MagicLeap" },
		{ "Comment", "/**\n\x09Get controller tracking mode.\n\x09@return Controller tracking mode.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
		{ "ToolTip", "Get controller tracking mode.\n@return Controller tracking mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, nullptr, "GetControllerTrackingMode", nullptr, nullptr, sizeof(MagicLeapControllerFunctionLibrary_eventGetControllerTrackingMode_Parms), Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerType_Statics
	{
		struct MagicLeapControllerFunctionLibrary_eventGetControllerType_Parms
		{
			FName MotionSource;
			EMagicLeapControllerType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MotionSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventGetControllerType_Parms, ReturnValue), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerType_Statics::NewProp_MotionSource = { "MotionSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventGetControllerType_Parms, MotionSource), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerType_Statics::NewProp_MotionSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerType_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController|MagicLeap" },
		{ "Comment", "/**\n\x09Type of ML device bound to the specified motion source\n\x09@param MotionSource Motion source to query.\n\x09@return Type of ML device which maps to given Unreal controller hand.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
		{ "ToolTip", "Type of ML device bound to the specified motion source\n@param MotionSource Motion source to query.\n@return Type of ML device which maps to given Unreal controller hand." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, nullptr, "GetControllerType", nullptr, nullptr, sizeof(MagicLeapControllerFunctionLibrary_eventGetControllerType_Parms), Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Statics
	{
		struct MagicLeapControllerFunctionLibrary_eventGetHandForMotionSource_Parms
		{
			FName MotionSource;
			EControllerHand ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MotionSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventGetHandForMotionSource_Parms, ReturnValue), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Statics::NewProp_MotionSource = { "MotionSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventGetHandForMotionSource_Parms, MotionSource), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Statics::NewProp_MotionSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController|MagicLeap" },
		{ "Comment", "/**\n\x09Get motion source for hand.\n\x09@return Hand to which motion source is mapped, ControllerHand_Count if not mapped.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
		{ "ToolTip", "Get motion source for hand.\n@return Hand to which motion source is mapped, ControllerHand_Count if not mapped." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, nullptr, "GetHandForMotionSource", nullptr, nullptr, sizeof(MagicLeapControllerFunctionLibrary_eventGetHandForMotionSource_Parms), Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetHandForMotionSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType_Statics
	{
		struct MagicLeapControllerFunctionLibrary_eventGetMLControllerType_Parms
		{
			EControllerHand Hand;
			EMagicLeapControllerType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventGetMLControllerType_Parms, ReturnValue), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventGetMLControllerType_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController|MagicLeap" },
		{ "Comment", "/**\n\x09Type of ML device being tracking the given hand.\n\x09@param Hand Controller hand to query.\n\x09@return Type of ML device which maps to given Unreal controller hand.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
		{ "ToolTip", "Type of ML device being tracking the given hand.\n@param Hand Controller hand to query.\n@return Type of ML device which maps to given Unreal controller hand." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, nullptr, "GetMLControllerType", nullptr, nullptr, sizeof(MagicLeapControllerFunctionLibrary_eventGetMLControllerType_Parms), Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Statics
	{
		struct MagicLeapControllerFunctionLibrary_eventGetMotionSourceForHand_Parms
		{
			EControllerHand Hand;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventGetMotionSourceForHand_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventGetMotionSourceForHand_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController|MagicLeap" },
		{ "Comment", "/**\n\x09Get motion source for hand.\n\x09@return Motion source to which hand is mapped.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
		{ "ToolTip", "Get motion source for hand.\n@return Motion source to which hand is mapped." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, nullptr, "GetMotionSourceForHand", nullptr, nullptr, sizeof(MagicLeapControllerFunctionLibrary_eventGetMotionSourceForHand_Parms), Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_InvertControllerMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_InvertControllerMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController|MagicLeap" },
		{ "Comment", "/**\n\x09  Inverts the controller mapping i.e. keys mapped to left hand controller will now be treated as right hand and vice-versa.\n\x09  @see GetControllerMapping()\n\x09*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetMotionSourceForHand instead" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
		{ "ToolTip", "Inverts the controller mapping i.e. keys mapped to left hand controller will now be treated as right hand and vice-versa.\n@see GetControllerMapping()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_InvertControllerMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, nullptr, "InvertControllerMapping", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_InvertControllerMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_InvertControllerMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_InvertControllerMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_InvertControllerMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Statics
	{
		struct MagicLeapControllerFunctionLibrary_eventIsMLControllerConnected_Parms
		{
			FName MotionSource;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MotionSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapControllerFunctionLibrary_eventIsMLControllerConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapControllerFunctionLibrary_eventIsMLControllerConnected_Parms), &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Statics::NewProp_MotionSource = { "MotionSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventIsMLControllerConnected_Parms, MotionSource), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Statics::NewProp_MotionSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController|MagicLeap" },
		{ "Comment", "/**\n\x09""Checks if the ML controller (MagicLeapControl0, MagicLeapControl1, MagicLeapMobileApp) of the given motion source is currently connected.\n\x09@param MotionSource Motion source to query.\n\x09@return true if the ML controller of the given motion source is connected, false otherwise. Will return false if the motion source is not of an ML controller.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
		{ "ToolTip", "Checks if the ML controller (MagicLeapControl0, MagicLeapControl1, MagicLeapMobileApp) of the given motion source is currently connected.\n@param MotionSource Motion source to query.\n@return true if the ML controller of the given motion source is connected, false otherwise. Will return false if the motion source is not of an ML controller." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, nullptr, "IsMLControllerConnected", nullptr, nullptr, sizeof(MagicLeapControllerFunctionLibrary_eventIsMLControllerConnected_Parms), Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_IsMLControllerConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Statics
	{
		struct MagicLeapControllerFunctionLibrary_eventMaxSupportedMagicLeapControllers_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventMaxSupportedMagicLeapControllers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController|MagicLeap" },
		{ "Comment", "/**\n\x09  Gets the maximum number of Magic Leap controllers supported at a time.\n\x09  @return the maximum number of Magic Leap controllers supported at a time.\n\x09*/" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
		{ "ToolTip", "Gets the maximum number of Magic Leap controllers supported at a time.\n@return the maximum number of Magic Leap controllers supported at a time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, nullptr, "MaxSupportedMagicLeapControllers", nullptr, nullptr, sizeof(MagicLeapControllerFunctionLibrary_eventMaxSupportedMagicLeapControllers_Parms), Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics
	{
		struct MagicLeapControllerFunctionLibrary_eventPlayControllerHapticFeedback_Parms
		{
			EControllerHand Hand;
			EMagicLeapControllerHapticPattern HapticPattern;
			EMagicLeapControllerHapticIntensity Intensity;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Intensity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Intensity_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HapticPattern;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HapticPattern_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapControllerFunctionLibrary_eventPlayControllerHapticFeedback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapControllerFunctionLibrary_eventPlayControllerHapticFeedback_Parms), &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayControllerHapticFeedback_Parms, Intensity), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerHapticIntensity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::NewProp_Intensity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::NewProp_HapticPattern = { "HapticPattern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayControllerHapticFeedback_Parms, HapticPattern), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerHapticPattern, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::NewProp_HapticPattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayControllerHapticFeedback_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::NewProp_Intensity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::NewProp_HapticPattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::NewProp_HapticPattern_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController|MagicLeap" },
		{ "Comment", "/**\n\x09  Play haptic feedback on the controller.\n\x09  @param Hand Controller to play the haptic feedback on.\n\x09  @param HapticPattern Pattern to play on the controller.\n\x09  @param Intensity Intensity to play on the controller.\n\x09  @return True if the command to play the haptic feedback was successfully sent to the controller, false otherwise.\n\x09*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use PlayHapticPattern instead" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
		{ "ToolTip", "Play haptic feedback on the controller.\n@param Hand Controller to play the haptic feedback on.\n@param HapticPattern Pattern to play on the controller.\n@param Intensity Intensity to play on the controller.\n@return True if the command to play the haptic feedback was successfully sent to the controller, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, nullptr, "PlayControllerHapticFeedback", nullptr, nullptr, sizeof(MagicLeapControllerFunctionLibrary_eventPlayControllerHapticFeedback_Parms), Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics
	{
		struct MagicLeapControllerFunctionLibrary_eventPlayControllerLED_Parms
		{
			EControllerHand Hand;
			EMagicLeapControllerLEDPattern LEDPattern;
			EMagicLeapControllerLEDColor LEDColor;
			float DurationInSec;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationInSec;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LEDColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LEDColor_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LEDPattern;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LEDPattern_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapControllerFunctionLibrary_eventPlayControllerLED_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapControllerFunctionLibrary_eventPlayControllerLED_Parms), &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_DurationInSec = { "DurationInSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayControllerLED_Parms, DurationInSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_LEDColor = { "LEDColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayControllerLED_Parms, LEDColor), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_LEDColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_LEDPattern = { "LEDPattern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayControllerLED_Parms, LEDPattern), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDPattern, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_LEDPattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayControllerLED_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_DurationInSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_LEDColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_LEDColor_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_LEDPattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_LEDPattern_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController|MagicLeap" },
		{ "Comment", "/**\n\x09  Light up the LED on the Magic Leap Controller in the given pattern for the specified duration.\n\x09  @param Hand Controller to play the LED pattern on.\n\x09  @param LEDPattern Pattern to play on the controller.\n\x09  @param LEDColor Color of the LED.\n\x09  @param DurationInSec Duration (in seconds) to play the LED pattern.\n\x09  @return True if the command to play the LED pattern was successfully sent to the controller, false otherwise.\n\x09*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use PlayLEDPattern instead" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
		{ "ToolTip", "Light up the LED on the Magic Leap Controller in the given pattern for the specified duration.\n@param Hand Controller to play the LED pattern on.\n@param LEDPattern Pattern to play on the controller.\n@param LEDColor Color of the LED.\n@param DurationInSec Duration (in seconds) to play the LED pattern.\n@return True if the command to play the LED pattern was successfully sent to the controller, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, nullptr, "PlayControllerLED", nullptr, nullptr, sizeof(MagicLeapControllerFunctionLibrary_eventPlayControllerLED_Parms), Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics
	{
		struct MagicLeapControllerFunctionLibrary_eventPlayControllerLEDEffect_Parms
		{
			EControllerHand Hand;
			EMagicLeapControllerLEDEffect LEDEffect;
			EMagicLeapControllerLEDSpeed LEDSpeed;
			EMagicLeapControllerLEDPattern LEDPattern;
			EMagicLeapControllerLEDColor LEDColor;
			float DurationInSec;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationInSec;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LEDColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LEDColor_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LEDPattern;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LEDPattern_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LEDSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LEDSpeed_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LEDEffect;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LEDEffect_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapControllerFunctionLibrary_eventPlayControllerLEDEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapControllerFunctionLibrary_eventPlayControllerLEDEffect_Parms), &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_DurationInSec = { "DurationInSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayControllerLEDEffect_Parms, DurationInSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_LEDColor = { "LEDColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayControllerLEDEffect_Parms, LEDColor), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_LEDColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_LEDPattern = { "LEDPattern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayControllerLEDEffect_Parms, LEDPattern), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDPattern, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_LEDPattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_LEDSpeed = { "LEDSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayControllerLEDEffect_Parms, LEDSpeed), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDSpeed, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_LEDSpeed_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_LEDEffect = { "LEDEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayControllerLEDEffect_Parms, LEDEffect), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_LEDEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayControllerLEDEffect_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_DurationInSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_LEDColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_LEDColor_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_LEDPattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_LEDPattern_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_LEDSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_LEDSpeed_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_LEDEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_LEDEffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController|MagicLeap" },
		{ "Comment", "/**\n\x09  Starts a LED feedback effect using the specified pattern on the specified controller.\n\x09  @param Hand Controller to play the LED pattern on.\n\x09  @param LEDEffect Effect to play on the controller.\n\x09  @param LEDSpeed Effect speed.\n\x09  @param LEDPattern Pattern to play on the controller.\n\x09  @param LEDColor Color of the LED.\n\x09  @param DurationInSec Duration (in seconds) to play the LED pattern.\n\x09  @return True if the command to play the LED effect was successfully sent to the controller, false otherwise.\n\x09*/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use PlayLEDEffect instead" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
		{ "ToolTip", "Starts a LED feedback effect using the specified pattern on the specified controller.\n@param Hand Controller to play the LED pattern on.\n@param LEDEffect Effect to play on the controller.\n@param LEDSpeed Effect speed.\n@param LEDPattern Pattern to play on the controller.\n@param LEDColor Color of the LED.\n@param DurationInSec Duration (in seconds) to play the LED pattern.\n@return True if the command to play the LED effect was successfully sent to the controller, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, nullptr, "PlayControllerLEDEffect", nullptr, nullptr, sizeof(MagicLeapControllerFunctionLibrary_eventPlayControllerLEDEffect_Parms), Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics
	{
		struct MagicLeapControllerFunctionLibrary_eventPlayHapticPattern_Parms
		{
			FName MotionSource;
			EMagicLeapControllerHapticPattern HapticPattern;
			EMagicLeapControllerHapticIntensity Intensity;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Intensity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Intensity_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HapticPattern;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HapticPattern_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MotionSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapControllerFunctionLibrary_eventPlayHapticPattern_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapControllerFunctionLibrary_eventPlayHapticPattern_Parms), &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayHapticPattern_Parms, Intensity), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerHapticIntensity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::NewProp_Intensity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::NewProp_HapticPattern = { "HapticPattern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayHapticPattern_Parms, HapticPattern), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerHapticPattern, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::NewProp_HapticPattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::NewProp_MotionSource = { "MotionSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayHapticPattern_Parms, MotionSource), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::NewProp_Intensity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::NewProp_HapticPattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::NewProp_HapticPattern_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::NewProp_MotionSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController|MagicLeap" },
		{ "Comment", "/**\n\x09Play haptic feedback on the controller.\n\x09@param MotionSource Controller to play the haptic feedback on.\n\x09@param HapticPattern Pattern to play on the controller.\n\x09@param Intensity Intensity to play on the controller.\n\x09@return True if the command to play the haptic feedback was successfully sent to the controller, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
		{ "ToolTip", "Play haptic feedback on the controller.\n@param MotionSource Controller to play the haptic feedback on.\n@param HapticPattern Pattern to play on the controller.\n@param Intensity Intensity to play on the controller.\n@return True if the command to play the haptic feedback was successfully sent to the controller, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, nullptr, "PlayHapticPattern", nullptr, nullptr, sizeof(MagicLeapControllerFunctionLibrary_eventPlayHapticPattern_Parms), Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics
	{
		struct MagicLeapControllerFunctionLibrary_eventPlayLEDEffect_Parms
		{
			FName MotionSource;
			EMagicLeapControllerLEDEffect LEDEffect;
			EMagicLeapControllerLEDSpeed LEDSpeed;
			EMagicLeapControllerLEDPattern LEDPattern;
			EMagicLeapControllerLEDColor LEDColor;
			float DurationInSec;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationInSec;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LEDColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LEDColor_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LEDPattern;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LEDPattern_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LEDSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LEDSpeed_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LEDEffect;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LEDEffect_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MotionSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapControllerFunctionLibrary_eventPlayLEDEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapControllerFunctionLibrary_eventPlayLEDEffect_Parms), &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_DurationInSec = { "DurationInSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayLEDEffect_Parms, DurationInSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_LEDColor = { "LEDColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayLEDEffect_Parms, LEDColor), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_LEDColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_LEDPattern = { "LEDPattern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayLEDEffect_Parms, LEDPattern), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDPattern, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_LEDPattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_LEDSpeed = { "LEDSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayLEDEffect_Parms, LEDSpeed), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDSpeed, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_LEDSpeed_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_LEDEffect = { "LEDEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayLEDEffect_Parms, LEDEffect), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_LEDEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_MotionSource = { "MotionSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayLEDEffect_Parms, MotionSource), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_DurationInSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_LEDColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_LEDColor_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_LEDPattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_LEDPattern_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_LEDSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_LEDSpeed_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_LEDEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_LEDEffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::NewProp_MotionSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController|MagicLeap" },
		{ "Comment", "/**\n\x09Starts a LED feedback effect using the specified pattern on the specified controller.\n\x09@param MotionSource Controller to play the LED pattern on.\n\x09@param LEDEffect Effect to play on the controller.\n\x09@param LEDSpeed Effect speed.\n\x09@param LEDPattern Pattern to play on the controller.\n\x09@param LEDColor Color of the LED.\n\x09@param DurationInSec Duration (in seconds) to play the LED pattern.\n\x09@return True if the command to play the LED effect was successfully sent to the controller, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
		{ "ToolTip", "Starts a LED feedback effect using the specified pattern on the specified controller.\n@param MotionSource Controller to play the LED pattern on.\n@param LEDEffect Effect to play on the controller.\n@param LEDSpeed Effect speed.\n@param LEDPattern Pattern to play on the controller.\n@param LEDColor Color of the LED.\n@param DurationInSec Duration (in seconds) to play the LED pattern.\n@return True if the command to play the LED effect was successfully sent to the controller, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, nullptr, "PlayLEDEffect", nullptr, nullptr, sizeof(MagicLeapControllerFunctionLibrary_eventPlayLEDEffect_Parms), Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics
	{
		struct MagicLeapControllerFunctionLibrary_eventPlayLEDPattern_Parms
		{
			FName MotionSource;
			EMagicLeapControllerLEDPattern LEDPattern;
			EMagicLeapControllerLEDColor LEDColor;
			float DurationInSec;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationInSec;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LEDColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LEDColor_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LEDPattern;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LEDPattern_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MotionSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapControllerFunctionLibrary_eventPlayLEDPattern_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapControllerFunctionLibrary_eventPlayLEDPattern_Parms), &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::NewProp_DurationInSec = { "DurationInSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayLEDPattern_Parms, DurationInSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::NewProp_LEDColor = { "LEDColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayLEDPattern_Parms, LEDColor), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::NewProp_LEDColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::NewProp_LEDPattern = { "LEDPattern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayLEDPattern_Parms, LEDPattern), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerLEDPattern, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::NewProp_LEDPattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::NewProp_MotionSource = { "MotionSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventPlayLEDPattern_Parms, MotionSource), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::NewProp_DurationInSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::NewProp_LEDColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::NewProp_LEDColor_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::NewProp_LEDPattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::NewProp_LEDPattern_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::NewProp_MotionSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController|MagicLeap" },
		{ "Comment", "/**\n\x09Light up the LED on the Magic Leap Controller in the given pattern for the specified duration.\n\x09@param MotionSource Controller to play the LED pattern on.\n\x09@param LEDPattern Pattern to play on the controller.\n\x09@param LEDColor Color of the LED.\n\x09@param DurationInSec Duration (in seconds) to play the LED pattern.\n\x09@return True if the command to play the LED pattern was successfully sent to the controller, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
		{ "ToolTip", "Light up the LED on the Magic Leap Controller in the given pattern for the specified duration.\n@param MotionSource Controller to play the LED pattern on.\n@param LEDPattern Pattern to play on the controller.\n@param LEDColor Color of the LED.\n@param DurationInSec Duration (in seconds) to play the LED pattern.\n@return True if the command to play the LED pattern was successfully sent to the controller, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, nullptr, "PlayLEDPattern", nullptr, nullptr, sizeof(MagicLeapControllerFunctionLibrary_eventPlayLEDPattern_Parms), Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Statics
	{
		struct MagicLeapControllerFunctionLibrary_eventSetControllerTrackingMode_Parms
		{
			EMagicLeapControllerTrackingMode TrackingMode;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackingMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapControllerFunctionLibrary_eventSetControllerTrackingMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapControllerFunctionLibrary_eventSetControllerTrackingMode_Parms), &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Statics::NewProp_TrackingMode = { "TrackingMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventSetControllerTrackingMode_Parms, TrackingMode), Z_Construct_UEnum_MagicLeapController_EMagicLeapControllerTrackingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Statics::NewProp_TrackingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Statics::NewProp_TrackingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Statics::NewProp_TrackingMode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController|MagicLeap" },
		{ "Comment", "/**\n\x09Set controller tracking mode.\n\x09@param TrackingMode Controller tracking mode. Note that this is global (it affects all control devices).\n\x09@return True if the command to set the tracking mode was successfully sent to the controller, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
		{ "ToolTip", "Set controller tracking mode.\n@param TrackingMode Controller tracking mode. Note that this is global (it affects all control devices).\n@return True if the command to set the tracking mode was successfully sent to the controller, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, nullptr, "SetControllerTrackingMode", nullptr, nullptr, sizeof(MagicLeapControllerFunctionLibrary_eventSetControllerTrackingMode_Parms), Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics
	{
		struct MagicLeapControllerFunctionLibrary_eventSetMotionSourceForHand_Parms
		{
			EControllerHand Hand;
			FName MotionSource;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MotionSource;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapControllerFunctionLibrary_eventSetMotionSourceForHand_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapControllerFunctionLibrary_eventSetMotionSourceForHand_Parms), &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::NewProp_MotionSource = { "MotionSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventSetMotionSourceForHand_Parms, MotionSource), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapControllerFunctionLibrary_eventSetMotionSourceForHand_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::NewProp_MotionSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController|MagicLeap" },
		{ "Comment", "/**\n\x09Set motion source for hand.\n\x09@return True if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
		{ "ToolTip", "Set motion source for hand.\n@return True if successful, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, nullptr, "SetMotionSourceForHand", nullptr, nullptr, sizeof(MagicLeapControllerFunctionLibrary_eventSetMotionSourceForHand_Parms), Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapControllerFunctionLibrary_NoRegister()
	{
		return UMagicLeapControllerFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapControllerFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapControllerFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapControllerFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerMapping, "GetControllerMapping" }, // 1240653547
		{ &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode, "GetControllerTrackingMode" }, // 2993896628
		{ &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetControllerType, "GetControllerType" }, // 3922817799
		{ &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetHandForMotionSource, "GetHandForMotionSource" }, // 612718186
		{ &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMLControllerType, "GetMLControllerType" }, // 1939490649
		{ &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand, "GetMotionSourceForHand" }, // 1568172733
		{ &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_InvertControllerMapping, "InvertControllerMapping" }, // 1633329434
		{ &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_IsMLControllerConnected, "IsMLControllerConnected" }, // 2410787072
		{ &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers, "MaxSupportedMagicLeapControllers" }, // 528850236
		{ &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback, "PlayControllerHapticFeedback" }, // 2712854561
		{ &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLED, "PlayControllerLED" }, // 2035541073
		{ &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect, "PlayControllerLEDEffect" }, // 2072006164
		{ &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayHapticPattern, "PlayHapticPattern" }, // 1211317720
		{ &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDEffect, "PlayLEDEffect" }, // 4100208505
		{ &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_PlayLEDPattern, "PlayLEDPattern" }, // 305053872
		{ &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode, "SetControllerTrackingMode" }, // 46588890
		{ &Z_Construct_UFunction_UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand, "SetMotionSourceForHand" }, // 2504351624
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapControllerFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MagicLeap" },
		{ "IncludePath", "MagicLeapControllerFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MagicLeapControllerFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapControllerFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapControllerFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapControllerFunctionLibrary_Statics::ClassParams = {
		&UMagicLeapControllerFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapControllerFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapControllerFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapControllerFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapControllerFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapControllerFunctionLibrary, 3958894283);
	template<> MAGICLEAPCONTROLLER_API UClass* StaticClass<UMagicLeapControllerFunctionLibrary>()
	{
		return UMagicLeapControllerFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapControllerFunctionLibrary(Z_Construct_UClass_UMagicLeapControllerFunctionLibrary, &UMagicLeapControllerFunctionLibrary::StaticClass, TEXT("/Script/MagicLeapController"), TEXT("UMagicLeapControllerFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapControllerFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

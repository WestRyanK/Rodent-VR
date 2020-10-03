// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapHandTracking/Public/MagicLeapHandTrackingFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapHandTrackingFunctionLibrary() {}
// Cross Module References
	MAGICLEAPHANDTRACKING_API UClass* Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary_NoRegister();
	MAGICLEAPHANDTRACKING_API UClass* Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MagicLeapHandTracking();
	MAGICLEAPHANDTRACKING_API UEnum* Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel();
	MAGICLEAPHANDTRACKING_API UEnum* Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel();
	MAGICLEAPHANDTRACKING_API UEnum* Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGesture();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MAGICLEAPHANDTRACKING_API UEnum* Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapGestureTransformSpace();
	MAGICLEAPHANDTRACKING_API UEnum* Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceHandle();
// End Cross Module References
	DEFINE_FUNCTION(UMagicLeapHandTrackingFunctionLibrary::execGetHandKeypointForMotionSource)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MotionSource);
		P_GET_ENUM_REF(EMagicLeapHandTrackingKeypoint,Z_Param_Out_OutKeyPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandTrackingFunctionLibrary::GetHandKeypointForMotionSource(Z_Param_MotionSource,(EMagicLeapHandTrackingKeypoint&)(Z_Param_Out_OutKeyPoint));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandTrackingFunctionLibrary::execGetMotionSourceForHandKeypoint)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_ENUM(EMagicLeapHandTrackingKeypoint,Z_Param_Keypoint);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OutMotionSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandTrackingFunctionLibrary::GetMotionSourceForHandKeypoint(EControllerHand(Z_Param_Hand),EMagicLeapHandTrackingKeypoint(Z_Param_Keypoint),Z_Param_Out_OutMotionSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandTrackingFunctionLibrary::execGetMagicLeapHandTrackingLiveLinkSource)
	{
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandTrackingFunctionLibrary::GetMagicLeapHandTrackingLiveLinkSource(Z_Param_Out_SourceHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandTrackingFunctionLibrary::execIsHoldingControl)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandTrackingFunctionLibrary::IsHoldingControl(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandTrackingFunctionLibrary::execGetCurrentGesture)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_ENUM_REF(EMagicLeapHandTrackingGesture,Z_Param_Out_Gesture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandTrackingFunctionLibrary::GetCurrentGesture(EControllerHand(Z_Param_Hand),(EMagicLeapHandTrackingGesture&)(Z_Param_Out_Gesture));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandTrackingFunctionLibrary::execGetCurrentGestureConfidence)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Confidence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandTrackingFunctionLibrary::GetCurrentGestureConfidence(EControllerHand(Z_Param_Hand),Z_Param_Out_Confidence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandTrackingFunctionLibrary::execGetStaticGestureConfidenceThreshold)
	{
		P_GET_ENUM(EMagicLeapHandTrackingGesture,Z_Param_Gesture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMagicLeapHandTrackingFunctionLibrary::GetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture(Z_Param_Gesture));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandTrackingFunctionLibrary::execSetStaticGestureConfidenceThreshold)
	{
		P_GET_ENUM(EMagicLeapHandTrackingGesture,Z_Param_Gesture);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Confidence);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMagicLeapHandTrackingFunctionLibrary::SetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture(Z_Param_Gesture),Z_Param_Confidence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandTrackingFunctionLibrary::execGetConfiguration)
	{
		P_GET_TARRAY_REF(EMagicLeapHandTrackingGesture,Z_Param_Out_ActiveStaticGestures);
		P_GET_ENUM_REF(EMagicLeapHandTrackingKeypointFilterLevel,Z_Param_Out_KeypointsFilterLevel);
		P_GET_ENUM_REF(EMagicLeapHandTrackingGestureFilterLevel,Z_Param_Out_GestureFilterLevel);
		P_GET_UBOOL_REF(Z_Param_Out_bTrackingEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandTrackingFunctionLibrary::GetConfiguration(Z_Param_Out_ActiveStaticGestures,(EMagicLeapHandTrackingKeypointFilterLevel&)(Z_Param_Out_KeypointsFilterLevel),(EMagicLeapHandTrackingGestureFilterLevel&)(Z_Param_Out_GestureFilterLevel),Z_Param_Out_bTrackingEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandTrackingFunctionLibrary::execSetConfiguration)
	{
		P_GET_TARRAY_REF(EMagicLeapHandTrackingGesture,Z_Param_Out_StaticGesturesToActivate);
		P_GET_ENUM(EMagicLeapHandTrackingKeypointFilterLevel,Z_Param_KeypointsFilterLevel);
		P_GET_ENUM(EMagicLeapHandTrackingGestureFilterLevel,Z_Param_GestureFilterLevel);
		P_GET_UBOOL(Z_Param_bTrackingEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandTrackingFunctionLibrary::SetConfiguration(Z_Param_Out_StaticGesturesToActivate,EMagicLeapHandTrackingKeypointFilterLevel(Z_Param_KeypointsFilterLevel),EMagicLeapHandTrackingGestureFilterLevel(Z_Param_GestureFilterLevel),Z_Param_bTrackingEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandTrackingFunctionLibrary::execGetGestureKeypointTransform)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_ENUM(EMagicLeapHandTrackingKeypoint,Z_Param_Keypoint);
		P_GET_ENUM(EMagicLeapGestureTransformSpace,Z_Param_TransformSpace);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandTrackingFunctionLibrary::GetGestureKeypointTransform(EControllerHand(Z_Param_Hand),EMagicLeapHandTrackingKeypoint(Z_Param_Keypoint),EMagicLeapGestureTransformSpace(Z_Param_TransformSpace),Z_Param_Out_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandTrackingFunctionLibrary::execGetGestureKeypoints)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Keypoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandTrackingFunctionLibrary::GetGestureKeypoints(EControllerHand(Z_Param_Hand),Z_Param_Out_Keypoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandTrackingFunctionLibrary::execGetHandCenterNormalized)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HandCenterNormalized);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandTrackingFunctionLibrary::GetHandCenterNormalized(EControllerHand(Z_Param_Hand),Z_Param_Out_HandCenterNormalized);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandTrackingFunctionLibrary::execGetHandThumbTip)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_ENUM(EMagicLeapGestureTransformSpace,Z_Param_TransformSpace);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Secondary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandTrackingFunctionLibrary::GetHandThumbTip(EControllerHand(Z_Param_Hand),EMagicLeapGestureTransformSpace(Z_Param_TransformSpace),Z_Param_Out_Secondary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandTrackingFunctionLibrary::execGetHandIndexFingerTip)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_ENUM(EMagicLeapGestureTransformSpace,Z_Param_TransformSpace);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandTrackingFunctionLibrary::GetHandIndexFingerTip(EControllerHand(Z_Param_Hand),EMagicLeapGestureTransformSpace(Z_Param_TransformSpace),Z_Param_Out_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandTrackingFunctionLibrary::execGetHandCenter)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_HandCenter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandTrackingFunctionLibrary::GetHandCenter(EControllerHand(Z_Param_Hand),Z_Param_Out_HandCenter);
		P_NATIVE_END;
	}
	void UMagicLeapHandTrackingFunctionLibrary::StaticRegisterNativesUMagicLeapHandTrackingFunctionLibrary()
	{
		UClass* Class = UMagicLeapHandTrackingFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConfiguration", &UMagicLeapHandTrackingFunctionLibrary::execGetConfiguration },
			{ "GetCurrentGesture", &UMagicLeapHandTrackingFunctionLibrary::execGetCurrentGesture },
			{ "GetCurrentGestureConfidence", &UMagicLeapHandTrackingFunctionLibrary::execGetCurrentGestureConfidence },
			{ "GetGestureKeypoints", &UMagicLeapHandTrackingFunctionLibrary::execGetGestureKeypoints },
			{ "GetGestureKeypointTransform", &UMagicLeapHandTrackingFunctionLibrary::execGetGestureKeypointTransform },
			{ "GetHandCenter", &UMagicLeapHandTrackingFunctionLibrary::execGetHandCenter },
			{ "GetHandCenterNormalized", &UMagicLeapHandTrackingFunctionLibrary::execGetHandCenterNormalized },
			{ "GetHandIndexFingerTip", &UMagicLeapHandTrackingFunctionLibrary::execGetHandIndexFingerTip },
			{ "GetHandKeypointForMotionSource", &UMagicLeapHandTrackingFunctionLibrary::execGetHandKeypointForMotionSource },
			{ "GetHandThumbTip", &UMagicLeapHandTrackingFunctionLibrary::execGetHandThumbTip },
			{ "GetMagicLeapHandTrackingLiveLinkSource", &UMagicLeapHandTrackingFunctionLibrary::execGetMagicLeapHandTrackingLiveLinkSource },
			{ "GetMotionSourceForHandKeypoint", &UMagicLeapHandTrackingFunctionLibrary::execGetMotionSourceForHandKeypoint },
			{ "GetStaticGestureConfidenceThreshold", &UMagicLeapHandTrackingFunctionLibrary::execGetStaticGestureConfidenceThreshold },
			{ "IsHoldingControl", &UMagicLeapHandTrackingFunctionLibrary::execIsHoldingControl },
			{ "SetConfiguration", &UMagicLeapHandTrackingFunctionLibrary::execSetConfiguration },
			{ "SetStaticGestureConfidenceThreshold", &UMagicLeapHandTrackingFunctionLibrary::execSetStaticGestureConfidenceThreshold },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics
	{
		struct MagicLeapHandTrackingFunctionLibrary_eventGetConfiguration_Parms
		{
			TArray<EMagicLeapHandTrackingGesture> ActiveStaticGestures;
			EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel;
			EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel;
			bool bTrackingEnabled;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bTrackingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTrackingEnabled;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GestureFilterLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GestureFilterLevel_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_KeypointsFilterLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeypointsFilterLevel_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveStaticGestures;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActiveStaticGestures_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActiveStaticGestures_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandTrackingFunctionLibrary_eventGetConfiguration_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetConfiguration_Parms), &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_bTrackingEnabled_SetBit(void* Obj)
	{
		((MagicLeapHandTrackingFunctionLibrary_eventGetConfiguration_Parms*)Obj)->bTrackingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_bTrackingEnabled = { "bTrackingEnabled", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetConfiguration_Parms), &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_bTrackingEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_GestureFilterLevel = { "GestureFilterLevel", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetConfiguration_Parms, GestureFilterLevel), Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_GestureFilterLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_KeypointsFilterLevel = { "KeypointsFilterLevel", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetConfiguration_Parms, KeypointsFilterLevel), Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_KeypointsFilterLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_ActiveStaticGestures = { "ActiveStaticGestures", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetConfiguration_Parms, ActiveStaticGestures), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_ActiveStaticGestures_Inner = { "ActiveStaticGestures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGesture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_ActiveStaticGestures_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_bTrackingEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_GestureFilterLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_GestureFilterLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_KeypointsFilterLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_KeypointsFilterLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_ActiveStaticGestures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_ActiveStaticGestures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::NewProp_ActiveStaticGestures_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|MagicLeap" },
		{ "Comment", "/**\n\x09  Gets the list of static and dynamic gestures currently set to be identified by the gesture recognition system.\n\n\x09  @param StaticHandTrackingToActivate Output parameter to list the static gestures that can be detected by the system.\n\x09  @param KeypointsFilterLevel Filtering for the keypoints and hand centers.\n\x09  @param GestureFilterLevel Filtering for the static gesture recognition.\n\x09  @param HandSwitchingFilterLevel Filtering for if the left or right hand is present.\n\x09  @return true if the output params were populated with a valid value, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Gets the list of static and dynamic gestures currently set to be identified by the gesture recognition system.\n\n@param StaticHandTrackingToActivate Output parameter to list the static gestures that can be detected by the system.\n@param KeypointsFilterLevel Filtering for the keypoints and hand centers.\n@param GestureFilterLevel Filtering for the static gesture recognition.\n@param HandSwitchingFilterLevel Filtering for if the left or right hand is present.\n@return true if the output params were populated with a valid value, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary, nullptr, "GetConfiguration", nullptr, nullptr, sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetConfiguration_Parms), Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics
	{
		struct MagicLeapHandTrackingFunctionLibrary_eventGetCurrentGesture_Parms
		{
			EControllerHand Hand;
			EMagicLeapHandTrackingGesture Gesture;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gesture;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gesture_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandTrackingFunctionLibrary_eventGetCurrentGesture_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetCurrentGesture_Parms), &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::NewProp_Gesture = { "Gesture", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetCurrentGesture_Parms, Gesture), Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGesture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::NewProp_Gesture_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetCurrentGesture_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::NewProp_Gesture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::NewProp_Gesture_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|MagicLeap" },
		{ "Comment", "/**\n\x09  The current gesture being performed by the given hand.\n\n\x09  @param Hand Hand to query the gesture for. Only Left and Right hand are supported.\n\x09  @param Gesture Output parameter containing the given hand's gesture, or NoHand if there isn't one or the system isnt working now.\n\x09  @return true if the output param was populated with a valid value, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "The current gesture being performed by the given hand.\n\n@param Hand Hand to query the gesture for. Only Left and Right hand are supported.\n@param Gesture Output parameter containing the given hand's gesture, or NoHand if there isn't one or the system isnt working now.\n@return true if the output param was populated with a valid value, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary, nullptr, "GetCurrentGesture", nullptr, nullptr, sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetCurrentGesture_Parms), Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics
	{
		struct MagicLeapHandTrackingFunctionLibrary_eventGetCurrentGestureConfidence_Parms
		{
			EControllerHand Hand;
			float Confidence;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Confidence;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandTrackingFunctionLibrary_eventGetCurrentGestureConfidence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetCurrentGestureConfidence_Parms), &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetCurrentGestureConfidence_Parms, Confidence), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetCurrentGestureConfidence_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::NewProp_Confidence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|MagicLeap" },
		{ "Comment", "/**\n\x09  The confidence level of the current gesture being performed by the given hand.\n\x09  Value is between [0, 1], 0 is low, 1 is high degree of confidence. For a NoHand, the confidence is always set to 1.\n\n\x09  @param Hand Hand to query the gesture confidence value for. Only Left and Right hand are supported.\n\x09  @param Confidence Output parameter containing the confidence value for the given hand's gesture.\n\x09  @return true if the output param was populated with a valid value, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "The confidence level of the current gesture being performed by the given hand.\nValue is between [0, 1], 0 is low, 1 is high degree of confidence. For a NoHand, the confidence is always set to 1.\n\n@param Hand Hand to query the gesture confidence value for. Only Left and Right hand are supported.\n@param Confidence Output parameter containing the confidence value for the given hand's gesture.\n@return true if the output param was populated with a valid value, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary, nullptr, "GetCurrentGestureConfidence", nullptr, nullptr, sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetCurrentGestureConfidence_Parms), Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics
	{
		struct MagicLeapHandTrackingFunctionLibrary_eventGetGestureKeypoints_Parms
		{
			EControllerHand Hand;
			TArray<FTransform> Keypoints;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keypoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Keypoints_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandTrackingFunctionLibrary_eventGetGestureKeypoints_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetGestureKeypoints_Parms), &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::NewProp_Keypoints = { "Keypoints", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetGestureKeypoints_Parms, Keypoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::NewProp_Keypoints_Inner = { "Keypoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetGestureKeypoints_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::NewProp_Keypoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::NewProp_Keypoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|MagicLeap" },
		{ "Comment", "/**\n\x09  List of keypoints detected on the given hand.\n\n\x09  Note that this returns a transform in the Tracking space. To get the transform in Unreal's\n\x09  world space, use the MotioController component as a child of the XRPawn with hand set to the following.\n\x09  Special_3 - Left Index Finger Tip\n\x09  Special_5 - Left Thumb Tip\n\x09  Special_4 - Right Index Finger Tip\n\x09  Special_6 - Right Thumb Tip\n\n\x09  @param Hand Hand to query the keypoints for. Only Left and Right hand are supported.\n\x09  @param Keypoints Output parameter containing transforms of the keypoints detected on the given hand.\n\x09  @return true if the output param was populated with a valid value, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "List of keypoints detected on the given hand.\n\nNote that this returns a transform in the Tracking space. To get the transform in Unreal's\nworld space, use the MotioController component as a child of the XRPawn with hand set to the following.\nSpecial_3 - Left Index Finger Tip\nSpecial_5 - Left Thumb Tip\nSpecial_4 - Right Index Finger Tip\nSpecial_6 - Right Thumb Tip\n\n@param Hand Hand to query the keypoints for. Only Left and Right hand are supported.\n@param Keypoints Output parameter containing transforms of the keypoints detected on the given hand.\n@return true if the output param was populated with a valid value, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary, nullptr, "GetGestureKeypoints", nullptr, nullptr, sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetGestureKeypoints_Parms), Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics
	{
		struct MagicLeapHandTrackingFunctionLibrary_eventGetGestureKeypointTransform_Parms
		{
			EControllerHand Hand;
			EMagicLeapHandTrackingKeypoint Keypoint;
			EMagicLeapGestureTransformSpace TransformSpace;
			FTransform Transform;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransformSpace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformSpace_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Keypoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Keypoint_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandTrackingFunctionLibrary_eventGetGestureKeypointTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetGestureKeypointTransform_Parms), &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetGestureKeypointTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_TransformSpace = { "TransformSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetGestureKeypointTransform_Parms, TransformSpace), Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapGestureTransformSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_TransformSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_Keypoint = { "Keypoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetGestureKeypointTransform_Parms, Keypoint), Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_Keypoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetGestureKeypointTransform_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_TransformSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_TransformSpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_Keypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_Keypoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|MagicLeap" },
		{ "Comment", "/**\n\x09Get Transform for a point on the hand.\n\n\x09@param Hand\n\x09@param Keypoint the specific joint or wrist point to fetch.\n\x09@param Transform Output parameter to write the data to.\n\x09@param TransformSpace Get the transform relative to the world, hand center, or tracking space.\n\x09@return true if the output param was populated with a valid value, false means that is is either unchanged or populated with a stale value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Get Transform for a point on the hand.\n\n@param Hand\n@param Keypoint the specific joint or wrist point to fetch.\n@param Transform Output parameter to write the data to.\n@param TransformSpace Get the transform relative to the world, hand center, or tracking space.\n@return true if the output param was populated with a valid value, false means that is is either unchanged or populated with a stale value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary, nullptr, "GetGestureKeypointTransform", nullptr, nullptr, sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetGestureKeypointTransform_Parms), Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics
	{
		struct MagicLeapHandTrackingFunctionLibrary_eventGetHandCenter_Parms
		{
			EControllerHand Hand;
			FTransform HandCenter;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandCenter;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandTrackingFunctionLibrary_eventGetHandCenter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetHandCenter_Parms), &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::NewProp_HandCenter = { "HandCenter", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetHandCenter_Parms, HandCenter), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetHandCenter_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::NewProp_HandCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|MagicLeap" },
		{ "Comment", "/**\n\x09  Transform of the center of the hand.  Approximately the center of the palm.\n\n\x09  Note that this returns a transform in world space.\n\n\x09  @param Hand Hand to query the hand center transform for. Only Left and Right hand are supported.\n\x09  @param HandCenter Output parameter containing the position and orientation of the given hand.\n\x09  @return true if the output param was populated with a valid value, false means that is is either unchanged or populated with a stale value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Transform of the center of the hand.  Approximately the center of the palm.\n\nNote that this returns a transform in world space.\n\n@param Hand Hand to query the hand center transform for. Only Left and Right hand are supported.\n@param HandCenter Output parameter containing the position and orientation of the given hand.\n@return true if the output param was populated with a valid value, false means that is is either unchanged or populated with a stale value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary, nullptr, "GetHandCenter", nullptr, nullptr, sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetHandCenter_Parms), Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics
	{
		struct MagicLeapHandTrackingFunctionLibrary_eventGetHandCenterNormalized_Parms
		{
			EControllerHand Hand;
			FVector HandCenterNormalized;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandCenterNormalized;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandTrackingFunctionLibrary_eventGetHandCenterNormalized_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetHandCenterNormalized_Parms), &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::NewProp_HandCenterNormalized = { "HandCenterNormalized", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetHandCenterNormalized_Parms, HandCenterNormalized), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetHandCenterNormalized_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::NewProp_HandCenterNormalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|MagicLeap" },
		{ "Comment", "/**\n\x09  Normalized position of the center of the given hand. This can be used to detect and warn the users that the hand is out of the gesture detection frame.\n\n\x09  @param Hand Hand to query the normalized hand center position for. Only Left and Right hand are supported.\n\x09  @param HandCenterNormalized Output paramter containing the normalized position of the given hand.\n\x09  @return true if the output param was populated with a valid value, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Normalized position of the center of the given hand. This can be used to detect and warn the users that the hand is out of the gesture detection frame.\n\n@param Hand Hand to query the normalized hand center position for. Only Left and Right hand are supported.\n@param HandCenterNormalized Output paramter containing the normalized position of the given hand.\n@return true if the output param was populated with a valid value, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary, nullptr, "GetHandCenterNormalized", nullptr, nullptr, sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetHandCenterNormalized_Parms), Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics
	{
		struct MagicLeapHandTrackingFunctionLibrary_eventGetHandIndexFingerTip_Parms
		{
			EControllerHand Hand;
			EMagicLeapGestureTransformSpace TransformSpace;
			FTransform Pointer;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pointer;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransformSpace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformSpace_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandTrackingFunctionLibrary_eventGetHandIndexFingerTip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetHandIndexFingerTip_Parms), &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetHandIndexFingerTip_Parms, Pointer), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::NewProp_TransformSpace = { "TransformSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetHandIndexFingerTip_Parms, TransformSpace), Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapGestureTransformSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::NewProp_TransformSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetHandIndexFingerTip_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::NewProp_Pointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::NewProp_TransformSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::NewProp_TransformSpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|MagicLeap" },
		{ "Comment", "/**\n\x09  Transform of the Index Finger Tip.\n\n\x09  @param Hand Hand to query the hand center transform for. Only Left and Right hand are supported.\n\x09  @param TransformSpace Get the transform relative to the world, hand center, or tracking space.\n\x09  @param Pointer Output parameter containing the position and orientation.\n\x09  @return true if the output param was populated with a valid value, false means that is is either unchanged or populated with a stale value.\n\x09  */" },
		{ "ModuleRelativePath", "Public/MagicLeapHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Transform of the Index Finger Tip.\n\n@param Hand Hand to query the hand center transform for. Only Left and Right hand are supported.\n@param TransformSpace Get the transform relative to the world, hand center, or tracking space.\n@param Pointer Output parameter containing the position and orientation.\n@return true if the output param was populated with a valid value, false means that is is either unchanged or populated with a stale value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary, nullptr, "GetHandIndexFingerTip", nullptr, nullptr, sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetHandIndexFingerTip_Parms), Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics
	{
		struct MagicLeapHandTrackingFunctionLibrary_eventGetHandKeypointForMotionSource_Parms
		{
			FName MotionSource;
			EMagicLeapHandTrackingKeypoint OutKeyPoint;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutKeyPoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutKeyPoint_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MotionSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandTrackingFunctionLibrary_eventGetHandKeypointForMotionSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetHandKeypointForMotionSource_Parms), &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::NewProp_OutKeyPoint = { "OutKeyPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetHandKeypointForMotionSource_Parms, OutKeyPoint), Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::NewProp_OutKeyPoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::NewProp_MotionSource = { "MotionSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetHandKeypointForMotionSource_Parms, MotionSource), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::NewProp_OutKeyPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::NewProp_OutKeyPoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::NewProp_MotionSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|MagicLeap" },
		{ "Comment", "/**\n\x09\x09Get the hand tracking keypoint for a motion source.\n\n\x09\x09@param MotionSource The motion source to retrieve the associated keypoint for.\n\x09\x09@param OutKeyPoint The keypoint associated with the provided motion source (only valid if function returns true).\n\x09\x09@return True if the lookup succeeded, false othewise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Get the hand tracking keypoint for a motion source.\n\n@param MotionSource The motion source to retrieve the associated keypoint for.\n@param OutKeyPoint The keypoint associated with the provided motion source (only valid if function returns true).\n@return True if the lookup succeeded, false othewise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary, nullptr, "GetHandKeypointForMotionSource", nullptr, nullptr, sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetHandKeypointForMotionSource_Parms), Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics
	{
		struct MagicLeapHandTrackingFunctionLibrary_eventGetHandThumbTip_Parms
		{
			EControllerHand Hand;
			EMagicLeapGestureTransformSpace TransformSpace;
			FTransform Secondary;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Secondary;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransformSpace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformSpace_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandTrackingFunctionLibrary_eventGetHandThumbTip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetHandThumbTip_Parms), &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::NewProp_Secondary = { "Secondary", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetHandThumbTip_Parms, Secondary), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::NewProp_TransformSpace = { "TransformSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetHandThumbTip_Parms, TransformSpace), Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapGestureTransformSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::NewProp_TransformSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetHandThumbTip_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::NewProp_Secondary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::NewProp_TransformSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::NewProp_TransformSpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|MagicLeap" },
		{ "Comment", "/**\n\x09  Transform of Thumb Tip.\n\n\x09  Note that this returns a transform in the Tracking space. To get the transform in Unreal's\n\x09  world space, use the MotioController component as a child of the XRPawn with hand set to EControllerHand::Special_5\n\x09  for the left hand secondary and EControllerHand::Special_6 for the right hand secondary.\n\n\x09  @param Hand Hand to query the hand center transform for. Only Left and Right hand are supported.\n\x09  @param TransformSpace Get the transform relative to the world, hand center, or tracking space.\n\x09  @param Secondary Output parameter containing the position and orientation.\n\x09  @return true if the output param was populated with a valid value, false means that is is either unchanged or populated with a stale value.\n\x09  */" },
		{ "ModuleRelativePath", "Public/MagicLeapHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Transform of Thumb Tip.\n\nNote that this returns a transform in the Tracking space. To get the transform in Unreal's\nworld space, use the MotioController component as a child of the XRPawn with hand set to EControllerHand::Special_5\nfor the left hand secondary and EControllerHand::Special_6 for the right hand secondary.\n\n@param Hand Hand to query the hand center transform for. Only Left and Right hand are supported.\n@param TransformSpace Get the transform relative to the world, hand center, or tracking space.\n@param Secondary Output parameter containing the position and orientation.\n@return true if the output param was populated with a valid value, false means that is is either unchanged or populated with a stale value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary, nullptr, "GetHandThumbTip", nullptr, nullptr, sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetHandThumbTip_Parms), Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Statics
	{
		struct MagicLeapHandTrackingFunctionLibrary_eventGetMagicLeapHandTrackingLiveLinkSource_Parms
		{
			FLiveLinkSourceHandle SourceHandle;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandTrackingFunctionLibrary_eventGetMagicLeapHandTrackingLiveLinkSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetMagicLeapHandTrackingLiveLinkSource_Parms), &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Statics::NewProp_SourceHandle = { "SourceHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetMagicLeapHandTrackingLiveLinkSource_Parms, SourceHandle), Z_Construct_UScriptStruct_FLiveLinkSourceHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Statics::NewProp_SourceHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|MagicLeap" },
		{ "Comment", "/**\n\x09Get a LiveLinkSourceHandle for magic leap hand tracking.\n\n\x09@param SourceHandle Output parameter SourceHandle that will be filled in.\n\x09@return true if a LiveLink Source was assigned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Get a LiveLinkSourceHandle for magic leap hand tracking.\n\n@param SourceHandle Output parameter SourceHandle that will be filled in.\n@return true if a LiveLink Source was assigned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary, nullptr, "GetMagicLeapHandTrackingLiveLinkSource", nullptr, nullptr, sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetMagicLeapHandTrackingLiveLinkSource_Parms), Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics
	{
		struct MagicLeapHandTrackingFunctionLibrary_eventGetMotionSourceForHandKeypoint_Parms
		{
			EControllerHand Hand;
			EMagicLeapHandTrackingKeypoint Keypoint;
			FName OutMotionSource;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutMotionSource;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Keypoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Keypoint_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandTrackingFunctionLibrary_eventGetMotionSourceForHandKeypoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetMotionSourceForHandKeypoint_Parms), &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::NewProp_OutMotionSource = { "OutMotionSource", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetMotionSourceForHandKeypoint_Parms, OutMotionSource), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::NewProp_Keypoint = { "Keypoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetMotionSourceForHandKeypoint_Parms, Keypoint), Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::NewProp_Keypoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetMotionSourceForHandKeypoint_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::NewProp_OutMotionSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::NewProp_Keypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::NewProp_Keypoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|MagicLeap" },
		{ "Comment", "/**\n\x09\x09Get the motion source for a hand tracking key point.\n\n\x09\x09@param Hand The hand to retrieve the keypoint motion source for (must be Left or Right for a valid OutMotionSource value).\n\x09\x09@param Keypoint The keypoint to retrieve the motion source for.\n\x09\x09@param OutMotionSource The name of the motion source associated with the provided keypoint (only valid if function returns true).\n\x09\x09@return True if the lookup succeeded, false othewise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Get the motion source for a hand tracking key point.\n\n@param Hand The hand to retrieve the keypoint motion source for (must be Left or Right for a valid OutMotionSource value).\n@param Keypoint The keypoint to retrieve the motion source for.\n@param OutMotionSource The name of the motion source associated with the provided keypoint (only valid if function returns true).\n@return True if the lookup succeeded, false othewise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary, nullptr, "GetMotionSourceForHandKeypoint", nullptr, nullptr, sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetMotionSourceForHandKeypoint_Parms), Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Statics
	{
		struct MagicLeapHandTrackingFunctionLibrary_eventGetStaticGestureConfidenceThreshold_Parms
		{
			EMagicLeapHandTrackingGesture Gesture;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gesture;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gesture_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetStaticGestureConfidenceThreshold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Statics::NewProp_Gesture = { "Gesture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventGetStaticGestureConfidenceThreshold_Parms, Gesture), Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGesture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Statics::NewProp_Gesture_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Statics::NewProp_Gesture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Statics::NewProp_Gesture_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|MagicLeap" },
		{ "Comment", "/**\n\x09  Gets the minimum gesture confidence used to filter out the detected static gesture.\n\n\x09  @param Gesture The gesture to get the confidence threshold for.\n\x09  @return The gesture confidence threshold.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Gets the minimum gesture confidence used to filter out the detected static gesture.\n\n@param Gesture The gesture to get the confidence threshold for.\n@return The gesture confidence threshold." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary, nullptr, "GetStaticGestureConfidenceThreshold", nullptr, nullptr, sizeof(MagicLeapHandTrackingFunctionLibrary_eventGetStaticGestureConfidenceThreshold_Parms), Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Statics
	{
		struct MagicLeapHandTrackingFunctionLibrary_eventIsHoldingControl_Parms
		{
			EControllerHand Hand;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandTrackingFunctionLibrary_eventIsHoldingControl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandTrackingFunctionLibrary_eventIsHoldingControl_Parms), &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventIsHoldingControl_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|MagicLeap" },
		{ "Comment", "/**\n\x09  Whether or not the given hand is holding a control.\n\n\x09  @param Hand Hand to query for. Only Left and Right hand are supported.\n\x09  @return true if the hand is holding a control.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Whether or not the given hand is holding a control.\n\n@param Hand Hand to query for. Only Left and Right hand are supported.\n@return true if the hand is holding a control." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary, nullptr, "IsHoldingControl", nullptr, nullptr, sizeof(MagicLeapHandTrackingFunctionLibrary_eventIsHoldingControl_Parms), Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics
	{
		struct MagicLeapHandTrackingFunctionLibrary_eventSetConfiguration_Parms
		{
			TArray<EMagicLeapHandTrackingGesture> StaticGesturesToActivate;
			EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel;
			EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel;
			bool bTrackingEnabled;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bTrackingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTrackingEnabled;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GestureFilterLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GestureFilterLevel_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_KeypointsFilterLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeypointsFilterLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticGesturesToActivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticGesturesToActivate;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StaticGesturesToActivate_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StaticGesturesToActivate_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandTrackingFunctionLibrary_eventSetConfiguration_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandTrackingFunctionLibrary_eventSetConfiguration_Parms), &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_bTrackingEnabled_SetBit(void* Obj)
	{
		((MagicLeapHandTrackingFunctionLibrary_eventSetConfiguration_Parms*)Obj)->bTrackingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_bTrackingEnabled = { "bTrackingEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandTrackingFunctionLibrary_eventSetConfiguration_Parms), &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_bTrackingEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_GestureFilterLevel = { "GestureFilterLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventSetConfiguration_Parms, GestureFilterLevel), Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_GestureFilterLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_KeypointsFilterLevel = { "KeypointsFilterLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventSetConfiguration_Parms, KeypointsFilterLevel), Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_KeypointsFilterLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_StaticGesturesToActivate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_StaticGesturesToActivate = { "StaticGesturesToActivate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventSetConfiguration_Parms, StaticGesturesToActivate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_StaticGesturesToActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_StaticGesturesToActivate_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_StaticGesturesToActivate_Inner = { "StaticGesturesToActivate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGesture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_StaticGesturesToActivate_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_bTrackingEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_GestureFilterLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_GestureFilterLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_KeypointsFilterLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_KeypointsFilterLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_StaticGesturesToActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_StaticGesturesToActivate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::NewProp_StaticGesturesToActivate_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|MagicLeap" },
		{ "Comment", "/**\n\x09  Enables and disables the gestures to be detected by the gesture recognition system.\n\n\x09  @param StaticHandTrackingToActivate List of static gestures to be detected by the system.\n\x09  @param KeypointsFilterLevel Filtering for the keypoints and hand centers.\n\x09  @param GestureFilterLevel Filtering for the static gesture recognition.\n\x09  @param HandSwitchingFilterLevel Filtering for if the left or right hand is present.\n\x09  @return true if the configuration was set successfully.\n\x09*/" },
		{ "CPP_Default_bTrackingEnabled", "true" },
		{ "CPP_Default_GestureFilterLevel", "NoFilter" },
		{ "CPP_Default_KeypointsFilterLevel", "NoFilter" },
		{ "ModuleRelativePath", "Public/MagicLeapHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Enables and disables the gestures to be detected by the gesture recognition system.\n\n@param StaticHandTrackingToActivate List of static gestures to be detected by the system.\n@param KeypointsFilterLevel Filtering for the keypoints and hand centers.\n@param GestureFilterLevel Filtering for the static gesture recognition.\n@param HandSwitchingFilterLevel Filtering for if the left or right hand is present.\n@return true if the configuration was set successfully." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary, nullptr, "SetConfiguration", nullptr, nullptr, sizeof(MagicLeapHandTrackingFunctionLibrary_eventSetConfiguration_Parms), Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Statics
	{
		struct MagicLeapHandTrackingFunctionLibrary_eventSetStaticGestureConfidenceThreshold_Parms
		{
			EMagicLeapHandTrackingGesture Gesture;
			float Confidence;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Confidence;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gesture;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gesture_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventSetStaticGestureConfidenceThreshold_Parms, Confidence), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Statics::NewProp_Gesture = { "Gesture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandTrackingFunctionLibrary_eventSetStaticGestureConfidenceThreshold_Parms, Gesture), Z_Construct_UEnum_MagicLeapHandTracking_EMagicLeapHandTrackingGesture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Statics::NewProp_Gesture_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Statics::NewProp_Confidence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Statics::NewProp_Gesture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Statics::NewProp_Gesture_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|MagicLeap" },
		{ "Comment", "/**\n\x09  Sets the minimum gesture confidence to filter out the detected static gesture.\n\n\x09  @param Gesture The gesture to set the confidence threshold for.\n\x09  @param Confidence The gesture confidence threshold.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Sets the minimum gesture confidence to filter out the detected static gesture.\n\n@param Gesture The gesture to set the confidence threshold for.\n@param Confidence The gesture confidence threshold." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary, nullptr, "SetStaticGestureConfidenceThreshold", nullptr, nullptr, sizeof(MagicLeapHandTrackingFunctionLibrary_eventSetStaticGestureConfidenceThreshold_Parms), Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary_NoRegister()
	{
		return UMagicLeapHandTrackingFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapHandTracking,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetConfiguration, "GetConfiguration" }, // 1917124304
		{ &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture, "GetCurrentGesture" }, // 596240609
		{ &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence, "GetCurrentGestureConfidence" }, // 3343110230
		{ &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints, "GetGestureKeypoints" }, // 1327603768
		{ &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform, "GetGestureKeypointTransform" }, // 999061897
		{ &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenter, "GetHandCenter" }, // 4127131811
		{ &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized, "GetHandCenterNormalized" }, // 609389217
		{ &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip, "GetHandIndexFingerTip" }, // 4283098147
		{ &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource, "GetHandKeypointForMotionSource" }, // 1096516149
		{ &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip, "GetHandThumbTip" }, // 2206001903
		{ &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource, "GetMagicLeapHandTrackingLiveLinkSource" }, // 1879865866
		{ &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint, "GetMotionSourceForHandKeypoint" }, // 3407561322
		{ &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold, "GetStaticGestureConfidenceThreshold" }, // 1511268811
		{ &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl, "IsHoldingControl" }, // 4202902295
		{ &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetConfiguration, "SetConfiguration" }, // 2940748767
		{ &Z_Construct_UFunction_UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold, "SetStaticGestureConfidenceThreshold" }, // 873218375
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MagicLeap" },
		{ "IncludePath", "MagicLeapHandTrackingFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MagicLeapHandTrackingFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapHandTrackingFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary_Statics::ClassParams = {
		&UMagicLeapHandTrackingFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapHandTrackingFunctionLibrary, 903586490);
	template<> MAGICLEAPHANDTRACKING_API UClass* StaticClass<UMagicLeapHandTrackingFunctionLibrary>()
	{
		return UMagicLeapHandTrackingFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapHandTrackingFunctionLibrary(Z_Construct_UClass_UMagicLeapHandTrackingFunctionLibrary, &UMagicLeapHandTrackingFunctionLibrary::StaticClass, TEXT("/Script/MagicLeapHandTracking"), TEXT("UMagicLeapHandTrackingFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapHandTrackingFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

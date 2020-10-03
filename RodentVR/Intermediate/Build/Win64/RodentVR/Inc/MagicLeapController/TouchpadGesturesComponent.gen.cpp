// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapController/Public/TouchpadGesturesComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchpadGesturesComponent() {}
// Cross Module References
	MAGICLEAPCONTROLLER_API UFunction* Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature();
	MAGICLEAPCONTROLLER_API UClass* Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent();
	MAGICLEAPCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture();
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapTouchpadGestureDirection();
	UPackage* Z_Construct_UPackage__Script_MagicLeapController();
	MAGICLEAPCONTROLLER_API UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapTouchpadGestureType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	MAGICLEAPCONTROLLER_API UClass* Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature_Statics
	{
		struct MagicLeapTouchpadGesturesComponent_eventTouchpadGestureEvent_Parms
		{
			FMagicLeapTouchpadGesture GestureData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GestureData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GestureData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature_Statics::NewProp_GestureData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature_Statics::NewProp_GestureData = { "GestureData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapTouchpadGesturesComponent_eventTouchpadGestureEvent_Parms, GestureData), Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature_Statics::NewProp_GestureData_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature_Statics::NewProp_GestureData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature_Statics::NewProp_GestureData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent, nullptr, "TouchpadGestureEvent__DelegateSignature", nullptr, nullptr, sizeof(MagicLeapTouchpadGesturesComponent_eventTouchpadGestureEvent_Parms), Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EMagicLeapTouchpadGestureDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapController_EMagicLeapTouchpadGestureDirection, Z_Construct_UPackage__Script_MagicLeapController(), TEXT("EMagicLeapTouchpadGestureDirection"));
		}
		return Singleton;
	}
	template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapTouchpadGestureDirection>()
	{
		return EMagicLeapTouchpadGestureDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapTouchpadGestureDirection(EMagicLeapTouchpadGestureDirection_StaticEnum, TEXT("/Script/MagicLeapController"), TEXT("EMagicLeapTouchpadGestureDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapTouchpadGestureDirection_Hash() { return 35637757U; }
	UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapTouchpadGestureDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapTouchpadGestureDirection"), 0, Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapTouchpadGestureDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapTouchpadGestureDirection::None", (int64)EMagicLeapTouchpadGestureDirection::None },
				{ "EMagicLeapTouchpadGestureDirection::Up", (int64)EMagicLeapTouchpadGestureDirection::Up },
				{ "EMagicLeapTouchpadGestureDirection::Down", (int64)EMagicLeapTouchpadGestureDirection::Down },
				{ "EMagicLeapTouchpadGestureDirection::Left", (int64)EMagicLeapTouchpadGestureDirection::Left },
				{ "EMagicLeapTouchpadGestureDirection::Right", (int64)EMagicLeapTouchpadGestureDirection::Right },
				{ "EMagicLeapTouchpadGestureDirection::In", (int64)EMagicLeapTouchpadGestureDirection::In },
				{ "EMagicLeapTouchpadGestureDirection::Out", (int64)EMagicLeapTouchpadGestureDirection::Out },
				{ "EMagicLeapTouchpadGestureDirection::Clockwise", (int64)EMagicLeapTouchpadGestureDirection::Clockwise },
				{ "EMagicLeapTouchpadGestureDirection::CounterClockwise", (int64)EMagicLeapTouchpadGestureDirection::CounterClockwise },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Clockwise.Name", "EMagicLeapTouchpadGestureDirection::Clockwise" },
				{ "Comment", "/** Direction of touchpad gesture. */" },
				{ "CounterClockwise.Name", "EMagicLeapTouchpadGestureDirection::CounterClockwise" },
				{ "DeprecationMessage", "Use Touchpad Gesture Events instead." },
				{ "Down.Name", "EMagicLeapTouchpadGestureDirection::Down" },
				{ "In.Name", "EMagicLeapTouchpadGestureDirection::In" },
				{ "Left.Name", "EMagicLeapTouchpadGestureDirection::Left" },
				{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
				{ "None.Name", "EMagicLeapTouchpadGestureDirection::None" },
				{ "Out.Name", "EMagicLeapTouchpadGestureDirection::Out" },
				{ "Right.Name", "EMagicLeapTouchpadGestureDirection::Right" },
				{ "ToolTip", "Direction of touchpad gesture." },
				{ "Up.Name", "EMagicLeapTouchpadGestureDirection::Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapController,
				nullptr,
				"EMagicLeapTouchpadGestureDirection",
				"EMagicLeapTouchpadGestureDirection",
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
	static UEnum* EMagicLeapTouchpadGestureType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapController_EMagicLeapTouchpadGestureType, Z_Construct_UPackage__Script_MagicLeapController(), TEXT("EMagicLeapTouchpadGestureType"));
		}
		return Singleton;
	}
	template<> MAGICLEAPCONTROLLER_API UEnum* StaticEnum<EMagicLeapTouchpadGestureType>()
	{
		return EMagicLeapTouchpadGestureType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapTouchpadGestureType(EMagicLeapTouchpadGestureType_StaticEnum, TEXT("/Script/MagicLeapController"), TEXT("EMagicLeapTouchpadGestureType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapTouchpadGestureType_Hash() { return 1487312535U; }
	UEnum* Z_Construct_UEnum_MagicLeapController_EMagicLeapTouchpadGestureType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapTouchpadGestureType"), 0, Get_Z_Construct_UEnum_MagicLeapController_EMagicLeapTouchpadGestureType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapTouchpadGestureType::None", (int64)EMagicLeapTouchpadGestureType::None },
				{ "EMagicLeapTouchpadGestureType::Tap", (int64)EMagicLeapTouchpadGestureType::Tap },
				{ "EMagicLeapTouchpadGestureType::ForceTapDown", (int64)EMagicLeapTouchpadGestureType::ForceTapDown },
				{ "EMagicLeapTouchpadGestureType::ForceTapUp", (int64)EMagicLeapTouchpadGestureType::ForceTapUp },
				{ "EMagicLeapTouchpadGestureType::ForceDwell", (int64)EMagicLeapTouchpadGestureType::ForceDwell },
				{ "EMagicLeapTouchpadGestureType::SecondForceDown", (int64)EMagicLeapTouchpadGestureType::SecondForceDown },
				{ "EMagicLeapTouchpadGestureType::LongHold", (int64)EMagicLeapTouchpadGestureType::LongHold },
				{ "EMagicLeapTouchpadGestureType::RadialScroll", (int64)EMagicLeapTouchpadGestureType::RadialScroll },
				{ "EMagicLeapTouchpadGestureType::Swipe", (int64)EMagicLeapTouchpadGestureType::Swipe },
				{ "EMagicLeapTouchpadGestureType::Scroll", (int64)EMagicLeapTouchpadGestureType::Scroll },
				{ "EMagicLeapTouchpadGestureType::Pinch", (int64)EMagicLeapTouchpadGestureType::Pinch },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Recognized touchpad gesture types. */" },
				{ "DeprecationMessage", "Use Touchpad Gesture Events instead." },
				{ "ForceDwell.Name", "EMagicLeapTouchpadGestureType::ForceDwell" },
				{ "ForceTapDown.Name", "EMagicLeapTouchpadGestureType::ForceTapDown" },
				{ "ForceTapUp.Name", "EMagicLeapTouchpadGestureType::ForceTapUp" },
				{ "LongHold.Name", "EMagicLeapTouchpadGestureType::LongHold" },
				{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
				{ "None.Name", "EMagicLeapTouchpadGestureType::None" },
				{ "Pinch.Name", "EMagicLeapTouchpadGestureType::Pinch" },
				{ "RadialScroll.Name", "EMagicLeapTouchpadGestureType::RadialScroll" },
				{ "Scroll.Name", "EMagicLeapTouchpadGestureType::Scroll" },
				{ "SecondForceDown.Name", "EMagicLeapTouchpadGestureType::SecondForceDown" },
				{ "Swipe.Name", "EMagicLeapTouchpadGestureType::Swipe" },
				{ "Tap.Name", "EMagicLeapTouchpadGestureType::Tap" },
				{ "ToolTip", "Recognized touchpad gesture types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapController,
				nullptr,
				"EMagicLeapTouchpadGestureType",
				"EMagicLeapTouchpadGestureType",
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
class UScriptStruct* FMagicLeapTouchpadGesture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAPCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture, Z_Construct_UPackage__Script_MagicLeapController(), TEXT("MagicLeapTouchpadGesture"), sizeof(FMagicLeapTouchpadGesture), Get_Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Hash());
	}
	return Singleton;
}
template<> MAGICLEAPCONTROLLER_API UScriptStruct* StaticStruct<FMagicLeapTouchpadGesture>()
{
	return FMagicLeapTouchpadGesture::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapTouchpadGesture(FMagicLeapTouchpadGesture::StaticStruct, TEXT("/Script/MagicLeapController"), TEXT("MagicLeapTouchpadGesture"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeapController_StaticRegisterNativesFMagicLeapTouchpadGesture
{
	FScriptStruct_MagicLeapController_StaticRegisterNativesFMagicLeapTouchpadGesture()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapTouchpadGesture")),new UScriptStruct::TCppStructOps<FMagicLeapTouchpadGesture>);
	}
} ScriptStruct_MagicLeapController_StaticRegisterNativesFMagicLeapTouchpadGesture;
	struct Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerGap_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FingerGap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionAndForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionAndForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MotionSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Information about a recognized touchpad gesture. */" },
		{ "DeprecationMessage", "Use Touchpad Gesture Events instead." },
		{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
		{ "ToolTip", "Information about a recognized touchpad gesture." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapTouchpadGesture>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "TouchpadGesture|MagicLeap" },
		{ "Comment", "/** Angle from the center of the touchpad to the finger. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Touchpad Gesture Events instead." },
		{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
		{ "ToolTip", "Angle from the center of the touchpad to the finger." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapTouchpadGesture, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "TouchpadGesture|MagicLeap" },
		{ "Comment", "/**\n\x09  For radial gestures, this is the radius of the gesture. The touchpad\n      is defined as having extents of [-1.0,1.0] so this radius has a range\n      of [0.0,2.0].\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Touchpad Gesture Events instead." },
		{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
		{ "ToolTip", "For radial gestures, this is the radius of the gesture. The touchpad\nis defined as having extents of [-1.0,1.0] so this radius has a range\nof [0.0,2.0]." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapTouchpadGesture, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_FingerGap_MetaData[] = {
		{ "Category", "TouchpadGesture|MagicLeap" },
		{ "Comment", "/**\n\x09  Distance between the two fingers performing the gestures in touchpad\n      distance. The touchpad is defined as having extents of [-1.0,1.0] so\n      this distance has a range of [0.0,2.0].\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Touchpad Gesture Events instead." },
		{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
		{ "ToolTip", "Distance between the two fingers performing the gestures in touchpad\ndistance. The touchpad is defined as having extents of [-1.0,1.0] so\nthis distance has a range of [0.0,2.0]." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_FingerGap = { "FingerGap", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapTouchpadGesture, FingerGap), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_FingerGap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_FingerGap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "TouchpadGesture|MagicLeap" },
		{ "Comment", "/**\n\x09  For radial gestures, this is the absolute value of the angle. For scroll\n      and pinch gestures, this is the absolute distance traveled in touchpad\n      distance. The touchpad is defined as having extents of [-1.0,1.0] so\n      this distance has a range of [0.0,2.0].\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Touchpad Gesture Events instead." },
		{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
		{ "ToolTip", "For radial gestures, this is the absolute value of the angle. For scroll\nand pinch gestures, this is the absolute distance traveled in touchpad\ndistance. The touchpad is defined as having extents of [-1.0,1.0] so\nthis distance has a range of [0.0,2.0]." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapTouchpadGesture, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "TouchpadGesture|MagicLeap" },
		{ "Comment", "/**\n\x09  Speed of gesture. Note that this takes on different meanings depending\n      on the gesture type being performed:\n      - For radial gestures, this will be the angular speed around the axis.\n      - For pinch gestures, this will be the speed at which the distance\n        between fingers is changing. The touchpad is defined as having extents\n        of [-1.0,1.0] so touchpad distance has a range of [0.0,2.0]; this value\n        will be in touchpad distance per second.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Touchpad Gesture Events instead." },
		{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
		{ "ToolTip", "Speed of gesture. Note that this takes on different meanings depending\non the gesture type being performed:\n- For radial gestures, this will be the angular speed around the axis.\n- For pinch gestures, this will be the speed at which the distance\nbetween fingers is changing. The touchpad is defined as having extents\nof [-1.0,1.0] so touchpad distance has a range of [0.0,2.0]; this value\nwill be in touchpad distance per second." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapTouchpadGesture, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_PositionAndForce_MetaData[] = {
		{ "Category", "TouchpadGesture|MagicLeap" },
		{ "Comment", "/** \n\x09  Gesture position (x,y) and force (z).\n\x09  Position is in the [-1.0,1.0] range and force is in the [0.0,1.0] range.\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Touchpad Gesture Events instead." },
		{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
		{ "ToolTip", "Gesture position (x,y) and force (z).\nPosition is in the [-1.0,1.0] range and force is in the [0.0,1.0] range." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_PositionAndForce = { "PositionAndForce", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapTouchpadGesture, PositionAndForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_PositionAndForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_PositionAndForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "TouchpadGesture|MagicLeap" },
		{ "Comment", "/** Direction of gesture */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Touchpad Gesture Events instead." },
		{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
		{ "ToolTip", "Direction of gesture" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapTouchpadGesture, Direction), Z_Construct_UEnum_MagicLeapController_EMagicLeapTouchpadGestureDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "TouchpadGesture|MagicLeap" },
		{ "Comment", "/** Type of gesture. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Touchpad Gesture Events instead." },
		{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
		{ "ToolTip", "Type of gesture." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapTouchpadGesture, Type), Z_Construct_UEnum_MagicLeapController_EMagicLeapTouchpadGestureType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_MotionSource_MetaData[] = {
		{ "Category", "TouchpadGesture|MagicLeap" },
		{ "Comment", "/** Motion source on which the gesture was performed. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Touchpad Gesture Events instead." },
		{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
		{ "ToolTip", "Motion source on which the gesture was performed." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_MotionSource = { "MotionSource", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapTouchpadGesture, MotionSource), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_MotionSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_MotionSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Hand_MetaData[] = {
		{ "Category", "TouchpadGesture|MagicLeap" },
		{ "Comment", "/** Hand on which the gesture was performed. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Hand is deprecated. Please use MotionSource instead." },
		{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
		{ "ToolTip", "Hand on which the gesture was performed." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapTouchpadGesture, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Hand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_FingerGap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_PositionAndForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Direction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_MotionSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::NewProp_Hand_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapController,
		nullptr,
		&NewStructOps,
		"MagicLeapTouchpadGesture",
		sizeof(FMagicLeapTouchpadGesture),
		alignof(FMagicLeapTouchpadGesture),
		Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapTouchpadGesture"), sizeof(FMagicLeapTouchpadGesture), Get_Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapTouchpadGesture_Hash() { return 3196057988U; }
	void UMagicLeapTouchpadGesturesComponent::StaticRegisterNativesUMagicLeapTouchpadGesturesComponent()
	{
	}
	UClass* Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_NoRegister()
	{
		return UMagicLeapTouchpadGesturesComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTouchpadGestureEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTouchpadGestureEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTouchpadGestureContinue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTouchpadGestureContinue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTouchpadGestureStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTouchpadGestureStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapController,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature, "TouchpadGestureEvent__DelegateSignature" }, // 776171815
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MagicLeap" },
		{ "Comment", "/** DEPRECATED use Touchpad Gesture Events instead. - Delegates touchpad gesture events for the Magic Leap Controller & MLMA */" },
		{ "Deprecated", "" },
		{ "DeprecationMessage", "Use Touchpad Gesture Events instead." },
		{ "IncludePath", "TouchpadGesturesComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
		{ "ToolTip", "DEPRECATED use Touchpad Gesture Events instead. - Delegates touchpad gesture events for the Magic Leap Controller & MLMA" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::NewProp_OnTouchpadGestureEnd_MetaData[] = {
		{ "Comment", "/** DEPRECATED use Touchpad Gesture Events instead. - Event called when a touchpad gesture ends. Provides all the meta data about the given gestures. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Touchpad Gesture Events instead." },
		{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
		{ "ToolTip", "DEPRECATED use Touchpad Gesture Events instead. - Event called when a touchpad gesture ends. Provides all the meta data about the given gestures." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::NewProp_OnTouchpadGestureEnd = { "OnTouchpadGestureEnd", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapTouchpadGesturesComponent, OnTouchpadGestureEnd), Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::NewProp_OnTouchpadGestureEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::NewProp_OnTouchpadGestureEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::NewProp_OnTouchpadGestureContinue_MetaData[] = {
		{ "Comment", "/** DEPRECATED use Touchpad Gesture Events instead. - Event called when a touchpad gesture continues. Provides all the meta data about the given gestures. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Touchpad Gesture Events instead." },
		{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
		{ "ToolTip", "DEPRECATED use Touchpad Gesture Events instead. - Event called when a touchpad gesture continues. Provides all the meta data about the given gestures." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::NewProp_OnTouchpadGestureContinue = { "OnTouchpadGestureContinue", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapTouchpadGesturesComponent, OnTouchpadGestureContinue), Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::NewProp_OnTouchpadGestureContinue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::NewProp_OnTouchpadGestureContinue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::NewProp_OnTouchpadGestureStart_MetaData[] = {
		{ "Comment", "/** DEPRECATED use Touchpad Gesture Events instead. - Event called when a touchpad gesture starts. Provides all the meta data about the given gestures. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Touchpad Gesture Events instead." },
		{ "ModuleRelativePath", "Public/TouchpadGesturesComponent.h" },
		{ "ToolTip", "DEPRECATED use Touchpad Gesture Events instead. - Event called when a touchpad gesture starts. Provides all the meta data about the given gestures." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::NewProp_OnTouchpadGestureStart = { "OnTouchpadGestureStart", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapTouchpadGesturesComponent, OnTouchpadGestureStart), Z_Construct_UDelegateFunction_UMagicLeapTouchpadGesturesComponent_TouchpadGestureEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::NewProp_OnTouchpadGestureStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::NewProp_OnTouchpadGestureStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::NewProp_OnTouchpadGestureEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::NewProp_OnTouchpadGestureContinue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::NewProp_OnTouchpadGestureStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapTouchpadGesturesComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::ClassParams = {
		&UMagicLeapTouchpadGesturesComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapTouchpadGesturesComponent, 238874682);
	template<> MAGICLEAPCONTROLLER_API UClass* StaticClass<UMagicLeapTouchpadGesturesComponent>()
	{
		return UMagicLeapTouchpadGesturesComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapTouchpadGesturesComponent(Z_Construct_UClass_UMagicLeapTouchpadGesturesComponent, &UMagicLeapTouchpadGesturesComponent::StaticClass, TEXT("/Script/MagicLeapController"), TEXT("UMagicLeapTouchpadGesturesComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapTouchpadGesturesComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

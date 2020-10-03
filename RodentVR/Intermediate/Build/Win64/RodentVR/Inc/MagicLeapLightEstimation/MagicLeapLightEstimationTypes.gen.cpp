// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapLightEstimation/Public/MagicLeapLightEstimationTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapLightEstimationTypes() {}
// Cross Module References
	MAGICLEAPLIGHTESTIMATION_API UEnum* Z_Construct_UEnum_MagicLeapLightEstimation_EMagicLeapLightEstimationCamera();
	UPackage* Z_Construct_UPackage__Script_MagicLeapLightEstimation();
	MAGICLEAPLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	MAGICLEAPLIGHTESTIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState();
// End Cross Module References
	static UEnum* EMagicLeapLightEstimationCamera_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeapLightEstimation_EMagicLeapLightEstimationCamera, Z_Construct_UPackage__Script_MagicLeapLightEstimation(), TEXT("EMagicLeapLightEstimationCamera"));
		}
		return Singleton;
	}
	template<> MAGICLEAPLIGHTESTIMATION_API UEnum* StaticEnum<EMagicLeapLightEstimationCamera>()
	{
		return EMagicLeapLightEstimationCamera_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapLightEstimationCamera(EMagicLeapLightEstimationCamera_StaticEnum, TEXT("/Script/MagicLeapLightEstimation"), TEXT("EMagicLeapLightEstimationCamera"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeapLightEstimation_EMagicLeapLightEstimationCamera_Hash() { return 847978742U; }
	UEnum* Z_Construct_UEnum_MagicLeapLightEstimation_EMagicLeapLightEstimationCamera()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapLightEstimation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapLightEstimationCamera"), 0, Get_Z_Construct_UEnum_MagicLeapLightEstimation_EMagicLeapLightEstimationCamera_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapLightEstimationCamera::Left", (int64)EMagicLeapLightEstimationCamera::Left },
				{ "EMagicLeapLightEstimationCamera::Right", (int64)EMagicLeapLightEstimationCamera::Right },
				{ "EMagicLeapLightEstimationCamera::FarLeft", (int64)EMagicLeapLightEstimationCamera::FarLeft },
				{ "EMagicLeapLightEstimationCamera::FarRight", (int64)EMagicLeapLightEstimationCamera::FarRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Which camera the information is related to. */" },
				{ "FarLeft.Comment", "/** Far left. */" },
				{ "FarLeft.Name", "EMagicLeapLightEstimationCamera::FarLeft" },
				{ "FarLeft.ToolTip", "Far left." },
				{ "FarRight.Comment", "/** Far right. */" },
				{ "FarRight.Name", "EMagicLeapLightEstimationCamera::FarRight" },
				{ "FarRight.ToolTip", "Far right." },
				{ "Left.Comment", "/** Left. */" },
				{ "Left.Name", "EMagicLeapLightEstimationCamera::Left" },
				{ "Left.ToolTip", "Left." },
				{ "ModuleRelativePath", "Public/MagicLeapLightEstimationTypes.h" },
				{ "Right.Comment", "/** Right. */" },
				{ "Right.Name", "EMagicLeapLightEstimationCamera::Right" },
				{ "Right.ToolTip", "Right." },
				{ "ToolTip", "Which camera the information is related to." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeapLightEstimation,
				nullptr,
				"EMagicLeapLightEstimationCamera",
				"EMagicLeapLightEstimationCamera",
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
class UScriptStruct* FMagicLeapLightEstimationColorTemperatureState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAPLIGHTESTIMATION_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState, Z_Construct_UPackage__Script_MagicLeapLightEstimation(), TEXT("MagicLeapLightEstimationColorTemperatureState"), sizeof(FMagicLeapLightEstimationColorTemperatureState), Get_Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Hash());
	}
	return Singleton;
}
template<> MAGICLEAPLIGHTESTIMATION_API UScriptStruct* StaticStruct<FMagicLeapLightEstimationColorTemperatureState>()
{
	return FMagicLeapLightEstimationColorTemperatureState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState(FMagicLeapLightEstimationColorTemperatureState::StaticStruct, TEXT("/Script/MagicLeapLightEstimation"), TEXT("MagicLeapLightEstimationColorTemperatureState"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeapLightEstimation_StaticRegisterNativesFMagicLeapLightEstimationColorTemperatureState
{
	FScriptStruct_MagicLeapLightEstimation_StaticRegisterNativesFMagicLeapLightEstimationColorTemperatureState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapLightEstimationColorTemperatureState")),new UScriptStruct::TCppStructOps<FMagicLeapLightEstimationColorTemperatureState>);
	}
} ScriptStruct_MagicLeapLightEstimation_StaticRegisterNativesFMagicLeapLightEstimationColorTemperatureState;
	struct Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmbientColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorTemperatureKelvin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ColorTemperatureKelvin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09Information about the color temperature state.\n\x09""Capturing images or video will stop the lighting information update,\n\x09""causing the retrieved data to be stale (old timestamps).\n*/" },
		{ "ModuleRelativePath", "Public/MagicLeapLightEstimationTypes.h" },
		{ "ToolTip", "Information about the color temperature state.\nCapturing images or video will stop the lighting information update,\ncausing the retrieved data to be stale (old timestamps)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapLightEstimationColorTemperatureState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Category", "Light Estimation|MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapLightEstimationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapLightEstimationColorTemperatureState, Timestamp), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::NewProp_AmbientColor_MetaData[] = {
		{ "Category", "Light Estimation|MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapLightEstimationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::NewProp_AmbientColor = { "AmbientColor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapLightEstimationColorTemperatureState, AmbientColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::NewProp_AmbientColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::NewProp_AmbientColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::NewProp_ColorTemperatureKelvin_MetaData[] = {
		{ "Category", "Light Estimation|MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapLightEstimationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::NewProp_ColorTemperatureKelvin = { "ColorTemperatureKelvin", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapLightEstimationColorTemperatureState, ColorTemperatureKelvin), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::NewProp_ColorTemperatureKelvin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::NewProp_ColorTemperatureKelvin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::NewProp_AmbientColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::NewProp_ColorTemperatureKelvin,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapLightEstimation,
		nullptr,
		&NewStructOps,
		"MagicLeapLightEstimationColorTemperatureState",
		sizeof(FMagicLeapLightEstimationColorTemperatureState),
		alignof(FMagicLeapLightEstimationColorTemperatureState),
		Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapLightEstimation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapLightEstimationColorTemperatureState"), sizeof(FMagicLeapLightEstimationColorTemperatureState), Get_Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapLightEstimationColorTemperatureState_Hash() { return 2114630135U; }
class UScriptStruct* FMagicLeapLightEstimationAmbientGlobalState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAPLIGHTESTIMATION_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState, Z_Construct_UPackage__Script_MagicLeapLightEstimation(), TEXT("MagicLeapLightEstimationAmbientGlobalState"), sizeof(FMagicLeapLightEstimationAmbientGlobalState), Get_Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Hash());
	}
	return Singleton;
}
template<> MAGICLEAPLIGHTESTIMATION_API UScriptStruct* StaticStruct<FMagicLeapLightEstimationAmbientGlobalState>()
{
	return FMagicLeapLightEstimationAmbientGlobalState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState(FMagicLeapLightEstimationAmbientGlobalState::StaticStruct, TEXT("/Script/MagicLeapLightEstimation"), TEXT("MagicLeapLightEstimationAmbientGlobalState"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeapLightEstimation_StaticRegisterNativesFMagicLeapLightEstimationAmbientGlobalState
{
	FScriptStruct_MagicLeapLightEstimation_StaticRegisterNativesFMagicLeapLightEstimationAmbientGlobalState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapLightEstimationAmbientGlobalState")),new UScriptStruct::TCppStructOps<FMagicLeapLightEstimationAmbientGlobalState>);
	}
} ScriptStruct_MagicLeapLightEstimation_StaticRegisterNativesFMagicLeapLightEstimationAmbientGlobalState;
	struct Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientIntensityNits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AmbientIntensityNits;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientIntensityNits_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09Information about the ambient light sensor global state.\n\x09""Capturing images or video will stop the lighting information update,\n\x09""causing the retrieved data to be stale (old timestamps).\n*/" },
		{ "ModuleRelativePath", "Public/MagicLeapLightEstimationTypes.h" },
		{ "ToolTip", "Information about the ambient light sensor global state.\nCapturing images or video will stop the lighting information update,\ncausing the retrieved data to be stale (old timestamps)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapLightEstimationAmbientGlobalState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Category", "Light Estimation|MagicLeap" },
		{ "ModuleRelativePath", "Public/MagicLeapLightEstimationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapLightEstimationAmbientGlobalState, Timestamp), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::NewProp_AmbientIntensityNits_MetaData[] = {
		{ "Category", "Light Estimation|MagicLeap" },
		{ "Comment", "/* Array stores values for each world camera, ordered left, right, far left, far right. Luminance estimate is in nits (cd/m^2). */" },
		{ "ModuleRelativePath", "Public/MagicLeapLightEstimationTypes.h" },
		{ "ToolTip", "Array stores values for each world camera, ordered left, right, far left, far right. Luminance estimate is in nits (cd/m^2)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::NewProp_AmbientIntensityNits = { "AmbientIntensityNits", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapLightEstimationAmbientGlobalState, AmbientIntensityNits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::NewProp_AmbientIntensityNits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::NewProp_AmbientIntensityNits_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::NewProp_AmbientIntensityNits_Inner = { "AmbientIntensityNits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::NewProp_AmbientIntensityNits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::NewProp_AmbientIntensityNits_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapLightEstimation,
		nullptr,
		&NewStructOps,
		"MagicLeapLightEstimationAmbientGlobalState",
		sizeof(FMagicLeapLightEstimationAmbientGlobalState),
		alignof(FMagicLeapLightEstimationAmbientGlobalState),
		Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapLightEstimation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapLightEstimationAmbientGlobalState"), sizeof(FMagicLeapLightEstimationAmbientGlobalState), Get_Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapLightEstimationAmbientGlobalState_Hash() { return 352633970U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

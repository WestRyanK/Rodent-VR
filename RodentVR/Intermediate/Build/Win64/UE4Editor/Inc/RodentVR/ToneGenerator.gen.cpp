// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Hardware/ToneGenerator/ToneGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToneGenerator() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UToneGenerator_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UToneGenerator();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
// End Cross Module References
	DEFINE_FUNCTION(UToneGenerator::execSetFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FrequencyHz);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrequency(Z_Param_FrequencyHz);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToneGenerator::execEndTone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UToneGenerator::execStartTone)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DurationSec);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchHz);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTone(Z_Param_DurationSec,Z_Param_PitchHz,Z_Param_VolumeMultiplier);
		P_NATIVE_END;
	}
	void UToneGenerator::StaticRegisterNativesUToneGenerator()
	{
		UClass* Class = UToneGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndTone", &UToneGenerator::execEndTone },
			{ "SetFrequency", &UToneGenerator::execSetFrequency },
			{ "StartTone", &UToneGenerator::execStartTone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UToneGenerator_EndTone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToneGenerator_EndTone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Hardware/ToneGenerator/ToneGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToneGenerator_EndTone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToneGenerator, nullptr, "EndTone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToneGenerator_EndTone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerator_EndTone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToneGenerator_EndTone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToneGenerator_EndTone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToneGenerator_SetFrequency_Statics
	{
		struct ToneGenerator_eventSetFrequency_Parms
		{
			float FrequencyHz;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequencyHz_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyHz;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToneGenerator_SetFrequency_Statics::NewProp_FrequencyHz_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UToneGenerator_SetFrequency_Statics::NewProp_FrequencyHz = { "FrequencyHz", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ToneGenerator_eventSetFrequency_Parms, FrequencyHz), METADATA_PARAMS(Z_Construct_UFunction_UToneGenerator_SetFrequency_Statics::NewProp_FrequencyHz_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerator_SetFrequency_Statics::NewProp_FrequencyHz_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToneGenerator_SetFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneGenerator_SetFrequency_Statics::NewProp_FrequencyHz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToneGenerator_SetFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "Comment", "// Sets the oscillator's frequency\n" },
		{ "CPP_Default_FrequencyHz", "440.000000" },
		{ "ModuleRelativePath", "Private/Hardware/ToneGenerator/ToneGenerator.h" },
		{ "ToolTip", "Sets the oscillator's frequency" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToneGenerator_SetFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToneGenerator, nullptr, "SetFrequency", nullptr, nullptr, sizeof(ToneGenerator_eventSetFrequency_Parms), Z_Construct_UFunction_UToneGenerator_SetFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerator_SetFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToneGenerator_SetFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerator_SetFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToneGenerator_SetFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToneGenerator_SetFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UToneGenerator_StartTone_Statics
	{
		struct ToneGenerator_eventStartTone_Parms
		{
			float DurationSec;
			float PitchHz;
			float VolumeMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchHz;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UToneGenerator_StartTone_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ToneGenerator_eventStartTone_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UToneGenerator_StartTone_Statics::NewProp_PitchHz = { "PitchHz", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ToneGenerator_eventStartTone_Parms, PitchHz), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UToneGenerator_StartTone_Statics::NewProp_DurationSec = { "DurationSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ToneGenerator_eventStartTone_Parms, DurationSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToneGenerator_StartTone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneGenerator_StartTone_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneGenerator_StartTone_Statics::NewProp_PitchHz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToneGenerator_StartTone_Statics::NewProp_DurationSec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToneGenerator_StartTone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synth|Components|Audio" },
		{ "ModuleRelativePath", "Private/Hardware/ToneGenerator/ToneGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UToneGenerator_StartTone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToneGenerator, nullptr, "StartTone", nullptr, nullptr, sizeof(ToneGenerator_eventStartTone_Parms), Z_Construct_UFunction_UToneGenerator_StartTone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerator_StartTone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToneGenerator_StartTone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToneGenerator_StartTone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToneGenerator_StartTone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UToneGenerator_StartTone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UToneGenerator_NoRegister()
	{
		return UToneGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UToneGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToneGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USynthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UToneGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToneGenerator_EndTone, "EndTone" }, // 1360749166
		{ &Z_Construct_UFunction_UToneGenerator_SetFrequency, "SetFrequency" }, // 3560329994
		{ &Z_Construct_UFunction_UToneGenerator_StartTone, "StartTone" }, // 660767443
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToneGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Hardware/ToneGenerator/ToneGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Hardware/ToneGenerator/ToneGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToneGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToneGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UToneGenerator_Statics::ClassParams = {
		&UToneGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UToneGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToneGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToneGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UToneGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UToneGenerator, 3690567184);
	template<> RODENTVR_API UClass* StaticClass<UToneGenerator>()
	{
		return UToneGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UToneGenerator(Z_Construct_UClass_UToneGenerator, &UToneGenerator::StaticClass, TEXT("/Script/RodentVR"), TEXT("UToneGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToneGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

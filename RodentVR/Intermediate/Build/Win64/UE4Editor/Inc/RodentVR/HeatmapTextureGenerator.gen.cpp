// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/BehaviorRecording/HeatmapTextureGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeatmapTextureGenerator() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UHeatmapTextureGenerator_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UHeatmapTextureGenerator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UColorGradient_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UBehaviorSnapshot_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UHeatmapTextureGenerator::execCreateHeatmapTexture)
	{
		P_GET_STRUCT(FVector,Z_Param_HeatmapStart);
		P_GET_STRUCT(FVector,Z_Param_HeatmapEnd);
		P_GET_PROPERTY(FIntProperty,Z_Param_BucketSize);
		P_GET_TARRAY(UBehaviorSnapshot*,Z_Param_Snapshots);
		P_GET_OBJECT(UColorGradient,Z_Param_ColorGradient);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UHeatmapTextureGenerator::CreateHeatmapTexture(Z_Param_HeatmapStart,Z_Param_HeatmapEnd,Z_Param_BucketSize,Z_Param_Snapshots,Z_Param_ColorGradient);
		P_NATIVE_END;
	}
	void UHeatmapTextureGenerator::StaticRegisterNativesUHeatmapTextureGenerator()
	{
		UClass* Class = UHeatmapTextureGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateHeatmapTexture", &UHeatmapTextureGenerator::execCreateHeatmapTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics
	{
		struct HeatmapTextureGenerator_eventCreateHeatmapTexture_Parms
		{
			FVector HeatmapStart;
			FVector HeatmapEnd;
			int32 BucketSize;
			TArray<UBehaviorSnapshot*> Snapshots;
			UColorGradient* ColorGradient;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorGradient;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Snapshots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Snapshots_Inner;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BucketSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeatmapEnd;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeatmapStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeatmapTextureGenerator_eventCreateHeatmapTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::NewProp_ColorGradient = { "ColorGradient", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeatmapTextureGenerator_eventCreateHeatmapTexture_Parms, ColorGradient), Z_Construct_UClass_UColorGradient_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::NewProp_Snapshots = { "Snapshots", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeatmapTextureGenerator_eventCreateHeatmapTexture_Parms, Snapshots), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::NewProp_Snapshots_Inner = { "Snapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBehaviorSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::NewProp_BucketSize = { "BucketSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeatmapTextureGenerator_eventCreateHeatmapTexture_Parms, BucketSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::NewProp_HeatmapEnd = { "HeatmapEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeatmapTextureGenerator_eventCreateHeatmapTexture_Parms, HeatmapEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::NewProp_HeatmapStart = { "HeatmapStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeatmapTextureGenerator_eventCreateHeatmapTexture_Parms, HeatmapStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::NewProp_ColorGradient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::NewProp_Snapshots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::NewProp_Snapshots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::NewProp_BucketSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::NewProp_HeatmapEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::NewProp_HeatmapStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/HeatmapTextureGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeatmapTextureGenerator, nullptr, "CreateHeatmapTexture", nullptr, nullptr, sizeof(HeatmapTextureGenerator_eventCreateHeatmapTexture_Parms), Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHeatmapTextureGenerator_NoRegister()
	{
		return UHeatmapTextureGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UHeatmapTextureGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeatmapTextureGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeatmapTextureGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeatmapTextureGenerator_CreateHeatmapTexture, "CreateHeatmapTexture" }, // 3248332970
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeatmapTextureGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BehaviorRecording/HeatmapTextureGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/HeatmapTextureGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeatmapTextureGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeatmapTextureGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeatmapTextureGenerator_Statics::ClassParams = {
		&UHeatmapTextureGenerator::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeatmapTextureGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeatmapTextureGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeatmapTextureGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeatmapTextureGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeatmapTextureGenerator, 3600687030);
	template<> RODENTVR_API UClass* StaticClass<UHeatmapTextureGenerator>()
	{
		return UHeatmapTextureGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeatmapTextureGenerator(Z_Construct_UClass_UHeatmapTextureGenerator, &UHeatmapTextureGenerator::StaticClass, TEXT("/Script/RodentVR"), TEXT("UHeatmapTextureGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeatmapTextureGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

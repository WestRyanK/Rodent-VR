// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/BehaviorRecording/Heatmap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeatmap() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_AHeatmap_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_AHeatmap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UClass* Z_Construct_UClass_UColorGradient_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UBehaviorSnapshot_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHeatmap::execInitHeatmapMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitHeatmapMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeatmap::execUpdateHeatmap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHeatmap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeatmap::execSetColorGradient)
	{
		P_GET_OBJECT(UColorGradient,Z_Param_ColorGradientVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorGradient(Z_Param_ColorGradientVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeatmap::execGetColorGradient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UColorGradient**)Z_Param__Result=P_THIS->GetColorGradient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeatmap::execSetIsHeatmapVisible)
	{
		P_GET_UBOOL(Z_Param_IsHeatmapVisibleVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsHeatmapVisible(Z_Param_IsHeatmapVisibleVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeatmap::execGetIsHeatmapVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsHeatmapVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeatmap::execSetMazeActor)
	{
		P_GET_OBJECT(AActor,Z_Param_MazeActorVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMazeActor(Z_Param_MazeActorVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeatmap::execGetMazeActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetMazeActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeatmap::execSetBucketSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BucketSizeVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBucketSize(Z_Param_BucketSizeVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeatmap::execGetBucketSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBucketSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeatmap::execSetSnapshots)
	{
		P_GET_TARRAY(UBehaviorSnapshot*,Z_Param_SnapshotsVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSnapshots(Z_Param_SnapshotsVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeatmap::execGetSnapshots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UBehaviorSnapshot*>*)Z_Param__Result=P_THIS->GetSnapshots();
		P_NATIVE_END;
	}
	void AHeatmap::StaticRegisterNativesAHeatmap()
	{
		UClass* Class = AHeatmap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBucketSize", &AHeatmap::execGetBucketSize },
			{ "GetColorGradient", &AHeatmap::execGetColorGradient },
			{ "GetIsHeatmapVisible", &AHeatmap::execGetIsHeatmapVisible },
			{ "GetMazeActor", &AHeatmap::execGetMazeActor },
			{ "GetSnapshots", &AHeatmap::execGetSnapshots },
			{ "InitHeatmapMaterial", &AHeatmap::execInitHeatmapMaterial },
			{ "SetBucketSize", &AHeatmap::execSetBucketSize },
			{ "SetColorGradient", &AHeatmap::execSetColorGradient },
			{ "SetIsHeatmapVisible", &AHeatmap::execSetIsHeatmapVisible },
			{ "SetMazeActor", &AHeatmap::execSetMazeActor },
			{ "SetSnapshots", &AHeatmap::execSetSnapshots },
			{ "UpdateHeatmap", &AHeatmap::execUpdateHeatmap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHeatmap_GetBucketSize_Statics
	{
		struct Heatmap_eventGetBucketSize_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AHeatmap_GetBucketSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Heatmap_eventGetBucketSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeatmap_GetBucketSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeatmap_GetBucketSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeatmap_GetBucketSize_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeatmap_GetBucketSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeatmap, nullptr, "GetBucketSize", nullptr, nullptr, sizeof(Heatmap_eventGetBucketSize_Parms), Z_Construct_UFunction_AHeatmap_GetBucketSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_GetBucketSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeatmap_GetBucketSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_GetBucketSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeatmap_GetBucketSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeatmap_GetBucketSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeatmap_GetColorGradient_Statics
	{
		struct Heatmap_eventGetColorGradient_Parms
		{
			UColorGradient* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeatmap_GetColorGradient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Heatmap_eventGetColorGradient_Parms, ReturnValue), Z_Construct_UClass_UColorGradient_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeatmap_GetColorGradient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeatmap_GetColorGradient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeatmap_GetColorGradient_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeatmap_GetColorGradient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeatmap, nullptr, "GetColorGradient", nullptr, nullptr, sizeof(Heatmap_eventGetColorGradient_Parms), Z_Construct_UFunction_AHeatmap_GetColorGradient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_GetColorGradient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeatmap_GetColorGradient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_GetColorGradient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeatmap_GetColorGradient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeatmap_GetColorGradient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeatmap_GetIsHeatmapVisible_Statics
	{
		struct Heatmap_eventGetIsHeatmapVisible_Parms
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
	void Z_Construct_UFunction_AHeatmap_GetIsHeatmapVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Heatmap_eventGetIsHeatmapVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeatmap_GetIsHeatmapVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Heatmap_eventGetIsHeatmapVisible_Parms), &Z_Construct_UFunction_AHeatmap_GetIsHeatmapVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeatmap_GetIsHeatmapVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeatmap_GetIsHeatmapVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeatmap_GetIsHeatmapVisible_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeatmap_GetIsHeatmapVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeatmap, nullptr, "GetIsHeatmapVisible", nullptr, nullptr, sizeof(Heatmap_eventGetIsHeatmapVisible_Parms), Z_Construct_UFunction_AHeatmap_GetIsHeatmapVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_GetIsHeatmapVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeatmap_GetIsHeatmapVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_GetIsHeatmapVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeatmap_GetIsHeatmapVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeatmap_GetIsHeatmapVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeatmap_GetMazeActor_Statics
	{
		struct Heatmap_eventGetMazeActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeatmap_GetMazeActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Heatmap_eventGetMazeActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeatmap_GetMazeActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeatmap_GetMazeActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeatmap_GetMazeActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeatmap_GetMazeActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeatmap, nullptr, "GetMazeActor", nullptr, nullptr, sizeof(Heatmap_eventGetMazeActor_Parms), Z_Construct_UFunction_AHeatmap_GetMazeActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_GetMazeActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeatmap_GetMazeActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_GetMazeActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeatmap_GetMazeActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeatmap_GetMazeActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeatmap_GetSnapshots_Statics
	{
		struct Heatmap_eventGetSnapshots_Parms
		{
			TArray<UBehaviorSnapshot*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHeatmap_GetSnapshots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Heatmap_eventGetSnapshots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeatmap_GetSnapshots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBehaviorSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeatmap_GetSnapshots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeatmap_GetSnapshots_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeatmap_GetSnapshots_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeatmap_GetSnapshots_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeatmap_GetSnapshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeatmap, nullptr, "GetSnapshots", nullptr, nullptr, sizeof(Heatmap_eventGetSnapshots_Parms), Z_Construct_UFunction_AHeatmap_GetSnapshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_GetSnapshots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeatmap_GetSnapshots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_GetSnapshots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeatmap_GetSnapshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeatmap_GetSnapshots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeatmap_InitHeatmapMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeatmap_InitHeatmapMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeatmap_InitHeatmapMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeatmap, nullptr, "InitHeatmapMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeatmap_InitHeatmapMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_InitHeatmapMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeatmap_InitHeatmapMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeatmap_InitHeatmapMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeatmap_SetBucketSize_Statics
	{
		struct Heatmap_eventSetBucketSize_Parms
		{
			int32 BucketSizeVal;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BucketSizeVal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AHeatmap_SetBucketSize_Statics::NewProp_BucketSizeVal = { "BucketSizeVal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Heatmap_eventSetBucketSize_Parms, BucketSizeVal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeatmap_SetBucketSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeatmap_SetBucketSize_Statics::NewProp_BucketSizeVal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeatmap_SetBucketSize_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeatmap_SetBucketSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeatmap, nullptr, "SetBucketSize", nullptr, nullptr, sizeof(Heatmap_eventSetBucketSize_Parms), Z_Construct_UFunction_AHeatmap_SetBucketSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_SetBucketSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeatmap_SetBucketSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_SetBucketSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeatmap_SetBucketSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeatmap_SetBucketSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeatmap_SetColorGradient_Statics
	{
		struct Heatmap_eventSetColorGradient_Parms
		{
			UColorGradient* ColorGradientVal;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorGradientVal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeatmap_SetColorGradient_Statics::NewProp_ColorGradientVal = { "ColorGradientVal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Heatmap_eventSetColorGradient_Parms, ColorGradientVal), Z_Construct_UClass_UColorGradient_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeatmap_SetColorGradient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeatmap_SetColorGradient_Statics::NewProp_ColorGradientVal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeatmap_SetColorGradient_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeatmap_SetColorGradient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeatmap, nullptr, "SetColorGradient", nullptr, nullptr, sizeof(Heatmap_eventSetColorGradient_Parms), Z_Construct_UFunction_AHeatmap_SetColorGradient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_SetColorGradient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeatmap_SetColorGradient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_SetColorGradient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeatmap_SetColorGradient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeatmap_SetColorGradient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeatmap_SetIsHeatmapVisible_Statics
	{
		struct Heatmap_eventSetIsHeatmapVisible_Parms
		{
			bool IsHeatmapVisibleVal;
		};
		static void NewProp_IsHeatmapVisibleVal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHeatmapVisibleVal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHeatmap_SetIsHeatmapVisible_Statics::NewProp_IsHeatmapVisibleVal_SetBit(void* Obj)
	{
		((Heatmap_eventSetIsHeatmapVisible_Parms*)Obj)->IsHeatmapVisibleVal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeatmap_SetIsHeatmapVisible_Statics::NewProp_IsHeatmapVisibleVal = { "IsHeatmapVisibleVal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Heatmap_eventSetIsHeatmapVisible_Parms), &Z_Construct_UFunction_AHeatmap_SetIsHeatmapVisible_Statics::NewProp_IsHeatmapVisibleVal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeatmap_SetIsHeatmapVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeatmap_SetIsHeatmapVisible_Statics::NewProp_IsHeatmapVisibleVal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeatmap_SetIsHeatmapVisible_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeatmap_SetIsHeatmapVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeatmap, nullptr, "SetIsHeatmapVisible", nullptr, nullptr, sizeof(Heatmap_eventSetIsHeatmapVisible_Parms), Z_Construct_UFunction_AHeatmap_SetIsHeatmapVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_SetIsHeatmapVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeatmap_SetIsHeatmapVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_SetIsHeatmapVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeatmap_SetIsHeatmapVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeatmap_SetIsHeatmapVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeatmap_SetMazeActor_Statics
	{
		struct Heatmap_eventSetMazeActor_Parms
		{
			AActor* MazeActorVal;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MazeActorVal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeatmap_SetMazeActor_Statics::NewProp_MazeActorVal = { "MazeActorVal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Heatmap_eventSetMazeActor_Parms, MazeActorVal), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeatmap_SetMazeActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeatmap_SetMazeActor_Statics::NewProp_MazeActorVal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeatmap_SetMazeActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeatmap_SetMazeActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeatmap, nullptr, "SetMazeActor", nullptr, nullptr, sizeof(Heatmap_eventSetMazeActor_Parms), Z_Construct_UFunction_AHeatmap_SetMazeActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_SetMazeActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeatmap_SetMazeActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_SetMazeActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeatmap_SetMazeActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeatmap_SetMazeActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeatmap_SetSnapshots_Statics
	{
		struct Heatmap_eventSetSnapshots_Parms
		{
			TArray<UBehaviorSnapshot*> SnapshotsVal;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SnapshotsVal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnapshotsVal_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHeatmap_SetSnapshots_Statics::NewProp_SnapshotsVal = { "SnapshotsVal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Heatmap_eventSetSnapshots_Parms, SnapshotsVal), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeatmap_SetSnapshots_Statics::NewProp_SnapshotsVal_Inner = { "SnapshotsVal", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBehaviorSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeatmap_SetSnapshots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeatmap_SetSnapshots_Statics::NewProp_SnapshotsVal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeatmap_SetSnapshots_Statics::NewProp_SnapshotsVal_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeatmap_SetSnapshots_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeatmap_SetSnapshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeatmap, nullptr, "SetSnapshots", nullptr, nullptr, sizeof(Heatmap_eventSetSnapshots_Parms), Z_Construct_UFunction_AHeatmap_SetSnapshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_SetSnapshots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeatmap_SetSnapshots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_SetSnapshots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeatmap_SetSnapshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeatmap_SetSnapshots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeatmap_UpdateHeatmap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeatmap_UpdateHeatmap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeatmap_UpdateHeatmap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeatmap, nullptr, "UpdateHeatmap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeatmap_UpdateHeatmap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeatmap_UpdateHeatmap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeatmap_UpdateHeatmap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeatmap_UpdateHeatmap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHeatmap_NoRegister()
	{
		return AHeatmap::StaticClass();
	}
	struct Z_Construct_UClass_AHeatmap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatmapMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeatmapMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatmapMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeatmapMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGradient_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorGradient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHeatmapVisible_MetaData[];
#endif
		static void NewProp_IsHeatmapVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHeatmapVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MazeActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BucketSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BucketSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snapshots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Snapshots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Snapshots_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHeatmap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHeatmap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHeatmap_GetBucketSize, "GetBucketSize" }, // 1796924661
		{ &Z_Construct_UFunction_AHeatmap_GetColorGradient, "GetColorGradient" }, // 1010644846
		{ &Z_Construct_UFunction_AHeatmap_GetIsHeatmapVisible, "GetIsHeatmapVisible" }, // 220824509
		{ &Z_Construct_UFunction_AHeatmap_GetMazeActor, "GetMazeActor" }, // 1059491777
		{ &Z_Construct_UFunction_AHeatmap_GetSnapshots, "GetSnapshots" }, // 1319450987
		{ &Z_Construct_UFunction_AHeatmap_InitHeatmapMaterial, "InitHeatmapMaterial" }, // 2612481853
		{ &Z_Construct_UFunction_AHeatmap_SetBucketSize, "SetBucketSize" }, // 1422056582
		{ &Z_Construct_UFunction_AHeatmap_SetColorGradient, "SetColorGradient" }, // 2076071206
		{ &Z_Construct_UFunction_AHeatmap_SetIsHeatmapVisible, "SetIsHeatmapVisible" }, // 2870898875
		{ &Z_Construct_UFunction_AHeatmap_SetMazeActor, "SetMazeActor" }, // 1735358447
		{ &Z_Construct_UFunction_AHeatmap_SetSnapshots, "SetSnapshots" }, // 4259064743
		{ &Z_Construct_UFunction_AHeatmap_UpdateHeatmap, "UpdateHeatmap" }, // 2014984691
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeatmap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BehaviorRecording/Heatmap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeatmap_Statics::NewProp_HeatmapMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeatmap_Statics::NewProp_HeatmapMesh = { "HeatmapMesh", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeatmap, HeatmapMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeatmap_Statics::NewProp_HeatmapMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeatmap_Statics::NewProp_HeatmapMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeatmap_Statics::NewProp_HeatmapMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeatmap_Statics::NewProp_HeatmapMaterial = { "HeatmapMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeatmap, HeatmapMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeatmap_Statics::NewProp_HeatmapMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeatmap_Statics::NewProp_HeatmapMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeatmap_Statics::NewProp_ColorGradient_MetaData[] = {
		{ "BlueprintGetter", "GetColorGradient" },
		{ "BlueprintSetter", "SetColorGradient" },
		{ "Category", "Heatmap" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeatmap_Statics::NewProp_ColorGradient = { "ColorGradient", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeatmap, ColorGradient), Z_Construct_UClass_UColorGradient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeatmap_Statics::NewProp_ColorGradient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeatmap_Statics::NewProp_ColorGradient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeatmap_Statics::NewProp_IsHeatmapVisible_MetaData[] = {
		{ "BlueprintGetter", "GetIsHeatmapVisible" },
		{ "BlueprintSetter", "SetIsHeatmapVisible" },
		{ "Category", "Heatmap" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	void Z_Construct_UClass_AHeatmap_Statics::NewProp_IsHeatmapVisible_SetBit(void* Obj)
	{
		((AHeatmap*)Obj)->IsHeatmapVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeatmap_Statics::NewProp_IsHeatmapVisible = { "IsHeatmapVisible", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHeatmap), &Z_Construct_UClass_AHeatmap_Statics::NewProp_IsHeatmapVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHeatmap_Statics::NewProp_IsHeatmapVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeatmap_Statics::NewProp_IsHeatmapVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeatmap_Statics::NewProp_MazeActor_MetaData[] = {
		{ "BlueprintGetter", "GetMazeActor" },
		{ "BlueprintSetter", "SetMazeActor" },
		{ "Category", "Heatmap" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeatmap_Statics::NewProp_MazeActor = { "MazeActor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeatmap, MazeActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeatmap_Statics::NewProp_MazeActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeatmap_Statics::NewProp_MazeActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeatmap_Statics::NewProp_BucketSize_MetaData[] = {
		{ "BlueprintGetter", "GetBucketSize" },
		{ "BlueprintSetter", "SetBucketSize" },
		{ "Category", "Heatmap" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AHeatmap_Statics::NewProp_BucketSize = { "BucketSize", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeatmap, BucketSize), METADATA_PARAMS(Z_Construct_UClass_AHeatmap_Statics::NewProp_BucketSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeatmap_Statics::NewProp_BucketSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeatmap_Statics::NewProp_Snapshots_MetaData[] = {
		{ "BlueprintGetter", "GetSnapshots" },
		{ "BlueprintSetter", "SetSnapshots" },
		{ "Category", "Heatmap" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/Heatmap.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHeatmap_Statics::NewProp_Snapshots = { "Snapshots", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeatmap, Snapshots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHeatmap_Statics::NewProp_Snapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeatmap_Statics::NewProp_Snapshots_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeatmap_Statics::NewProp_Snapshots_Inner = { "Snapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBehaviorSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeatmap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeatmap_Statics::NewProp_HeatmapMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeatmap_Statics::NewProp_HeatmapMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeatmap_Statics::NewProp_ColorGradient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeatmap_Statics::NewProp_IsHeatmapVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeatmap_Statics::NewProp_MazeActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeatmap_Statics::NewProp_BucketSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeatmap_Statics::NewProp_Snapshots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeatmap_Statics::NewProp_Snapshots_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHeatmap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeatmap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHeatmap_Statics::ClassParams = {
		&AHeatmap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHeatmap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHeatmap_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHeatmap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHeatmap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHeatmap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHeatmap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHeatmap, 272358566);
	template<> RODENTVR_API UClass* StaticClass<AHeatmap>()
	{
		return AHeatmap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeatmap(Z_Construct_UClass_AHeatmap, &AHeatmap::StaticClass, TEXT("/Script/RodentVR"), TEXT("AHeatmap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeatmap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

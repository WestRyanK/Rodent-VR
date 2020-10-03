// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/BehaviorRecording/BehaviorPath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorPath() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_ABehaviorPath_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_ABehaviorPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	RODENTVR_API UClass* Z_Construct_UClass_UBehaviorSnapshot_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABehaviorPath::execGetTransformFromSnapshot)
	{
		P_GET_OBJECT(UBehaviorSnapshot,Z_Param_Snapshot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransformFromSnapshot(Z_Param_Snapshot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABehaviorPath::execInitPathMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitPathMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABehaviorPath::execUpdatePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABehaviorPath::execSetIsPathVisible)
	{
		P_GET_UBOOL(Z_Param_IsPathVisibleVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsPathVisible(Z_Param_IsPathVisibleVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABehaviorPath::execGetIsPathVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsPathVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABehaviorPath::execSetPathColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_PathColorVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPathColor(Z_Param_PathColorVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABehaviorPath::execGetPathColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetPathColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABehaviorPath::execSetPathWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PathWidthVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPathWidth(Z_Param_PathWidthVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABehaviorPath::execGetPathWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPathWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABehaviorPath::execSetSnapshots)
	{
		P_GET_TARRAY(UBehaviorSnapshot*,Z_Param_SnapshotsVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSnapshots(Z_Param_SnapshotsVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABehaviorPath::execGetSnapshots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UBehaviorSnapshot*>*)Z_Param__Result=P_THIS->GetSnapshots();
		P_NATIVE_END;
	}
	void ABehaviorPath::StaticRegisterNativesABehaviorPath()
	{
		UClass* Class = ABehaviorPath::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsPathVisible", &ABehaviorPath::execGetIsPathVisible },
			{ "GetPathColor", &ABehaviorPath::execGetPathColor },
			{ "GetPathWidth", &ABehaviorPath::execGetPathWidth },
			{ "GetSnapshots", &ABehaviorPath::execGetSnapshots },
			{ "GetTransformFromSnapshot", &ABehaviorPath::execGetTransformFromSnapshot },
			{ "InitPathMaterial", &ABehaviorPath::execInitPathMaterial },
			{ "SetIsPathVisible", &ABehaviorPath::execSetIsPathVisible },
			{ "SetPathColor", &ABehaviorPath::execSetPathColor },
			{ "SetPathWidth", &ABehaviorPath::execSetPathWidth },
			{ "SetSnapshots", &ABehaviorPath::execSetSnapshots },
			{ "UpdatePath", &ABehaviorPath::execUpdatePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABehaviorPath_GetIsPathVisible_Statics
	{
		struct BehaviorPath_eventGetIsPathVisible_Parms
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
	void Z_Construct_UFunction_ABehaviorPath_GetIsPathVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BehaviorPath_eventGetIsPathVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABehaviorPath_GetIsPathVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BehaviorPath_eventGetIsPathVisible_Parms), &Z_Construct_UFunction_ABehaviorPath_GetIsPathVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABehaviorPath_GetIsPathVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABehaviorPath_GetIsPathVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABehaviorPath_GetIsPathVisible_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABehaviorPath_GetIsPathVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABehaviorPath, nullptr, "GetIsPathVisible", nullptr, nullptr, sizeof(BehaviorPath_eventGetIsPathVisible_Parms), Z_Construct_UFunction_ABehaviorPath_GetIsPathVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_GetIsPathVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABehaviorPath_GetIsPathVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_GetIsPathVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABehaviorPath_GetIsPathVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABehaviorPath_GetIsPathVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABehaviorPath_GetPathColor_Statics
	{
		struct BehaviorPath_eventGetPathColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABehaviorPath_GetPathColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPath_eventGetPathColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABehaviorPath_GetPathColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABehaviorPath_GetPathColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABehaviorPath_GetPathColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABehaviorPath_GetPathColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABehaviorPath, nullptr, "GetPathColor", nullptr, nullptr, sizeof(BehaviorPath_eventGetPathColor_Parms), Z_Construct_UFunction_ABehaviorPath_GetPathColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_GetPathColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABehaviorPath_GetPathColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_GetPathColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABehaviorPath_GetPathColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABehaviorPath_GetPathColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABehaviorPath_GetPathWidth_Statics
	{
		struct BehaviorPath_eventGetPathWidth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABehaviorPath_GetPathWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPath_eventGetPathWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABehaviorPath_GetPathWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABehaviorPath_GetPathWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABehaviorPath_GetPathWidth_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABehaviorPath_GetPathWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABehaviorPath, nullptr, "GetPathWidth", nullptr, nullptr, sizeof(BehaviorPath_eventGetPathWidth_Parms), Z_Construct_UFunction_ABehaviorPath_GetPathWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_GetPathWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABehaviorPath_GetPathWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_GetPathWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABehaviorPath_GetPathWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABehaviorPath_GetPathWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABehaviorPath_GetSnapshots_Statics
	{
		struct BehaviorPath_eventGetSnapshots_Parms
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABehaviorPath_GetSnapshots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPath_eventGetSnapshots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABehaviorPath_GetSnapshots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBehaviorSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABehaviorPath_GetSnapshots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABehaviorPath_GetSnapshots_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABehaviorPath_GetSnapshots_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABehaviorPath_GetSnapshots_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABehaviorPath_GetSnapshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABehaviorPath, nullptr, "GetSnapshots", nullptr, nullptr, sizeof(BehaviorPath_eventGetSnapshots_Parms), Z_Construct_UFunction_ABehaviorPath_GetSnapshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_GetSnapshots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABehaviorPath_GetSnapshots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_GetSnapshots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABehaviorPath_GetSnapshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABehaviorPath_GetSnapshots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABehaviorPath_GetTransformFromSnapshot_Statics
	{
		struct BehaviorPath_eventGetTransformFromSnapshot_Parms
		{
			UBehaviorSnapshot* Snapshot;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Snapshot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABehaviorPath_GetTransformFromSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPath_eventGetTransformFromSnapshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABehaviorPath_GetTransformFromSnapshot_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPath_eventGetTransformFromSnapshot_Parms, Snapshot), Z_Construct_UClass_UBehaviorSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABehaviorPath_GetTransformFromSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABehaviorPath_GetTransformFromSnapshot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABehaviorPath_GetTransformFromSnapshot_Statics::NewProp_Snapshot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABehaviorPath_GetTransformFromSnapshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABehaviorPath_GetTransformFromSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABehaviorPath, nullptr, "GetTransformFromSnapshot", nullptr, nullptr, sizeof(BehaviorPath_eventGetTransformFromSnapshot_Parms), Z_Construct_UFunction_ABehaviorPath_GetTransformFromSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_GetTransformFromSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABehaviorPath_GetTransformFromSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_GetTransformFromSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABehaviorPath_GetTransformFromSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABehaviorPath_GetTransformFromSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABehaviorPath_InitPathMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABehaviorPath_InitPathMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABehaviorPath_InitPathMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABehaviorPath, nullptr, "InitPathMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABehaviorPath_InitPathMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_InitPathMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABehaviorPath_InitPathMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABehaviorPath_InitPathMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABehaviorPath_SetIsPathVisible_Statics
	{
		struct BehaviorPath_eventSetIsPathVisible_Parms
		{
			bool IsPathVisibleVal;
		};
		static void NewProp_IsPathVisibleVal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPathVisibleVal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABehaviorPath_SetIsPathVisible_Statics::NewProp_IsPathVisibleVal_SetBit(void* Obj)
	{
		((BehaviorPath_eventSetIsPathVisible_Parms*)Obj)->IsPathVisibleVal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABehaviorPath_SetIsPathVisible_Statics::NewProp_IsPathVisibleVal = { "IsPathVisibleVal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BehaviorPath_eventSetIsPathVisible_Parms), &Z_Construct_UFunction_ABehaviorPath_SetIsPathVisible_Statics::NewProp_IsPathVisibleVal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABehaviorPath_SetIsPathVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABehaviorPath_SetIsPathVisible_Statics::NewProp_IsPathVisibleVal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABehaviorPath_SetIsPathVisible_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABehaviorPath_SetIsPathVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABehaviorPath, nullptr, "SetIsPathVisible", nullptr, nullptr, sizeof(BehaviorPath_eventSetIsPathVisible_Parms), Z_Construct_UFunction_ABehaviorPath_SetIsPathVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_SetIsPathVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABehaviorPath_SetIsPathVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_SetIsPathVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABehaviorPath_SetIsPathVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABehaviorPath_SetIsPathVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABehaviorPath_SetPathColor_Statics
	{
		struct BehaviorPath_eventSetPathColor_Parms
		{
			FLinearColor PathColorVal;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathColorVal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABehaviorPath_SetPathColor_Statics::NewProp_PathColorVal = { "PathColorVal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPath_eventSetPathColor_Parms, PathColorVal), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABehaviorPath_SetPathColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABehaviorPath_SetPathColor_Statics::NewProp_PathColorVal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABehaviorPath_SetPathColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABehaviorPath_SetPathColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABehaviorPath, nullptr, "SetPathColor", nullptr, nullptr, sizeof(BehaviorPath_eventSetPathColor_Parms), Z_Construct_UFunction_ABehaviorPath_SetPathColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_SetPathColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABehaviorPath_SetPathColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_SetPathColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABehaviorPath_SetPathColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABehaviorPath_SetPathColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABehaviorPath_SetPathWidth_Statics
	{
		struct BehaviorPath_eventSetPathWidth_Parms
		{
			float PathWidthVal;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathWidthVal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABehaviorPath_SetPathWidth_Statics::NewProp_PathWidthVal = { "PathWidthVal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPath_eventSetPathWidth_Parms, PathWidthVal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABehaviorPath_SetPathWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABehaviorPath_SetPathWidth_Statics::NewProp_PathWidthVal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABehaviorPath_SetPathWidth_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABehaviorPath_SetPathWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABehaviorPath, nullptr, "SetPathWidth", nullptr, nullptr, sizeof(BehaviorPath_eventSetPathWidth_Parms), Z_Construct_UFunction_ABehaviorPath_SetPathWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_SetPathWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABehaviorPath_SetPathWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_SetPathWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABehaviorPath_SetPathWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABehaviorPath_SetPathWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABehaviorPath_SetSnapshots_Statics
	{
		struct BehaviorPath_eventSetSnapshots_Parms
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABehaviorPath_SetSnapshots_Statics::NewProp_SnapshotsVal = { "SnapshotsVal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorPath_eventSetSnapshots_Parms, SnapshotsVal), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABehaviorPath_SetSnapshots_Statics::NewProp_SnapshotsVal_Inner = { "SnapshotsVal", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBehaviorSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABehaviorPath_SetSnapshots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABehaviorPath_SetSnapshots_Statics::NewProp_SnapshotsVal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABehaviorPath_SetSnapshots_Statics::NewProp_SnapshotsVal_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABehaviorPath_SetSnapshots_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABehaviorPath_SetSnapshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABehaviorPath, nullptr, "SetSnapshots", nullptr, nullptr, sizeof(BehaviorPath_eventSetSnapshots_Parms), Z_Construct_UFunction_ABehaviorPath_SetSnapshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_SetSnapshots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABehaviorPath_SetSnapshots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_SetSnapshots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABehaviorPath_SetSnapshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABehaviorPath_SetSnapshots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABehaviorPath_UpdatePath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABehaviorPath_UpdatePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABehaviorPath_UpdatePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABehaviorPath, nullptr, "UpdatePath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABehaviorPath_UpdatePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABehaviorPath_UpdatePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABehaviorPath_UpdatePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABehaviorPath_UpdatePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABehaviorPath_NoRegister()
	{
		return ABehaviorPath::StaticClass();
	}
	struct Z_Construct_UClass_ABehaviorPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorPathNodesInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorPathNodesInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPathVisible_MetaData[];
#endif
		static void NewProp_IsPathVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPathVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snapshots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Snapshots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Snapshots_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABehaviorPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABehaviorPath_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABehaviorPath_GetIsPathVisible, "GetIsPathVisible" }, // 1172410598
		{ &Z_Construct_UFunction_ABehaviorPath_GetPathColor, "GetPathColor" }, // 2504277192
		{ &Z_Construct_UFunction_ABehaviorPath_GetPathWidth, "GetPathWidth" }, // 2978071320
		{ &Z_Construct_UFunction_ABehaviorPath_GetSnapshots, "GetSnapshots" }, // 631176185
		{ &Z_Construct_UFunction_ABehaviorPath_GetTransformFromSnapshot, "GetTransformFromSnapshot" }, // 1938188851
		{ &Z_Construct_UFunction_ABehaviorPath_InitPathMaterial, "InitPathMaterial" }, // 1618853050
		{ &Z_Construct_UFunction_ABehaviorPath_SetIsPathVisible, "SetIsPathVisible" }, // 1036451418
		{ &Z_Construct_UFunction_ABehaviorPath_SetPathColor, "SetPathColor" }, // 3832391862
		{ &Z_Construct_UFunction_ABehaviorPath_SetPathWidth, "SetPathWidth" }, // 1000885711
		{ &Z_Construct_UFunction_ABehaviorPath_SetSnapshots, "SetSnapshots" }, // 492317363
		{ &Z_Construct_UFunction_ABehaviorPath_UpdatePath, "UpdatePath" }, // 1902892744
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABehaviorPath_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BehaviorRecording/BehaviorPath.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABehaviorPath_Statics::NewProp_BehaviorPathNodesInstances_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABehaviorPath_Statics::NewProp_BehaviorPathNodesInstances = { "BehaviorPathNodesInstances", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABehaviorPath, BehaviorPathNodesInstances), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABehaviorPath_Statics::NewProp_BehaviorPathNodesInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABehaviorPath_Statics::NewProp_BehaviorPathNodesInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABehaviorPath_Statics::NewProp_PathMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABehaviorPath_Statics::NewProp_PathMaterial = { "PathMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABehaviorPath, PathMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABehaviorPath_Statics::NewProp_PathMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABehaviorPath_Statics::NewProp_PathMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABehaviorPath_Statics::NewProp_IsPathVisible_MetaData[] = {
		{ "BlueprintGetter", "GetIsPathVisible" },
		{ "BlueprintSetter", "SetIsPathVisible" },
		{ "Category", "BehaviorPath" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
	void Z_Construct_UClass_ABehaviorPath_Statics::NewProp_IsPathVisible_SetBit(void* Obj)
	{
		((ABehaviorPath*)Obj)->IsPathVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABehaviorPath_Statics::NewProp_IsPathVisible = { "IsPathVisible", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABehaviorPath), &Z_Construct_UClass_ABehaviorPath_Statics::NewProp_IsPathVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABehaviorPath_Statics::NewProp_IsPathVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABehaviorPath_Statics::NewProp_IsPathVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABehaviorPath_Statics::NewProp_PathColor_MetaData[] = {
		{ "BlueprintGetter", "GetPathColor" },
		{ "BlueprintSetter", "SetPathColor" },
		{ "Category", "BehaviorPath" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABehaviorPath_Statics::NewProp_PathColor = { "PathColor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABehaviorPath, PathColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABehaviorPath_Statics::NewProp_PathColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABehaviorPath_Statics::NewProp_PathColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABehaviorPath_Statics::NewProp_PathWidth_MetaData[] = {
		{ "BlueprintGetter", "GetPathWidth" },
		{ "BlueprintSetter", "SetPathWidth" },
		{ "Category", "BehaviorPath" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABehaviorPath_Statics::NewProp_PathWidth = { "PathWidth", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABehaviorPath, PathWidth), METADATA_PARAMS(Z_Construct_UClass_ABehaviorPath_Statics::NewProp_PathWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABehaviorPath_Statics::NewProp_PathWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABehaviorPath_Statics::NewProp_Snapshots_MetaData[] = {
		{ "BlueprintGetter", "GetSnapshots" },
		{ "BlueprintSetter", "SetSnapshots" },
		{ "Category", "BehaviorPath" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorPath.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABehaviorPath_Statics::NewProp_Snapshots = { "Snapshots", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABehaviorPath, Snapshots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABehaviorPath_Statics::NewProp_Snapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABehaviorPath_Statics::NewProp_Snapshots_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABehaviorPath_Statics::NewProp_Snapshots_Inner = { "Snapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBehaviorSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABehaviorPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABehaviorPath_Statics::NewProp_BehaviorPathNodesInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABehaviorPath_Statics::NewProp_PathMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABehaviorPath_Statics::NewProp_IsPathVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABehaviorPath_Statics::NewProp_PathColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABehaviorPath_Statics::NewProp_PathWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABehaviorPath_Statics::NewProp_Snapshots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABehaviorPath_Statics::NewProp_Snapshots_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABehaviorPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABehaviorPath>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABehaviorPath_Statics::ClassParams = {
		&ABehaviorPath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABehaviorPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABehaviorPath_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABehaviorPath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABehaviorPath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABehaviorPath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABehaviorPath_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABehaviorPath, 2385877857);
	template<> RODENTVR_API UClass* StaticClass<ABehaviorPath>()
	{
		return ABehaviorPath::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABehaviorPath(Z_Construct_UClass_ABehaviorPath, &ABehaviorPath::StaticClass, TEXT("/Script/RodentVR"), TEXT("ABehaviorPath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABehaviorPath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

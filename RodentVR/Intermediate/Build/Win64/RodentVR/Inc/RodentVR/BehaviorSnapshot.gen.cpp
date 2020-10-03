// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/BehaviorRecording/BehaviorSnapshot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorSnapshot() {}
// Cross Module References
	RODENTVR_API UClass* Z_Construct_UClass_UBehaviorSnapshot_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UBehaviorSnapshot();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UBehaviorSnapshot::execGetCurrentRegion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentRegion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBehaviorSnapshot::execGetForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetForward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBehaviorSnapshot::execGetPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBehaviorSnapshot::execGetTimestamp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimestamp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBehaviorSnapshot::execCreateBehaviorSnapshot)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimestampVal);
		P_GET_STRUCT(FVector,Z_Param_PositionVal);
		P_GET_STRUCT(FVector,Z_Param_ForwardVal);
		P_GET_PROPERTY(FStrProperty,Z_Param_CurrentRegionVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBehaviorSnapshot**)Z_Param__Result=UBehaviorSnapshot::CreateBehaviorSnapshot(Z_Param_TimestampVal,Z_Param_PositionVal,Z_Param_ForwardVal,Z_Param_CurrentRegionVal);
		P_NATIVE_END;
	}
	void UBehaviorSnapshot::StaticRegisterNativesUBehaviorSnapshot()
	{
		UClass* Class = UBehaviorSnapshot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateBehaviorSnapshot", &UBehaviorSnapshot::execCreateBehaviorSnapshot },
			{ "GetCurrentRegion", &UBehaviorSnapshot::execGetCurrentRegion },
			{ "GetForward", &UBehaviorSnapshot::execGetForward },
			{ "GetPosition", &UBehaviorSnapshot::execGetPosition },
			{ "GetTimestamp", &UBehaviorSnapshot::execGetTimestamp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics
	{
		struct BehaviorSnapshot_eventCreateBehaviorSnapshot_Parms
		{
			float TimestampVal;
			FVector PositionVal;
			FVector ForwardVal;
			FString CurrentRegionVal;
			UBehaviorSnapshot* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentRegionVal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardVal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionVal;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimestampVal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorSnapshot_eventCreateBehaviorSnapshot_Parms, ReturnValue), Z_Construct_UClass_UBehaviorSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::NewProp_CurrentRegionVal = { "CurrentRegionVal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorSnapshot_eventCreateBehaviorSnapshot_Parms, CurrentRegionVal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::NewProp_ForwardVal = { "ForwardVal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorSnapshot_eventCreateBehaviorSnapshot_Parms, ForwardVal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::NewProp_PositionVal = { "PositionVal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorSnapshot_eventCreateBehaviorSnapshot_Parms, PositionVal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::NewProp_TimestampVal = { "TimestampVal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorSnapshot_eventCreateBehaviorSnapshot_Parms, TimestampVal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::NewProp_CurrentRegionVal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::NewProp_ForwardVal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::NewProp_PositionVal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::NewProp_TimestampVal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorSnapshot, nullptr, "CreateBehaviorSnapshot", nullptr, nullptr, sizeof(BehaviorSnapshot_eventCreateBehaviorSnapshot_Parms), Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBehaviorSnapshot_GetCurrentRegion_Statics
	{
		struct BehaviorSnapshot_eventGetCurrentRegion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviorSnapshot_GetCurrentRegion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorSnapshot_eventGetCurrentRegion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorSnapshot_GetCurrentRegion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorSnapshot_GetCurrentRegion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorSnapshot_GetCurrentRegion_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorSnapshot_GetCurrentRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorSnapshot, nullptr, "GetCurrentRegion", nullptr, nullptr, sizeof(BehaviorSnapshot_eventGetCurrentRegion_Parms), Z_Construct_UFunction_UBehaviorSnapshot_GetCurrentRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorSnapshot_GetCurrentRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorSnapshot_GetCurrentRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorSnapshot_GetCurrentRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorSnapshot_GetCurrentRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorSnapshot_GetCurrentRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBehaviorSnapshot_GetForward_Statics
	{
		struct BehaviorSnapshot_eventGetForward_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBehaviorSnapshot_GetForward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorSnapshot_eventGetForward_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorSnapshot_GetForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorSnapshot_GetForward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorSnapshot_GetForward_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorSnapshot_GetForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorSnapshot, nullptr, "GetForward", nullptr, nullptr, sizeof(BehaviorSnapshot_eventGetForward_Parms), Z_Construct_UFunction_UBehaviorSnapshot_GetForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorSnapshot_GetForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorSnapshot_GetForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorSnapshot_GetForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorSnapshot_GetForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorSnapshot_GetForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBehaviorSnapshot_GetPosition_Statics
	{
		struct BehaviorSnapshot_eventGetPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBehaviorSnapshot_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorSnapshot_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorSnapshot_GetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorSnapshot_GetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorSnapshot_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorSnapshot_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorSnapshot, nullptr, "GetPosition", nullptr, nullptr, sizeof(BehaviorSnapshot_eventGetPosition_Parms), Z_Construct_UFunction_UBehaviorSnapshot_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorSnapshot_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorSnapshot_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorSnapshot_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorSnapshot_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorSnapshot_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBehaviorSnapshot_GetTimestamp_Statics
	{
		struct BehaviorSnapshot_eventGetTimestamp_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBehaviorSnapshot_GetTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BehaviorSnapshot_eventGetTimestamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorSnapshot_GetTimestamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorSnapshot_GetTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorSnapshot_GetTimestamp_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorSnapshot_GetTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorSnapshot, nullptr, "GetTimestamp", nullptr, nullptr, sizeof(BehaviorSnapshot_eventGetTimestamp_Parms), Z_Construct_UFunction_UBehaviorSnapshot_GetTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorSnapshot_GetTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorSnapshot_GetTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorSnapshot_GetTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorSnapshot_GetTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBehaviorSnapshot_GetTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBehaviorSnapshot_NoRegister()
	{
		return UBehaviorSnapshot::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorSnapshot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Forward_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Forward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorSnapshot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBehaviorSnapshot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBehaviorSnapshot_CreateBehaviorSnapshot, "CreateBehaviorSnapshot" }, // 594407787
		{ &Z_Construct_UFunction_UBehaviorSnapshot_GetCurrentRegion, "GetCurrentRegion" }, // 3914872009
		{ &Z_Construct_UFunction_UBehaviorSnapshot_GetForward, "GetForward" }, // 73686410
		{ &Z_Construct_UFunction_UBehaviorSnapshot_GetPosition, "GetPosition" }, // 1577039170
		{ &Z_Construct_UFunction_UBehaviorSnapshot_GetTimestamp, "GetTimestamp" }, // 2405581310
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorSnapshot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BehaviorRecording/BehaviorSnapshot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorSnapshot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_CurrentRegion_MetaData[] = {
		{ "BlueprintGetter", "GetCurrentRegion" },
		{ "Category", "BehaviorSnapshot" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_CurrentRegion = { "CurrentRegion", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorSnapshot, CurrentRegion), METADATA_PARAMS(Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_CurrentRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_CurrentRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_Forward_MetaData[] = {
		{ "BlueprintGetter", "GetForward" },
		{ "Category", "BehaviorSnapshot" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorSnapshot, Forward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_Forward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_Forward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_Position_MetaData[] = {
		{ "BlueprintGetter", "GetPosition" },
		{ "Category", "BehaviorSnapshot" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorSnapshot, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_Timestamp_MetaData[] = {
		{ "BlueprintGetter", "GetTimestamp" },
		{ "Category", "BehaviorSnapshot" },
		{ "ModuleRelativePath", "Private/BehaviorRecording/BehaviorSnapshot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorSnapshot, Timestamp), METADATA_PARAMS(Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_Timestamp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_CurrentRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_Forward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorSnapshot_Statics::NewProp_Timestamp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorSnapshot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorSnapshot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorSnapshot_Statics::ClassParams = {
		&UBehaviorSnapshot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBehaviorSnapshot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorSnapshot_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorSnapshot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorSnapshot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorSnapshot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBehaviorSnapshot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBehaviorSnapshot, 1576664339);
	template<> RODENTVR_API UClass* StaticClass<UBehaviorSnapshot>()
	{
		return UBehaviorSnapshot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBehaviorSnapshot(Z_Construct_UClass_UBehaviorSnapshot, &UBehaviorSnapshot::StaticClass, TEXT("/Script/RodentVR"), TEXT("UBehaviorSnapshot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorSnapshot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/MagicLeapPlanesFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapPlanesFunctionLibrary() {}
// Cross Module References
	MAGICLEAPPLANES_API UClass* Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary_NoRegister();
	MAGICLEAPPLANES_API UClass* Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MagicLeapPlanes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MAGICLEAPPLANES_API UEnum* Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MAGICLEAPPLANES_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapPlaneResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MAGICLEAPPLANES_API UFunction* Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature();
	MAGICLEAPPLANES_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapPlanesQuery();
	MAGICLEAPPLANES_API UFunction* Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature();
	MAGICLEAPPLANES_API UEnum* Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags();
// End Cross Module References
	DEFINE_FUNCTION(UMagicLeapPlanesFunctionLibrary::execRemoveFlagsNotInQuery)
	{
		P_GET_TARRAY_REF(EMagicLeapPlaneQueryFlags,Z_Param_Out_InQueryFlags);
		P_GET_TARRAY_REF(EMagicLeapPlaneQueryFlags,Z_Param_Out_InResultFlags);
		P_GET_TARRAY_REF(EMagicLeapPlaneQueryFlags,Z_Param_Out_OutFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMagicLeapPlanesFunctionLibrary::RemoveFlagsNotInQuery(Z_Param_Out_InQueryFlags,Z_Param_Out_InResultFlags,Z_Param_Out_OutFlags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapPlanesFunctionLibrary::execReorderPlaneFlags)
	{
		P_GET_TARRAY_REF(EMagicLeapPlaneQueryFlags,Z_Param_Out_InPriority);
		P_GET_TARRAY_REF(EMagicLeapPlaneQueryFlags,Z_Param_Out_InFlagsToReorder);
		P_GET_TARRAY_REF(EMagicLeapPlaneQueryFlags,Z_Param_Out_OutReorderedFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMagicLeapPlanesFunctionLibrary::ReorderPlaneFlags(Z_Param_Out_InPriority,Z_Param_Out_InFlagsToReorder,Z_Param_Out_OutReorderedFlags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapPlanesFunctionLibrary::execGetContentScale)
	{
		P_GET_OBJECT(AActor,Z_Param_ContentActor);
		P_GET_STRUCT_REF(FMagicLeapPlaneResult,Z_Param_Out_PlaneResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UMagicLeapPlanesFunctionLibrary::GetContentScale(Z_Param_ContentActor,Z_Param_Out_PlaneResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapPlanesFunctionLibrary::execPlanesPersistentQueryBeginAsync)
	{
		P_GET_STRUCT_REF(FMagicLeapPlanesQuery,Z_Param_Out_Query);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_Handle);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapPlanesFunctionLibrary::PlanesPersistentQueryBeginAsync(Z_Param_Out_Query,Z_Param_Out_Handle,FMagicLeapPersistentPlanesResultDelegate(Z_Param_Out_ResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapPlanesFunctionLibrary::execPlanesQueryBeginAsync)
	{
		P_GET_STRUCT_REF(FMagicLeapPlanesQuery,Z_Param_Out_Query);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapPlanesFunctionLibrary::PlanesQueryBeginAsync(Z_Param_Out_Query,FMagicLeapPlanesResultDelegate(Z_Param_Out_ResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapPlanesFunctionLibrary::execRemovePersistentQuery)
	{
		P_GET_STRUCT(FGuid,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapPlanesFunctionLibrary::RemovePersistentQuery(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapPlanesFunctionLibrary::execAddPersistentQuery)
	{
		P_GET_ENUM(EMagicLeapPlaneQueryType,Z_Param_PersistentQueryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=UMagicLeapPlanesFunctionLibrary::AddPersistentQuery(EMagicLeapPlaneQueryType(Z_Param_PersistentQueryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapPlanesFunctionLibrary::execIsTrackerValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapPlanesFunctionLibrary::IsTrackerValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapPlanesFunctionLibrary::execDestroyTracker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapPlanesFunctionLibrary::DestroyTracker();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapPlanesFunctionLibrary::execCreateTracker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapPlanesFunctionLibrary::CreateTracker();
		P_NATIVE_END;
	}
	void UMagicLeapPlanesFunctionLibrary::StaticRegisterNativesUMagicLeapPlanesFunctionLibrary()
	{
		UClass* Class = UMagicLeapPlanesFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPersistentQuery", &UMagicLeapPlanesFunctionLibrary::execAddPersistentQuery },
			{ "CreateTracker", &UMagicLeapPlanesFunctionLibrary::execCreateTracker },
			{ "DestroyTracker", &UMagicLeapPlanesFunctionLibrary::execDestroyTracker },
			{ "GetContentScale", &UMagicLeapPlanesFunctionLibrary::execGetContentScale },
			{ "IsTrackerValid", &UMagicLeapPlanesFunctionLibrary::execIsTrackerValid },
			{ "PlanesPersistentQueryBeginAsync", &UMagicLeapPlanesFunctionLibrary::execPlanesPersistentQueryBeginAsync },
			{ "PlanesQueryBeginAsync", &UMagicLeapPlanesFunctionLibrary::execPlanesQueryBeginAsync },
			{ "RemoveFlagsNotInQuery", &UMagicLeapPlanesFunctionLibrary::execRemoveFlagsNotInQuery },
			{ "RemovePersistentQuery", &UMagicLeapPlanesFunctionLibrary::execRemovePersistentQuery },
			{ "ReorderPlaneFlags", &UMagicLeapPlanesFunctionLibrary::execReorderPlaneFlags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Statics
	{
		struct MagicLeapPlanesFunctionLibrary_eventAddPersistentQuery_Parms
		{
			EMagicLeapPlaneQueryType PersistentQueryType;
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PersistentQueryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PersistentQueryType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPlanesFunctionLibrary_eventAddPersistentQuery_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Statics::NewProp_PersistentQueryType = { "PersistentQueryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPlanesFunctionLibrary_eventAddPersistentQuery_Parms, PersistentQueryType), Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Statics::NewProp_PersistentQueryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Statics::NewProp_PersistentQueryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Statics::NewProp_PersistentQueryType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "Planes Function Library | MagicLeap" },
		{ "Comment", "/** Adds a new plane query. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesFunctionLibrary.h" },
		{ "ToolTip", "Adds a new plane query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary, nullptr, "AddPersistentQuery", nullptr, nullptr, sizeof(MagicLeapPlanesFunctionLibrary_eventAddPersistentQuery_Parms), Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_AddPersistentQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_CreateTracker_Statics
	{
		struct MagicLeapPlanesFunctionLibrary_eventCreateTracker_Parms
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
	void Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_CreateTracker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapPlanesFunctionLibrary_eventCreateTracker_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_CreateTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapPlanesFunctionLibrary_eventCreateTracker_Parms), &Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_CreateTracker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_CreateTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_CreateTracker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_CreateTracker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Planes Function Library | MagicLeap" },
		{ "Comment", "/** Create a planes tracker. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesFunctionLibrary.h" },
		{ "ToolTip", "Create a planes tracker." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_CreateTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary, nullptr, "CreateTracker", nullptr, nullptr, sizeof(MagicLeapPlanesFunctionLibrary_eventCreateTracker_Parms), Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_CreateTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_CreateTracker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_CreateTracker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_CreateTracker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_CreateTracker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_CreateTracker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_DestroyTracker_Statics
	{
		struct MagicLeapPlanesFunctionLibrary_eventDestroyTracker_Parms
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
	void Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_DestroyTracker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapPlanesFunctionLibrary_eventDestroyTracker_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_DestroyTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapPlanesFunctionLibrary_eventDestroyTracker_Parms), &Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_DestroyTracker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_DestroyTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_DestroyTracker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_DestroyTracker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Planes Function Library | MagicLeap" },
		{ "Comment", "/** Destroy a planes tracker. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesFunctionLibrary.h" },
		{ "ToolTip", "Destroy a planes tracker." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_DestroyTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary, nullptr, "DestroyTracker", nullptr, nullptr, sizeof(MagicLeapPlanesFunctionLibrary_eventDestroyTracker_Parms), Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_DestroyTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_DestroyTracker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_DestroyTracker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_DestroyTracker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_DestroyTracker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_DestroyTracker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics
	{
		struct MagicLeapPlanesFunctionLibrary_eventGetContentScale_Parms
		{
			const AActor* ContentActor;
			FMagicLeapPlaneResult PlaneResult;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContentActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPlanesFunctionLibrary_eventGetContentScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::NewProp_PlaneResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::NewProp_PlaneResult = { "PlaneResult", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPlanesFunctionLibrary_eventGetContentScale_Parms, PlaneResult), Z_Construct_UScriptStruct_FMagicLeapPlaneResult, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::NewProp_PlaneResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::NewProp_PlaneResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::NewProp_ContentActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::NewProp_ContentActor = { "ContentActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPlanesFunctionLibrary_eventGetContentScale_Parms, ContentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::NewProp_ContentActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::NewProp_ContentActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::NewProp_PlaneResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::NewProp_ContentActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Planes Function Library | MagicLeap" },
		{ "Comment", "/**\n\x09\x09Gets the expected scale of the actor to be placed within the bounds of the given plane.\n\x09\x09""Ensure that the actor rotation is 0 (FQuat::Identity) before sending it to this function.\n\x09\x09@param ContentActor Actor for which the scale is to be calculated.\n\x09\x09@param PlaneDimensions Dimensions (in Unreal units) of the plane the actor has to be placed on.\n\x09\x09@return A vector representing the expected scale of the Actor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesFunctionLibrary.h" },
		{ "ToolTip", "Gets the expected scale of the actor to be placed within the bounds of the given plane.\nEnsure that the actor rotation is 0 (FQuat::Identity) before sending it to this function.\n@param ContentActor Actor for which the scale is to be calculated.\n@param PlaneDimensions Dimensions (in Unreal units) of the plane the actor has to be placed on.\n@return A vector representing the expected scale of the Actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary, nullptr, "GetContentScale", nullptr, nullptr, sizeof(MagicLeapPlanesFunctionLibrary_eventGetContentScale_Parms), Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Statics
	{
		struct MagicLeapPlanesFunctionLibrary_eventIsTrackerValid_Parms
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
	void Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapPlanesFunctionLibrary_eventIsTrackerValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapPlanesFunctionLibrary_eventIsTrackerValid_Parms), &Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Planes Function Library | MagicLeap" },
		{ "Comment", "/** Is a planes tracker already created. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesFunctionLibrary.h" },
		{ "ToolTip", "Is a planes tracker already created." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary, nullptr, "IsTrackerValid", nullptr, nullptr, sizeof(MagicLeapPlanesFunctionLibrary_eventIsTrackerValid_Parms), Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_IsTrackerValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics
	{
		struct MagicLeapPlanesFunctionLibrary_eventPlanesPersistentQueryBeginAsync_Parms
		{
			FMagicLeapPlanesQuery Query;
			FGuid Handle;
			FScriptDelegate ResultDelegate;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapPlanesFunctionLibrary_eventPlanesPersistentQueryBeginAsync_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapPlanesFunctionLibrary_eventPlanesPersistentQueryBeginAsync_Parms), &Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPlanesFunctionLibrary_eventPlanesPersistentQueryBeginAsync_Parms, ResultDelegate), Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPersistentPlanesResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_ResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPlanesFunctionLibrary_eventPlanesPersistentQueryBeginAsync_Parms, Handle), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_Handle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPlanesFunctionLibrary_eventPlanesPersistentQueryBeginAsync_Parms, Query), Z_Construct_UScriptStruct_FMagicLeapPlanesQuery, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_Query_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_ResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::NewProp_Query,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Planes Function Library | MagicLeap" },
		{ "Comment", "/** Initiates a persistant plane query. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesFunctionLibrary.h" },
		{ "ToolTip", "Initiates a persistant plane query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary, nullptr, "PlanesPersistentQueryBeginAsync", nullptr, nullptr, sizeof(MagicLeapPlanesFunctionLibrary_eventPlanesPersistentQueryBeginAsync_Parms), Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics
	{
		struct MagicLeapPlanesFunctionLibrary_eventPlanesQueryBeginAsync_Parms
		{
			FMagicLeapPlanesQuery Query;
			FScriptDelegate ResultDelegate;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapPlanesFunctionLibrary_eventPlanesQueryBeginAsync_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapPlanesFunctionLibrary_eventPlanesQueryBeginAsync_Parms), &Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPlanesFunctionLibrary_eventPlanesQueryBeginAsync_Parms, ResultDelegate), Z_Construct_UDelegateFunction_MagicLeapPlanes_MagicLeapPlanesResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::NewProp_ResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPlanesFunctionLibrary_eventPlanesQueryBeginAsync_Parms, Query), Z_Construct_UScriptStruct_FMagicLeapPlanesQuery, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::NewProp_Query_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::NewProp_ResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::NewProp_Query,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Planes Function Library | MagicLeap" },
		{ "Comment", "/** Initiates a plane query. */" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesFunctionLibrary.h" },
		{ "ToolTip", "Initiates a plane query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary, nullptr, "PlanesQueryBeginAsync", nullptr, nullptr, sizeof(MagicLeapPlanesFunctionLibrary_eventPlanesQueryBeginAsync_Parms), Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics
	{
		struct MagicLeapPlanesFunctionLibrary_eventRemoveFlagsNotInQuery_Parms
		{
			TArray<EMagicLeapPlaneQueryFlags> InQueryFlags;
			TArray<EMagicLeapPlaneQueryFlags> InResultFlags;
			TArray<EMagicLeapPlaneQueryFlags> OutFlags;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFlags;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutFlags_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutFlags_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InResultFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InResultFlags;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InResultFlags_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InResultFlags_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQueryFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InQueryFlags;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InQueryFlags_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InQueryFlags_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_OutFlags = { "OutFlags", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPlanesFunctionLibrary_eventRemoveFlagsNotInQuery_Parms, OutFlags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_OutFlags_Inner = { "OutFlags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_OutFlags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InResultFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InResultFlags = { "InResultFlags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPlanesFunctionLibrary_eventRemoveFlagsNotInQuery_Parms, InResultFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InResultFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InResultFlags_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InResultFlags_Inner = { "InResultFlags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InResultFlags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InQueryFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InQueryFlags = { "InQueryFlags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPlanesFunctionLibrary_eventRemoveFlagsNotInQuery_Parms, InQueryFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InQueryFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InQueryFlags_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InQueryFlags_Inner = { "InQueryFlags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InQueryFlags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_OutFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_OutFlags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_OutFlags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InResultFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InResultFlags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InResultFlags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InQueryFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InQueryFlags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::NewProp_InQueryFlags_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "Planes Function Library | MagicLeap" },
		{ "Comment", "/**\n\x09\x09Removes \n\x09\x09@param InPriority The priority list by which to order the array of plane query flags.\n\x09\x09@param InFlagsToReorder The array of plane query flags to be reordered.\n\x09\x09@param OutReorderedFlags The reordered array of plane query flags.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesFunctionLibrary.h" },
		{ "ToolTip", "Removes\n@param InPriority The priority list by which to order the array of plane query flags.\n@param InFlagsToReorder The array of plane query flags to be reordered.\n@param OutReorderedFlags The reordered array of plane query flags." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary, nullptr, "RemoveFlagsNotInQuery", nullptr, nullptr, sizeof(MagicLeapPlanesFunctionLibrary_eventRemoveFlagsNotInQuery_Parms), Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Statics
	{
		struct MagicLeapPlanesFunctionLibrary_eventRemovePersistentQuery_Parms
		{
			FGuid Handle;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapPlanesFunctionLibrary_eventRemovePersistentQuery_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapPlanesFunctionLibrary_eventRemovePersistentQuery_Parms), &Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPlanesFunctionLibrary_eventRemovePersistentQuery_Parms, Handle), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "Planes Function Library | MagicLeap" },
		{ "Comment", "/** Removes a plane query. Returns a boolean of the operation's success*/" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesFunctionLibrary.h" },
		{ "ToolTip", "Removes a plane query. Returns a boolean of the operation's success" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary, nullptr, "RemovePersistentQuery", nullptr, nullptr, sizeof(MagicLeapPlanesFunctionLibrary_eventRemovePersistentQuery_Parms), Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics
	{
		struct MagicLeapPlanesFunctionLibrary_eventReorderPlaneFlags_Parms
		{
			TArray<EMagicLeapPlaneQueryFlags> InPriority;
			TArray<EMagicLeapPlaneQueryFlags> InFlagsToReorder;
			TArray<EMagicLeapPlaneQueryFlags> OutReorderedFlags;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutReorderedFlags;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutReorderedFlags_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutReorderedFlags_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFlagsToReorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InFlagsToReorder;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InFlagsToReorder_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InFlagsToReorder_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InPriority;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPriority_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPriority_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_OutReorderedFlags = { "OutReorderedFlags", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPlanesFunctionLibrary_eventReorderPlaneFlags_Parms, OutReorderedFlags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_OutReorderedFlags_Inner = { "OutReorderedFlags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_OutReorderedFlags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InFlagsToReorder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InFlagsToReorder = { "InFlagsToReorder", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPlanesFunctionLibrary_eventReorderPlaneFlags_Parms, InFlagsToReorder), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InFlagsToReorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InFlagsToReorder_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InFlagsToReorder_Inner = { "InFlagsToReorder", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InFlagsToReorder_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InPriority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InPriority = { "InPriority", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapPlanesFunctionLibrary_eventReorderPlaneFlags_Parms, InPriority), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InPriority_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InPriority_Inner = { "InPriority", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_MagicLeapPlanes_EMagicLeapPlaneQueryFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InPriority_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_OutReorderedFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_OutReorderedFlags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_OutReorderedFlags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InFlagsToReorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InFlagsToReorder_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InFlagsToReorder_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InPriority_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::NewProp_InPriority_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Planes Function Library | MagicLeap" },
		{ "Comment", "/**\n\x09\x09Re-orders an array of plane query flags based on the priority list passed.\n\x09\x09@param InPriority The priority list by which to order the array of plane query flags.\n\x09\x09@param InFlagsToReorder The array of plane query flags to be reordered.\n\x09\x09@param OutReorderedFlags The reordered array of plane query flags.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesFunctionLibrary.h" },
		{ "ToolTip", "Re-orders an array of plane query flags based on the priority list passed.\n@param InPriority The priority list by which to order the array of plane query flags.\n@param InFlagsToReorder The array of plane query flags to be reordered.\n@param OutReorderedFlags The reordered array of plane query flags." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary, nullptr, "ReorderPlaneFlags", nullptr, nullptr, sizeof(MagicLeapPlanesFunctionLibrary_eventReorderPlaneFlags_Parms), Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary_NoRegister()
	{
		return UMagicLeapPlanesFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapPlanes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_AddPersistentQuery, "AddPersistentQuery" }, // 1421720852
		{ &Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_CreateTracker, "CreateTracker" }, // 1945549565
		{ &Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_DestroyTracker, "DestroyTracker" }, // 2861340148
		{ &Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_GetContentScale, "GetContentScale" }, // 99735359
		{ &Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_IsTrackerValid, "IsTrackerValid" }, // 263441556
		{ &Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync, "PlanesPersistentQueryBeginAsync" }, // 201383814
		{ &Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync, "PlanesQueryBeginAsync" }, // 2647519718
		{ &Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery, "RemoveFlagsNotInQuery" }, // 2661046853
		{ &Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery, "RemovePersistentQuery" }, // 2608864736
		{ &Z_Construct_UFunction_UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags, "ReorderPlaneFlags" }, // 4051463639
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MagicLeap" },
		{ "IncludePath", "MagicLeapPlanesFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MagicLeapPlanesFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapPlanesFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary_Statics::ClassParams = {
		&UMagicLeapPlanesFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapPlanesFunctionLibrary, 3112061548);
	template<> MAGICLEAPPLANES_API UClass* StaticClass<UMagicLeapPlanesFunctionLibrary>()
	{
		return UMagicLeapPlanesFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapPlanesFunctionLibrary(Z_Construct_UClass_UMagicLeapPlanesFunctionLibrary, &UMagicLeapPlanesFunctionLibrary::StaticClass, TEXT("/Script/MagicLeapPlanes"), TEXT("UMagicLeapPlanesFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapPlanesFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

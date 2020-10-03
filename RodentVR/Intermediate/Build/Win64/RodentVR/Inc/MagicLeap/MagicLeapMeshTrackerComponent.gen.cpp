// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeap/Public/MagicLeapMeshTrackerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapMeshTrackerComponent() {}
// Cross Module References
	MAGICLEAP_API UFunction* Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature();
	MAGICLEAP_API UClass* Z_Construct_UClass_UMagicLeapMeshTrackerComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MAGICLEAP_API UClass* Z_Construct_UClass_UMagicLeapMeshTrackerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_MagicLeap();
	MAGICLEAP_API UClass* Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface_NoRegister();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
	MAGICLEAP_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest();
	MAGICLEAP_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	MAGICLEAP_API UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapMeshVertexColorMode();
	MAGICLEAP_API UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapMeshLOD();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	MAGICLEAP_API UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapMeshType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics
	{
		struct MagicLeapMeshTrackerComponent_eventOnMeshTrackerUpdated_Parms
		{
			FGuid ID;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<float> Confidence;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Confidence;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Confidence_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapMeshTrackerComponent_eventOnMeshTrackerUpdated_Parms, Confidence), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence_Inner = { "Confidence", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapMeshTrackerComponent_eventOnMeshTrackerUpdated_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapMeshTrackerComponent_eventOnMeshTrackerUpdated_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapMeshTrackerComponent_eventOnMeshTrackerUpdated_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapMeshTrackerComponent_eventOnMeshTrackerUpdated_Parms, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Confidence_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09\x09""Delegate used by OnMeshUpdated().\n\x09\x09@param ID The ID of the mesh section in the Block that was updated.\n\x09\x09@param Vertices List of all vertices in the updated mesh section.\n\x09\x09@param Triangles List of all triangles in the updated mesh section.\n\x09\x09@param Normals List of the normals of all triangles in the updated mesh section.\n\x09\x09@param Confidence List of the confidence values per vertex in the updated mesh section. This can be used to determine if the user needs to scan more.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "Delegate used by OnMeshUpdated().\n@param ID The ID of the mesh section in the Block that was updated.\n@param Vertices List of all vertices in the updated mesh section.\n@param Triangles List of all triangles in the updated mesh section.\n@param Normals List of the normals of all triangles in the updated mesh section.\n@param Confidence List of the confidence values per vertex in the updated mesh section. This can be used to determine if the user needs to scan more." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapMeshTrackerComponent, nullptr, "OnMeshTrackerUpdated__DelegateSignature", nullptr, nullptr, sizeof(MagicLeapMeshTrackerComponent_eventOnMeshTrackerUpdated_Parms), Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00D30000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMagicLeapMeshTrackerComponent::execSelectMeshBlocks)
	{
		P_GET_STRUCT_REF(FMagicLeapTrackingMeshInfo,Z_Param_Out_NewMeshInfo);
		P_GET_TARRAY_REF(FMagicLeapMeshBlockRequest,Z_Param_Out_RequestedMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectMeshBlocks_Implementation(Z_Param_Out_NewMeshInfo,Z_Param_Out_RequestedMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapMeshTrackerComponent::execGetNumQueuedBlockUpdates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumQueuedBlockUpdates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapMeshTrackerComponent::execDisconnectBlockSelector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisconnectBlockSelector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapMeshTrackerComponent::execConnectBlockSelector)
	{
		P_GET_TINTERFACE(IMagicLeapMeshBlockSelectorInterface,Z_Param_Selector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectBlockSelector(Z_Param_Selector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapMeshTrackerComponent::execDisconnectMRMesh)
	{
		P_GET_OBJECT(UMRMeshComponent,Z_Param_InMRMeshPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisconnectMRMesh(Z_Param_InMRMeshPtr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapMeshTrackerComponent::execConnectMRMesh)
	{
		P_GET_OBJECT(UMRMeshComponent,Z_Param_InMRMeshPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectMRMesh(Z_Param_InMRMeshPtr);
		P_NATIVE_END;
	}
	static FName NAME_UMagicLeapMeshTrackerComponent_SelectMeshBlocks = FName(TEXT("SelectMeshBlocks"));
	void UMagicLeapMeshTrackerComponent::SelectMeshBlocks(FMagicLeapTrackingMeshInfo const& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh)
	{
		MagicLeapMeshTrackerComponent_eventSelectMeshBlocks_Parms Parms;
		Parms.NewMeshInfo=NewMeshInfo;
		Parms.RequestedMesh=RequestedMesh;
		ProcessEvent(FindFunctionChecked(NAME_UMagicLeapMeshTrackerComponent_SelectMeshBlocks),&Parms);
		RequestedMesh=Parms.RequestedMesh;
	}
	void UMagicLeapMeshTrackerComponent::StaticRegisterNativesUMagicLeapMeshTrackerComponent()
	{
		UClass* Class = UMagicLeapMeshTrackerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectBlockSelector", &UMagicLeapMeshTrackerComponent::execConnectBlockSelector },
			{ "ConnectMRMesh", &UMagicLeapMeshTrackerComponent::execConnectMRMesh },
			{ "DisconnectBlockSelector", &UMagicLeapMeshTrackerComponent::execDisconnectBlockSelector },
			{ "DisconnectMRMesh", &UMagicLeapMeshTrackerComponent::execDisconnectMRMesh },
			{ "GetNumQueuedBlockUpdates", &UMagicLeapMeshTrackerComponent::execGetNumQueuedBlockUpdates },
			{ "SelectMeshBlocks", &UMagicLeapMeshTrackerComponent::execSelectMeshBlocks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Statics
	{
		struct MagicLeapMeshTrackerComponent_eventConnectBlockSelector_Parms
		{
			TScriptInterface<IMagicLeapMeshBlockSelectorInterface> Selector;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_Selector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapMeshTrackerComponent_eventConnectBlockSelector_Parms, Selector), Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Statics::NewProp_Selector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/**\n\x09\x09Sets the interface to be used for selecting blocks to mesh.\n\x09\x09@param Selector pointer to the object which implements IMagicLeapMeshBlockSelectorInterface.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "Sets the interface to be used for selecting blocks to mesh.\n@param Selector pointer to the object which implements IMagicLeapMeshBlockSelectorInterface." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapMeshTrackerComponent, nullptr, "ConnectBlockSelector", nullptr, nullptr, sizeof(MagicLeapMeshTrackerComponent_eventConnectBlockSelector_Parms), Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectBlockSelector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectMRMesh_Statics
	{
		struct MagicLeapMeshTrackerComponent_eventConnectMRMesh_Parms
		{
			UMRMeshComponent* InMRMeshPtr;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMRMeshPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMRMeshPtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectMRMesh_Statics::NewProp_InMRMeshPtr = { "InMRMeshPtr", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapMeshTrackerComponent_eventConnectMRMesh_Parms, InMRMeshPtr), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectMRMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectMRMesh_Statics::NewProp_InMRMeshPtr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectMRMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "Comment", "/**\n\x09\x09Sets the procedural mesh component that will store and display the environmental mesh results.\n\x09\x09@param InMRMeshPtr The procedural mesh component to store the query result in.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "Sets the procedural mesh component that will store and display the environmental mesh results.\n@param InMRMeshPtr The procedural mesh component to store the query result in." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapMeshTrackerComponent, nullptr, "ConnectMRMesh", nullptr, nullptr, sizeof(MagicLeapMeshTrackerComponent_eventConnectMRMesh_Parms), Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectMRMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectMRMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectMRMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectMRMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectMRMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectMRMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectBlockSelector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectBlockSelector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** \n\x09 * Disconnects the previously connected IMagicLeapMeshBlockSelectorInterface.\n\x09 * The default implementation is used this case - all new and updated blocks are meshed with the MeshTrackerComponent'd LevelOfDetail.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "Disconnects the previously connected IMagicLeapMeshBlockSelectorInterface.\nThe default implementation is used this case - all new and updated blocks are meshed with the MeshTrackerComponent'd LevelOfDetail." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectBlockSelector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapMeshTrackerComponent, nullptr, "DisconnectBlockSelector", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectBlockSelector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectBlockSelector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectBlockSelector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectBlockSelector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Statics
	{
		struct MagicLeapMeshTrackerComponent_eventDisconnectMRMesh_Parms
		{
			UMRMeshComponent* InMRMeshPtr;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMRMeshPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMRMeshPtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr = { "InMRMeshPtr", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapMeshTrackerComponent_eventDisconnectMRMesh_Parms, InMRMeshPtr), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "Comment", "/**\n\x09\x09Unlinks the current procedural mesh component from the mesh tracking system.\n\x09\x09@param InMRMeshPtr The procedural mesh component to unlink from the mesh tracking system.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "Unlinks the current procedural mesh component from the mesh tracking system.\n@param InMRMeshPtr The procedural mesh component to unlink from the mesh tracking system." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapMeshTrackerComponent, nullptr, "DisconnectMRMesh", nullptr, nullptr, sizeof(MagicLeapMeshTrackerComponent_eventDisconnectMRMesh_Parms), Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectMRMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Statics
	{
		struct MagicLeapMeshTrackerComponent_eventGetNumQueuedBlockUpdates_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapMeshTrackerComponent_eventGetNumQueuedBlockUpdates_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/**\n\x09 * Gets the number of mesh bricks in the pending queue.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "Gets the number of mesh bricks in the pending queue." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapMeshTrackerComponent, nullptr, "GetNumQueuedBlockUpdates", nullptr, nullptr, sizeof(MagicLeapMeshTrackerComponent_eventGetNumQueuedBlockUpdates_Parms), Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequestedMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestedMesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMeshInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewMeshInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics::NewProp_RequestedMesh = { "RequestedMesh", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapMeshTrackerComponent_eventSelectMeshBlocks_Parms, RequestedMesh), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics::NewProp_RequestedMesh_Inner = { "RequestedMesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics::NewProp_NewMeshInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics::NewProp_NewMeshInfo = { "NewMeshInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapMeshTrackerComponent_eventSelectMeshBlocks_Parms, NewMeshInfo), Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics::NewProp_NewMeshInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics::NewProp_NewMeshInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics::NewProp_RequestedMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics::NewProp_RequestedMesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics::NewProp_NewMeshInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** IMagicLeapMeshBlockSelectorInterface */" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "IMagicLeapMeshBlockSelectorInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapMeshTrackerComponent, nullptr, "SelectMeshBlocks", nullptr, nullptr, sizeof(MagicLeapMeshTrackerComponent_eventSelectMeshBlocks_Parms), Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapMeshTrackerComponent_NoRegister()
	{
		return UMagicLeapMeshTrackerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BricksPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BricksPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MRMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MRMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveOverlappingTriangles_MetaData[];
#endif
		static void NewProp_RemoveOverlappingTriangles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveOverlappingTriangles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorFromConfidenceOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColorFromConfidenceOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorFromConfidenceZero_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColorFromConfidenceZero;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockVertexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlockVertexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockVertexColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VertexColorMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VertexColorMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestVertexConfidence_MetaData[];
#endif
		static void NewProp_RequestVertexConfidence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RequestVertexConfidence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestNormals_MetaData[];
#endif
		static void NewProp_RequestNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RequestNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisconnectedSectionArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisconnectedSectionArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Planarize_MetaData[];
#endif
		static void NewProp_Planarize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Planarize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerimeterOfGapsToFill_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerimeterOfGapsToFill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelOfDetail_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LevelOfDetail;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LevelOfDetail_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundingVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundingVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeshType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScanWorld_MetaData[];
#endif
		static void NewProp_ScanWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ScanWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMeshTrackerUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMeshTrackerUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectBlockSelector, "ConnectBlockSelector" }, // 1853336378
		{ &Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_ConnectMRMesh, "ConnectMRMesh" }, // 930026873
		{ &Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectBlockSelector, "DisconnectBlockSelector" }, // 4241847350
		{ &Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_DisconnectMRMesh, "DisconnectMRMesh" }, // 3700009613
		{ &Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates, "GetNumQueuedBlockUpdates" }, // 3351294457
		{ &Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature, "OnMeshTrackerUpdated__DelegateSignature" }, // 3724888239
		{ &Z_Construct_UFunction_UMagicLeapMeshTrackerComponent_SelectMeshBlocks, "SelectMeshBlocks" }, // 2634014748
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MagicLeap" },
		{ "Comment", "/**\n\x09The MeshTrackerComponent class manages requests for environmental mesh data, processes the results and provides\n\x09them to the calling system. The calling system is able request environmental mesh data within a specified area.\n\x09Various other search criteria can be set via this class's public properties.  Mesh data requests are processed\n\x09on a separate thread.  Once a mesh data request has been processed the calling system will be notified via an\n\x09""FOnMeshTrackerUpdated broadcast.\n*/" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MagicLeapMeshTrackerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "The MeshTrackerComponent class manages requests for environmental mesh data, processes the results and provides\nthem to the calling system. The calling system is able request environmental mesh data within a specified area.\nVarious other search criteria can be set via this class's public properties.  Mesh data requests are processed\non a separate thread.  Once a mesh data request has been processed the calling system will be notified via an\nFOnMeshTrackerUpdated broadcast." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_BricksPerFrame_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** Specifies the number of MR Mesh bricks to create per frame. This is to\n\x09    amortize the cost of brick creation across frames rather than creating\n\x09\x09""all N bricks delivered in response to each meshing query.\n\x09\x09If the value is <=0 then all meshes will be pushed to MR Mesh as they\n\x09\x09""are provided by the system. */" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "Specifies the number of MR Mesh bricks to create per frame. This is to\n          amortize the cost of brick creation across frames rather than creating\n              all N bricks delivered in response to each meshing query.\n              If the value is <=0 then all meshes will be pushed to MR Mesh as they\n              are provided by the system." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_BricksPerFrame = { "BricksPerFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapMeshTrackerComponent, BricksPerFrame), METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_BricksPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_BricksPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_MRMesh_MetaData[] = {
		{ "Comment", "/** MRMeshComponent can render and provide collision based on the Mesh data. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "MRMeshComponent can render and provide collision based on the Mesh data." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_MRMesh = { "MRMesh", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapMeshTrackerComponent, MRMesh), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_MRMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_MRMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RemoveOverlappingTriangles_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/**\n\x09\x09If true, overlapping area between two mesh blocks will be removed.\n\x09\x09This field is only valid when the MeshType is Blocks.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "If true, overlapping area between two mesh blocks will be removed.\nThis field is only valid when the MeshType is Blocks." },
	};
#endif
	void Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RemoveOverlappingTriangles_SetBit(void* Obj)
	{
		((UMagicLeapMeshTrackerComponent*)Obj)->RemoveOverlappingTriangles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RemoveOverlappingTriangles = { "RemoveOverlappingTriangles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMagicLeapMeshTrackerComponent), &Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RemoveOverlappingTriangles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RemoveOverlappingTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RemoveOverlappingTriangles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceOne_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** Color mapped to confidence value of one. */" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "Color mapped to confidence value of one." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceOne = { "VertexColorFromConfidenceOne", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapMeshTrackerComponent, VertexColorFromConfidenceOne), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceZero_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** Color mapped to confidence value of zero. */" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "Color mapped to confidence value of zero." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceZero = { "VertexColorFromConfidenceZero", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapMeshTrackerComponent, VertexColorFromConfidenceZero), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceZero_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceZero_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_BlockVertexColors_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** Colors through which we cycle when setting vertex color by block. */" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "Colors through which we cycle when setting vertex color by block." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_BlockVertexColors = { "BlockVertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapMeshTrackerComponent, BlockVertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_BlockVertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_BlockVertexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_BlockVertexColors_Inner = { "BlockVertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_VertexColorMode_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/**\n\x09* Vertex Colors can be unused, or filled with several types of information.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "Vertex Colors can be unused, or filled with several types of information." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_VertexColorMode = { "VertexColorMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapMeshTrackerComponent, VertexColorMode), Z_Construct_UEnum_MagicLeap_EMagicLeapMeshVertexColorMode, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_VertexColorMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_VertexColorMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_VertexColorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/**\n\x09\x09If true, the system will generate the mesh confidence values for the triangle vertices.\n\x09\x09These confidence values can be used to determine if the user needs to scan more.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "If true, the system will generate the mesh confidence values for the triangle vertices.\nThese confidence values can be used to determine if the user needs to scan more." },
	};
#endif
	void Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence_SetBit(void* Obj)
	{
		((UMagicLeapMeshTrackerComponent*)Obj)->RequestVertexConfidence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence = { "RequestVertexConfidence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMagicLeapMeshTrackerComponent), &Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RequestNormals_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** If true, the system will generate normals for the triangle vertices. */" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "If true, the system will generate normals for the triangle vertices." },
	};
#endif
	void Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RequestNormals_SetBit(void* Obj)
	{
		((UMagicLeapMeshTrackerComponent*)Obj)->RequestNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RequestNormals = { "RequestNormals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMagicLeapMeshTrackerComponent), &Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RequestNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RequestNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RequestNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_DisconnectedSectionArea_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** Any section that is disconnected from the main mesh and has an area (in Unreal Units squared) \n\x09    less than this value will be removed. \n\x09\x09""0 means do not remove disconnected sections. A good value is 50cm. */" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "Any section that is disconnected from the main mesh and has an area (in Unreal Units squared)\n          less than this value will be removed.\n              0 means do not remove disconnected sections. A good value is 50cm." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_DisconnectedSectionArea = { "DisconnectedSectionArea", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapMeshTrackerComponent, DisconnectedSectionArea), METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_DisconnectedSectionArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_DisconnectedSectionArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_Planarize_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** If true, the system will planarize the returned mesh i.e. planar regions will be smoothed out. */" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "If true, the system will planarize the returned mesh i.e. planar regions will be smoothed out." },
	};
#endif
	void Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_Planarize_SetBit(void* Obj)
	{
		((UMagicLeapMeshTrackerComponent*)Obj)->Planarize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_Planarize = { "Planarize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMagicLeapMeshTrackerComponent), &Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_Planarize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_Planarize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_Planarize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_PerimeterOfGapsToFill_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** The perimeter (in Unreal Units) of gaps to be filled. 0 means do not fill. A good value is 300cm. */" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "The perimeter (in Unreal Units) of gaps to be filled. 0 means do not fill. A good value is 300cm." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_PerimeterOfGapsToFill = { "PerimeterOfGapsToFill", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapMeshTrackerComponent, PerimeterOfGapsToFill), METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_PerimeterOfGapsToFill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_PerimeterOfGapsToFill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_LevelOfDetail_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** Meshing LOD. */" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "Meshing LOD." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_LevelOfDetail = { "LevelOfDetail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapMeshTrackerComponent, LevelOfDetail), Z_Construct_UEnum_MagicLeap_EMagicLeapMeshLOD, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_LevelOfDetail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_LevelOfDetail_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_LevelOfDetail_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_BoundingVolume_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** Bounding box for the mesh scan. The mesh will be scanned for only within this box. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "Bounding box for the mesh scan. The mesh will be scanned for only within this box." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_BoundingVolume = { "BoundingVolume", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapMeshTrackerComponent, BoundingVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_BoundingVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_BoundingVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_MeshType_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** The type of mesh to query. */" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "The type of mesh to query." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapMeshTrackerComponent, MeshType), Z_Construct_UEnum_MagicLeap_EMagicLeapMeshType, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_MeshType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_MeshType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_ScanWorld_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** Set to true to start scanning the world for meshes. */" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "Set to true to start scanning the world for meshes." },
	};
#endif
	void Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_ScanWorld_SetBit(void* Obj)
	{
		((UMagicLeapMeshTrackerComponent*)Obj)->ScanWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_ScanWorld = { "ScanWorld", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMagicLeapMeshTrackerComponent), &Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_ScanWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_ScanWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_ScanWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_OnMeshTrackerUpdated_MetaData[] = {
		{ "Comment", "/** Activated whenever new information about this mesh tracker is detected. */" },
		{ "ModuleRelativePath", "Public/MagicLeapMeshTrackerComponent.h" },
		{ "ToolTip", "Activated whenever new information about this mesh tracker is detected." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_OnMeshTrackerUpdated = { "OnMeshTrackerUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapMeshTrackerComponent, OnMeshTrackerUpdated), Z_Construct_UDelegateFunction_UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_OnMeshTrackerUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_OnMeshTrackerUpdated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_BricksPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_MRMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RemoveOverlappingTriangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_VertexColorFromConfidenceZero,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_BlockVertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_BlockVertexColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_VertexColorMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_VertexColorMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RequestVertexConfidence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_RequestNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_DisconnectedSectionArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_Planarize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_PerimeterOfGapsToFill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_LevelOfDetail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_LevelOfDetail_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_BoundingVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_MeshType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_MeshType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_ScanWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::NewProp_OnMeshTrackerUpdated,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface_NoRegister, (int32)VTABLE_OFFSET(UMagicLeapMeshTrackerComponent, IMagicLeapMeshBlockSelectorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapMeshTrackerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::ClassParams = {
		&UMagicLeapMeshTrackerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapMeshTrackerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapMeshTrackerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapMeshTrackerComponent, 2545576218);
	template<> MAGICLEAP_API UClass* StaticClass<UMagicLeapMeshTrackerComponent>()
	{
		return UMagicLeapMeshTrackerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapMeshTrackerComponent(Z_Construct_UClass_UMagicLeapMeshTrackerComponent, &UMagicLeapMeshTrackerComponent::StaticClass, TEXT("/Script/MagicLeap"), TEXT("UMagicLeapMeshTrackerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapMeshTrackerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

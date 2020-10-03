// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapHandMeshing/Public/MagicLeapHandMeshingFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapHandMeshingFunctionLibrary() {}
// Cross Module References
	MAGICLEAPHANDMESHING_API UClass* Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary_NoRegister();
	MAGICLEAPHANDMESHING_API UClass* Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MagicLeapHandMeshing();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMagicLeapHandMeshingFunctionLibrary::execDisconnectMRMesh)
	{
		P_GET_OBJECT(UMRMeshComponent,Z_Param_InMRMeshPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandMeshingFunctionLibrary::DisconnectMRMesh(Z_Param_InMRMeshPtr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandMeshingFunctionLibrary::execConnectMRMesh)
	{
		P_GET_OBJECT(UMRMeshComponent,Z_Param_InMRMeshPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandMeshingFunctionLibrary::ConnectMRMesh(Z_Param_InMRMeshPtr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandMeshingFunctionLibrary::execDestroyClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandMeshingFunctionLibrary::DestroyClient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandMeshingFunctionLibrary::execCreateClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMagicLeapHandMeshingFunctionLibrary::CreateClient();
		P_NATIVE_END;
	}
	void UMagicLeapHandMeshingFunctionLibrary::StaticRegisterNativesUMagicLeapHandMeshingFunctionLibrary()
	{
		UClass* Class = UMagicLeapHandMeshingFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectMRMesh", &UMagicLeapHandMeshingFunctionLibrary::execConnectMRMesh },
			{ "CreateClient", &UMagicLeapHandMeshingFunctionLibrary::execCreateClient },
			{ "DestroyClient", &UMagicLeapHandMeshingFunctionLibrary::execDestroyClient },
			{ "DisconnectMRMesh", &UMagicLeapHandMeshingFunctionLibrary::execDisconnectMRMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics
	{
		struct MagicLeapHandMeshingFunctionLibrary_eventConnectMRMesh_Parms
		{
			UMRMeshComponent* InMRMeshPtr;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
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
	void Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandMeshingFunctionLibrary_eventConnectMRMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandMeshingFunctionLibrary_eventConnectMRMesh_Parms), &Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics::NewProp_InMRMeshPtr = { "InMRMeshPtr", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandMeshingFunctionLibrary_eventConnectMRMesh_Parms, InMRMeshPtr), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics::NewProp_InMRMeshPtr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandMeshing Function Library | MagicLeap" },
		{ "Comment", "/** \n\x09\x09""Connects the MRMesh component.\n\x09\x09@param InMRMeshPtr The MRMeshComponent to be used as the hand meshing source.\n\x09\x09@return True if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingFunctionLibrary.h" },
		{ "ToolTip", "Connects the MRMesh component.\n@param InMRMeshPtr The MRMeshComponent to be used as the hand meshing source.\n@return True if successful, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary, nullptr, "ConnectMRMesh", nullptr, nullptr, sizeof(MagicLeapHandMeshingFunctionLibrary_eventConnectMRMesh_Parms), Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_CreateClient_Statics
	{
		struct MagicLeapHandMeshingFunctionLibrary_eventCreateClient_Parms
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
	void Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_CreateClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandMeshingFunctionLibrary_eventCreateClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_CreateClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandMeshingFunctionLibrary_eventCreateClient_Parms), &Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_CreateClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_CreateClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_CreateClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_CreateClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandMeshing Function Library | MagicLeap" },
		{ "Comment", "/**\n\x09\x09""Create the hand meshing client Note that this will be the only function in the HandMeshing API that will raise a\n\x09\x09PrivilegeDenied error.  Trying to call the other functions with an invalid MLHandle will result in an InvalidParam error.\n\x09\x09@return True if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingFunctionLibrary.h" },
		{ "ToolTip", "Create the hand meshing client Note that this will be the only function in the HandMeshing API that will raise a\nPrivilegeDenied error.  Trying to call the other functions with an invalid MLHandle will result in an InvalidParam error.\n@return True if successful, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_CreateClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary, nullptr, "CreateClient", nullptr, nullptr, sizeof(MagicLeapHandMeshingFunctionLibrary_eventCreateClient_Parms), Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_CreateClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_CreateClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_CreateClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_CreateClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_CreateClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_CreateClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Statics
	{
		struct MagicLeapHandMeshingFunctionLibrary_eventDestroyClient_Parms
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
	void Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandMeshingFunctionLibrary_eventDestroyClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandMeshingFunctionLibrary_eventDestroyClient_Parms), &Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandMeshing Function Library | MagicLeap" },
		{ "Comment", "/** \n\x09\x09""Destroys the hand meshing client.\n\x09\x09@return True if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingFunctionLibrary.h" },
		{ "ToolTip", "Destroys the hand meshing client.\n@return True if successful, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary, nullptr, "DestroyClient", nullptr, nullptr, sizeof(MagicLeapHandMeshingFunctionLibrary_eventDestroyClient_Parms), Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DestroyClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics
	{
		struct MagicLeapHandMeshingFunctionLibrary_eventDisconnectMRMesh_Parms
		{
			UMRMeshComponent* InMRMeshPtr;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
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
	void Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandMeshingFunctionLibrary_eventDisconnectMRMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandMeshingFunctionLibrary_eventDisconnectMRMesh_Parms), &Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr = { "InMRMeshPtr", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandMeshingFunctionLibrary_eventDisconnectMRMesh_Parms, InMRMeshPtr), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandMeshing Function Library | MagicLeap" },
		{ "Comment", "/** \n\x09\x09""Disconnects the MRMesh component.\n\x09\x09@param InMRMeshPtr The MRMeshComponent to be removed as the hand meshing source.\n\x09\x09@return True if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingFunctionLibrary.h" },
		{ "ToolTip", "Disconnects the MRMesh component.\n@param InMRMeshPtr The MRMeshComponent to be removed as the hand meshing source.\n@return True if successful, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary, nullptr, "DisconnectMRMesh", nullptr, nullptr, sizeof(MagicLeapHandMeshingFunctionLibrary_eventDisconnectMRMesh_Parms), Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary_NoRegister()
	{
		return UMagicLeapHandMeshingFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapHandMeshing,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh, "ConnectMRMesh" }, // 1382017509
		{ &Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_CreateClient, "CreateClient" }, // 1431429425
		{ &Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DestroyClient, "DestroyClient" }, // 3920769883
		{ &Z_Construct_UFunction_UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh, "DisconnectMRMesh" }, // 2212878337
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "MagicLeap" },
		{ "IncludePath", "MagicLeapHandMeshingFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapHandMeshingFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary_Statics::ClassParams = {
		&UMagicLeapHandMeshingFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapHandMeshingFunctionLibrary, 3014248495);
	template<> MAGICLEAPHANDMESHING_API UClass* StaticClass<UMagicLeapHandMeshingFunctionLibrary>()
	{
		return UMagicLeapHandMeshingFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapHandMeshingFunctionLibrary(Z_Construct_UClass_UMagicLeapHandMeshingFunctionLibrary, &UMagicLeapHandMeshingFunctionLibrary::StaticClass, TEXT("/Script/MagicLeapHandMeshing"), TEXT("UMagicLeapHandMeshingFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapHandMeshingFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

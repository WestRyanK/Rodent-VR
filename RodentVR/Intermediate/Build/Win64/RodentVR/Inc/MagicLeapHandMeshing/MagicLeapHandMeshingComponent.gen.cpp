// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapHandMeshing/Public/MagicLeapHandMeshingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapHandMeshingComponent() {}
// Cross Module References
	MAGICLEAPHANDMESHING_API UClass* Z_Construct_UClass_UMagicLeapHandMeshingComponent_NoRegister();
	MAGICLEAPHANDMESHING_API UClass* Z_Construct_UClass_UMagicLeapHandMeshingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MagicLeapHandMeshing();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMagicLeapHandMeshingComponent::execSetUseWeightedNormals)
	{
		P_GET_UBOOL(Z_Param_bInUseWeightedNormals);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseWeightedNormals(Z_Param_bInUseWeightedNormals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandMeshingComponent::execDisconnectMRMesh)
	{
		P_GET_OBJECT(UMRMeshComponent,Z_Param_InMRMeshPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisconnectMRMesh(Z_Param_InMRMeshPtr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapHandMeshingComponent::execConnectMRMesh)
	{
		P_GET_OBJECT(UMRMeshComponent,Z_Param_InMRMeshPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConnectMRMesh(Z_Param_InMRMeshPtr);
		P_NATIVE_END;
	}
	void UMagicLeapHandMeshingComponent::StaticRegisterNativesUMagicLeapHandMeshingComponent()
	{
		UClass* Class = UMagicLeapHandMeshingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectMRMesh", &UMagicLeapHandMeshingComponent::execConnectMRMesh },
			{ "DisconnectMRMesh", &UMagicLeapHandMeshingComponent::execDisconnectMRMesh },
			{ "SetUseWeightedNormals", &UMagicLeapHandMeshingComponent::execSetUseWeightedNormals },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics
	{
		struct MagicLeapHandMeshingComponent_eventConnectMRMesh_Parms
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
	void Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandMeshingComponent_eventConnectMRMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandMeshingComponent_eventConnectMRMesh_Parms), &Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics::NewProp_InMRMeshPtr = { "InMRMeshPtr", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandMeshingComponent_eventConnectMRMesh_Parms, InMRMeshPtr), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics::NewProp_InMRMeshPtr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandMeshing Function Library | MagicLeap" },
		{ "Comment", "/**\n\x09\x09""Connects the MRMesh component.\n\x09\x09@param InMRMeshPtr The MRMeshComponent to be used as the hand meshing source.\n\x09\x09@return True if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingComponent.h" },
		{ "ToolTip", "Connects the MRMesh component.\n@param InMRMeshPtr The MRMeshComponent to be used as the hand meshing source.\n@return True if successful, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandMeshingComponent, nullptr, "ConnectMRMesh", nullptr, nullptr, sizeof(MagicLeapHandMeshingComponent_eventConnectMRMesh_Parms), Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics
	{
		struct MagicLeapHandMeshingComponent_eventDisconnectMRMesh_Parms
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
	void Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapHandMeshingComponent_eventDisconnectMRMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandMeshingComponent_eventDisconnectMRMesh_Parms), &Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr = { "InMRMeshPtr", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapHandMeshingComponent_eventDisconnectMRMesh_Parms, InMRMeshPtr), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics::NewProp_InMRMeshPtr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandMeshing Function Library | MagicLeap" },
		{ "Comment", "/**\n\x09\x09""Disconnects the MRMesh component.\n\x09\x09@param InMRMeshPtr The MRMeshComponent to be removed as the hand meshing source.\n\x09\x09@return True if successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingComponent.h" },
		{ "ToolTip", "Disconnects the MRMesh component.\n@param InMRMeshPtr The MRMeshComponent to be removed as the hand meshing source.\n@return True if successful, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandMeshingComponent, nullptr, "DisconnectMRMesh", nullptr, nullptr, sizeof(MagicLeapHandMeshingComponent_eventDisconnectMRMesh_Parms), Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Statics
	{
		struct MagicLeapHandMeshingComponent_eventSetUseWeightedNormals_Parms
		{
			bool bInUseWeightedNormals;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInUseWeightedNormals_MetaData[];
#endif
		static void NewProp_bInUseWeightedNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInUseWeightedNormals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Statics::NewProp_bInUseWeightedNormals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Statics::NewProp_bInUseWeightedNormals_SetBit(void* Obj)
	{
		((MagicLeapHandMeshingComponent_eventSetUseWeightedNormals_Parms*)Obj)->bInUseWeightedNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Statics::NewProp_bInUseWeightedNormals = { "bInUseWeightedNormals", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapHandMeshingComponent_eventSetUseWeightedNormals_Parms), &Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Statics::NewProp_bInUseWeightedNormals_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Statics::NewProp_bInUseWeightedNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Statics::NewProp_bInUseWeightedNormals_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Statics::NewProp_bInUseWeightedNormals,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandMeshing Function Library | MagicLeap" },
		{ "Comment", "/**\n\x09\x09Specifies whether to use weighted triangle normals when calculating the normals for each vertex of the hand mesh.\n\x09\x09@param bInUseWeightedNormals False is the default, True may impact performance but could give better looking results.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingComponent.h" },
		{ "ToolTip", "Specifies whether to use weighted triangle normals when calculating the normals for each vertex of the hand mesh.\n@param bInUseWeightedNormals False is the default, True may impact performance but could give better looking results." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapHandMeshingComponent, nullptr, "SetUseWeightedNormals", nullptr, nullptr, sizeof(MagicLeapHandMeshingComponent_eventSetUseWeightedNormals_Parms), Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapHandMeshingComponent_NoRegister()
	{
		return UMagicLeapHandMeshingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapHandMeshingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapHandMeshingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapHandMeshing,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapHandMeshingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapHandMeshingComponent_ConnectMRMesh, "ConnectMRMesh" }, // 2916835461
		{ &Z_Construct_UFunction_UMagicLeapHandMeshingComponent_DisconnectMRMesh, "DisconnectMRMesh" }, // 2997897496
		{ &Z_Construct_UFunction_UMagicLeapHandMeshingComponent_SetUseWeightedNormals, "SetUseWeightedNormals" }, // 2354971916
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapHandMeshingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MagicLeap" },
		{ "Comment", "/**\n\x09""Component that provides access to the HandMeshing API functionality.\n*/" },
		{ "IncludePath", "MagicLeapHandMeshingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingComponent.h" },
		{ "ToolTip", "Component that provides access to the HandMeshing API functionality." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapHandMeshingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapHandMeshingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapHandMeshingComponent_Statics::ClassParams = {
		&UMagicLeapHandMeshingComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapHandMeshingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapHandMeshingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapHandMeshingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapHandMeshingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapHandMeshingComponent, 3575848177);
	template<> MAGICLEAPHANDMESHING_API UClass* StaticClass<UMagicLeapHandMeshingComponent>()
	{
		return UMagicLeapHandMeshingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapHandMeshingComponent(Z_Construct_UClass_UMagicLeapHandMeshingComponent, &UMagicLeapHandMeshingComponent::StaticClass, TEXT("/Script/MagicLeapHandMeshing"), TEXT("UMagicLeapHandMeshingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapHandMeshingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

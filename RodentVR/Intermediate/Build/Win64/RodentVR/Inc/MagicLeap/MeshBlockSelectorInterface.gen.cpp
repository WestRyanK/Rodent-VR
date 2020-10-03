// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeap/Public/MeshBlockSelectorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshBlockSelectorInterface() {}
// Cross Module References
	MAGICLEAP_API UClass* Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface_NoRegister();
	MAGICLEAP_API UClass* Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MagicLeap();
	MAGICLEAP_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest();
	MAGICLEAP_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo();
// End Cross Module References
	DEFINE_FUNCTION(IMagicLeapMeshBlockSelectorInterface::execSelectMeshBlocks)
	{
		P_GET_STRUCT_REF(FMagicLeapTrackingMeshInfo,Z_Param_Out_NewMeshInfo);
		P_GET_TARRAY_REF(FMagicLeapMeshBlockRequest,Z_Param_Out_RequestedMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectMeshBlocks_Implementation(Z_Param_Out_NewMeshInfo,Z_Param_Out_RequestedMesh);
		P_NATIVE_END;
	}
	void IMagicLeapMeshBlockSelectorInterface::SelectMeshBlocks(FMagicLeapTrackingMeshInfo const& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SelectMeshBlocks instead.");
	}
	void UMagicLeapMeshBlockSelectorInterface::StaticRegisterNativesUMagicLeapMeshBlockSelectorInterface()
	{
		UClass* Class = UMagicLeapMeshBlockSelectorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectMeshBlocks", &IMagicLeapMeshBlockSelectorInterface::execSelectMeshBlocks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics::NewProp_RequestedMesh = { "RequestedMesh", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapMeshBlockSelectorInterface_eventSelectMeshBlocks_Parms, RequestedMesh), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics::NewProp_RequestedMesh_Inner = { "RequestedMesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics::NewProp_NewMeshInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics::NewProp_NewMeshInfo = { "NewMeshInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapMeshBlockSelectorInterface_eventSelectMeshBlocks_Parms, NewMeshInfo), Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics::NewProp_NewMeshInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics::NewProp_NewMeshInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics::NewProp_RequestedMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics::NewProp_RequestedMesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics::NewProp_NewMeshInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/**\n\x09 * Given the new mesh information, select the blocks you want to keep and the level of detail for each of those blocks. \n\x09 * @param NewMeshInfo Information on the latest mesh blocks available.\n\x09 * @param RequestedMesh output array containing details of blocks for whom the mesh should be requested.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MeshBlockSelectorInterface.h" },
		{ "ToolTip", "Given the new mesh information, select the blocks you want to keep and the level of detail for each of those blocks.\n@param NewMeshInfo Information on the latest mesh blocks available.\n@param RequestedMesh output array containing details of blocks for whom the mesh should be requested." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface, nullptr, "SelectMeshBlocks", nullptr, nullptr, sizeof(MagicLeapMeshBlockSelectorInterface_eventSelectMeshBlocks_Parms), Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface_NoRegister()
	{
		return UMagicLeapMeshBlockSelectorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks, "SelectMeshBlocks" }, // 3916548229
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshBlockSelectorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMagicLeapMeshBlockSelectorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface_Statics::ClassParams = {
		&UMagicLeapMeshBlockSelectorInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapMeshBlockSelectorInterface, 3593222780);
	template<> MAGICLEAP_API UClass* StaticClass<UMagicLeapMeshBlockSelectorInterface>()
	{
		return UMagicLeapMeshBlockSelectorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapMeshBlockSelectorInterface(Z_Construct_UClass_UMagicLeapMeshBlockSelectorInterface, &UMagicLeapMeshBlockSelectorInterface::StaticClass, TEXT("/Script/MagicLeap"), TEXT("UMagicLeapMeshBlockSelectorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapMeshBlockSelectorInterface);
	static FName NAME_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks = FName(TEXT("SelectMeshBlocks"));
	void IMagicLeapMeshBlockSelectorInterface::Execute_SelectMeshBlocks(UObject* O, FMagicLeapTrackingMeshInfo const& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMagicLeapMeshBlockSelectorInterface::StaticClass()));
		MagicLeapMeshBlockSelectorInterface_eventSelectMeshBlocks_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks);
		if (Func)
		{
			Parms.NewMeshInfo=NewMeshInfo;
			Parms.RequestedMesh=RequestedMesh;
			O->ProcessEvent(Func, &Parms);
			RequestedMesh=Parms.RequestedMesh;
		}
		else if (auto I = (IMagicLeapMeshBlockSelectorInterface*)(O->GetNativeInterfaceAddress(UMagicLeapMeshBlockSelectorInterface::StaticClass())))
		{
			I->SelectMeshBlocks_Implementation(NewMeshInfo,RequestedMesh);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

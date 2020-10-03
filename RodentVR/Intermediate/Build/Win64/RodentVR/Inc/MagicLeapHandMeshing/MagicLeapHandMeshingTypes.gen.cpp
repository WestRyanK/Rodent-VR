// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapHandMeshing/Public/MagicLeapHandMeshingTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapHandMeshingTypes() {}
// Cross Module References
	MAGICLEAPHANDMESHING_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapHandMesh();
	UPackage* Z_Construct_UPackage__Script_MagicLeapHandMeshing();
	MAGICLEAPHANDMESHING_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FMagicLeapHandMesh::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAPHANDMESHING_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapHandMesh_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapHandMesh, Z_Construct_UPackage__Script_MagicLeapHandMeshing(), TEXT("MagicLeapHandMesh"), sizeof(FMagicLeapHandMesh), Get_Z_Construct_UScriptStruct_FMagicLeapHandMesh_Hash());
	}
	return Singleton;
}
template<> MAGICLEAPHANDMESHING_API UScriptStruct* StaticStruct<FMagicLeapHandMesh>()
{
	return FMagicLeapHandMesh::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapHandMesh(FMagicLeapHandMesh::StaticStruct, TEXT("/Script/MagicLeapHandMeshing"), TEXT("MagicLeapHandMesh"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeapHandMeshing_StaticRegisterNativesFMagicLeapHandMesh
{
	FScriptStruct_MagicLeapHandMeshing_StaticRegisterNativesFMagicLeapHandMesh()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapHandMesh")),new UScriptStruct::TCppStructOps<FMagicLeapHandMesh>);
	}
} ScriptStruct_MagicLeapHandMeshing_StaticRegisterNativesFMagicLeapHandMesh;
	struct Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Stores MLHandMeshBlock data. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingTypes.h" },
		{ "ToolTip", "Stores MLHandMeshBlock data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapHandMesh>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "HandMeshing|MagicLeap" },
		{ "Comment", "/** The mesh data */" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingTypes.h" },
		{ "ToolTip", "The mesh data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapHandMesh, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewProp_DataCount_MetaData[] = {
		{ "Category", "HandMeshing|MagicLeap" },
		{ "Comment", "/** Number of meshes available in data */" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingTypes.h" },
		{ "ToolTip", "Number of meshes available in data" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewProp_DataCount = { "DataCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapHandMesh, DataCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewProp_DataCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewProp_DataCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewProp_Version_MetaData[] = {
		{ "Comment", "/** Version of this structure. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingTypes.h" },
		{ "ToolTip", "Version of this structure." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapHandMesh, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewProp_DataCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapHandMeshing,
		nullptr,
		&NewStructOps,
		"MagicLeapHandMesh",
		sizeof(FMagicLeapHandMesh),
		alignof(FMagicLeapHandMesh),
		Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapHandMesh()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapHandMesh_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapHandMeshing();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapHandMesh"), sizeof(FMagicLeapHandMesh), Get_Z_Construct_UScriptStruct_FMagicLeapHandMesh_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapHandMesh_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapHandMesh_Hash() { return 1874440947U; }
class UScriptStruct* FMagicLeapHandMeshBlock::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAPHANDMESHING_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock, Z_Construct_UPackage__Script_MagicLeapHandMeshing(), TEXT("MagicLeapHandMeshBlock"), sizeof(FMagicLeapHandMeshBlock), Get_Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Hash());
	}
	return Singleton;
}
template<> MAGICLEAPHANDMESHING_API UScriptStruct* StaticStruct<FMagicLeapHandMeshBlock>()
{
	return FMagicLeapHandMeshBlock::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapHandMeshBlock(FMagicLeapHandMeshBlock::StaticStruct, TEXT("/Script/MagicLeapHandMeshing"), TEXT("MagicLeapHandMeshBlock"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeapHandMeshing_StaticRegisterNativesFMagicLeapHandMeshBlock
{
	FScriptStruct_MagicLeapHandMeshing_StaticRegisterNativesFMagicLeapHandMeshBlock()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapHandMeshBlock")),new UScriptStruct::TCppStructOps<FMagicLeapHandMeshBlock>);
	}
} ScriptStruct_MagicLeapHandMeshing_StaticRegisterNativesFMagicLeapHandMeshBlock;
	struct Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertex_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertex_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VertexCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Stores a hand mesh's vertices and indices. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingTypes.h" },
		{ "ToolTip", "Stores a hand mesh's vertices and indices." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapHandMeshBlock>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "HandMeshing|MagicLeap" },
		{ "Comment", "/** Pointer to the index buffer. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingTypes.h" },
		{ "ToolTip", "Pointer to the index buffer." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapHandMeshBlock, Index), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_Index_Inner = { "Index", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_Vertex_MetaData[] = {
		{ "Category", "HandMeshing|MagicLeap" },
		{ "Comment", "/** Pointer to the vertex buffer. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingTypes.h" },
		{ "ToolTip", "Pointer to the vertex buffer." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_Vertex = { "Vertex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapHandMeshBlock, Vertex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_Vertex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_Vertex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_Vertex_Inner = { "Vertex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_VertexCount_MetaData[] = {
		{ "Category", "HandMeshing|MagicLeap" },
		{ "Comment", "/** The number of vertices in vertex buffer. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingTypes.h" },
		{ "ToolTip", "The number of vertices in vertex buffer." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_VertexCount = { "VertexCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapHandMeshBlock, VertexCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_VertexCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_VertexCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_IndexCount_MetaData[] = {
		{ "Category", "HandMeshing|MagicLeap" },
		{ "Comment", "/** The number of indices in index buffer. */" },
		{ "ModuleRelativePath", "Public/MagicLeapHandMeshingTypes.h" },
		{ "ToolTip", "The number of indices in index buffer." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_IndexCount = { "IndexCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapHandMeshBlock, IndexCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_IndexCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_IndexCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_Index_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_Vertex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_Vertex_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_VertexCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::NewProp_IndexCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapHandMeshing,
		nullptr,
		&NewStructOps,
		"MagicLeapHandMeshBlock",
		sizeof(FMagicLeapHandMeshBlock),
		alignof(FMagicLeapHandMeshBlock),
		Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeapHandMeshing();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapHandMeshBlock"), sizeof(FMagicLeapHandMeshBlock), Get_Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapHandMeshBlock_Hash() { return 3846544773U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

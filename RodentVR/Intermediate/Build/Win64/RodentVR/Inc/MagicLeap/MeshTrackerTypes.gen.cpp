// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeap/Public/MeshTrackerTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshTrackerTypes() {}
// Cross Module References
	MAGICLEAP_API UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapMeshState();
	UPackage* Z_Construct_UPackage__Script_MagicLeap();
	MAGICLEAP_API UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapMeshLOD();
	MAGICLEAP_API UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapMeshVertexColorMode();
	MAGICLEAP_API UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapMeshType();
	MAGICLEAP_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MAGICLEAP_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo();
	MAGICLEAP_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static UEnum* EMagicLeapMeshState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeap_EMagicLeapMeshState, Z_Construct_UPackage__Script_MagicLeap(), TEXT("EMagicLeapMeshState"));
		}
		return Singleton;
	}
	template<> MAGICLEAP_API UEnum* StaticEnum<EMagicLeapMeshState>()
	{
		return EMagicLeapMeshState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapMeshState(EMagicLeapMeshState_StaticEnum, TEXT("/Script/MagicLeap"), TEXT("EMagicLeapMeshState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeap_EMagicLeapMeshState_Hash() { return 2811902125U; }
	UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapMeshState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapMeshState"), 0, Get_Z_Construct_UEnum_MagicLeap_EMagicLeapMeshState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapMeshState::New", (int64)EMagicLeapMeshState::New },
				{ "EMagicLeapMeshState::Updated", (int64)EMagicLeapMeshState::Updated },
				{ "EMagicLeapMeshState::Deleted", (int64)EMagicLeapMeshState::Deleted },
				{ "EMagicLeapMeshState::Unchanged", (int64)EMagicLeapMeshState::Unchanged },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** State of a block mesh. */" },
				{ "Deleted.Comment", "/** Mesh has been deleted. */" },
				{ "Deleted.Name", "EMagicLeapMeshState::Deleted" },
				{ "Deleted.ToolTip", "Mesh has been deleted." },
				{ "ModuleRelativePath", "Public/MeshTrackerTypes.h" },
				{ "New.Comment", "/** Mesh has been created */" },
				{ "New.Name", "EMagicLeapMeshState::New" },
				{ "New.ToolTip", "Mesh has been created" },
				{ "ToolTip", "State of a block mesh." },
				{ "Unchanged.Comment", "/** Mesh is unchanged. */" },
				{ "Unchanged.Name", "EMagicLeapMeshState::Unchanged" },
				{ "Unchanged.ToolTip", "Mesh is unchanged." },
				{ "Updated.Comment", "/** Mesh has been updated. */" },
				{ "Updated.Name", "EMagicLeapMeshState::Updated" },
				{ "Updated.ToolTip", "Mesh has been updated." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeap,
				nullptr,
				"EMagicLeapMeshState",
				"EMagicLeapMeshState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMagicLeapMeshLOD_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeap_EMagicLeapMeshLOD, Z_Construct_UPackage__Script_MagicLeap(), TEXT("EMagicLeapMeshLOD"));
		}
		return Singleton;
	}
	template<> MAGICLEAP_API UEnum* StaticEnum<EMagicLeapMeshLOD>()
	{
		return EMagicLeapMeshLOD_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapMeshLOD(EMagicLeapMeshLOD_StaticEnum, TEXT("/Script/MagicLeap"), TEXT("EMagicLeapMeshLOD"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeap_EMagicLeapMeshLOD_Hash() { return 3616672823U; }
	UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapMeshLOD()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapMeshLOD"), 0, Get_Z_Construct_UEnum_MagicLeap_EMagicLeapMeshLOD_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapMeshLOD::Minimum", (int64)EMagicLeapMeshLOD::Minimum },
				{ "EMagicLeapMeshLOD::Medium", (int64)EMagicLeapMeshLOD::Medium },
				{ "EMagicLeapMeshLOD::Maximum", (int64)EMagicLeapMeshLOD::Maximum },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Discrete level of detail required. */" },
				{ "Maximum.Comment", "/** Maximum LOD. */" },
				{ "Maximum.Name", "EMagicLeapMeshLOD::Maximum" },
				{ "Maximum.ToolTip", "Maximum LOD." },
				{ "Medium.Comment", "/** Medium LOD. */" },
				{ "Medium.Name", "EMagicLeapMeshLOD::Medium" },
				{ "Medium.ToolTip", "Medium LOD." },
				{ "Minimum.Comment", "/** Minimum LOD. */" },
				{ "Minimum.Name", "EMagicLeapMeshLOD::Minimum" },
				{ "Minimum.ToolTip", "Minimum LOD." },
				{ "ModuleRelativePath", "Public/MeshTrackerTypes.h" },
				{ "ToolTip", "Discrete level of detail required." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeap,
				nullptr,
				"EMagicLeapMeshLOD",
				"EMagicLeapMeshLOD",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMagicLeapMeshVertexColorMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeap_EMagicLeapMeshVertexColorMode, Z_Construct_UPackage__Script_MagicLeap(), TEXT("EMagicLeapMeshVertexColorMode"));
		}
		return Singleton;
	}
	template<> MAGICLEAP_API UEnum* StaticEnum<EMagicLeapMeshVertexColorMode>()
	{
		return EMagicLeapMeshVertexColorMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapMeshVertexColorMode(EMagicLeapMeshVertexColorMode_StaticEnum, TEXT("/Script/MagicLeap"), TEXT("EMagicLeapMeshVertexColorMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeap_EMagicLeapMeshVertexColorMode_Hash() { return 1770751009U; }
	UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapMeshVertexColorMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapMeshVertexColorMode"), 0, Get_Z_Construct_UEnum_MagicLeap_EMagicLeapMeshVertexColorMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapMeshVertexColorMode::None", (int64)EMagicLeapMeshVertexColorMode::None },
				{ "EMagicLeapMeshVertexColorMode::Confidence", (int64)EMagicLeapMeshVertexColorMode::Confidence },
				{ "EMagicLeapMeshVertexColorMode::Block", (int64)EMagicLeapMeshVertexColorMode::Block },
				{ "EMagicLeapMeshVertexColorMode::LOD", (int64)EMagicLeapMeshVertexColorMode::LOD },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Block.Comment", "/** Each block is given a color from a list. */" },
				{ "Block.DisplayName", "Blocks Colored" },
				{ "Block.Name", "EMagicLeapMeshVertexColorMode::Block" },
				{ "Block.ToolTip", "Each block is given a color from a list." },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Vertex color mode. */" },
				{ "Confidence.Comment", "/** Vertex confidence is interpolated between two specified colors. */" },
				{ "Confidence.DisplayName", "Vertex Confidence" },
				{ "Confidence.Name", "EMagicLeapMeshVertexColorMode::Confidence" },
				{ "Confidence.ToolTip", "Vertex confidence is interpolated between two specified colors." },
				{ "LOD.Comment", "/** Each LOD is given a color from a list. */" },
				{ "LOD.DisplayName", "LODs Colored" },
				{ "LOD.Name", "EMagicLeapMeshVertexColorMode::LOD" },
				{ "LOD.ToolTip", "Each LOD is given a color from a list." },
				{ "ModuleRelativePath", "Public/MeshTrackerTypes.h" },
				{ "None.Comment", "/** Vertex Color is not set. */" },
				{ "None.DisplayName", "No Vertex Color" },
				{ "None.Name", "EMagicLeapMeshVertexColorMode::None" },
				{ "None.ToolTip", "Vertex Color is not set." },
				{ "ToolTip", "Vertex color mode." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeap,
				nullptr,
				"EMagicLeapMeshVertexColorMode",
				"EMagicLeapMeshVertexColorMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMagicLeapMeshType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MagicLeap_EMagicLeapMeshType, Z_Construct_UPackage__Script_MagicLeap(), TEXT("EMagicLeapMeshType"));
		}
		return Singleton;
	}
	template<> MAGICLEAP_API UEnum* StaticEnum<EMagicLeapMeshType>()
	{
		return EMagicLeapMeshType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMagicLeapMeshType(EMagicLeapMeshType_StaticEnum, TEXT("/Script/MagicLeap"), TEXT("EMagicLeapMeshType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MagicLeap_EMagicLeapMeshType_Hash() { return 3732158927U; }
	UEnum* Z_Construct_UEnum_MagicLeap_EMagicLeapMeshType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMagicLeapMeshType"), 0, Get_Z_Construct_UEnum_MagicLeap_EMagicLeapMeshType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMagicLeapMeshType::Triangles", (int64)EMagicLeapMeshType::Triangles },
				{ "EMagicLeapMeshType::PointCloud", (int64)EMagicLeapMeshType::PointCloud },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Type of mesh to query from the underlying system. */" },
				{ "ModuleRelativePath", "Public/MeshTrackerTypes.h" },
				{ "PointCloud.Comment", "/** Return mesh vertices as a point cloud. */" },
				{ "PointCloud.Name", "EMagicLeapMeshType::PointCloud" },
				{ "PointCloud.ToolTip", "Return mesh vertices as a point cloud." },
				{ "ToolTip", "Type of mesh to query from the underlying system." },
				{ "Triangles.Comment", "/** Meshing should be done as triangles. */" },
				{ "Triangles.Name", "EMagicLeapMeshType::Triangles" },
				{ "Triangles.ToolTip", "Meshing should be done as triangles." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MagicLeap,
				nullptr,
				"EMagicLeapMeshType",
				"EMagicLeapMeshType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMagicLeapMeshBlockRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAP_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest, Z_Construct_UPackage__Script_MagicLeap(), TEXT("MagicLeapMeshBlockRequest"), sizeof(FMagicLeapMeshBlockRequest), Get_Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Hash());
	}
	return Singleton;
}
template<> MAGICLEAP_API UScriptStruct* StaticStruct<FMagicLeapMeshBlockRequest>()
{
	return FMagicLeapMeshBlockRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapMeshBlockRequest(FMagicLeapMeshBlockRequest::StaticStruct, TEXT("/Script/MagicLeap"), TEXT("MagicLeapMeshBlockRequest"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapMeshBlockRequest
{
	FScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapMeshBlockRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapMeshBlockRequest")),new UScriptStruct::TCppStructOps<FMagicLeapMeshBlockRequest>);
	}
} ScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapMeshBlockRequest;
	struct Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelOfDetail_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LevelOfDetail;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LevelOfDetail_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Request structure to get the actual mesh for a block. */" },
		{ "ModuleRelativePath", "Public/MeshTrackerTypes.h" },
		{ "ToolTip", "Request structure to get the actual mesh for a block." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapMeshBlockRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::NewProp_LevelOfDetail_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** The LOD level to request. */" },
		{ "ModuleRelativePath", "Public/MeshTrackerTypes.h" },
		{ "ToolTip", "The LOD level to request." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::NewProp_LevelOfDetail = { "LevelOfDetail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapMeshBlockRequest, LevelOfDetail), Z_Construct_UEnum_MagicLeap_EMagicLeapMeshLOD, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::NewProp_LevelOfDetail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::NewProp_LevelOfDetail_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::NewProp_LevelOfDetail_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::NewProp_BlockID_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** The UID to represent the block. */" },
		{ "ModuleRelativePath", "Public/MeshTrackerTypes.h" },
		{ "ToolTip", "The UID to represent the block." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::NewProp_BlockID = { "BlockID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapMeshBlockRequest, BlockID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::NewProp_BlockID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::NewProp_BlockID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::NewProp_LevelOfDetail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::NewProp_LevelOfDetail_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::NewProp_BlockID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
		nullptr,
		&NewStructOps,
		"MagicLeapMeshBlockRequest",
		sizeof(FMagicLeapMeshBlockRequest),
		alignof(FMagicLeapMeshBlockRequest),
		Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapMeshBlockRequest"), sizeof(FMagicLeapMeshBlockRequest), Get_Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapMeshBlockRequest_Hash() { return 1974342454U; }
class UScriptStruct* FMagicLeapTrackingMeshInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAP_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo, Z_Construct_UPackage__Script_MagicLeap(), TEXT("MagicLeapTrackingMeshInfo"), sizeof(FMagicLeapTrackingMeshInfo), Get_Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Hash());
	}
	return Singleton;
}
template<> MAGICLEAP_API UScriptStruct* StaticStruct<FMagicLeapTrackingMeshInfo>()
{
	return FMagicLeapTrackingMeshInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapTrackingMeshInfo(FMagicLeapTrackingMeshInfo::StaticStruct, TEXT("/Script/MagicLeap"), TEXT("MagicLeapTrackingMeshInfo"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapTrackingMeshInfo
{
	FScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapTrackingMeshInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapTrackingMeshInfo")),new UScriptStruct::TCppStructOps<FMagicLeapTrackingMeshInfo>);
	}
} ScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapTrackingMeshInfo;
	struct Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlockData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timestamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Response structure for the mesh block info. */" },
		{ "ModuleRelativePath", "Public/MeshTrackerTypes.h" },
		{ "ToolTip", "Response structure for the mesh block info." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapTrackingMeshInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::NewProp_BlockData_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** The meshinfo returned by the system. */" },
		{ "ModuleRelativePath", "Public/MeshTrackerTypes.h" },
		{ "ToolTip", "The meshinfo returned by the system." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::NewProp_BlockData = { "BlockData", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapTrackingMeshInfo, BlockData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::NewProp_BlockData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::NewProp_BlockData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::NewProp_BlockData_Inner = { "BlockData", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** The response timestamp to a earlier request. */" },
		{ "ModuleRelativePath", "Public/MeshTrackerTypes.h" },
		{ "ToolTip", "The response timestamp to a earlier request." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapTrackingMeshInfo, Timestamp), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::NewProp_Timestamp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::NewProp_BlockData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::NewProp_BlockData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::NewProp_Timestamp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
		nullptr,
		&NewStructOps,
		"MagicLeapTrackingMeshInfo",
		sizeof(FMagicLeapTrackingMeshInfo),
		alignof(FMagicLeapTrackingMeshInfo),
		Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapTrackingMeshInfo"), sizeof(FMagicLeapTrackingMeshInfo), Get_Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapTrackingMeshInfo_Hash() { return 3293285249U; }
class UScriptStruct* FMagicLeapMeshBlockInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAGICLEAP_API uint32 Get_Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo, Z_Construct_UPackage__Script_MagicLeap(), TEXT("MagicLeapMeshBlockInfo"), sizeof(FMagicLeapMeshBlockInfo), Get_Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Hash());
	}
	return Singleton;
}
template<> MAGICLEAP_API UScriptStruct* StaticStruct<FMagicLeapMeshBlockInfo>()
{
	return FMagicLeapMeshBlockInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMagicLeapMeshBlockInfo(FMagicLeapMeshBlockInfo::StaticStruct, TEXT("/Script/MagicLeap"), TEXT("MagicLeapMeshBlockInfo"), false, nullptr, nullptr);
static struct FScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapMeshBlockInfo
{
	FScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapMeshBlockInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MagicLeapMeshBlockInfo")),new UScriptStruct::TCppStructOps<FMagicLeapMeshBlockInfo>);
	}
} ScriptStruct_MagicLeap_StaticRegisterNativesFMagicLeapMeshBlockInfo;
	struct Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlockState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlockState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockDimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockDimensions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Representation of a mesh block. */" },
		{ "ModuleRelativePath", "Public/MeshTrackerTypes.h" },
		{ "ToolTip", "Representation of a mesh block." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMagicLeapMeshBlockInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockState_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** The state of the mesh block. */" },
		{ "ModuleRelativePath", "Public/MeshTrackerTypes.h" },
		{ "ToolTip", "The state of the mesh block." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockState = { "BlockState", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapMeshBlockInfo, BlockState), Z_Construct_UEnum_MagicLeap_EMagicLeapMeshState, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** The timestamp when block was updated. */" },
		{ "ModuleRelativePath", "Public/MeshTrackerTypes.h" },
		{ "ToolTip", "The timestamp when block was updated." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapMeshBlockInfo, Timestamp), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockDimensions_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** The size of the mesh block bounding box (in Unreal Units). */" },
		{ "ModuleRelativePath", "Public/MeshTrackerTypes.h" },
		{ "ToolTip", "The size of the mesh block bounding box (in Unreal Units)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockDimensions = { "BlockDimensions", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapMeshBlockInfo, BlockDimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockDimensions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockOrientation_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** The orientation of the mesh block bounding box.*/" },
		{ "ModuleRelativePath", "Public/MeshTrackerTypes.h" },
		{ "ToolTip", "The orientation of the mesh block bounding box." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockOrientation = { "BlockOrientation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapMeshBlockInfo, BlockOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockPosition_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** The center of the mesh block bounding box. */" },
		{ "ModuleRelativePath", "Public/MeshTrackerTypes.h" },
		{ "ToolTip", "The center of the mesh block bounding box." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockPosition = { "BlockPosition", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapMeshBlockInfo, BlockPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockID_MetaData[] = {
		{ "Category", "Meshing|MagicLeap" },
		{ "Comment", "/** The coordinate frame UID to represent the block. */" },
		{ "ModuleRelativePath", "Public/MeshTrackerTypes.h" },
		{ "ToolTip", "The coordinate frame UID to represent the block." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockID = { "BlockID", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMagicLeapMeshBlockInfo, BlockID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockDimensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::NewProp_BlockID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeap,
		nullptr,
		&NewStructOps,
		"MagicLeapMeshBlockInfo",
		sizeof(FMagicLeapMeshBlockInfo),
		alignof(FMagicLeapMeshBlockInfo),
		Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MagicLeap();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MagicLeapMeshBlockInfo"), sizeof(FMagicLeapMeshBlockInfo), Get_Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMagicLeapMeshBlockInfo_Hash() { return 2078607211U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

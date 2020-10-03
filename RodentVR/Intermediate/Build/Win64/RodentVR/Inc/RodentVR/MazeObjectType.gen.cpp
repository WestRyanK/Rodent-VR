// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/MazeObjectType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeObjectType() {}
// Cross Module References
	RODENTVR_API UEnum* Z_Construct_UEnum_RodentVR_MazeObjectType();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
// End Cross Module References
	static UEnum* MazeObjectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RodentVR_MazeObjectType, Z_Construct_UPackage__Script_RodentVR(), TEXT("MazeObjectType"));
		}
		return Singleton;
	}
	template<> RODENTVR_API UEnum* StaticEnum<MazeObjectType>()
	{
		return MazeObjectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_MazeObjectType(MazeObjectType_StaticEnum, TEXT("/Script/RodentVR"), TEXT("MazeObjectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RodentVR_MazeObjectType_Hash() { return 1175489406U; }
	UEnum* Z_Construct_UEnum_RodentVR_MazeObjectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RodentVR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("MazeObjectType"), 0, Get_Z_Construct_UEnum_RodentVR_MazeObjectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MazeObjectType::CUBE", (int64)MazeObjectType::CUBE },
				{ "MazeObjectType::CYLINDER", (int64)MazeObjectType::CYLINDER },
				{ "MazeObjectType::SPHERE", (int64)MazeObjectType::SPHERE },
				{ "MazeObjectType::CONE", (int64)MazeObjectType::CONE },
				{ "MazeObjectType::FIGURINE", (int64)MazeObjectType::FIGURINE },
				{ "MazeObjectType::PLANE", (int64)MazeObjectType::PLANE },
				{ "MazeObjectType::INVALID", (int64)MazeObjectType::INVALID },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n *\n */" },
				{ "CONE.Comment", "/**\n *\n */" },
				{ "CONE.DisplayName", "Cone" },
				{ "CONE.Name", "MazeObjectType::CONE" },
				{ "CUBE.Comment", "/**\n *\n */" },
				{ "CUBE.DisplayName", "Cube" },
				{ "CUBE.Name", "MazeObjectType::CUBE" },
				{ "CYLINDER.Comment", "/**\n *\n */" },
				{ "CYLINDER.DisplayName", "Cylinder" },
				{ "CYLINDER.Name", "MazeObjectType::CYLINDER" },
				{ "FIGURINE.Comment", "/**\n *\n */" },
				{ "FIGURINE.DisplayName", "Figurine" },
				{ "FIGURINE.Name", "MazeObjectType::FIGURINE" },
				{ "INVALID.Comment", "/**\n *\n */" },
				{ "INVALID.DisplayName", "Invalid" },
				{ "INVALID.Name", "MazeObjectType::INVALID" },
				{ "ModuleRelativePath", "Private/Settings/MazeObjectType.h" },
				{ "PLANE.Comment", "/**\n *\n */" },
				{ "PLANE.DisplayName", "Plane" },
				{ "PLANE.Name", "MazeObjectType::PLANE" },
				{ "SPHERE.Comment", "/**\n *\n */" },
				{ "SPHERE.DisplayName", "Sphere" },
				{ "SPHERE.Name", "MazeObjectType::SPHERE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RodentVR,
				nullptr,
				"MazeObjectType",
				"MazeObjectType",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/Roles/LiveLinkCameraTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkCameraTypes() {}
// Cross Module References
	LIVELINKINTERFACE_API UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraStaticData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformStaticData();
// End Cross Module References
	static UEnum* ELiveLinkCameraProjectionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("ELiveLinkCameraProjectionMode"));
		}
		return Singleton;
	}
	template<> LIVELINKINTERFACE_API UEnum* StaticEnum<ELiveLinkCameraProjectionMode>()
	{
		return ELiveLinkCameraProjectionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELiveLinkCameraProjectionMode(ELiveLinkCameraProjectionMode_StaticEnum, TEXT("/Script/LiveLinkInterface"), TEXT("ELiveLinkCameraProjectionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Hash() { return 2114454735U; }
	UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELiveLinkCameraProjectionMode"), 0, Get_Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELiveLinkCameraProjectionMode::Perspective", (int64)ELiveLinkCameraProjectionMode::Perspective },
				{ "ELiveLinkCameraProjectionMode::Orthographic", (int64)ELiveLinkCameraProjectionMode::Orthographic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
				{ "Orthographic.Name", "ELiveLinkCameraProjectionMode::Orthographic" },
				{ "Perspective.Name", "ELiveLinkCameraProjectionMode::Perspective" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LiveLinkInterface,
				nullptr,
				"ELiveLinkCameraProjectionMode",
				"ELiveLinkCameraProjectionMode",
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
class UScriptStruct* FLiveLinkCameraBlueprintData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkCameraBlueprintData"), sizeof(FLiveLinkCameraBlueprintData), Get_Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkCameraBlueprintData>()
{
	return FLiveLinkCameraBlueprintData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkCameraBlueprintData(FLiveLinkCameraBlueprintData::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkCameraBlueprintData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCameraBlueprintData
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCameraBlueprintData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkCameraBlueprintData")),new UScriptStruct::TCppStructOps<FLiveLinkCameraBlueprintData>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCameraBlueprintData;
	struct Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle camera data in blueprint\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Facility structure to handle camera data in blueprint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkCameraBlueprintData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_FrameData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Dynamic data that can change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Dynamic data that can change every frame" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkCameraBlueprintData, FrameData), Z_Construct_UScriptStruct_FLiveLinkCameraFrameData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_FrameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_FrameData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_StaticData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Static data that should not change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Static data that should not change every frame" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkCameraBlueprintData, StaticData), Z_Construct_UScriptStruct_FLiveLinkCameraStaticData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_StaticData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_StaticData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_FrameData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewProp_StaticData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
		&NewStructOps,
		"LiveLinkCameraBlueprintData",
		sizeof(FLiveLinkCameraBlueprintData),
		alignof(FLiveLinkCameraBlueprintData),
		Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkCameraBlueprintData"), sizeof(FLiveLinkCameraBlueprintData), Get_Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Hash() { return 935007244U; }
class UScriptStruct* FLiveLinkCameraFrameData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkCameraFrameData"), sizeof(FLiveLinkCameraFrameData), Get_Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkCameraFrameData>()
{
	return FLiveLinkCameraFrameData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkCameraFrameData(FLiveLinkCameraFrameData::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkCameraFrameData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCameraFrameData
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCameraFrameData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkCameraFrameData")),new UScriptStruct::TCppStructOps<FLiveLinkCameraFrameData>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCameraFrameData;
	struct Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProjectionMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProjectionMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aperture_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Aperture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocalLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocalLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dynamic data for camera \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Dynamic data for camera" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkCameraFrameData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// ProjectionMode of the camera (Perspective, Orthographic, etc...)\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "ProjectionMode of the camera (Perspective, Orthographic, etc...)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode = { "ProjectionMode", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkCameraFrameData, ProjectionMode), Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocusDistance_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Focus distance of the camera in cm. Works only in manual focus method\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Focus distance of the camera in cm. Works only in manual focus method" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocusDistance = { "FocusDistance", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkCameraFrameData, FocusDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocusDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_Aperture_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Aperture of the camera in terms of f-stop\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Aperture of the camera in terms of f-stop" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_Aperture = { "Aperture", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkCameraFrameData, Aperture), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_Aperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_Aperture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocalLength_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Focal length of the camera\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Focal length of the camera" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkCameraFrameData, FocalLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocalLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Aspect Ratio of the camera (Width / Heigth)\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Aspect Ratio of the camera (Width / Heigth)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkCameraFrameData, AspectRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_AspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_AspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FieldOfView_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Field of View of the camera in degrees\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Field of View of the camera in degrees" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkCameraFrameData, FieldOfView), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FieldOfView_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_ProjectionMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocusDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_Aperture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FocalLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_AspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewProp_FieldOfView,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkTransformFrameData,
		&NewStructOps,
		"LiveLinkCameraFrameData",
		sizeof(FLiveLinkCameraFrameData),
		alignof(FLiveLinkCameraFrameData),
		Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraFrameData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkCameraFrameData"), sizeof(FLiveLinkCameraFrameData), Get_Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Hash() { return 3974235802U; }
class UScriptStruct* FLiveLinkCameraStaticData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkCameraStaticData"), sizeof(FLiveLinkCameraStaticData), Get_Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkCameraStaticData>()
{
	return FLiveLinkCameraStaticData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkCameraStaticData(FLiveLinkCameraStaticData::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkCameraStaticData"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCameraStaticData
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCameraStaticData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkCameraStaticData")),new UScriptStruct::TCppStructOps<FLiveLinkCameraStaticData>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkCameraStaticData;
	struct Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFocusDistanceSupported_MetaData[];
#endif
		static void NewProp_bIsFocusDistanceSupported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocusDistanceSupported;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsApertureSupported_MetaData[];
#endif
		static void NewProp_bIsApertureSupported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsApertureSupported;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmBackHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmBackHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmBackWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmBackWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsProjectionModeSupported_MetaData[];
#endif
		static void NewProp_bIsProjectionModeSupported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsProjectionModeSupported;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFocalLengthSupported_MetaData[];
#endif
		static void NewProp_bIsFocalLengthSupported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocalLengthSupported;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAspectRatioSupported_MetaData[];
#endif
		static void NewProp_bIsAspectRatioSupported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAspectRatioSupported;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFieldOfViewSupported_MetaData[];
#endif
		static void NewProp_bIsFieldOfViewSupported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFieldOfViewSupported;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Static data for Camera data. \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Static data for Camera data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkCameraStaticData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether FocusDistance in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether FocusDistance in frame data can be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported_SetBit(void* Obj)
	{
		((FLiveLinkCameraStaticData*)Obj)->bIsFocusDistanceSupported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported = { "bIsFocusDistanceSupported", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether Aperture in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether Aperture in frame data can be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported_SetBit(void* Obj)
	{
		((FLiveLinkCameraStaticData*)Obj)->bIsApertureSupported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported = { "bIsApertureSupported", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackHeight_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Used with CinematicCamera. Values greater than 0 will be applied\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Used with CinematicCamera. Values greater than 0 will be applied" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackHeight = { "FilmBackHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkCameraStaticData, FilmBackHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackWidth_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Used with CinematicCamera. Values greater than 0 will be applied\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Used with CinematicCamera. Values greater than 0 will be applied" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackWidth = { "FilmBackWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkCameraStaticData, FilmBackWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether ProjectionMode in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether ProjectionMode in frame data can be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported_SetBit(void* Obj)
	{
		((FLiveLinkCameraStaticData*)Obj)->bIsProjectionModeSupported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported = { "bIsProjectionModeSupported", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether FocalLength in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether FocalLength in frame data can be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported_SetBit(void* Obj)
	{
		((FLiveLinkCameraStaticData*)Obj)->bIsFocalLengthSupported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported = { "bIsFocalLengthSupported", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether AspectRatio in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether AspectRatio in frame data can be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported_SetBit(void* Obj)
	{
		((FLiveLinkCameraStaticData*)Obj)->bIsAspectRatioSupported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported = { "bIsAspectRatioSupported", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether FieldOfView in frame data can be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkCameraTypes.h" },
		{ "ToolTip", "Whether FieldOfView in frame data can be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported_SetBit(void* Obj)
	{
		((FLiveLinkCameraStaticData*)Obj)->bIsFieldOfViewSupported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported = { "bIsFieldOfViewSupported", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLiveLinkCameraStaticData), &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocusDistanceSupported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_FilmBackWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsProjectionModeSupported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkTransformStaticData,
		&NewStructOps,
		"LiveLinkCameraStaticData",
		sizeof(FLiveLinkCameraStaticData),
		alignof(FLiveLinkCameraStaticData),
		Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraStaticData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkCameraStaticData"), sizeof(FLiveLinkCameraStaticData), Get_Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Hash() { return 4000872996U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/MazeObjectSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeObjectSettings() {}
// Cross Module References
	RODENTVR_API UEnum* Z_Construct_UEnum_RodentVR_MazeObjectType();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UClass* Z_Construct_UClass_UMazeObjectSettings_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_UMazeObjectSettings();
	RODENTVR_API UClass* Z_Construct_UClass_UActorSettings();
	RODENTVR_API UClass* Z_Construct_UClass_UTextureSettings_NoRegister();
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
	uint32 Get_Z_Construct_UEnum_RodentVR_MazeObjectType_Hash() { return 1763656521U; }
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
				{ "MazeObjectType::INVALID", (int64)MazeObjectType::INVALID },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CONE.DisplayName", "Cone" },
				{ "CONE.Name", "MazeObjectType::CONE" },
				{ "CUBE.DisplayName", "Cube" },
				{ "CUBE.Name", "MazeObjectType::CUBE" },
				{ "CYLINDER.DisplayName", "Cylinder" },
				{ "CYLINDER.Name", "MazeObjectType::CYLINDER" },
				{ "FIGURINE.DisplayName", "Figurine" },
				{ "FIGURINE.Name", "MazeObjectType::FIGURINE" },
				{ "INVALID.DisplayName", "Invalid" },
				{ "INVALID.Name", "MazeObjectType::INVALID" },
				{ "ModuleRelativePath", "Private/Settings/MazeObjectSettings.h" },
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
	DEFINE_FUNCTION(UMazeObjectSettings::execGetTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureSettings**)Z_Param__Result=P_THIS->GetTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeObjectSettings::execSetTexture)
	{
		P_GET_OBJECT(UTextureSettings,Z_Param_TextureValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTexture(Z_Param_TextureValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeObjectSettings::execGetObjectTypeString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetObjectTypeString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeObjectSettings::execGetObjectType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(MazeObjectType*)Z_Param__Result=P_THIS->GetObjectType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeObjectSettings::execSetObjectType)
	{
		P_GET_ENUM(MazeObjectType,Z_Param_ObjectTypeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectType(MazeObjectType(Z_Param_ObjectTypeValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeObjectSettings::execGetCanCollide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanCollide();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMazeObjectSettings::execSetCanCollide)
	{
		P_GET_UBOOL(Z_Param_CanCollideValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanCollide(Z_Param_CanCollideValue);
		P_NATIVE_END;
	}
	void UMazeObjectSettings::StaticRegisterNativesUMazeObjectSettings()
	{
		UClass* Class = UMazeObjectSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCanCollide", &UMazeObjectSettings::execGetCanCollide },
			{ "GetObjectType", &UMazeObjectSettings::execGetObjectType },
			{ "GetObjectTypeString", &UMazeObjectSettings::execGetObjectTypeString },
			{ "GetTexture", &UMazeObjectSettings::execGetTexture },
			{ "SetCanCollide", &UMazeObjectSettings::execSetCanCollide },
			{ "SetObjectType", &UMazeObjectSettings::execSetObjectType },
			{ "SetTexture", &UMazeObjectSettings::execSetTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMazeObjectSettings_GetCanCollide_Statics
	{
		struct MazeObjectSettings_eventGetCanCollide_Parms
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
	void Z_Construct_UFunction_UMazeObjectSettings_GetCanCollide_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MazeObjectSettings_eventGetCanCollide_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeObjectSettings_GetCanCollide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeObjectSettings_eventGetCanCollide_Parms), &Z_Construct_UFunction_UMazeObjectSettings_GetCanCollide_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeObjectSettings_GetCanCollide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeObjectSettings_GetCanCollide_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeObjectSettings_GetCanCollide_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeObjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeObjectSettings_GetCanCollide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeObjectSettings, nullptr, "GetCanCollide", nullptr, nullptr, sizeof(MazeObjectSettings_eventGetCanCollide_Parms), Z_Construct_UFunction_UMazeObjectSettings_GetCanCollide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectSettings_GetCanCollide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeObjectSettings_GetCanCollide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectSettings_GetCanCollide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeObjectSettings_GetCanCollide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeObjectSettings_GetCanCollide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeObjectSettings_GetObjectType_Statics
	{
		struct MazeObjectSettings_eventGetObjectType_Parms
		{
			MazeObjectType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMazeObjectSettings_GetObjectType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeObjectSettings_eventGetObjectType_Parms, ReturnValue), Z_Construct_UEnum_RodentVR_MazeObjectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMazeObjectSettings_GetObjectType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeObjectSettings_GetObjectType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeObjectSettings_GetObjectType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeObjectSettings_GetObjectType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeObjectSettings_GetObjectType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeObjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeObjectSettings_GetObjectType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeObjectSettings, nullptr, "GetObjectType", nullptr, nullptr, sizeof(MazeObjectSettings_eventGetObjectType_Parms), Z_Construct_UFunction_UMazeObjectSettings_GetObjectType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectSettings_GetObjectType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeObjectSettings_GetObjectType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectSettings_GetObjectType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeObjectSettings_GetObjectType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeObjectSettings_GetObjectType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeObjectSettings_GetObjectTypeString_Statics
	{
		struct MazeObjectSettings_eventGetObjectTypeString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMazeObjectSettings_GetObjectTypeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeObjectSettings_eventGetObjectTypeString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeObjectSettings_GetObjectTypeString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeObjectSettings_GetObjectTypeString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeObjectSettings_GetObjectTypeString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeObjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeObjectSettings_GetObjectTypeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeObjectSettings, nullptr, "GetObjectTypeString", nullptr, nullptr, sizeof(MazeObjectSettings_eventGetObjectTypeString_Parms), Z_Construct_UFunction_UMazeObjectSettings_GetObjectTypeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectSettings_GetObjectTypeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeObjectSettings_GetObjectTypeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectSettings_GetObjectTypeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeObjectSettings_GetObjectTypeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeObjectSettings_GetObjectTypeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeObjectSettings_GetTexture_Statics
	{
		struct MazeObjectSettings_eventGetTexture_Parms
		{
			UTextureSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeObjectSettings_GetTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeObjectSettings_eventGetTexture_Parms, ReturnValue), Z_Construct_UClass_UTextureSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeObjectSettings_GetTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeObjectSettings_GetTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeObjectSettings_GetTexture_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeObjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeObjectSettings_GetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeObjectSettings, nullptr, "GetTexture", nullptr, nullptr, sizeof(MazeObjectSettings_eventGetTexture_Parms), Z_Construct_UFunction_UMazeObjectSettings_GetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectSettings_GetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeObjectSettings_GetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectSettings_GetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeObjectSettings_GetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeObjectSettings_GetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeObjectSettings_SetCanCollide_Statics
	{
		struct MazeObjectSettings_eventSetCanCollide_Parms
		{
			bool CanCollideValue;
		};
		static void NewProp_CanCollideValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanCollideValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMazeObjectSettings_SetCanCollide_Statics::NewProp_CanCollideValue_SetBit(void* Obj)
	{
		((MazeObjectSettings_eventSetCanCollide_Parms*)Obj)->CanCollideValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMazeObjectSettings_SetCanCollide_Statics::NewProp_CanCollideValue = { "CanCollideValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MazeObjectSettings_eventSetCanCollide_Parms), &Z_Construct_UFunction_UMazeObjectSettings_SetCanCollide_Statics::NewProp_CanCollideValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeObjectSettings_SetCanCollide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeObjectSettings_SetCanCollide_Statics::NewProp_CanCollideValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeObjectSettings_SetCanCollide_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeObjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeObjectSettings_SetCanCollide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeObjectSettings, nullptr, "SetCanCollide", nullptr, nullptr, sizeof(MazeObjectSettings_eventSetCanCollide_Parms), Z_Construct_UFunction_UMazeObjectSettings_SetCanCollide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectSettings_SetCanCollide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeObjectSettings_SetCanCollide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectSettings_SetCanCollide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeObjectSettings_SetCanCollide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeObjectSettings_SetCanCollide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeObjectSettings_SetObjectType_Statics
	{
		struct MazeObjectSettings_eventSetObjectType_Parms
		{
			MazeObjectType ObjectTypeValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectTypeValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectTypeValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMazeObjectSettings_SetObjectType_Statics::NewProp_ObjectTypeValue = { "ObjectTypeValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeObjectSettings_eventSetObjectType_Parms, ObjectTypeValue), Z_Construct_UEnum_RodentVR_MazeObjectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMazeObjectSettings_SetObjectType_Statics::NewProp_ObjectTypeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeObjectSettings_SetObjectType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeObjectSettings_SetObjectType_Statics::NewProp_ObjectTypeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeObjectSettings_SetObjectType_Statics::NewProp_ObjectTypeValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeObjectSettings_SetObjectType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeObjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeObjectSettings_SetObjectType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeObjectSettings, nullptr, "SetObjectType", nullptr, nullptr, sizeof(MazeObjectSettings_eventSetObjectType_Parms), Z_Construct_UFunction_UMazeObjectSettings_SetObjectType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectSettings_SetObjectType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeObjectSettings_SetObjectType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectSettings_SetObjectType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeObjectSettings_SetObjectType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeObjectSettings_SetObjectType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeObjectSettings_SetTexture_Statics
	{
		struct MazeObjectSettings_eventSetTexture_Parms
		{
			UTextureSettings* TextureValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMazeObjectSettings_SetTexture_Statics::NewProp_TextureValue = { "TextureValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeObjectSettings_eventSetTexture_Parms, TextureValue), Z_Construct_UClass_UTextureSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeObjectSettings_SetTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeObjectSettings_SetTexture_Statics::NewProp_TextureValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeObjectSettings_SetTexture_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Private/Settings/MazeObjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeObjectSettings_SetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeObjectSettings, nullptr, "SetTexture", nullptr, nullptr, sizeof(MazeObjectSettings_eventSetTexture_Parms), Z_Construct_UFunction_UMazeObjectSettings_SetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectSettings_SetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeObjectSettings_SetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMazeObjectSettings_SetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeObjectSettings_SetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeObjectSettings_SetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMazeObjectSettings_NoRegister()
	{
		return UMazeObjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMazeObjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanCollide_MetaData[];
#endif
		static void NewProp_CanCollide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanCollide;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMazeObjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMazeObjectSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMazeObjectSettings_GetCanCollide, "GetCanCollide" }, // 1087809498
		{ &Z_Construct_UFunction_UMazeObjectSettings_GetObjectType, "GetObjectType" }, // 748050332
		{ &Z_Construct_UFunction_UMazeObjectSettings_GetObjectTypeString, "GetObjectTypeString" }, // 2551651633
		{ &Z_Construct_UFunction_UMazeObjectSettings_GetTexture, "GetTexture" }, // 3215920279
		{ &Z_Construct_UFunction_UMazeObjectSettings_SetCanCollide, "SetCanCollide" }, // 239627618
		{ &Z_Construct_UFunction_UMazeObjectSettings_SetObjectType, "SetObjectType" }, // 3173394906
		{ &Z_Construct_UFunction_UMazeObjectSettings_SetTexture, "SetTexture" }, // 816140468
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeObjectSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Settings/MazeObjectSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Settings/MazeObjectSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_Texture_MetaData[] = {
		{ "BlueprintGetter", "GetTexture" },
		{ "BlueprintSetter", "SetTexture" },
		{ "Category", "MazeObjectSettings" },
		{ "ModuleRelativePath", "Private/Settings/MazeObjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeObjectSettings, Texture), Z_Construct_UClass_UTextureSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_ObjectType_MetaData[] = {
		{ "BlueprintGetter", "GetObjectType" },
		{ "BlueprintSetter", "SetObjectType" },
		{ "Category", "MazeObjectSettings" },
		{ "ModuleRelativePath", "Private/Settings/MazeObjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMazeObjectSettings, ObjectType), Z_Construct_UEnum_RodentVR_MazeObjectType, METADATA_PARAMS(Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_ObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_ObjectType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_ObjectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_CanCollide_MetaData[] = {
		{ "BlueprintGetter", "GetCanCollide" },
		{ "BlueprintSetter", "SetCanCollide" },
		{ "Category", "MazeObjectSettings" },
		{ "ModuleRelativePath", "Private/Settings/MazeObjectSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_CanCollide_SetBit(void* Obj)
	{
		((UMazeObjectSettings*)Obj)->CanCollide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_CanCollide = { "CanCollide", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMazeObjectSettings), &Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_CanCollide_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_CanCollide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_CanCollide_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMazeObjectSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_ObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_ObjectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMazeObjectSettings_Statics::NewProp_CanCollide,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMazeObjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMazeObjectSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMazeObjectSettings_Statics::ClassParams = {
		&UMazeObjectSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMazeObjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMazeObjectSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMazeObjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMazeObjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMazeObjectSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMazeObjectSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMazeObjectSettings, 489607288);
	template<> RODENTVR_API UClass* StaticClass<UMazeObjectSettings>()
	{
		return UMazeObjectSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMazeObjectSettings(Z_Construct_UClass_UMazeObjectSettings, &UMazeObjectSettings::StaticClass, TEXT("/Script/RodentVR"), TEXT("UMazeObjectSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMazeObjectSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

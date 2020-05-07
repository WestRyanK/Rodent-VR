// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RodentVR/Private/Settings/MazeObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeObject() {}
// Cross Module References
	RODENTVR_API UEnum* Z_Construct_UEnum_RodentVR_MazeObjectType();
	UPackage* Z_Construct_UPackage__Script_RodentVR();
	RODENTVR_API UClass* Z_Construct_UClass_AMazeObject_NoRegister();
	RODENTVR_API UClass* Z_Construct_UClass_AMazeObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	RODENTVR_API UFunction* Z_Construct_UFunction_AMazeObject_GetObjectType();
	RODENTVR_API UFunction* Z_Construct_UFunction_AMazeObject_GetTextureFileName();
	RODENTVR_API UFunction* Z_Construct_UFunction_AMazeObject_SetObjectType();
	RODENTVR_API UFunction* Z_Construct_UFunction_AMazeObject_SetTextureFileName();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
	uint32 Get_Z_Construct_UEnum_RodentVR_MazeObjectType_Hash() { return 1231032042U; }
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
				{ "ModuleRelativePath", "Private/Settings/MazeObject.h" },
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
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AMazeObject::StaticRegisterNativesAMazeObject()
	{
		UClass* Class = AMazeObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetObjectType", &AMazeObject::execGetObjectType },
			{ "GetTextureFileName", &AMazeObject::execGetTextureFileName },
			{ "SetObjectType", &AMazeObject::execSetObjectType },
			{ "SetTextureFileName", &AMazeObject::execSetTextureFileName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMazeObject_GetObjectType_Statics
	{
		struct MazeObject_eventGetObjectType_Parms
		{
			MazeObjectType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMazeObject_GetObjectType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeObject_eventGetObjectType_Parms, ReturnValue), Z_Construct_UEnum_RodentVR_MazeObjectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMazeObject_GetObjectType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeObject_GetObjectType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeObject_GetObjectType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeObject_GetObjectType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeObject_GetObjectType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeObject_GetObjectType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeObject, nullptr, "GetObjectType", nullptr, nullptr, sizeof(MazeObject_eventGetObjectType_Parms), Z_Construct_UFunction_AMazeObject_GetObjectType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMazeObject_GetObjectType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeObject_GetObjectType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMazeObject_GetObjectType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeObject_GetObjectType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMazeObject_GetObjectType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeObject_GetTextureFileName_Statics
	{
		struct MazeObject_eventGetTextureFileName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AMazeObject_GetTextureFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeObject_eventGetTextureFileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeObject_GetTextureFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeObject_GetTextureFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeObject_GetTextureFileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeObject_GetTextureFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeObject, nullptr, "GetTextureFileName", nullptr, nullptr, sizeof(MazeObject_eventGetTextureFileName_Parms), Z_Construct_UFunction_AMazeObject_GetTextureFileName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMazeObject_GetTextureFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeObject_GetTextureFileName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMazeObject_GetTextureFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeObject_GetTextureFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMazeObject_GetTextureFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeObject_SetObjectType_Statics
	{
		struct MazeObject_eventSetObjectType_Parms
		{
			MazeObjectType ObjectTypeValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectTypeValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ObjectTypeValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMazeObject_SetObjectType_Statics::NewProp_ObjectTypeValue = { "ObjectTypeValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeObject_eventSetObjectType_Parms, ObjectTypeValue), Z_Construct_UEnum_RodentVR_MazeObjectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMazeObject_SetObjectType_Statics::NewProp_ObjectTypeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeObject_SetObjectType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeObject_SetObjectType_Statics::NewProp_ObjectTypeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeObject_SetObjectType_Statics::NewProp_ObjectTypeValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeObject_SetObjectType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeObject_SetObjectType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeObject, nullptr, "SetObjectType", nullptr, nullptr, sizeof(MazeObject_eventSetObjectType_Parms), Z_Construct_UFunction_AMazeObject_SetObjectType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMazeObject_SetObjectType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeObject_SetObjectType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMazeObject_SetObjectType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeObject_SetObjectType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMazeObject_SetObjectType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMazeObject_SetTextureFileName_Statics
	{
		struct MazeObject_eventSetTextureFileName_Parms
		{
			FText TextureFileNameValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextureFileNameValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AMazeObject_SetTextureFileName_Statics::NewProp_TextureFileNameValue = { "TextureFileNameValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MazeObject_eventSetTextureFileName_Parms, TextureFileNameValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMazeObject_SetTextureFileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMazeObject_SetTextureFileName_Statics::NewProp_TextureFileNameValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeObject_SetTextureFileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeObject_SetTextureFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeObject, nullptr, "SetTextureFileName", nullptr, nullptr, sizeof(MazeObject_eventSetTextureFileName_Parms), Z_Construct_UFunction_AMazeObject_SetTextureFileName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMazeObject_SetTextureFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMazeObject_SetTextureFileName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMazeObject_SetTextureFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMazeObject_SetTextureFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMazeObject_SetTextureFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMazeObject_NoRegister()
	{
		return AMazeObject::StaticClass();
	}
	struct Z_Construct_UClass_AMazeObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextureFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ObjectType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazeObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RodentVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMazeObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMazeObject_GetObjectType, "GetObjectType" }, // 407520814
		{ &Z_Construct_UFunction_AMazeObject_GetTextureFileName, "GetTextureFileName" }, // 2350310791
		{ &Z_Construct_UFunction_AMazeObject_SetObjectType, "SetObjectType" }, // 947351457
		{ &Z_Construct_UFunction_AMazeObject_SetTextureFileName, "SetTextureFileName" }, // 3565631241
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/MazeObject.h" },
		{ "ModuleRelativePath", "Private/Settings/MazeObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeObject_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Settings/MazeObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeObject_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeObject, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeObject_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMazeObject_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeObject_Statics::NewProp_TextureFileName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeObject.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AMazeObject_Statics::NewProp_TextureFileName = { "TextureFileName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeObject, TextureFileName), METADATA_PARAMS(Z_Construct_UClass_AMazeObject_Statics::NewProp_TextureFileName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMazeObject_Statics::NewProp_TextureFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeObject_Statics::NewProp_ObjectType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Settings/MazeObject.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMazeObject_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeObject, ObjectType), Z_Construct_UEnum_RodentVR_MazeObjectType, METADATA_PARAMS(Z_Construct_UClass_AMazeObject_Statics::NewProp_ObjectType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMazeObject_Statics::NewProp_ObjectType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMazeObject_Statics::NewProp_ObjectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMazeObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeObject_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeObject_Statics::NewProp_TextureFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeObject_Statics::NewProp_ObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeObject_Statics::NewProp_ObjectType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazeObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMazeObject_Statics::ClassParams = {
		&AMazeObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMazeObject_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMazeObject_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMazeObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMazeObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMazeObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMazeObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMazeObject, 3099658277);
	template<> RODENTVR_API UClass* StaticClass<AMazeObject>()
	{
		return AMazeObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMazeObject(Z_Construct_UClass_AMazeObject, &AMazeObject::StaticClass, TEXT("/Script/RodentVR"), TEXT("AMazeObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapSharedWorld/Public/MagicLeapSharedWorldGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapSharedWorldGameState() {}
// Cross Module References
	MAGICLEAPSHAREDWORLD_API UFunction* Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature();
	MAGICLEAPSHAREDWORLD_API UClass* Z_Construct_UClass_AMagicLeapSharedWorldGameState();
	MAGICLEAPSHAREDWORLD_API UClass* Z_Construct_UClass_AMagicLeapSharedWorldGameState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_MagicLeapSharedWorld();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MAGICLEAPSHAREDWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms();
	MAGICLEAPSHAREDWORLD_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicLeapSharedWorldGameState, nullptr, "MagicLeapSharedWorldEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AMagicLeapSharedWorldGameState::execOnReplicate_AlignmentTransforms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReplicate_AlignmentTransforms();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicLeapSharedWorldGameState::execOnReplicate_SharedWorldData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReplicate_SharedWorldData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagicLeapSharedWorldGameState::execCalculateXRCameraRootTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->CalculateXRCameraRootTransform_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform = FName(TEXT("CalculateXRCameraRootTransform"));
	FTransform AMagicLeapSharedWorldGameState::CalculateXRCameraRootTransform() const
	{
		MagicLeapSharedWorldGameState_eventCalculateXRCameraRootTransform_Parms Parms;
		const_cast<AMagicLeapSharedWorldGameState*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform),&Parms);
		return Parms.ReturnValue;
	}
	void AMagicLeapSharedWorldGameState::StaticRegisterNativesAMagicLeapSharedWorldGameState()
	{
		UClass* Class = AMagicLeapSharedWorldGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateXRCameraRootTransform", &AMagicLeapSharedWorldGameState::execCalculateXRCameraRootTransform },
			{ "OnReplicate_AlignmentTransforms", &AMagicLeapSharedWorldGameState::execOnReplicate_AlignmentTransforms },
			{ "OnReplicate_SharedWorldData", &AMagicLeapSharedWorldGameState::execOnReplicate_SharedWorldData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapSharedWorldGameState_eventCalculateXRCameraRootTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "Comment", "/**\n\x09 * Calculates the transform to be used to align coordinate spaces of connected clients.\n\x09 *\n\x09 * The result should be set as the world transform of the parent of the camera component.\n\x09 * This function is a BlueprintNativeEvent, override to implement a custom behavior.\n\x09 * Default implementation -> inv(inv(AlignmentTransform) * ClientPinTransform)\n\x09 * and uses only yaw component in rotation to ensure up vector alignes with gravity.\n\x09 * The result is an average of the calculated transforms for each shared pin.\n\x09 * @return Alignment transform to be applied to the camera component parent.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameState.h" },
		{ "ToolTip", "Calculates the transform to be used to align coordinate spaces of connected clients.\n\nThe result should be set as the world transform of the parent of the camera component.\nThis function is a BlueprintNativeEvent, override to implement a custom behavior.\nDefault implementation -> inv(inv(AlignmentTransform) * ClientPinTransform)\nand uses only yaw component in rotation to ensure up vector alignes with gravity.\nThe result is an average of the calculated transforms for each shared pin.\n@return Alignment transform to be applied to the camera component parent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicLeapSharedWorldGameState, nullptr, "CalculateXRCameraRootTransform", nullptr, nullptr, sizeof(MagicLeapSharedWorldGameState_eventCalculateXRCameraRootTransform_Parms), Z_Construct_UFunction_AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicLeapSharedWorldGameState_OnReplicate_AlignmentTransforms_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicLeapSharedWorldGameState_OnReplicate_AlignmentTransforms_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicLeapSharedWorldGameState_OnReplicate_AlignmentTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicLeapSharedWorldGameState, nullptr, "OnReplicate_AlignmentTransforms", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicLeapSharedWorldGameState_OnReplicate_AlignmentTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldGameState_OnReplicate_AlignmentTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicLeapSharedWorldGameState_OnReplicate_AlignmentTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicLeapSharedWorldGameState_OnReplicate_AlignmentTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagicLeapSharedWorldGameState_OnReplicate_SharedWorldData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicLeapSharedWorldGameState_OnReplicate_SharedWorldData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicLeapSharedWorldGameState_OnReplicate_SharedWorldData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicLeapSharedWorldGameState, nullptr, "OnReplicate_SharedWorldData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicLeapSharedWorldGameState_OnReplicate_SharedWorldData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicLeapSharedWorldGameState_OnReplicate_SharedWorldData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicLeapSharedWorldGameState_OnReplicate_SharedWorldData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicLeapSharedWorldGameState_OnReplicate_SharedWorldData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMagicLeapSharedWorldGameState_NoRegister()
	{
		return AMagicLeapSharedWorldGameState::StaticClass();
	}
	struct Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAlignmentTransformsUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAlignmentTransformsUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSharedWorldDataUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSharedWorldDataUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignmentTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlignmentTransforms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedWorldData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedWorldData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapSharedWorld,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform, "CalculateXRCameraRootTransform" }, // 241880859
		{ &Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature, "MagicLeapSharedWorldEvent__DelegateSignature" }, // 865732408
		{ &Z_Construct_UFunction_AMagicLeapSharedWorldGameState_OnReplicate_AlignmentTransforms, "OnReplicate_AlignmentTransforms" }, // 466246039
		{ &Z_Construct_UFunction_AMagicLeapSharedWorldGameState_OnReplicate_SharedWorldData, "OnReplicate_SharedWorldData" }, // 3283261038
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MagicLeapSharedWorldGameState.h" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_OnAlignmentTransformsUpdated_MetaData[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "Comment", "/**\n\x09 * Event fired when alignment transforms are updated on the client.\n\x09 * @see AlignmentTransforms\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameState.h" },
		{ "ToolTip", "Event fired when alignment transforms are updated on the client.\n@see AlignmentTransforms" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_OnAlignmentTransformsUpdated = { "OnAlignmentTransformsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicLeapSharedWorldGameState, OnAlignmentTransformsUpdated), Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_OnAlignmentTransformsUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_OnAlignmentTransformsUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_OnSharedWorldDataUpdated_MetaData[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "Comment", "/**\n\x09 * Event fired when shared pins are updated on the client.\n\x09 * @see SharedWorldData\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameState.h" },
		{ "ToolTip", "Event fired when shared pins are updated on the client.\n@see SharedWorldData" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_OnSharedWorldDataUpdated = { "OnSharedWorldDataUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicLeapSharedWorldGameState, OnSharedWorldDataUpdated), Z_Construct_UDelegateFunction_AMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_OnSharedWorldDataUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_OnSharedWorldDataUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_AlignmentTransforms_MetaData[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "Comment", "/**\n\x09 * Alignment transforms, replicated to all clients, to be used to calculate the final transform for the camera component parent to align coordinate spaces.\n\x09 * Order should match the pin order in SharedWorldData.PinIDs.\n\x09 * @see CalculateXRCameraRootTransform\n\x09 * @see OnAlignmentTransformsUpdated\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameState.h" },
		{ "ToolTip", "Alignment transforms, replicated to all clients, to be used to calculate the final transform for the camera component parent to align coordinate spaces.\nOrder should match the pin order in SharedWorldData.PinIDs.\n@see CalculateXRCameraRootTransform\n@see OnAlignmentTransformsUpdated" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_AlignmentTransforms = { "AlignmentTransforms", "OnReplicate_AlignmentTransforms", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicLeapSharedWorldGameState, AlignmentTransforms), Z_Construct_UScriptStruct_FMagicLeapSharedWorldAlignmentTransforms, METADATA_PARAMS(Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_AlignmentTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_AlignmentTransforms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_SharedWorldData_MetaData[] = {
		{ "Category", "AR Shared World|Magic Leap" },
		{ "Comment", "/**\n\x09 * Pins which are common in this environment and replicated to all clients.\n\x09 * @see OnSharedWorldDataUpdated\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapSharedWorldGameState.h" },
		{ "ToolTip", "Pins which are common in this environment and replicated to all clients.\n@see OnSharedWorldDataUpdated" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_SharedWorldData = { "SharedWorldData", "OnReplicate_SharedWorldData", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicLeapSharedWorldGameState, SharedWorldData), Z_Construct_UScriptStruct_FMagicLeapSharedWorldSharedData, METADATA_PARAMS(Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_SharedWorldData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_SharedWorldData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_OnAlignmentTransformsUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_OnSharedWorldDataUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_AlignmentTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::NewProp_SharedWorldData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicLeapSharedWorldGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::ClassParams = {
		&AMagicLeapSharedWorldGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagicLeapSharedWorldGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMagicLeapSharedWorldGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMagicLeapSharedWorldGameState, 897203509);
	template<> MAGICLEAPSHAREDWORLD_API UClass* StaticClass<AMagicLeapSharedWorldGameState>()
	{
		return AMagicLeapSharedWorldGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMagicLeapSharedWorldGameState(Z_Construct_UClass_AMagicLeapSharedWorldGameState, &AMagicLeapSharedWorldGameState::StaticClass, TEXT("/Script/MagicLeapSharedWorld"), TEXT("AMagicLeapSharedWorldGameState"), false, nullptr, nullptr, nullptr);

	void AMagicLeapSharedWorldGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_SharedWorldData(TEXT("SharedWorldData"));
		static const FName Name_AlignmentTransforms(TEXT("AlignmentTransforms"));

		const bool bIsValid = true
			&& Name_SharedWorldData == ClassReps[(int32)ENetFields_Private::SharedWorldData].Property->GetFName()
			&& Name_AlignmentTransforms == ClassReps[(int32)ENetFields_Private::AlignmentTransforms].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMagicLeapSharedWorldGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicLeapSharedWorldGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

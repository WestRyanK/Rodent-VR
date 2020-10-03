// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapARPin/Public/MagicLeapARPinComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapARPinComponent() {}
// Cross Module References
	MAGICLEAPARPIN_API UFunction* Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature();
	MAGICLEAPARPIN_API UClass* Z_Construct_UClass_UMagicLeapARPinComponent();
	MAGICLEAPARPIN_API UFunction* Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature();
	MAGICLEAPARPIN_API UClass* Z_Construct_UClass_UMagicLeapARPinComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_MagicLeapARPin();
	MAGICLEAPARPIN_API UClass* Z_Construct_UClass_UMagicLeapARPinSaveGame_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MAGICLEAPARPIN_API UScriptStruct* Z_Construct_UScriptStruct_FMagicLeapARPinState();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MAGICLEAPARPIN_API UEnum* Z_Construct_UEnum_MagicLeapARPin_EMagicLeapAutoPinType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Delegate used to notify the instigating blueprint that an entity (component or actor) has lost a previously obtained pin.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Delegate used to notify the instigating blueprint that an entity (component or actor) has lost a previously obtained pin." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "PersistentEntityPinLost__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics
	{
		struct MagicLeapARPinComponent_eventPersistentEntityPinned_Parms
		{
			bool bRestoredOrSynced;
		};
		static void NewProp_bRestoredOrSynced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestoredOrSynced;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::NewProp_bRestoredOrSynced_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventPersistentEntityPinned_Parms*)Obj)->bRestoredOrSynced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::NewProp_bRestoredOrSynced = { "bRestoredOrSynced", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventPersistentEntityPinned_Parms), &Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::NewProp_bRestoredOrSynced_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::NewProp_bRestoredOrSynced,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Delegate used to notify the instigating blueprint that an entity (component or actor) has been successfully pinned to the real-world.\n\x09 * Indicates that the transform of the pinned entity is now locked. App needs to call UnPin() if it wants to move the entity again.\n\x09 * @param bRestoredOrSynced True if the entity was pinned as a result of Pin data being restored from local storage or replicatred over network, false if pinned by an explicit PinSceneComponent() or PinActor() call from the app.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Delegate used to notify the instigating blueprint that an entity (component or actor) has been successfully pinned to the real-world.\nIndicates that the transform of the pinned entity is now locked. App needs to call UnPin() if it wants to move the entity again.\n@param bRestoredOrSynced True if the entity was pinned as a result of Pin data being restored from local storage or replicatred over network, false if pinned by an explicit PinSceneComponent() or PinActor() call from the app." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "PersistentEntityPinned__DelegateSignature", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventPersistentEntityPinned_Parms), Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execGetPinState)
	{
		P_GET_STRUCT_REF(FMagicLeapARPinState,Z_Param_Out_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPinState(Z_Param_Out_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execGetPinData)
	{
		P_GET_OBJECT(UClass,Z_Param_PinDataClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMagicLeapARPinSaveGame**)Z_Param__Result=P_THIS->GetPinData(Z_Param_PinDataClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execGetPinnedPinID)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_PinID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPinnedPinID(Z_Param_Out_PinID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execPinRestoredOrSynced)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PinRestoredOrSynced();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execIsPinned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPinned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execUnPin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnPin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execPinActor)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PinActor(Z_Param_ActorToPin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapARPinComponent::execPinSceneComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToPin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PinSceneComponent(Z_Param_ComponentToPin);
		P_NATIVE_END;
	}
	void UMagicLeapARPinComponent::StaticRegisterNativesUMagicLeapARPinComponent()
	{
		UClass* Class = UMagicLeapARPinComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPinData", &UMagicLeapARPinComponent::execGetPinData },
			{ "GetPinnedPinID", &UMagicLeapARPinComponent::execGetPinnedPinID },
			{ "GetPinState", &UMagicLeapARPinComponent::execGetPinState },
			{ "IsPinned", &UMagicLeapARPinComponent::execIsPinned },
			{ "PinActor", &UMagicLeapARPinComponent::execPinActor },
			{ "PinRestoredOrSynced", &UMagicLeapARPinComponent::execPinRestoredOrSynced },
			{ "PinSceneComponent", &UMagicLeapARPinComponent::execPinSceneComponent },
			{ "UnPin", &UMagicLeapARPinComponent::execUnPin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics
	{
		struct MagicLeapARPinComponent_eventGetPinData_Parms
		{
			TSubclassOf<UMagicLeapARPinSaveGame>  PinDataClass;
			UMagicLeapARPinSaveGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PinDataClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinComponent_eventGetPinData_Parms, ReturnValue), Z_Construct_UClass_UMagicLeapARPinSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::NewProp_PinDataClass = { "PinDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinComponent_eventGetPinData_Parms, PinDataClass), Z_Construct_UClass_UMagicLeapARPinSaveGame_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::NewProp_PinDataClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Retrieves the data associated with this pin.\n\x09 * @param PinDataClass The user defined save game class used by this pin.  Note that this must match the PinDataClass property.\n\x09 * @return The save game instance associated with this pin instance.\n\x09 */" },
		{ "DeterminesOutputType", "PinDataClass" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Retrieves the data associated with this pin.\n@param PinDataClass The user defined save game class used by this pin.  Note that this must match the PinDataClass property.\n@return The save game instance associated with this pin instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "GetPinData", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventGetPinData_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics
	{
		struct MagicLeapARPinComponent_eventGetPinnedPinID_Parms
		{
			FGuid PinID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventGetPinnedPinID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventGetPinnedPinID_Parms), &Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::NewProp_PinID = { "PinID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinComponent_eventGetPinnedPinID_Parms, PinID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::NewProp_PinID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Get the ID of the Pin the entity (component or actor) is currently pinned to.\n\x09 * @param PinID Output param for the ID of the Pin.\n\x09 * @return True if an entity is currently pinned by this component and the output param is successfully populated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Get the ID of the Pin the entity (component or actor) is currently pinned to.\n@param PinID Output param for the ID of the Pin.\n@return True if an entity is currently pinned by this component and the output param is successfully populated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "GetPinnedPinID", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventGetPinnedPinID_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics
	{
		struct MagicLeapARPinComponent_eventGetPinState_Parms
		{
			FMagicLeapARPinState State;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventGetPinState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventGetPinState_Parms), &Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinComponent_eventGetPinState_Parms, State), Z_Construct_UScriptStruct_FMagicLeapARPinState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09* Returns the state of this Pin.\n\x09* @param State Output state of the Pin. Valid only if return value is true.\n\x09* @return Error code representing specific success or failure cases.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Returns the state of this Pin.\n@param State Output state of the Pin. Valid only if return value is true.\n@return Error code representing specific success or failure cases." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "GetPinState", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventGetPinState_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics
	{
		struct MagicLeapARPinComponent_eventIsPinned_Parms
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
	void Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventIsPinned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventIsPinned_Parms), &Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * True if an entity (component or actor) is currently pinned by this component.\n\x09 * If true, the entity's transform will be locked. App needs to call UnPin() if it wants to move it again.\n\x09 * If false, and you still want your content to persist, you will have to call PinSceneComponent() or PinActor() before EndPlay().\n\x09 * @return True if an entity (component or actor) is currently pinned by this component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "True if an entity (component or actor) is currently pinned by this component.\nIf true, the entity's transform will be locked. App needs to call UnPin() if it wants to move it again.\nIf false, and you still want your content to persist, you will have to call PinSceneComponent() or PinActor() before EndPlay().\n@return True if an entity (component or actor) is currently pinned by this component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "IsPinned", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventIsPinned_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics
	{
		struct MagicLeapARPinComponent_eventPinActor_Parms
		{
			AActor* ActorToPin;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToPin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventPinActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventPinActor_Parms), &Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::NewProp_ActorToPin = { "ActorToPin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinComponent_eventPinActor_Parms, ActorToPin), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::NewProp_ActorToPin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Pin given Actor to the closest AR Pin in real-world.\n\x09 * OnPersistentEntityPinned event will be fired when a suitable AR Pin is found for this Actor.\n\x09 * The Actor's transform will then be locked. App needs to call UnPin() if it wants to move the Actor again.\n\x09 * @param ActorToPin Actor to pin to the world. Pass in this component's owner if app is using 'OnlyOnDataRestoration' or 'Always' AutoPinType.\n\x09 * @return true if the Actor was accepted to be pinned, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Pin given Actor to the closest AR Pin in real-world.\nOnPersistentEntityPinned event will be fired when a suitable AR Pin is found for this Actor.\nThe Actor's transform will then be locked. App needs to call UnPin() if it wants to move the Actor again.\n@param ActorToPin Actor to pin to the world. Pass in this component's owner if app is using 'OnlyOnDataRestoration' or 'Always' AutoPinType.\n@return true if the Actor was accepted to be pinned, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "PinActor", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventPinActor_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics
	{
		struct MagicLeapARPinComponent_eventPinRestoredOrSynced_Parms
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
	void Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventPinRestoredOrSynced_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventPinRestoredOrSynced_Parms), &Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * True if the AR Pin for the unique ID ObjectUID was restored from the app's local storage or was repliated over network.\n\x09 * Implies if content was already pinned earlier. Does not imply if that restored Pin is available in the current environment.\n\x09 * @return True if the Pin data was restored from local storage or network.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "True if the AR Pin for the unique ID ObjectUID was restored from the app's local storage or was repliated over network.\nImplies if content was already pinned earlier. Does not imply if that restored Pin is available in the current environment.\n@return True if the Pin data was restored from local storage or network." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "PinRestoredOrSynced", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventPinRestoredOrSynced_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics
	{
		struct MagicLeapARPinComponent_eventPinSceneComponent_Parms
		{
			USceneComponent* ComponentToPin;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToPin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToPin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapARPinComponent_eventPinSceneComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapARPinComponent_eventPinSceneComponent_Parms), &Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ComponentToPin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ComponentToPin = { "ComponentToPin", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapARPinComponent_eventPinSceneComponent_Parms, ComponentToPin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ComponentToPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ComponentToPin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::NewProp_ComponentToPin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Pin given SceneComponent to the closest AR Pin in real-world.\n\x09 * OnPersistentEntityPinned event will be fired when a suitable AR Pin is found for this component.\n\x09 * The component's transform will then be locked. App needs to call UnPin() if it wants to move the component again.\n\x09 * @param ComponentToPin SceneComponent to pin to the world. Pass in 'this' component if app is using 'OnlyOnDataRestoration' or 'Always' AutoPinType.\n\x09 * @return true if the component was accepted to be pinned, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Pin given SceneComponent to the closest AR Pin in real-world.\nOnPersistentEntityPinned event will be fired when a suitable AR Pin is found for this component.\nThe component's transform will then be locked. App needs to call UnPin() if it wants to move the component again.\n@param ComponentToPin SceneComponent to pin to the world. Pass in 'this' component if app is using 'OnlyOnDataRestoration' or 'Always' AutoPinType.\n@return true if the component was accepted to be pinned, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "PinSceneComponent", nullptr, nullptr, sizeof(MagicLeapARPinComponent_eventPinSceneComponent_Parms), Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapARPinComponent_UnPin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapARPinComponent_UnPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Detach or un-pin the currently pinned entity (component or actor) from the real-world.\n\x09 * Call this if you want to change the transform of a pinned entity.\n\x09 * Note that if you still want your content to persist, you will have to call PinSceneComponent() or PinActor() before EndPlay().\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Detach or un-pin the currently pinned entity (component or actor) from the real-world.\nCall this if you want to change the transform of a pinned entity.\nNote that if you still want your content to persist, you will have to call PinSceneComponent() or PinActor() before EndPlay()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapARPinComponent_UnPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapARPinComponent, nullptr, "UnPin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapARPinComponent_UnPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapARPinComponent_UnPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapARPinComponent_UnPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapARPinComponent_UnPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapARPinComponent_NoRegister()
	{
		return UMagicLeapARPinComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapARPinComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PinData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinnedSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PinnedSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinnedCFUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinnedCFUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPersistentEntityPinLost_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPersistentEntityPinLost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPersistentEntityPinned_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPersistentEntityPinned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinDataClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PinDataClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldPinActor_MetaData[];
#endif
		static void NewProp_bShouldPinActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldPinActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoPinType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoPinType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoPinType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapARPinComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapARPin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapARPinComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinData, "GetPinData" }, // 1131336039
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinnedPinID, "GetPinnedPinID" }, // 3104281266
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_GetPinState, "GetPinState" }, // 117513512
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_IsPinned, "IsPinned" }, // 414596543
		{ &Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature, "PersistentEntityPinLost__DelegateSignature" }, // 1693097645
		{ &Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature, "PersistentEntityPinned__DelegateSignature" }, // 3510932148
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_PinActor, "PinActor" }, // 402911931
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_PinRestoredOrSynced, "PinRestoredOrSynced" }, // 1193897873
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_PinSceneComponent, "PinSceneComponent" }, // 4034609606
		{ &Z_Construct_UFunction_UMagicLeapARPinComponent_UnPin, "UnPin" }, // 1305557678
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MagicLeap" },
		{ "Comment", "/** Component to make content persist at locations in the real world. */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MagicLeapARPinComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Component to make content persist at locations in the real world." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinData = { "PinData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, PinData), Z_Construct_UClass_UMagicLeapARPinSaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedSceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedSceneComponent = { "PinnedSceneComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, PinnedSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedCFUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedCFUID = { "PinnedCFUID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, PinnedCFUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedCFUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedCFUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinLost_MetaData[] = {
		{ "Comment", "/** Fired when an entity loses its pin. */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Fired when an entity loses its pin." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinLost = { "OnPersistentEntityPinLost", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, OnPersistentEntityPinLost), Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinLost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinLost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinned_MetaData[] = {
		{ "Comment", "/** Fired when an entity is successfully pinned by this component. */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Fired when an entity is successfully pinned by this component." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinned = { "OnPersistentEntityPinned", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, OnPersistentEntityPinned), Z_Construct_UDelegateFunction_UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinDataClass_MetaData[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/** The user defined save game class associated with this pin.  Note that this MUST match the type passed into GetPinData().*/" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "The user defined save game class associated with this pin.  Note that this MUST match the type passed into GetPinData()." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinDataClass = { "PinDataClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, PinDataClass), Z_Construct_UClass_UMagicLeapARPinSaveGame_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinDataClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinDataClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_bShouldPinActor_MetaData[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/** Pin this component's owner actor instead of just the component itself. Relevant only when using 'OnlyOnDataRestoration' or 'Always' as AutoPinType. */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Pin this component's owner actor instead of just the component itself. Relevant only when using 'OnlyOnDataRestoration' or 'Always' as AutoPinType." },
	};
#endif
	void Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_bShouldPinActor_SetBit(void* Obj)
	{
		((UMagicLeapARPinComponent*)Obj)->bShouldPinActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_bShouldPinActor = { "bShouldPinActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMagicLeapARPinComponent), &Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_bShouldPinActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_bShouldPinActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_bShouldPinActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_AutoPinType_MetaData[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/** Mode for automatically pinning this component or it's owner actor to real-world. */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Mode for automatically pinning this component or it's owner actor to real-world." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_AutoPinType = { "AutoPinType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, AutoPinType), Z_Construct_UEnum_MagicLeapARPin_EMagicLeapAutoPinType, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_AutoPinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_AutoPinType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_AutoPinType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_UserIndex_MetaData[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/** Index to get the save game data for the pin */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Index to get the save game data for the pin" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, UserIndex), METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_ObjectUID_MetaData[] = {
		{ "Category", "ContentPersistence|MagicLeap" },
		{ "Comment", "/**\n\x09 * Unique ID for this component to save the meta data for the Pin and make content persistent.\n\x09 * This name has to be unique across all instances of the MagicLeapARPinComponent class.\n\x09 * If empty, the name of the owner actor will be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MagicLeapARPinComponent.h" },
		{ "ToolTip", "Unique ID for this component to save the meta data for the Pin and make content persistent.\nThis name has to be unique across all instances of the MagicLeapARPinComponent class.\nIf empty, the name of the owner actor will be used." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_ObjectUID = { "ObjectUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapARPinComponent, ObjectUID), METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_ObjectUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_ObjectUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMagicLeapARPinComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinnedCFUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinLost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_OnPersistentEntityPinned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_PinDataClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_bShouldPinActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_AutoPinType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_AutoPinType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapARPinComponent_Statics::NewProp_ObjectUID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapARPinComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapARPinComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapARPinComponent_Statics::ClassParams = {
		&UMagicLeapARPinComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMagicLeapARPinComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapARPinComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapARPinComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapARPinComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapARPinComponent, 3659970832);
	template<> MAGICLEAPARPIN_API UClass* StaticClass<UMagicLeapARPinComponent>()
	{
		return UMagicLeapARPinComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapARPinComponent(Z_Construct_UClass_UMagicLeapARPinComponent, &UMagicLeapARPinComponent::StaticClass, TEXT("/Script/MagicLeapARPin"), TEXT("UMagicLeapARPinComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapARPinComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

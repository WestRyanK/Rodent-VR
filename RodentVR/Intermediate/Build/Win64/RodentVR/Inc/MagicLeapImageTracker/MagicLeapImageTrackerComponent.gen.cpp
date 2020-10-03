// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicLeapImageTracker/Public/MagicLeapImageTrackerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicLeapImageTrackerComponent() {}
// Cross Module References
	MAGICLEAPIMAGETRACKER_API UClass* Z_Construct_UClass_UMagicLeapImageTrackerComponent_NoRegister();
	MAGICLEAPIMAGETRACKER_API UClass* Z_Construct_UClass_UMagicLeapImageTrackerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_MagicLeapImageTracker();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MAGICLEAPIMAGETRACKER_API UFunction* Z_Construct_UDelegateFunction_MagicLeapImageTracker_MagicLeapImageTargetUnreliableTrackingMulti__DelegateSignature();
	MAGICLEAPIMAGETRACKER_API UFunction* Z_Construct_UDelegateFunction_MagicLeapImageTracker_MagicLeapImageTargetLostMulti__DelegateSignature();
	MAGICLEAPIMAGETRACKER_API UFunction* Z_Construct_UDelegateFunction_MagicLeapImageTracker_MagicLeapImageTargetFoundMulti__DelegateSignature();
	MAGICLEAPIMAGETRACKER_API UFunction* Z_Construct_UDelegateFunction_MagicLeapImageTracker_MagicLeapSetImageTargetFailedMulti__DelegateSignature();
	MAGICLEAPIMAGETRACKER_API UFunction* Z_Construct_UDelegateFunction_MagicLeapImageTracker_MagicLeapSetImageTargetSucceededMulti__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UMagicLeapImageTrackerComponent::execRemoveTargetAsync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveTargetAsync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMagicLeapImageTrackerComponent::execSetTargetAsync)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_ImageTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetTargetAsync(Z_Param_ImageTarget);
		P_NATIVE_END;
	}
	void UMagicLeapImageTrackerComponent::StaticRegisterNativesUMagicLeapImageTrackerComponent()
	{
		UClass* Class = UMagicLeapImageTrackerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveTargetAsync", &UMagicLeapImageTrackerComponent::execRemoveTargetAsync },
			{ "SetTargetAsync", &UMagicLeapImageTrackerComponent::execSetTargetAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicLeapImageTrackerComponent_RemoveTargetAsync_Statics
	{
		struct MagicLeapImageTrackerComponent_eventRemoveTargetAsync_Parms
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
	void Z_Construct_UFunction_UMagicLeapImageTrackerComponent_RemoveTargetAsync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapImageTrackerComponent_eventRemoveTargetAsync_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapImageTrackerComponent_RemoveTargetAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapImageTrackerComponent_eventRemoveTargetAsync_Parms), &Z_Construct_UFunction_UMagicLeapImageTrackerComponent_RemoveTargetAsync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapImageTrackerComponent_RemoveTargetAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapImageTrackerComponent_RemoveTargetAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapImageTrackerComponent_RemoveTargetAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImageTracking|MagicLeap" },
		{ "Comment", "/**\n\x09\x09""Attempts to remove the currently tracked target.  Initiates an asynchronous call on a worker thread.\n\x09\x09@return True if the initiation of the target removal was successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerComponent.h" },
		{ "ToolTip", "Attempts to remove the currently tracked target.  Initiates an asynchronous call on a worker thread.\n@return True if the initiation of the target removal was successful, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapImageTrackerComponent_RemoveTargetAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapImageTrackerComponent, nullptr, "RemoveTargetAsync", nullptr, nullptr, sizeof(MagicLeapImageTrackerComponent_eventRemoveTargetAsync_Parms), Z_Construct_UFunction_UMagicLeapImageTrackerComponent_RemoveTargetAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapImageTrackerComponent_RemoveTargetAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapImageTrackerComponent_RemoveTargetAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapImageTrackerComponent_RemoveTargetAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapImageTrackerComponent_RemoveTargetAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapImageTrackerComponent_RemoveTargetAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMagicLeapImageTrackerComponent_SetTargetAsync_Statics
	{
		struct MagicLeapImageTrackerComponent_eventSetTargetAsync_Parms
		{
			UTexture2D* ImageTarget;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMagicLeapImageTrackerComponent_SetTargetAsync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicLeapImageTrackerComponent_eventSetTargetAsync_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicLeapImageTrackerComponent_SetTargetAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicLeapImageTrackerComponent_eventSetTargetAsync_Parms), &Z_Construct_UFunction_UMagicLeapImageTrackerComponent_SetTargetAsync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMagicLeapImageTrackerComponent_SetTargetAsync_Statics::NewProp_ImageTarget = { "ImageTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagicLeapImageTrackerComponent_eventSetTargetAsync_Parms, ImageTarget), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicLeapImageTrackerComponent_SetTargetAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapImageTrackerComponent_SetTargetAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicLeapImageTrackerComponent_SetTargetAsync_Statics::NewProp_ImageTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicLeapImageTrackerComponent_SetTargetAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImageTracking|MagicLeap" },
		{ "Comment", "/**\n\x09\x09""Attempts to change the currently tracked target.  Initiates an asynchronous call on a worker thread.\n\x09\x09When the task completes, the instigating blueprint will be notified by either a FSetImageTargetSucceeded\n\x09\x09or FSetImageTargetFailed event.\n\x09\x09@param ImageTarget The new texture to be tracked.\n\x09\x09@return True if the initiation of the target change was successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerComponent.h" },
		{ "ToolTip", "Attempts to change the currently tracked target.  Initiates an asynchronous call on a worker thread.\nWhen the task completes, the instigating blueprint will be notified by either a FSetImageTargetSucceeded\nor FSetImageTargetFailed event.\n@param ImageTarget The new texture to be tracked.\n@return True if the initiation of the target change was successful, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicLeapImageTrackerComponent_SetTargetAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicLeapImageTrackerComponent, nullptr, "SetTargetAsync", nullptr, nullptr, sizeof(MagicLeapImageTrackerComponent_eventSetTargetAsync_Parms), Z_Construct_UFunction_UMagicLeapImageTrackerComponent_SetTargetAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapImageTrackerComponent_SetTargetAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicLeapImageTrackerComponent_SetTargetAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicLeapImageTrackerComponent_SetTargetAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicLeapImageTrackerComponent_SetTargetAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicLeapImageTrackerComponent_SetTargetAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicLeapImageTrackerComponent_NoRegister()
	{
		return UMagicLeapImageTrackerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnImageTargetUnreliableTracking_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnImageTargetUnreliableTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnImageTargetLost_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnImageTargetLost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnImageTargetFound_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnImageTargetFound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSetImageTargetFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetImageTargetFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSetImageTargetSucceeded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetImageTargetSucceeded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseUnreliablePose_MetaData[];
#endif
		static void NewProp_bUseUnreliablePose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseUnreliablePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStationary_MetaData[];
#endif
		static void NewProp_bIsStationary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStationary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LongerDimension_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LongerDimension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetImageTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetImageTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicLeapImageTracker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicLeapImageTrackerComponent_RemoveTargetAsync, "RemoveTargetAsync" }, // 2389174532
		{ &Z_Construct_UFunction_UMagicLeapImageTrackerComponent_SetTargetAsync, "SetTargetAsync" }, // 4144411987
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MagicLeap" },
		{ "Comment", "/**\n  The MLImageTrackerComponent will keep track of whether the image that it has been provided is currently\n  visible to the headset camera.\n  @note Currently only R8G8B8A8 and B8G8R8A8 textures are supported.\n*/" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MagicLeapImageTrackerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerComponent.h" },
		{ "ToolTip", "The MLImageTrackerComponent will keep track of whether the image that it has been provided is currently\nvisible to the headset camera.\n@note Currently only R8G8B8A8 and B8G8R8A8 textures are supported." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnImageTargetUnreliableTracking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImageTracking | MagicLeap" },
		{ "Comment", "/**\n\x09  Activated when the target image is tracked with low confidence.\n\n\x09  The Image Tracker system will still provide a 6 DOF pose. But this\n\x09  pose might be inaccurate and might have jitter. When the tracking is\n\x09  unreliable one of the folling two events will happen quickly : Either\n\x09  the tracking will recover to Tracked or tracking will be lost and the\n\x09  status will change to NotTracked.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerComponent.h" },
		{ "ToolTip", "Activated when the target image is tracked with low confidence.\n\nThe Image Tracker system will still provide a 6 DOF pose. But this\npose might be inaccurate and might have jitter. When the tracking is\nunreliable one of the folling two events will happen quickly : Either\nthe tracking will recover to Tracked or tracking will be lost and the\nstatus will change to NotTracked." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnImageTargetUnreliableTracking = { "OnImageTargetUnreliableTracking", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapImageTrackerComponent, OnImageTargetUnreliableTracking), Z_Construct_UDelegateFunction_MagicLeapImageTracker_MagicLeapImageTargetUnreliableTrackingMulti__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnImageTargetUnreliableTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnImageTargetUnreliableTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnImageTargetLost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImageTracking | MagicLeap" },
		{ "Comment", "/** Activated the target image becomes invisible to the camera */" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerComponent.h" },
		{ "ToolTip", "Activated the target image becomes invisible to the camera" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnImageTargetLost = { "OnImageTargetLost", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapImageTrackerComponent, OnImageTargetLost), Z_Construct_UDelegateFunction_MagicLeapImageTracker_MagicLeapImageTargetLostMulti__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnImageTargetLost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnImageTargetLost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnImageTargetFound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImageTracking | MagicLeap" },
		{ "Comment", "/** Activated when the target image becomes visible to the camera */" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerComponent.h" },
		{ "ToolTip", "Activated when the target image becomes visible to the camera" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnImageTargetFound = { "OnImageTargetFound", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapImageTrackerComponent, OnImageTargetFound), Z_Construct_UDelegateFunction_MagicLeapImageTracker_MagicLeapImageTargetFoundMulti__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnImageTargetFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnImageTargetFound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnSetImageTargetFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImageTracking | MagicLeap" },
		{ "Comment", "/** Activated when the target image fails to be set. */" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerComponent.h" },
		{ "ToolTip", "Activated when the target image fails to be set." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnSetImageTargetFailed = { "OnSetImageTargetFailed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapImageTrackerComponent, OnSetImageTargetFailed), Z_Construct_UDelegateFunction_MagicLeapImageTracker_MagicLeapSetImageTargetFailedMulti__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnSetImageTargetFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnSetImageTargetFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnSetImageTargetSucceeded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImageTracking | MagicLeap" },
		{ "Comment", "/** Activated when the target image is successfully set. */" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerComponent.h" },
		{ "ToolTip", "Activated when the target image is successfully set." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnSetImageTargetSucceeded = { "OnSetImageTargetSucceeded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapImageTrackerComponent, OnSetImageTargetSucceeded), Z_Construct_UDelegateFunction_MagicLeapImageTracker_MagicLeapSetImageTargetSucceededMulti__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnSetImageTargetSucceeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnSetImageTargetSucceeded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_bUseUnreliablePose_MetaData[] = {
		{ "Category", "ImageTracking|MagicLeap" },
		{ "Comment", "/** If false, the pose will not be updated when tracking is unreliable. */" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerComponent.h" },
		{ "ToolTip", "If false, the pose will not be updated when tracking is unreliable." },
	};
#endif
	void Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_bUseUnreliablePose_SetBit(void* Obj)
	{
		((UMagicLeapImageTrackerComponent*)Obj)->bUseUnreliablePose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_bUseUnreliablePose = { "bUseUnreliablePose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMagicLeapImageTrackerComponent), &Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_bUseUnreliablePose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_bUseUnreliablePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_bUseUnreliablePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_bIsStationary_MetaData[] = {
		{ "Category", "ImageTracking|MagicLeap" },
		{ "Comment", "/** Set this to true to improve detection for stationary targets. */" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerComponent.h" },
		{ "ToolTip", "Set this to true to improve detection for stationary targets." },
	};
#endif
	void Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_bIsStationary_SetBit(void* Obj)
	{
		((UMagicLeapImageTrackerComponent*)Obj)->bIsStationary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_bIsStationary = { "bIsStationary", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMagicLeapImageTrackerComponent), &Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_bIsStationary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_bIsStationary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_bIsStationary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_LongerDimension_MetaData[] = {
		{ "Category", "ImageTracking|MagicLeap" },
		{ "Comment", "/** LongerDimension refers to the size of the longer dimension (width or height) of the physical image target in Unreal units. */" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerComponent.h" },
		{ "ToolTip", "LongerDimension refers to the size of the longer dimension (width or height) of the physical image target in Unreal units." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_LongerDimension = { "LongerDimension", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapImageTrackerComponent, LongerDimension), METADATA_PARAMS(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_LongerDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_LongerDimension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ImageTracking|MagicLeap" },
		{ "Comment", "/**\n\x09  The name of the target.\n\x09  This name has to be unique across all instances of the ImageTrackerComponent class.\n\x09  If empty, the name of the component will be used.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerComponent.h" },
		{ "ToolTip", "The name of the target.\nThis name has to be unique across all instances of the ImageTrackerComponent class.\nIf empty, the name of the component will be used." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapImageTrackerComponent, Name), METADATA_PARAMS(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_TargetImageTexture_MetaData[] = {
		{ "Category", "ImageTracking|MagicLeap" },
		{ "Comment", "/** The texture that will be tracked by this image tracker instance. */" },
		{ "ModuleRelativePath", "Public/MagicLeapImageTrackerComponent.h" },
		{ "ToolTip", "The texture that will be tracked by this image tracker instance." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_TargetImageTexture = { "TargetImageTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicLeapImageTrackerComponent, TargetImageTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_TargetImageTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_TargetImageTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnImageTargetUnreliableTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnImageTargetLost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnImageTargetFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnSetImageTargetFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_OnSetImageTargetSucceeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_bUseUnreliablePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_bIsStationary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_LongerDimension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::NewProp_TargetImageTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicLeapImageTrackerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::ClassParams = {
		&UMagicLeapImageTrackerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicLeapImageTrackerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicLeapImageTrackerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicLeapImageTrackerComponent, 826463871);
	template<> MAGICLEAPIMAGETRACKER_API UClass* StaticClass<UMagicLeapImageTrackerComponent>()
	{
		return UMagicLeapImageTrackerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicLeapImageTrackerComponent(Z_Construct_UClass_UMagicLeapImageTrackerComponent, &UMagicLeapImageTrackerComponent::StaticClass, TEXT("/Script/MagicLeapImageTracker"), TEXT("UMagicLeapImageTrackerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicLeapImageTrackerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

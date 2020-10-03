// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGICLEAPAR_LuminARTypes_generated_h
#error "LuminARTypes.generated.h already included, missing '#pragma once' in LuminARTypes.h"
#endif
#define MAGICLEAPAR_LuminARTypes_generated_h

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAmbientIntensityNits);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAmbientIntensityNits);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuminARLightEstimate(); \
	friend struct Z_Construct_UClass_ULuminARLightEstimate_Statics; \
public: \
	DECLARE_CLASS(ULuminARLightEstimate, UARBasicLightEstimate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapAR"), NO_API) \
	DECLARE_SERIALIZER(ULuminARLightEstimate)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_INCLASS \
private: \
	static void StaticRegisterNativesULuminARLightEstimate(); \
	friend struct Z_Construct_UClass_ULuminARLightEstimate_Statics; \
public: \
	DECLARE_CLASS(ULuminARLightEstimate, UARBasicLightEstimate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapAR"), NO_API) \
	DECLARE_SERIALIZER(ULuminARLightEstimate)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuminARLightEstimate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuminARLightEstimate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuminARLightEstimate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuminARLightEstimate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuminARLightEstimate(ULuminARLightEstimate&&); \
	NO_API ULuminARLightEstimate(const ULuminARLightEstimate&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuminARLightEstimate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuminARLightEstimate(ULuminARLightEstimate&&); \
	NO_API ULuminARLightEstimate(const ULuminARLightEstimate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuminARLightEstimate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuminARLightEstimate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuminARLightEstimate)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AmbientIntensityNits() { return STRUCT_OFFSET(ULuminARLightEstimate, AmbientIntensityNits); }


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_59_PROLOG
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPAR_API UClass* StaticClass<class ULuminARLightEstimate>();

#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_SPARSE_DATA
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetImageIsStationary); \
	DECLARE_FUNCTION(execGetUseUnreliablePose);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetImageIsStationary); \
	DECLARE_FUNCTION(execGetUseUnreliablePose);


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuminARCandidateImage(); \
	friend struct Z_Construct_UClass_ULuminARCandidateImage_Statics; \
public: \
	DECLARE_CLASS(ULuminARCandidateImage, UARCandidateImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapAR"), NO_API) \
	DECLARE_SERIALIZER(ULuminARCandidateImage)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_INCLASS \
private: \
	static void StaticRegisterNativesULuminARCandidateImage(); \
	friend struct Z_Construct_UClass_ULuminARCandidateImage_Statics; \
public: \
	DECLARE_CLASS(ULuminARCandidateImage, UARCandidateImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MagicLeapAR"), NO_API) \
	DECLARE_SERIALIZER(ULuminARCandidateImage)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuminARCandidateImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuminARCandidateImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuminARCandidateImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuminARCandidateImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuminARCandidateImage(ULuminARCandidateImage&&); \
	NO_API ULuminARCandidateImage(const ULuminARCandidateImage&); \
public:


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuminARCandidateImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuminARCandidateImage(ULuminARCandidateImage&&); \
	NO_API ULuminARCandidateImage(const ULuminARCandidateImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuminARCandidateImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuminARCandidateImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuminARCandidateImage)


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bUseUnreliablePose() { return STRUCT_OFFSET(ULuminARCandidateImage, bUseUnreliablePose); } \
	FORCEINLINE static uint32 __PPO__bImageIsStationary() { return STRUCT_OFFSET(ULuminARCandidateImage, bImageIsStationary); }


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_81_PROLOG
#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_RPC_WRAPPERS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_INCLASS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_SPARSE_DATA \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICLEAPAR_API UClass* StaticClass<class ULuminARCandidateImage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Lumin_MagicLeap_Source_MagicLeapAR_Public_LuminARTypes_h


#define FOREACH_ENUM_ELUMINARLINETRACECHANNEL(op) \
	op(ELuminARLineTraceChannel::None) \
	op(ELuminARLineTraceChannel::FeaturePoint) \
	op(ELuminARLineTraceChannel::InfinitePlane) \
	op(ELuminARLineTraceChannel::PlaneUsingExtent) \
	op(ELuminARLineTraceChannel::PlaneUsingBoundaryPolygon) \
	op(ELuminARLineTraceChannel::FeaturePointWithSurfaceNormal) 

enum class ELuminARLineTraceChannel : uint8;
template<> MAGICLEAPAR_API UEnum* StaticEnum<ELuminARLineTraceChannel>();

#define FOREACH_ENUM_ELUMINARTRACKINGSTATE(op) \
	op(ELuminARTrackingState::Tracking) \
	op(ELuminARTrackingState::NotTracking) \
	op(ELuminARTrackingState::StoppedTracking) 

enum class ELuminARTrackingState : uint8;
template<> MAGICLEAPAR_API UEnum* StaticEnum<ELuminARTrackingState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

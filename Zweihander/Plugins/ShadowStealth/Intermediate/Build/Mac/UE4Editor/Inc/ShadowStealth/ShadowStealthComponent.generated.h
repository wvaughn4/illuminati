// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FLinearColor;
#ifdef SHADOWSTEALTH_ShadowStealthComponent_generated_h
#error "ShadowStealthComponent.generated.h already included, missing '#pragma once' in ShadowStealthComponent.h"
#endif
#define SHADOWSTEALTH_ShadowStealthComponent_generated_h

#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_36_DELEGATE \
struct ShadowStealthComponent_eventNotifyIntensityDelegate_Parms \
{ \
	FName Name; \
	float Intensity; \
}; \
static inline void FNotifyIntensityDelegate_DelegateWrapper(const FMulticastScriptDelegate& NotifyIntensityDelegate, FName Name, float Intensity) \
{ \
	ShadowStealthComponent_eventNotifyIntensityDelegate_Parms Parms; \
	Parms.Name=Name; \
	Parms.Intensity=Intensity; \
	NotifyIntensityDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_SPARSE_DATA
#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorEndOverlap); \
	DECLARE_FUNCTION(execOnActorBeginOverlap); \
	DECLARE_FUNCTION(execCheckLineOfSight); \
	DECLARE_FUNCTION(execGetLightIntensityRGBAtSocketIndex); \
	DECLARE_FUNCTION(execGetLightIntensityAtSocketIndex); \
	DECLARE_FUNCTION(execGetLocationAtSocketIndex); \
	DECLARE_FUNCTION(execGetSocketsNum); \
	DECLARE_FUNCTION(execGetAISightIntensityUpperBound); \
	DECLARE_FUNCTION(execGetAISightIntensitySightedLowerBound); \
	DECLARE_FUNCTION(execGetAISightIntensityHiddenLowerBound); \
	DECLARE_FUNCTION(execGetLightIntensityRGBAtSelf); \
	DECLARE_FUNCTION(execGetLightIntensityRGBAtSocket); \
	DECLARE_FUNCTION(execGetLightIntensityRGB); \
	DECLARE_FUNCTION(execGetLightIntensityAtSelf); \
	DECLARE_FUNCTION(execGetLightIntensityAtSocket); \
	DECLARE_FUNCTION(execGetLightIntensity);


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorEndOverlap); \
	DECLARE_FUNCTION(execOnActorBeginOverlap); \
	DECLARE_FUNCTION(execCheckLineOfSight); \
	DECLARE_FUNCTION(execGetLightIntensityRGBAtSocketIndex); \
	DECLARE_FUNCTION(execGetLightIntensityAtSocketIndex); \
	DECLARE_FUNCTION(execGetLocationAtSocketIndex); \
	DECLARE_FUNCTION(execGetSocketsNum); \
	DECLARE_FUNCTION(execGetAISightIntensityUpperBound); \
	DECLARE_FUNCTION(execGetAISightIntensitySightedLowerBound); \
	DECLARE_FUNCTION(execGetAISightIntensityHiddenLowerBound); \
	DECLARE_FUNCTION(execGetLightIntensityRGBAtSelf); \
	DECLARE_FUNCTION(execGetLightIntensityRGBAtSocket); \
	DECLARE_FUNCTION(execGetLightIntensityRGB); \
	DECLARE_FUNCTION(execGetLightIntensityAtSelf); \
	DECLARE_FUNCTION(execGetLightIntensityAtSocket); \
	DECLARE_FUNCTION(execGetLightIntensity);


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UShadowStealthComponent, NO_API)


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShadowStealthComponent(); \
	friend struct Z_Construct_UClass_UShadowStealthComponent_Statics; \
public: \
	DECLARE_CLASS(UShadowStealthComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShadowStealth"), NO_API) \
	DECLARE_SERIALIZER(UShadowStealthComponent) \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_ARCHIVESERIALIZER


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUShadowStealthComponent(); \
	friend struct Z_Construct_UClass_UShadowStealthComponent_Statics; \
public: \
	DECLARE_CLASS(UShadowStealthComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShadowStealth"), NO_API) \
	DECLARE_SERIALIZER(UShadowStealthComponent) \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_ARCHIVESERIALIZER


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShadowStealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShadowStealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShadowStealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShadowStealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShadowStealthComponent(UShadowStealthComponent&&); \
	NO_API UShadowStealthComponent(const UShadowStealthComponent&); \
public:


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShadowStealthComponent(UShadowStealthComponent&&); \
	NO_API UShadowStealthComponent(const UShadowStealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShadowStealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShadowStealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UShadowStealthComponent)


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OverlappingShadowLights() { return STRUCT_OFFSET(UShadowStealthComponent, OverlappingShadowLights); } \
	FORCEINLINE static uint32 __PPO__SightTarget() { return STRUCT_OFFSET(UShadowStealthComponent, SightTarget); } \
	FORCEINLINE static uint32 __PPO__NotifyOnExceedIntensities_DEPRECATED() { return STRUCT_OFFSET(UShadowStealthComponent, NotifyOnExceedIntensities_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__NotifyOnFallBelowIntensities_DEPRECATED() { return STRUCT_OFFSET(UShadowStealthComponent, NotifyOnFallBelowIntensities_DEPRECATED); }


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_27_PROLOG
#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_SPARSE_DATA \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_RPC_WRAPPERS \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_INCLASS \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_SPARSE_DATA \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHADOWSTEALTH_API UClass* StaticClass<class UShadowStealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Components_ShadowStealthComponent_h


#define FOREACH_ENUM_ESHADOWMETHOD(op) \
	op(EShadowMethod::Max) \
	op(EShadowMethod::Min) \
	op(EShadowMethod::Mean) \
	op(EShadowMethod::Median) 

enum class EShadowMethod : uint8;
template<> SHADOWSTEALTH_API UEnum* StaticEnum<EShadowMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

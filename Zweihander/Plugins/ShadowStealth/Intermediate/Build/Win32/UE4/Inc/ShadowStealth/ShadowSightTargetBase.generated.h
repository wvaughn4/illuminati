// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FShadowIntensityNotifier;
class UShadowStealthComponent;
class AActor;
struct FVector;
#ifdef SHADOWSTEALTH_ShadowSightTargetBase_generated_h
#error "ShadowSightTargetBase.generated.h already included, missing '#pragma once' in ShadowSightTargetBase.h"
#endif
#define SHADOWSTEALTH_ShadowSightTargetBase_generated_h

#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_SPARSE_DATA
#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_RPC_WRAPPERS \
	virtual void GetIntensityNotifiers_Implementation(UShadowStealthComponent* ShadowStealth); \
	virtual bool CanBeSeenFrom_Implementation(UShadowStealthComponent* ShadowStealth, const AActor* Observer, FVector const& ObserverLocation, bool bSeenLastTime, FVector& OutSeenLocation, float& OutSightStrength); \
 \
	DECLARE_FUNCTION(execAddIntensityNotifier); \
	DECLARE_FUNCTION(execGetIntensityNotifiers); \
	DECLARE_FUNCTION(execCanBeSeenFrom);


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddIntensityNotifier); \
	DECLARE_FUNCTION(execGetIntensityNotifiers); \
	DECLARE_FUNCTION(execCanBeSeenFrom);


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_EVENT_PARMS \
	struct ShadowSightTargetBase_eventCanBeSeenFrom_Parms \
	{ \
		UShadowStealthComponent* ShadowStealth; \
		const AActor* Observer; \
		FVector ObserverLocation; \
		bool bSeenLastTime; \
		FVector OutSeenLocation; \
		float OutSightStrength; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ShadowSightTargetBase_eventCanBeSeenFrom_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ShadowSightTargetBase_eventGetIntensityNotifiers_Parms \
	{ \
		UShadowStealthComponent* ShadowStealth; \
	};


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_CALLBACK_WRAPPERS
#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShadowSightTargetBase(); \
	friend struct Z_Construct_UClass_UShadowSightTargetBase_Statics; \
public: \
	DECLARE_CLASS(UShadowSightTargetBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ShadowStealth"), NO_API) \
	DECLARE_SERIALIZER(UShadowSightTargetBase) \
	DECLARE_WITHIN(UShadowStealthComponent)


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUShadowSightTargetBase(); \
	friend struct Z_Construct_UClass_UShadowSightTargetBase_Statics; \
public: \
	DECLARE_CLASS(UShadowSightTargetBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ShadowStealth"), NO_API) \
	DECLARE_SERIALIZER(UShadowSightTargetBase) \
	DECLARE_WITHIN(UShadowStealthComponent)


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShadowSightTargetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShadowSightTargetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShadowSightTargetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShadowSightTargetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShadowSightTargetBase(UShadowSightTargetBase&&); \
	NO_API UShadowSightTargetBase(const UShadowSightTargetBase&); \
public:


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShadowSightTargetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShadowSightTargetBase(UShadowSightTargetBase&&); \
	NO_API UShadowSightTargetBase(const UShadowSightTargetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShadowSightTargetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShadowSightTargetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShadowSightTargetBase)


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_9_PROLOG \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_EVENT_PARMS


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_SPARSE_DATA \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_RPC_WRAPPERS \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_CALLBACK_WRAPPERS \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_INCLASS \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_SPARSE_DATA \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_CALLBACK_WRAPPERS \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHADOWSTEALTH_API UClass* StaticClass<class UShadowSightTargetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Classes_Perception_ShadowSightTargetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

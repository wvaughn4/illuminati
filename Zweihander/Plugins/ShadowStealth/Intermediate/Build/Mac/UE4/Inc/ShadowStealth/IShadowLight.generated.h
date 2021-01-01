// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FLinearColor;
#ifdef SHADOWSTEALTH_IShadowLight_generated_h
#error "IShadowLight.generated.h already included, missing '#pragma once' in IShadowLight.h"
#endif
#define SHADOWSTEALTH_IShadowLight_generated_h

#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_SPARSE_DATA
#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsGlobalLight); \
	DECLARE_FUNCTION(execGetLightIntensity);


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsGlobalLight); \
	DECLARE_FUNCTION(execGetLightIntensity);


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SHADOWSTEALTH_API UShadowLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShadowLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHADOWSTEALTH_API, UShadowLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShadowLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SHADOWSTEALTH_API UShadowLight(UShadowLight&&); \
	SHADOWSTEALTH_API UShadowLight(const UShadowLight&); \
public:


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SHADOWSTEALTH_API UShadowLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SHADOWSTEALTH_API UShadowLight(UShadowLight&&); \
	SHADOWSTEALTH_API UShadowLight(const UShadowLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHADOWSTEALTH_API, UShadowLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShadowLight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShadowLight)


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUShadowLight(); \
	friend struct Z_Construct_UClass_UShadowLight_Statics; \
public: \
	DECLARE_CLASS(UShadowLight, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ShadowStealth"), SHADOWSTEALTH_API) \
	DECLARE_SERIALIZER(UShadowLight)


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IShadowLight() {} \
public: \
	typedef UShadowLight UClassType; \
	typedef IShadowLight ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IShadowLight() {} \
public: \
	typedef UShadowLight UClassType; \
	typedef IShadowLight ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_9_PROLOG
#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_SPARSE_DATA \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_RPC_WRAPPERS \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_SPARSE_DATA \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHADOWSTEALTH_API UClass* StaticClass<class UShadowLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ShadowStealth_Source_ShadowStealth_Public_IShadowLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

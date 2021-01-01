// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowStealth/Private/ShadowStealthSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowStealthSettings() {}
// Cross Module References
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowStealthSettings_NoRegister();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowStealthSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ShadowStealth();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	void UShadowStealthSettings::StaticRegisterNativesUShadowStealthSettings()
	{
	}
	UClass* Z_Construct_UClass_UShadowStealthSettings_NoRegister()
	{
		return UShadowStealthSettings::StaticClass();
	}
	struct Z_Construct_UClass_UShadowStealthSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightIntensityUpperBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightIntensityUpperBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightIntensitySightedLowerBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightIntensitySightedLowerBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightIntensityHiddenLowerBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightIntensityHiddenLowerBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHiddenInGameLights_MetaData[];
#endif
		static void NewProp_bUseHiddenInGameLights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHiddenInGameLights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInvisibleLights_MetaData[];
#endif
		static void NewProp_bUseInvisibleLights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInvisibleLights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseStaticLighting_MetaData[];
#endif
		static void NewProp_bUseStaticLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseStaticLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShadowStealthSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShadowStealthSettings.h" },
		{ "ModuleRelativePath", "Private/ShadowStealthSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_AISightIntensityUpperBound_MetaData[] = {
		{ "Category", "AISight" },
		{ "ModuleRelativePath", "Private/ShadowStealthSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_AISightIntensityUpperBound = { "AISightIntensityUpperBound", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowStealthSettings, AISightIntensityUpperBound), METADATA_PARAMS(Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_AISightIntensityUpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_AISightIntensityUpperBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_AISightIntensitySightedLowerBound_MetaData[] = {
		{ "Category", "AISight" },
		{ "ModuleRelativePath", "Private/ShadowStealthSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_AISightIntensitySightedLowerBound = { "AISightIntensitySightedLowerBound", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowStealthSettings, AISightIntensitySightedLowerBound), METADATA_PARAMS(Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_AISightIntensitySightedLowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_AISightIntensitySightedLowerBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_AISightIntensityHiddenLowerBound_MetaData[] = {
		{ "Category", "AISight" },
		{ "ModuleRelativePath", "Private/ShadowStealthSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_AISightIntensityHiddenLowerBound = { "AISightIntensityHiddenLowerBound", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowStealthSettings, AISightIntensityHiddenLowerBound), METADATA_PARAMS(Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_AISightIntensityHiddenLowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_AISightIntensityHiddenLowerBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseHiddenInGameLights_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/ShadowStealthSettings.h" },
	};
#endif
	void Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseHiddenInGameLights_SetBit(void* Obj)
	{
		((UShadowStealthSettings*)Obj)->bUseHiddenInGameLights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseHiddenInGameLights = { "bUseHiddenInGameLights", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShadowStealthSettings), &Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseHiddenInGameLights_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseHiddenInGameLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseHiddenInGameLights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseInvisibleLights_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/ShadowStealthSettings.h" },
	};
#endif
	void Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseInvisibleLights_SetBit(void* Obj)
	{
		((UShadowStealthSettings*)Obj)->bUseInvisibleLights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseInvisibleLights = { "bUseInvisibleLights", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShadowStealthSettings), &Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseInvisibleLights_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseInvisibleLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseInvisibleLights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseStaticLighting_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/ShadowStealthSettings.h" },
	};
#endif
	void Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseStaticLighting_SetBit(void* Obj)
	{
		((UShadowStealthSettings*)Obj)->bUseStaticLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseStaticLighting = { "bUseStaticLighting", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShadowStealthSettings), &Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseStaticLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseStaticLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseStaticLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/ShadowStealthSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowStealthSettings, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_TraceChannel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShadowStealthSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_AISightIntensityUpperBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_AISightIntensitySightedLowerBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_AISightIntensityHiddenLowerBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseHiddenInGameLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseInvisibleLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_bUseStaticLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthSettings_Statics::NewProp_TraceChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShadowStealthSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShadowStealthSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShadowStealthSettings_Statics::ClassParams = {
		&UShadowStealthSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShadowStealthSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UShadowStealthSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShadowStealthSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShadowStealthSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShadowStealthSettings, 2337174235);
	template<> SHADOWSTEALTH_API UClass* StaticClass<UShadowStealthSettings>()
	{
		return UShadowStealthSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShadowStealthSettings(Z_Construct_UClass_UShadowStealthSettings, &UShadowStealthSettings::StaticClass, TEXT("/Script/ShadowStealth"), TEXT("UShadowStealthSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShadowStealthSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

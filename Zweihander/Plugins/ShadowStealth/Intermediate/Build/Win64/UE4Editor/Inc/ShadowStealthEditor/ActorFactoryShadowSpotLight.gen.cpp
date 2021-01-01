// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowStealthEditor/Private/ActorFactories/ActorFactoryShadowSpotLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryShadowSpotLight() {}
// Cross Module References
	SHADOWSTEALTHEDITOR_API UClass* Z_Construct_UClass_UActorFactoryShadowSpotLight_NoRegister();
	SHADOWSTEALTHEDITOR_API UClass* Z_Construct_UClass_UActorFactoryShadowSpotLight();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_ShadowStealthEditor();
// End Cross Module References
	void UActorFactoryShadowSpotLight::StaticRegisterNativesUActorFactoryShadowSpotLight()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryShadowSpotLight_NoRegister()
	{
		return UActorFactoryShadowSpotLight::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryShadowSpotLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryShadowSpotLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStealthEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryShadowSpotLight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryShadowSpotLight.h" },
		{ "ModuleRelativePath", "Private/ActorFactories/ActorFactoryShadowSpotLight.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryShadowSpotLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryShadowSpotLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryShadowSpotLight_Statics::ClassParams = {
		&UActorFactoryShadowSpotLight::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000030ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryShadowSpotLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryShadowSpotLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryShadowSpotLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryShadowSpotLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryShadowSpotLight, 710235672);
	template<> SHADOWSTEALTHEDITOR_API UClass* StaticClass<UActorFactoryShadowSpotLight>()
	{
		return UActorFactoryShadowSpotLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryShadowSpotLight(Z_Construct_UClass_UActorFactoryShadowSpotLight, &UActorFactoryShadowSpotLight::StaticClass, TEXT("/Script/ShadowStealthEditor"), TEXT("UActorFactoryShadowSpotLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryShadowSpotLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

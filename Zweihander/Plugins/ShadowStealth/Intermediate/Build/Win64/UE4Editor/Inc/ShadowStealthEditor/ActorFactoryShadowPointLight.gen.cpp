// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowStealthEditor/Private/ActorFactories/ActorFactoryShadowPointLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryShadowPointLight() {}
// Cross Module References
	SHADOWSTEALTHEDITOR_API UClass* Z_Construct_UClass_UActorFactoryShadowPointLight_NoRegister();
	SHADOWSTEALTHEDITOR_API UClass* Z_Construct_UClass_UActorFactoryShadowPointLight();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_ShadowStealthEditor();
// End Cross Module References
	void UActorFactoryShadowPointLight::StaticRegisterNativesUActorFactoryShadowPointLight()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryShadowPointLight_NoRegister()
	{
		return UActorFactoryShadowPointLight::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryShadowPointLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryShadowPointLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStealthEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryShadowPointLight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryShadowPointLight.h" },
		{ "ModuleRelativePath", "Private/ActorFactories/ActorFactoryShadowPointLight.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryShadowPointLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryShadowPointLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryShadowPointLight_Statics::ClassParams = {
		&UActorFactoryShadowPointLight::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryShadowPointLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryShadowPointLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryShadowPointLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryShadowPointLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryShadowPointLight, 2768572977);
	template<> SHADOWSTEALTHEDITOR_API UClass* StaticClass<UActorFactoryShadowPointLight>()
	{
		return UActorFactoryShadowPointLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryShadowPointLight(Z_Construct_UClass_UActorFactoryShadowPointLight, &UActorFactoryShadowPointLight::StaticClass, TEXT("/Script/ShadowStealthEditor"), TEXT("UActorFactoryShadowPointLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryShadowPointLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

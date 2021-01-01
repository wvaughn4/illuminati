// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowStealthEditor/Private/ActorFactories/ActorFactoryShadowDirectionalLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryShadowDirectionalLight() {}
// Cross Module References
	SHADOWSTEALTHEDITOR_API UClass* Z_Construct_UClass_UActorFactoryShadowDirectionalLight_NoRegister();
	SHADOWSTEALTHEDITOR_API UClass* Z_Construct_UClass_UActorFactoryShadowDirectionalLight();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_ShadowStealthEditor();
// End Cross Module References
	void UActorFactoryShadowDirectionalLight::StaticRegisterNativesUActorFactoryShadowDirectionalLight()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryShadowDirectionalLight_NoRegister()
	{
		return UActorFactoryShadowDirectionalLight::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryShadowDirectionalLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryShadowDirectionalLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStealthEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryShadowDirectionalLight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryShadowDirectionalLight.h" },
		{ "ModuleRelativePath", "Private/ActorFactories/ActorFactoryShadowDirectionalLight.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryShadowDirectionalLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryShadowDirectionalLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryShadowDirectionalLight_Statics::ClassParams = {
		&UActorFactoryShadowDirectionalLight::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryShadowDirectionalLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryShadowDirectionalLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryShadowDirectionalLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryShadowDirectionalLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryShadowDirectionalLight, 4148955706);
	template<> SHADOWSTEALTHEDITOR_API UClass* StaticClass<UActorFactoryShadowDirectionalLight>()
	{
		return UActorFactoryShadowDirectionalLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryShadowDirectionalLight(Z_Construct_UClass_UActorFactoryShadowDirectionalLight, &UActorFactoryShadowDirectionalLight::StaticClass, TEXT("/Script/ShadowStealthEditor"), TEXT("UActorFactoryShadowDirectionalLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryShadowDirectionalLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

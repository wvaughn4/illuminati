// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowStealth/Classes/Actors/ShadowPointLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowPointLight() {}
// Cross Module References
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_AShadowPointLight_NoRegister();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_AShadowPointLight();
	ENGINE_API UClass* Z_Construct_UClass_ALight();
	UPackage* Z_Construct_UPackage__Script_ShadowStealth();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowPointLightComponent_NoRegister();
// End Cross Module References
	void AShadowPointLight::StaticRegisterNativesAShadowPointLight()
	{
	}
	UClass* Z_Construct_UClass_AShadowPointLight_NoRegister()
	{
		return AShadowPointLight::StaticClass();
	}
	struct Z_Construct_UClass_AShadowPointLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadowLight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShadowPointLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALight,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShadowPointLight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "Actors/ShadowPointLight.h" },
		{ "ModuleRelativePath", "Classes/Actors/ShadowPointLight.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShadowPointLight_Statics::NewProp_ShadowLight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShadowStealth" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Actors/ShadowPointLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShadowPointLight_Statics::NewProp_ShadowLight = { "ShadowLight", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShadowPointLight, ShadowLight), Z_Construct_UClass_UShadowPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShadowPointLight_Statics::NewProp_ShadowLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShadowPointLight_Statics::NewProp_ShadowLight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShadowPointLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShadowPointLight_Statics::NewProp_ShadowLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShadowPointLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShadowPointLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShadowPointLight_Statics::ClassParams = {
		&AShadowPointLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShadowPointLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShadowPointLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShadowPointLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShadowPointLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShadowPointLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShadowPointLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShadowPointLight, 2345414371);
	template<> SHADOWSTEALTH_API UClass* StaticClass<AShadowPointLight>()
	{
		return AShadowPointLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShadowPointLight(Z_Construct_UClass_AShadowPointLight, &AShadowPointLight::StaticClass, TEXT("/Script/ShadowStealth"), TEXT("AShadowPointLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShadowPointLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

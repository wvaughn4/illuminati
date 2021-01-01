// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowStealth/Classes/Actors/ShadowRectLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowRectLight() {}
// Cross Module References
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_AShadowRectLight_NoRegister();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_AShadowRectLight();
	ENGINE_API UClass* Z_Construct_UClass_ALight();
	UPackage* Z_Construct_UPackage__Script_ShadowStealth();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowRectLightComponent_NoRegister();
// End Cross Module References
	void AShadowRectLight::StaticRegisterNativesAShadowRectLight()
	{
	}
	UClass* Z_Construct_UClass_AShadowRectLight_NoRegister()
	{
		return AShadowRectLight::StaticClass();
	}
	struct Z_Construct_UClass_AShadowRectLight_Statics
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
	UObject* (*const Z_Construct_UClass_AShadowRectLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALight,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShadowRectLight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "Actors/ShadowRectLight.h" },
		{ "ModuleRelativePath", "Classes/Actors/ShadowRectLight.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShadowRectLight_Statics::NewProp_ShadowLight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShadowStealth" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Actors/ShadowRectLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShadowRectLight_Statics::NewProp_ShadowLight = { "ShadowLight", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShadowRectLight, ShadowLight), Z_Construct_UClass_UShadowRectLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShadowRectLight_Statics::NewProp_ShadowLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShadowRectLight_Statics::NewProp_ShadowLight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShadowRectLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShadowRectLight_Statics::NewProp_ShadowLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShadowRectLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShadowRectLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShadowRectLight_Statics::ClassParams = {
		&AShadowRectLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShadowRectLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShadowRectLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShadowRectLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShadowRectLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShadowRectLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShadowRectLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShadowRectLight, 3361488444);
	template<> SHADOWSTEALTH_API UClass* StaticClass<AShadowRectLight>()
	{
		return AShadowRectLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShadowRectLight(Z_Construct_UClass_AShadowRectLight, &AShadowRectLight::StaticClass, TEXT("/Script/ShadowStealth"), TEXT("AShadowRectLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShadowRectLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

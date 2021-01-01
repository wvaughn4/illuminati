// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowStealth/Classes/Actors/ShadowSpotLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowSpotLight() {}
// Cross Module References
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_AShadowSpotLight_NoRegister();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_AShadowSpotLight();
	ENGINE_API UClass* Z_Construct_UClass_ALight();
	UPackage* Z_Construct_UPackage__Script_ShadowStealth();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowSpotLightComponent_NoRegister();
// End Cross Module References
	void AShadowSpotLight::StaticRegisterNativesAShadowSpotLight()
	{
	}
	UClass* Z_Construct_UClass_AShadowSpotLight_NoRegister()
	{
		return AShadowSpotLight::StaticClass();
	}
	struct Z_Construct_UClass_AShadowSpotLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadowLight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShadowSpotLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALight,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShadowSpotLight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "Actors/ShadowSpotLight.h" },
		{ "ModuleRelativePath", "Classes/Actors/ShadowSpotLight.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShadowSpotLight_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "// Reference to editor arrow component visualization \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Actors/ShadowSpotLight.h" },
		{ "ToolTip", "Reference to editor arrow component visualization" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShadowSpotLight_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShadowSpotLight, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShadowSpotLight_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShadowSpotLight_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShadowSpotLight_Statics::NewProp_ShadowLight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShadowStealth" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Actors/ShadowSpotLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShadowSpotLight_Statics::NewProp_ShadowLight = { "ShadowLight", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShadowSpotLight, ShadowLight), Z_Construct_UClass_UShadowSpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShadowSpotLight_Statics::NewProp_ShadowLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShadowSpotLight_Statics::NewProp_ShadowLight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShadowSpotLight_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShadowSpotLight_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShadowSpotLight_Statics::NewProp_ShadowLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShadowSpotLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShadowSpotLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShadowSpotLight_Statics::ClassParams = {
		&AShadowSpotLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShadowSpotLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShadowSpotLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShadowSpotLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShadowSpotLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShadowSpotLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShadowSpotLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShadowSpotLight, 3615485878);
	template<> SHADOWSTEALTH_API UClass* StaticClass<AShadowSpotLight>()
	{
		return AShadowSpotLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShadowSpotLight(Z_Construct_UClass_AShadowSpotLight, &AShadowSpotLight::StaticClass, TEXT("/Script/ShadowStealth"), TEXT("AShadowSpotLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShadowSpotLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

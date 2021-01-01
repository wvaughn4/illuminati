// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowStealth/Classes/Components/ShadowPointLightComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowPointLightComponent() {}
// Cross Module References
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowPointLightComponent_NoRegister();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowPointLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	UPackage* Z_Construct_UPackage__Script_ShadowStealth();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowLight_NoRegister();
// End Cross Module References
	void UShadowPointLightComponent::StaticRegisterNativesUShadowPointLightComponent()
	{
	}
	UClass* Z_Construct_UClass_UShadowPointLightComponent_NoRegister()
	{
		return UShadowPointLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_UShadowPointLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShadowPointLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowPointLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Mobility Physics Navigation Shape Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Components/ShadowPointLightComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ShadowPointLightComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowPointLightComponent_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowPointLightComponent.h" },
	};
#endif
	void Z_Construct_UClass_UShadowPointLightComponent_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UShadowPointLightComponent*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShadowPointLightComponent_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShadowPointLightComponent), &Z_Construct_UClass_UShadowPointLightComponent_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShadowPointLightComponent_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowPointLightComponent_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShadowPointLightComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowPointLightComponent_Statics::NewProp_bEnabled,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UShadowPointLightComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UShadowLight_NoRegister, (int32)VTABLE_OFFSET(UShadowPointLightComponent, IShadowLight), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShadowPointLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShadowPointLightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShadowPointLightComponent_Statics::ClassParams = {
		&UShadowPointLightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShadowPointLightComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShadowPointLightComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UShadowPointLightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowPointLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShadowPointLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShadowPointLightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShadowPointLightComponent, 2342730115);
	template<> SHADOWSTEALTH_API UClass* StaticClass<UShadowPointLightComponent>()
	{
		return UShadowPointLightComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShadowPointLightComponent(Z_Construct_UClass_UShadowPointLightComponent, &UShadowPointLightComponent::StaticClass, TEXT("/Script/ShadowStealth"), TEXT("UShadowPointLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShadowPointLightComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

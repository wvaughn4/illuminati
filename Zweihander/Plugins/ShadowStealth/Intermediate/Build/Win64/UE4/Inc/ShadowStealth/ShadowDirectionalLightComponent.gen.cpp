// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowStealth/Classes/Components/ShadowDirectionalLightComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowDirectionalLightComponent() {}
// Cross Module References
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowDirectionalLightComponent_NoRegister();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowDirectionalLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_ShadowStealth();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowLight_NoRegister();
// End Cross Module References
	void UShadowDirectionalLightComponent::StaticRegisterNativesUShadowDirectionalLightComponent()
	{
	}
	UClass* Z_Construct_UClass_UShadowDirectionalLightComponent_NoRegister()
	{
		return UShadowDirectionalLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_UShadowDirectionalLightComponent_Statics
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
	UObject* (*const Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/ShadowDirectionalLightComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ShadowDirectionalLightComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowDirectionalLightComponent.h" },
	};
#endif
	void Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UShadowDirectionalLightComponent*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShadowDirectionalLightComponent), &Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::NewProp_bEnabled,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UShadowLight_NoRegister, (int32)VTABLE_OFFSET(UShadowDirectionalLightComponent, IShadowLight), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShadowDirectionalLightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::ClassParams = {
		&UShadowDirectionalLightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShadowDirectionalLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShadowDirectionalLightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShadowDirectionalLightComponent, 899942886);
	template<> SHADOWSTEALTH_API UClass* StaticClass<UShadowDirectionalLightComponent>()
	{
		return UShadowDirectionalLightComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShadowDirectionalLightComponent(Z_Construct_UClass_UShadowDirectionalLightComponent, &UShadowDirectionalLightComponent::StaticClass, TEXT("/Script/ShadowStealth"), TEXT("UShadowDirectionalLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShadowDirectionalLightComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

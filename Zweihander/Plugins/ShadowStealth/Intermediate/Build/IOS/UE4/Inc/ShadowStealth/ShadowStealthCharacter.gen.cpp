// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowStealth/Classes/Actors/ShadowStealthCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowStealthCharacter() {}
// Cross Module References
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_AShadowStealthCharacter_NoRegister();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_AShadowStealthCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ShadowStealth();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowStealthComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister();
// End Cross Module References
	void AShadowStealthCharacter::StaticRegisterNativesAShadowStealthCharacter()
	{
	}
	UClass* Z_Construct_UClass_AShadowStealthCharacter_NoRegister()
	{
		return AShadowStealthCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShadowStealthCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowStealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadowStealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShadowStealthCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShadowStealthCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/ShadowStealthCharacter.h" },
		{ "ModuleRelativePath", "Classes/Actors/ShadowStealthCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShadowStealthCharacter_Statics::NewProp_ShadowStealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShadowStealth" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Actors/ShadowStealthCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShadowStealthCharacter_Statics::NewProp_ShadowStealth = { "ShadowStealth", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShadowStealthCharacter, ShadowStealth), Z_Construct_UClass_UShadowStealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShadowStealthCharacter_Statics::NewProp_ShadowStealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShadowStealthCharacter_Statics::NewProp_ShadowStealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShadowStealthCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShadowStealthCharacter_Statics::NewProp_ShadowStealth,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AShadowStealthCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAISightTargetInterface_NoRegister, (int32)VTABLE_OFFSET(AShadowStealthCharacter, IAISightTargetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShadowStealthCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShadowStealthCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShadowStealthCharacter_Statics::ClassParams = {
		&AShadowStealthCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShadowStealthCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShadowStealthCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShadowStealthCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShadowStealthCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShadowStealthCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShadowStealthCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShadowStealthCharacter, 1239123584);
	template<> SHADOWSTEALTH_API UClass* StaticClass<AShadowStealthCharacter>()
	{
		return AShadowStealthCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShadowStealthCharacter(Z_Construct_UClass_AShadowStealthCharacter, &AShadowStealthCharacter::StaticClass, TEXT("/Script/ShadowStealth"), TEXT("AShadowStealthCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShadowStealthCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

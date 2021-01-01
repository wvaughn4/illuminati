// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowStealth/Classes/Perception/ShadowSightTargetIntensityBounds.h"
#include "ShadowStealth/Classes/Components/ShadowStealthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowSightTargetIntensityBounds() {}
// Cross Module References
	SHADOWSTEALTH_API UScriptStruct* Z_Construct_UScriptStruct_FShadowIntensityBound();
	UPackage* Z_Construct_UPackage__Script_ShadowStealth();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowSightTargetIntensityBounds_NoRegister();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowSightTargetIntensityBounds();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowSightTargetBase();
// End Cross Module References
class UScriptStruct* FShadowIntensityBound::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHADOWSTEALTH_API uint32 Get_Z_Construct_UScriptStruct_FShadowIntensityBound_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShadowIntensityBound, Z_Construct_UPackage__Script_ShadowStealth(), TEXT("ShadowIntensityBound"), sizeof(FShadowIntensityBound), Get_Z_Construct_UScriptStruct_FShadowIntensityBound_Hash());
	}
	return Singleton;
}
template<> SHADOWSTEALTH_API UScriptStruct* StaticStruct<FShadowIntensityBound>()
{
	return FShadowIntensityBound::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShadowIntensityBound(FShadowIntensityBound::StaticStruct, TEXT("/Script/ShadowStealth"), TEXT("ShadowIntensityBound"), false, nullptr, nullptr);
static struct FScriptStruct_ShadowStealth_StaticRegisterNativesFShadowIntensityBound
{
	FScriptStruct_ShadowStealth_StaticRegisterNativesFShadowIntensityBound()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ShadowIntensityBound")),new UScriptStruct::TCppStructOps<FShadowIntensityBound>);
	}
} ScriptStruct_ShadowStealth_StaticRegisterNativesFShadowIntensityBound;
	struct Z_Construct_UScriptStruct_FShadowIntensityBound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotifyOnFallBelow_MetaData[];
#endif
		static void NewProp_bNotifyOnFallBelow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotifyOnFallBelow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotifyOnExceed_MetaData[];
#endif
		static void NewProp_bNotifyOnExceed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotifyOnExceed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntensityBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntensityBound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/ShadowSightTargetIntensityBounds.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShadowIntensityBound>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_NotifyName_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Perception/ShadowSightTargetIntensityBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShadowIntensityBound, NotifyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_NotifyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_NotifyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_bNotifyOnFallBelow_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Perception/ShadowSightTargetIntensityBounds.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_bNotifyOnFallBelow_SetBit(void* Obj)
	{
		((FShadowIntensityBound*)Obj)->bNotifyOnFallBelow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_bNotifyOnFallBelow = { "bNotifyOnFallBelow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FShadowIntensityBound), &Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_bNotifyOnFallBelow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_bNotifyOnFallBelow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_bNotifyOnFallBelow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_bNotifyOnExceed_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Perception/ShadowSightTargetIntensityBounds.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_bNotifyOnExceed_SetBit(void* Obj)
	{
		((FShadowIntensityBound*)Obj)->bNotifyOnExceed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_bNotifyOnExceed = { "bNotifyOnExceed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FShadowIntensityBound), &Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_bNotifyOnExceed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_bNotifyOnExceed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_bNotifyOnExceed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_IntensityBound_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Perception/ShadowSightTargetIntensityBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_IntensityBound = { "IntensityBound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShadowIntensityBound, IntensityBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_IntensityBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_IntensityBound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_NotifyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_bNotifyOnFallBelow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_bNotifyOnExceed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::NewProp_IntensityBound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStealth,
		nullptr,
		&NewStructOps,
		"ShadowIntensityBound",
		sizeof(FShadowIntensityBound),
		alignof(FShadowIntensityBound),
		Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShadowIntensityBound()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShadowIntensityBound_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShadowStealth();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShadowIntensityBound"), sizeof(FShadowIntensityBound), Get_Z_Construct_UScriptStruct_FShadowIntensityBound_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShadowIntensityBound_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShadowIntensityBound_Hash() { return 4141850904U; }
	void UShadowSightTargetIntensityBounds::StaticRegisterNativesUShadowSightTargetIntensityBounds()
	{
	}
	UClass* Z_Construct_UClass_UShadowSightTargetIntensityBounds_NoRegister()
	{
		return UShadowSightTargetIntensityBounds::StaticClass();
	}
	struct Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntensityUpperBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntensityUpperBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntensitySightedLowerBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntensitySightedLowerBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntensityHiddenLowerBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntensityHiddenLowerBound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UShadowSightTargetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Perception/ShadowSightTargetIntensityBounds.h" },
		{ "ModuleRelativePath", "Classes/Perception/ShadowSightTargetIntensityBounds.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::NewProp_IntensityUpperBound_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Perception/ShadowSightTargetIntensityBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::NewProp_IntensityUpperBound = { "IntensityUpperBound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowSightTargetIntensityBounds, IntensityUpperBound), Z_Construct_UScriptStruct_FShadowIntensityBound, METADATA_PARAMS(Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::NewProp_IntensityUpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::NewProp_IntensityUpperBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::NewProp_IntensitySightedLowerBound_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Perception/ShadowSightTargetIntensityBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::NewProp_IntensitySightedLowerBound = { "IntensitySightedLowerBound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowSightTargetIntensityBounds, IntensitySightedLowerBound), Z_Construct_UScriptStruct_FShadowIntensityBound, METADATA_PARAMS(Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::NewProp_IntensitySightedLowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::NewProp_IntensitySightedLowerBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::NewProp_IntensityHiddenLowerBound_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Perception/ShadowSightTargetIntensityBounds.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::NewProp_IntensityHiddenLowerBound = { "IntensityHiddenLowerBound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowSightTargetIntensityBounds, IntensityHiddenLowerBound), Z_Construct_UScriptStruct_FShadowIntensityBound, METADATA_PARAMS(Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::NewProp_IntensityHiddenLowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::NewProp_IntensityHiddenLowerBound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::NewProp_IntensityUpperBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::NewProp_IntensitySightedLowerBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::NewProp_IntensityHiddenLowerBound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShadowSightTargetIntensityBounds>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::ClassParams = {
		&UShadowSightTargetIntensityBounds::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShadowSightTargetIntensityBounds()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShadowSightTargetIntensityBounds_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShadowSightTargetIntensityBounds, 2467045313);
	template<> SHADOWSTEALTH_API UClass* StaticClass<UShadowSightTargetIntensityBounds>()
	{
		return UShadowSightTargetIntensityBounds::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShadowSightTargetIntensityBounds(Z_Construct_UClass_UShadowSightTargetIntensityBounds, &UShadowSightTargetIntensityBounds::StaticClass, TEXT("/Script/ShadowStealth"), TEXT("UShadowSightTargetIntensityBounds"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShadowSightTargetIntensityBounds);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

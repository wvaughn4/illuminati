// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowStealth/Public/ShadowIntensityNotifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowIntensityNotifier() {}
// Cross Module References
	SHADOWSTEALTH_API UScriptStruct* Z_Construct_UScriptStruct_FShadowIntensityNotifier();
	UPackage* Z_Construct_UPackage__Script_ShadowStealth();
// End Cross Module References
class UScriptStruct* FShadowIntensityNotifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHADOWSTEALTH_API uint32 Get_Z_Construct_UScriptStruct_FShadowIntensityNotifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShadowIntensityNotifier, Z_Construct_UPackage__Script_ShadowStealth(), TEXT("ShadowIntensityNotifier"), sizeof(FShadowIntensityNotifier), Get_Z_Construct_UScriptStruct_FShadowIntensityNotifier_Hash());
	}
	return Singleton;
}
template<> SHADOWSTEALTH_API UScriptStruct* StaticStruct<FShadowIntensityNotifier>()
{
	return FShadowIntensityNotifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShadowIntensityNotifier(FShadowIntensityNotifier::StaticStruct, TEXT("/Script/ShadowStealth"), TEXT("ShadowIntensityNotifier"), false, nullptr, nullptr);
static struct FScriptStruct_ShadowStealth_StaticRegisterNativesFShadowIntensityNotifier
{
	FScriptStruct_ShadowStealth_StaticRegisterNativesFShadowIntensityNotifier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ShadowIntensityNotifier")),new UScriptStruct::TCppStructOps<FShadowIntensityNotifier>);
	}
} ScriptStruct_ShadowStealth_StaticRegisterNativesFShadowIntensityNotifier;
	struct Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFellBelow_MetaData[];
#endif
		static void NewProp_bFellBelow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFellBelow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExeeded_MetaData[];
#endif
		static void NewProp_bExeeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExeeded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShadowIntensityNotifier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShadowIntensityNotifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_bFellBelow_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Public/ShadowIntensityNotifier.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_bFellBelow_SetBit(void* Obj)
	{
		((FShadowIntensityNotifier*)Obj)->bFellBelow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_bFellBelow = { "bFellBelow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FShadowIntensityNotifier), &Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_bFellBelow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_bFellBelow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_bFellBelow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_bExeeded_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Public/ShadowIntensityNotifier.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_bExeeded_SetBit(void* Obj)
	{
		((FShadowIntensityNotifier*)Obj)->bExeeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_bExeeded = { "bExeeded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FShadowIntensityNotifier), &Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_bExeeded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_bExeeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_bExeeded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Public/ShadowIntensityNotifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShadowIntensityNotifier, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Public/ShadowIntensityNotifier.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShadowIntensityNotifier, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_bFellBelow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_bExeeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStealth,
		nullptr,
		&NewStructOps,
		"ShadowIntensityNotifier",
		sizeof(FShadowIntensityNotifier),
		alignof(FShadowIntensityNotifier),
		Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShadowIntensityNotifier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShadowIntensityNotifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShadowStealth();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShadowIntensityNotifier"), sizeof(FShadowIntensityNotifier), Get_Z_Construct_UScriptStruct_FShadowIntensityNotifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShadowIntensityNotifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShadowIntensityNotifier_Hash() { return 1979985814U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

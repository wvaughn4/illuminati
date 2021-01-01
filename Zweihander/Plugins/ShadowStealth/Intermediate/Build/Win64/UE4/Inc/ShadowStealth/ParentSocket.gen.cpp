// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowStealth/Private/ParentSocket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParentSocket() {}
// Cross Module References
	SHADOWSTEALTH_API UScriptStruct* Z_Construct_UScriptStruct_FParentSocket();
	UPackage* Z_Construct_UPackage__Script_ShadowStealth();
// End Cross Module References
class UScriptStruct* FParentSocket::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHADOWSTEALTH_API uint32 Get_Z_Construct_UScriptStruct_FParentSocket_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParentSocket, Z_Construct_UPackage__Script_ShadowStealth(), TEXT("ParentSocket"), sizeof(FParentSocket), Get_Z_Construct_UScriptStruct_FParentSocket_Hash());
	}
	return Singleton;
}
template<> SHADOWSTEALTH_API UScriptStruct* StaticStruct<FParentSocket>()
{
	return FParentSocket::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParentSocket(FParentSocket::StaticStruct, TEXT("/Script/ShadowStealth"), TEXT("ParentSocket"), false, nullptr, nullptr);
static struct FScriptStruct_ShadowStealth_StaticRegisterNativesFParentSocket
{
	FScriptStruct_ShadowStealth_StaticRegisterNativesFParentSocket()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParentSocket")),new UScriptStruct::TCppStructOps<FParentSocket>);
	}
} ScriptStruct_ShadowStealth_StaticRegisterNativesFParentSocket;
	struct Z_Construct_UScriptStruct_FParentSocket_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParentSocket_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ParentSocket.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParentSocket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParentSocket>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParentSocket_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Private/ParentSocket.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FParentSocket_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParentSocket, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FParentSocket_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParentSocket_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParentSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParentSocket_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParentSocket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStealth,
		nullptr,
		&NewStructOps,
		"ParentSocket",
		sizeof(FParentSocket),
		alignof(FParentSocket),
		Z_Construct_UScriptStruct_FParentSocket_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParentSocket_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParentSocket_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParentSocket_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParentSocket()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParentSocket_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ShadowStealth();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParentSocket"), sizeof(FParentSocket), Get_Z_Construct_UScriptStruct_FParentSocket_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParentSocket_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParentSocket_Hash() { return 878779749U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

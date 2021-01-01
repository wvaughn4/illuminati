// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowStealth/Public/IShadowLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIShadowLight() {}
// Cross Module References
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowLight_NoRegister();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowLight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ShadowStealth();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(IShadowLight::execIsGlobalLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGlobalLight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IShadowLight::execGetLightIntensity)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point);
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_UBOOL(Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLightIntensity(Z_Param_Out_Point,ECollisionChannel(Z_Param_TraceChannel),Z_Param_Debug);
		P_NATIVE_END;
	}
	void UShadowLight::StaticRegisterNativesUShadowLight()
	{
		UClass* Class = UShadowLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLightIntensity", &IShadowLight::execGetLightIntensity },
			{ "IsGlobalLight", &IShadowLight::execIsGlobalLight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics
	{
		struct ShadowLight_eventGetLightIntensity_Parms
		{
			FVector Point;
			TEnumAsByte<ECollisionChannel> TraceChannel;
			bool Debug;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_Debug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Debug;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowLight_eventGetLightIntensity_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::NewProp_Debug_SetBit(void* Obj)
	{
		((ShadowLight_eventGetLightIntensity_Parms*)Obj)->Debug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShadowLight_eventGetLightIntensity_Parms), &Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::NewProp_Debug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowLight_eventGetLightIntensity_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowLight_eventGetLightIntensity_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::NewProp_Debug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::NewProp_Point,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IShadowLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowLight, nullptr, "GetLightIntensity", nullptr, nullptr, sizeof(ShadowLight_eventGetLightIntensity_Parms), Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowLight_GetLightIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowLight_GetLightIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowLight_IsGlobalLight_Statics
	{
		struct ShadowLight_eventIsGlobalLight_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UShadowLight_IsGlobalLight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShadowLight_eventIsGlobalLight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShadowLight_IsGlobalLight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShadowLight_eventIsGlobalLight_Parms), &Z_Construct_UFunction_UShadowLight_IsGlobalLight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowLight_IsGlobalLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowLight_IsGlobalLight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowLight_IsGlobalLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IShadowLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowLight_IsGlobalLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowLight, nullptr, "IsGlobalLight", nullptr, nullptr, sizeof(ShadowLight_eventIsGlobalLight_Parms), Z_Construct_UFunction_UShadowLight_IsGlobalLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowLight_IsGlobalLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowLight_IsGlobalLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowLight_IsGlobalLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowLight_IsGlobalLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowLight_IsGlobalLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UShadowLight_NoRegister()
	{
		return UShadowLight::StaticClass();
	}
	struct Z_Construct_UClass_UShadowLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShadowLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShadowLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShadowLight_GetLightIntensity, "GetLightIntensity" }, // 3446618055
		{ &Z_Construct_UFunction_UShadowLight_IsGlobalLight, "IsGlobalLight" }, // 2967713680
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowLight_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IShadowLight.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShadowLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IShadowLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShadowLight_Statics::ClassParams = {
		&UShadowLight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UShadowLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShadowLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShadowLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShadowLight, 1209270534);
	template<> SHADOWSTEALTH_API UClass* StaticClass<UShadowLight>()
	{
		return UShadowLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShadowLight(Z_Construct_UClass_UShadowLight, &UShadowLight::StaticClass, TEXT("/Script/ShadowStealth"), TEXT("UShadowLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShadowLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

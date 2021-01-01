// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowStealth/Classes/Perception/ShadowSightTargetBase.h"
#include "ShadowStealth/Classes/Components/ShadowStealthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowSightTargetBase() {}
// Cross Module References
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowSightTargetBase_NoRegister();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowSightTargetBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ShadowStealth();
	SHADOWSTEALTH_API UScriptStruct* Z_Construct_UScriptStruct_FShadowIntensityNotifier();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowStealthComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UShadowSightTargetBase::execAddIntensityNotifier)
	{
		P_GET_STRUCT_REF(FShadowIntensityNotifier,Z_Param_Out_Notifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddIntensityNotifier(Z_Param_Out_Notifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShadowSightTargetBase::execGetIntensityNotifiers)
	{
		P_GET_OBJECT(UShadowStealthComponent,Z_Param_ShadowStealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetIntensityNotifiers_Implementation(Z_Param_ShadowStealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShadowSightTargetBase::execCanBeSeenFrom)
	{
		P_GET_OBJECT(UShadowStealthComponent,Z_Param_ShadowStealth);
		P_GET_OBJECT(AActor,Z_Param_Observer);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ObserverLocation);
		P_GET_UBOOL(Z_Param_bSeenLastTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutSeenLocation);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutSightStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeSeenFrom_Implementation(Z_Param_ShadowStealth,Z_Param_Observer,Z_Param_Out_ObserverLocation,Z_Param_bSeenLastTime,Z_Param_Out_OutSeenLocation,Z_Param_Out_OutSightStrength);
		P_NATIVE_END;
	}
	static FName NAME_UShadowSightTargetBase_CanBeSeenFrom = FName(TEXT("CanBeSeenFrom"));
	bool UShadowSightTargetBase::CanBeSeenFrom(UShadowStealthComponent* ShadowStealth, const AActor* Observer, FVector const& ObserverLocation, bool bSeenLastTime, FVector& OutSeenLocation, float& OutSightStrength)
	{
		ShadowSightTargetBase_eventCanBeSeenFrom_Parms Parms;
		Parms.ShadowStealth=ShadowStealth;
		Parms.Observer=Observer;
		Parms.ObserverLocation=ObserverLocation;
		Parms.bSeenLastTime=bSeenLastTime ? true : false;
		Parms.OutSeenLocation=OutSeenLocation;
		Parms.OutSightStrength=OutSightStrength;
		ProcessEvent(FindFunctionChecked(NAME_UShadowSightTargetBase_CanBeSeenFrom),&Parms);
		OutSeenLocation=Parms.OutSeenLocation;
		OutSightStrength=Parms.OutSightStrength;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UShadowSightTargetBase_GetIntensityNotifiers = FName(TEXT("GetIntensityNotifiers"));
	void UShadowSightTargetBase::GetIntensityNotifiers(UShadowStealthComponent* ShadowStealth)
	{
		ShadowSightTargetBase_eventGetIntensityNotifiers_Parms Parms;
		Parms.ShadowStealth=ShadowStealth;
		ProcessEvent(FindFunctionChecked(NAME_UShadowSightTargetBase_GetIntensityNotifiers),&Parms);
	}
	void UShadowSightTargetBase::StaticRegisterNativesUShadowSightTargetBase()
	{
		UClass* Class = UShadowSightTargetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddIntensityNotifier", &UShadowSightTargetBase::execAddIntensityNotifier },
			{ "CanBeSeenFrom", &UShadowSightTargetBase::execCanBeSeenFrom },
			{ "GetIntensityNotifiers", &UShadowSightTargetBase::execGetIntensityNotifiers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShadowSightTargetBase_AddIntensityNotifier_Statics
	{
		struct ShadowSightTargetBase_eventAddIntensityNotifier_Parms
		{
			FShadowIntensityNotifier Notifier;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Notifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Notifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowSightTargetBase_AddIntensityNotifier_Statics::NewProp_Notifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShadowSightTargetBase_AddIntensityNotifier_Statics::NewProp_Notifier = { "Notifier", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowSightTargetBase_eventAddIntensityNotifier_Parms, Notifier), Z_Construct_UScriptStruct_FShadowIntensityNotifier, METADATA_PARAMS(Z_Construct_UFunction_UShadowSightTargetBase_AddIntensityNotifier_Statics::NewProp_Notifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowSightTargetBase_AddIntensityNotifier_Statics::NewProp_Notifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowSightTargetBase_AddIntensityNotifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowSightTargetBase_AddIntensityNotifier_Statics::NewProp_Notifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowSightTargetBase_AddIntensityNotifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShadowStealth" },
		{ "Comment", "/** Add intensity notifier from Blueprint implementation of GetIntensityNotifiers */" },
		{ "ModuleRelativePath", "Classes/Perception/ShadowSightTargetBase.h" },
		{ "ToolTip", "Add intensity notifier from Blueprint implementation of GetIntensityNotifiers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowSightTargetBase_AddIntensityNotifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowSightTargetBase, nullptr, "AddIntensityNotifier", nullptr, nullptr, sizeof(ShadowSightTargetBase_eventAddIntensityNotifier_Parms), Z_Construct_UFunction_UShadowSightTargetBase_AddIntensityNotifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowSightTargetBase_AddIntensityNotifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowSightTargetBase_AddIntensityNotifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowSightTargetBase_AddIntensityNotifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowSightTargetBase_AddIntensityNotifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowSightTargetBase_AddIntensityNotifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutSightStrength;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutSeenLocation;
		static void NewProp_bSeenLastTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSeenLastTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObserverLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObserverLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Observer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowStealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadowStealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShadowSightTargetBase_eventCanBeSeenFrom_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShadowSightTargetBase_eventCanBeSeenFrom_Parms), &Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_OutSightStrength = { "OutSightStrength", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowSightTargetBase_eventCanBeSeenFrom_Parms, OutSightStrength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_OutSeenLocation = { "OutSeenLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowSightTargetBase_eventCanBeSeenFrom_Parms, OutSeenLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_bSeenLastTime_SetBit(void* Obj)
	{
		((ShadowSightTargetBase_eventCanBeSeenFrom_Parms*)Obj)->bSeenLastTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_bSeenLastTime = { "bSeenLastTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShadowSightTargetBase_eventCanBeSeenFrom_Parms), &Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_bSeenLastTime_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_ObserverLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_ObserverLocation = { "ObserverLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowSightTargetBase_eventCanBeSeenFrom_Parms, ObserverLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_ObserverLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_ObserverLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_Observer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowSightTargetBase_eventCanBeSeenFrom_Parms, Observer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_Observer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_Observer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_ShadowStealth_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_ShadowStealth = { "ShadowStealth", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowSightTargetBase_eventCanBeSeenFrom_Parms, ShadowStealth), Z_Construct_UClass_UShadowStealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_ShadowStealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_ShadowStealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_OutSightStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_OutSeenLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_bSeenLastTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_ObserverLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_Observer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::NewProp_ShadowStealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShadowStealth" },
		{ "Comment", "/** Blueprint implementation of CanBeSeenFrom method */" },
		{ "ModuleRelativePath", "Classes/Perception/ShadowSightTargetBase.h" },
		{ "ToolTip", "Blueprint implementation of CanBeSeenFrom method" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowSightTargetBase, nullptr, "CanBeSeenFrom", nullptr, nullptr, sizeof(ShadowSightTargetBase_eventCanBeSeenFrom_Parms), Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowSightTargetBase_GetIntensityNotifiers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowStealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadowStealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowSightTargetBase_GetIntensityNotifiers_Statics::NewProp_ShadowStealth_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShadowSightTargetBase_GetIntensityNotifiers_Statics::NewProp_ShadowStealth = { "ShadowStealth", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowSightTargetBase_eventGetIntensityNotifiers_Parms, ShadowStealth), Z_Construct_UClass_UShadowStealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UShadowSightTargetBase_GetIntensityNotifiers_Statics::NewProp_ShadowStealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowSightTargetBase_GetIntensityNotifiers_Statics::NewProp_ShadowStealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowSightTargetBase_GetIntensityNotifiers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowSightTargetBase_GetIntensityNotifiers_Statics::NewProp_ShadowStealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowSightTargetBase_GetIntensityNotifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShadowStealth" },
		{ "Comment", "/** Blueprint implementation of GetIntensityNotifiers method */" },
		{ "ModuleRelativePath", "Classes/Perception/ShadowSightTargetBase.h" },
		{ "ToolTip", "Blueprint implementation of GetIntensityNotifiers method" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowSightTargetBase_GetIntensityNotifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowSightTargetBase, nullptr, "GetIntensityNotifiers", nullptr, nullptr, sizeof(ShadowSightTargetBase_eventGetIntensityNotifiers_Parms), Z_Construct_UFunction_UShadowSightTargetBase_GetIntensityNotifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowSightTargetBase_GetIntensityNotifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowSightTargetBase_GetIntensityNotifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowSightTargetBase_GetIntensityNotifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowSightTargetBase_GetIntensityNotifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowSightTargetBase_GetIntensityNotifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UShadowSightTargetBase_NoRegister()
	{
		return UShadowSightTargetBase::StaticClass();
	}
	struct Z_Construct_UClass_UShadowSightTargetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShadowSightTargetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShadowSightTargetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShadowSightTargetBase_AddIntensityNotifier, "AddIntensityNotifier" }, // 2412463624
		{ &Z_Construct_UFunction_UShadowSightTargetBase_CanBeSeenFrom, "CanBeSeenFrom" }, // 1783024643
		{ &Z_Construct_UFunction_UShadowSightTargetBase_GetIntensityNotifiers, "GetIntensityNotifiers" }, // 490171826
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowSightTargetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Perception/ShadowSightTargetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Perception/ShadowSightTargetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShadowSightTargetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShadowSightTargetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShadowSightTargetBase_Statics::ClassParams = {
		&UShadowSightTargetBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UShadowSightTargetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowSightTargetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShadowSightTargetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShadowSightTargetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShadowSightTargetBase, 3806464742);
	template<> SHADOWSTEALTH_API UClass* StaticClass<UShadowSightTargetBase>()
	{
		return UShadowSightTargetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShadowSightTargetBase(Z_Construct_UClass_UShadowSightTargetBase, &UShadowSightTargetBase::StaticClass, TEXT("/Script/ShadowStealth"), TEXT("UShadowSightTargetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShadowSightTargetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

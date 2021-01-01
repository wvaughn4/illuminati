// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowStealth/Classes/Components/ShadowStealthComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowStealthComponent() {}
// Cross Module References
	SHADOWSTEALTH_API UFunction* Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowStealthComponent();
	SHADOWSTEALTH_API UEnum* Z_Construct_UEnum_ShadowStealth_EShadowMethod();
	UPackage* Z_Construct_UPackage__Script_ShadowStealth();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowStealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SHADOWSTEALTH_API UClass* Z_Construct_UClass_UShadowSightTargetBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHADOWSTEALTH_API UScriptStruct* Z_Construct_UScriptStruct_FShadowIntensityNotifier();
	SHADOWSTEALTH_API UScriptStruct* Z_Construct_UScriptStruct_FParentSocket();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature_Statics
	{
		struct ShadowStealthComponent_eventNotifyIntensityDelegate_Parms
		{
			FName Name;
			float Intensity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventNotifyIntensityDelegate_Parms, Intensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventNotifyIntensityDelegate_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowStealthComponent, nullptr, "NotifyIntensityDelegate__DelegateSignature", nullptr, nullptr, sizeof(ShadowStealthComponent_eventNotifyIntensityDelegate_Parms), Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EShadowMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ShadowStealth_EShadowMethod, Z_Construct_UPackage__Script_ShadowStealth(), TEXT("EShadowMethod"));
		}
		return Singleton;
	}
	template<> SHADOWSTEALTH_API UEnum* StaticEnum<EShadowMethod>()
	{
		return EShadowMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EShadowMethod(EShadowMethod_StaticEnum, TEXT("/Script/ShadowStealth"), TEXT("EShadowMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ShadowStealth_EShadowMethod_Hash() { return 1187019814U; }
	UEnum* Z_Construct_UEnum_ShadowStealth_EShadowMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ShadowStealth();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EShadowMethod"), 0, Get_Z_Construct_UEnum_ShadowStealth_EShadowMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EShadowMethod::Max", (int64)EShadowMethod::Max },
				{ "EShadowMethod::Min", (int64)EShadowMethod::Min },
				{ "EShadowMethod::Mean", (int64)EShadowMethod::Mean },
				{ "EShadowMethod::Median", (int64)EShadowMethod::Median },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Max.Name", "EShadowMethod::Max" },
				{ "Mean.Name", "EShadowMethod::Mean" },
				{ "Median.Name", "EShadowMethod::Median" },
				{ "Min.Name", "EShadowMethod::Min" },
				{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ShadowStealth,
				nullptr,
				"EShadowMethod",
				"EShadowMethod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UShadowStealthComponent::execOnActorEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShadowStealthComponent::execOnActorBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShadowStealthComponent::execCheckLineOfSight)
	{
		P_GET_OBJECT(AActor,Z_Param_Observer);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ObserverLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SightTargetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckLineOfSight(Z_Param_Observer,Z_Param_Out_ObserverLocation,Z_Param_Out_SightTargetLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShadowStealthComponent::execGetLightIntensityRGBAtSocketIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SocketIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLightIntensityRGBAtSocketIndex(Z_Param_SocketIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShadowStealthComponent::execGetLightIntensityAtSocketIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SocketIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLightIntensityAtSocketIndex(Z_Param_SocketIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShadowStealthComponent::execGetLocationAtSocketIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SocketIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLocationAtSocketIndex(Z_Param_SocketIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShadowStealthComponent::execGetSocketsNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSocketsNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShadowStealthComponent::execGetAISightIntensityUpperBound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAISightIntensityUpperBound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShadowStealthComponent::execGetAISightIntensitySightedLowerBound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAISightIntensitySightedLowerBound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShadowStealthComponent::execGetAISightIntensityHiddenLowerBound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAISightIntensityHiddenLowerBound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShadowStealthComponent::execGetLightIntensityRGBAtSelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLightIntensityRGBAtSelf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShadowStealthComponent::execGetLightIntensityRGBAtSocket)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLightIntensityRGBAtSocket(Z_Param_SocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShadowStealthComponent::execGetLightIntensityRGB)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLightIntensityRGB();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShadowStealthComponent::execGetLightIntensityAtSelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLightIntensityAtSelf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShadowStealthComponent::execGetLightIntensityAtSocket)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLightIntensityAtSocket(Z_Param_SocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShadowStealthComponent::execGetLightIntensity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLightIntensity();
		P_NATIVE_END;
	}
	void UShadowStealthComponent::StaticRegisterNativesUShadowStealthComponent()
	{
		UClass* Class = UShadowStealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckLineOfSight", &UShadowStealthComponent::execCheckLineOfSight },
			{ "GetAISightIntensityHiddenLowerBound", &UShadowStealthComponent::execGetAISightIntensityHiddenLowerBound },
			{ "GetAISightIntensitySightedLowerBound", &UShadowStealthComponent::execGetAISightIntensitySightedLowerBound },
			{ "GetAISightIntensityUpperBound", &UShadowStealthComponent::execGetAISightIntensityUpperBound },
			{ "GetLightIntensity", &UShadowStealthComponent::execGetLightIntensity },
			{ "GetLightIntensityAtSelf", &UShadowStealthComponent::execGetLightIntensityAtSelf },
			{ "GetLightIntensityAtSocket", &UShadowStealthComponent::execGetLightIntensityAtSocket },
			{ "GetLightIntensityAtSocketIndex", &UShadowStealthComponent::execGetLightIntensityAtSocketIndex },
			{ "GetLightIntensityRGB", &UShadowStealthComponent::execGetLightIntensityRGB },
			{ "GetLightIntensityRGBAtSelf", &UShadowStealthComponent::execGetLightIntensityRGBAtSelf },
			{ "GetLightIntensityRGBAtSocket", &UShadowStealthComponent::execGetLightIntensityRGBAtSocket },
			{ "GetLightIntensityRGBAtSocketIndex", &UShadowStealthComponent::execGetLightIntensityRGBAtSocketIndex },
			{ "GetLocationAtSocketIndex", &UShadowStealthComponent::execGetLocationAtSocketIndex },
			{ "GetSocketsNum", &UShadowStealthComponent::execGetSocketsNum },
			{ "OnActorBeginOverlap", &UShadowStealthComponent::execOnActorBeginOverlap },
			{ "OnActorEndOverlap", &UShadowStealthComponent::execOnActorEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics
	{
		struct ShadowStealthComponent_eventCheckLineOfSight_Parms
		{
			const AActor* Observer;
			FVector ObserverLocation;
			FVector SightTargetLocation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SightTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObserverLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObserverLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Observer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShadowStealthComponent_eventCheckLineOfSight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShadowStealthComponent_eventCheckLineOfSight_Parms), &Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_SightTargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_SightTargetLocation = { "SightTargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventCheckLineOfSight_Parms, SightTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_SightTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_SightTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_ObserverLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_ObserverLocation = { "ObserverLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventCheckLineOfSight_Parms, ObserverLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_ObserverLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_ObserverLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_Observer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventCheckLineOfSight_Parms, Observer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_Observer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_Observer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_SightTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_ObserverLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::NewProp_Observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowStealthComponent, nullptr, "CheckLineOfSight", nullptr, nullptr, sizeof(ShadowStealthComponent_eventCheckLineOfSight_Parms), Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityHiddenLowerBound_Statics
	{
		struct ShadowStealthComponent_eventGetAISightIntensityHiddenLowerBound_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityHiddenLowerBound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetAISightIntensityHiddenLowerBound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityHiddenLowerBound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityHiddenLowerBound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityHiddenLowerBound_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityHiddenLowerBound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowStealthComponent, nullptr, "GetAISightIntensityHiddenLowerBound", nullptr, nullptr, sizeof(ShadowStealthComponent_eventGetAISightIntensityHiddenLowerBound_Parms), Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityHiddenLowerBound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityHiddenLowerBound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityHiddenLowerBound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityHiddenLowerBound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityHiddenLowerBound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityHiddenLowerBound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensitySightedLowerBound_Statics
	{
		struct ShadowStealthComponent_eventGetAISightIntensitySightedLowerBound_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensitySightedLowerBound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetAISightIntensitySightedLowerBound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensitySightedLowerBound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensitySightedLowerBound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensitySightedLowerBound_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensitySightedLowerBound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowStealthComponent, nullptr, "GetAISightIntensitySightedLowerBound", nullptr, nullptr, sizeof(ShadowStealthComponent_eventGetAISightIntensitySightedLowerBound_Parms), Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensitySightedLowerBound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensitySightedLowerBound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensitySightedLowerBound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensitySightedLowerBound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensitySightedLowerBound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensitySightedLowerBound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityUpperBound_Statics
	{
		struct ShadowStealthComponent_eventGetAISightIntensityUpperBound_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityUpperBound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetAISightIntensityUpperBound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityUpperBound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityUpperBound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityUpperBound_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityUpperBound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowStealthComponent, nullptr, "GetAISightIntensityUpperBound", nullptr, nullptr, sizeof(ShadowStealthComponent_eventGetAISightIntensityUpperBound_Parms), Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityUpperBound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityUpperBound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityUpperBound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityUpperBound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityUpperBound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityUpperBound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensity_Statics
	{
		struct ShadowStealthComponent_eventGetLightIntensity_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetLightIntensity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowStealthComponent, nullptr, "GetLightIntensity", nullptr, nullptr, sizeof(ShadowStealthComponent_eventGetLightIntensity_Parms), Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSelf_Statics
	{
		struct ShadowStealthComponent_eventGetLightIntensityAtSelf_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSelf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetLightIntensityAtSelf_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSelf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSelf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSelf_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowStealthComponent, nullptr, "GetLightIntensityAtSelf", nullptr, nullptr, sizeof(ShadowStealthComponent_eventGetLightIntensityAtSelf_Parms), Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocket_Statics
	{
		struct ShadowStealthComponent_eventGetLightIntensityAtSocket_Parms
		{
			FName SocketName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetLightIntensityAtSocket_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocket_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetLightIntensityAtSocket_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocket_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocket_Statics::NewProp_SocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowStealthComponent, nullptr, "GetLightIntensityAtSocket", nullptr, nullptr, sizeof(ShadowStealthComponent_eventGetLightIntensityAtSocket_Parms), Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocketIndex_Statics
	{
		struct ShadowStealthComponent_eventGetLightIntensityAtSocketIndex_Parms
		{
			int32 SocketIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SocketIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocketIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetLightIntensityAtSocketIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocketIndex_Statics::NewProp_SocketIndex = { "SocketIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetLightIntensityAtSocketIndex_Parms, SocketIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocketIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocketIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocketIndex_Statics::NewProp_SocketIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocketIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocketIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowStealthComponent, nullptr, "GetLightIntensityAtSocketIndex", nullptr, nullptr, sizeof(ShadowStealthComponent_eventGetLightIntensityAtSocketIndex_Parms), Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocketIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocketIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocketIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocketIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocketIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocketIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGB_Statics
	{
		struct ShadowStealthComponent_eventGetLightIntensityRGB_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetLightIntensityRGB_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGB_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowStealthComponent, nullptr, "GetLightIntensityRGB", nullptr, nullptr, sizeof(ShadowStealthComponent_eventGetLightIntensityRGB_Parms), Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSelf_Statics
	{
		struct ShadowStealthComponent_eventGetLightIntensityRGBAtSelf_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSelf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetLightIntensityRGBAtSelf_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSelf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSelf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSelf_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowStealthComponent, nullptr, "GetLightIntensityRGBAtSelf", nullptr, nullptr, sizeof(ShadowStealthComponent_eventGetLightIntensityRGBAtSelf_Parms), Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocket_Statics
	{
		struct ShadowStealthComponent_eventGetLightIntensityRGBAtSocket_Parms
		{
			FName SocketName;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetLightIntensityRGBAtSocket_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocket_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetLightIntensityRGBAtSocket_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocket_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocket_Statics::NewProp_SocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowStealthComponent, nullptr, "GetLightIntensityRGBAtSocket", nullptr, nullptr, sizeof(ShadowStealthComponent_eventGetLightIntensityRGBAtSocket_Parms), Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocketIndex_Statics
	{
		struct ShadowStealthComponent_eventGetLightIntensityRGBAtSocketIndex_Parms
		{
			int32 SocketIndex;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SocketIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocketIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetLightIntensityRGBAtSocketIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocketIndex_Statics::NewProp_SocketIndex = { "SocketIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetLightIntensityRGBAtSocketIndex_Parms, SocketIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocketIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocketIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocketIndex_Statics::NewProp_SocketIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocketIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocketIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowStealthComponent, nullptr, "GetLightIntensityRGBAtSocketIndex", nullptr, nullptr, sizeof(ShadowStealthComponent_eventGetLightIntensityRGBAtSocketIndex_Parms), Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocketIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocketIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocketIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocketIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocketIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocketIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowStealthComponent_GetLocationAtSocketIndex_Statics
	{
		struct ShadowStealthComponent_eventGetLocationAtSocketIndex_Parms
		{
			int32 SocketIndex;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SocketIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetLocationAtSocketIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetLocationAtSocketIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetLocationAtSocketIndex_Statics::NewProp_SocketIndex = { "SocketIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetLocationAtSocketIndex_Parms, SocketIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowStealthComponent_GetLocationAtSocketIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetLocationAtSocketIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetLocationAtSocketIndex_Statics::NewProp_SocketIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_GetLocationAtSocketIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowStealthComponent_GetLocationAtSocketIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowStealthComponent, nullptr, "GetLocationAtSocketIndex", nullptr, nullptr, sizeof(ShadowStealthComponent_eventGetLocationAtSocketIndex_Parms), Z_Construct_UFunction_UShadowStealthComponent_GetLocationAtSocketIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLocationAtSocketIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_GetLocationAtSocketIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetLocationAtSocketIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowStealthComponent_GetLocationAtSocketIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowStealthComponent_GetLocationAtSocketIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowStealthComponent_GetSocketsNum_Statics
	{
		struct ShadowStealthComponent_eventGetSocketsNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UShadowStealthComponent_GetSocketsNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventGetSocketsNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowStealthComponent_GetSocketsNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_GetSocketsNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_GetSocketsNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowStealthComponent_GetSocketsNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowStealthComponent, nullptr, "GetSocketsNum", nullptr, nullptr, sizeof(ShadowStealthComponent_eventGetSocketsNum_Parms), Z_Construct_UFunction_UShadowStealthComponent_GetSocketsNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetSocketsNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_GetSocketsNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_GetSocketsNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowStealthComponent_GetSocketsNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowStealthComponent_GetSocketsNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowStealthComponent_OnActorBeginOverlap_Statics
	{
		struct ShadowStealthComponent_eventOnActorBeginOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShadowStealthComponent_OnActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventOnActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShadowStealthComponent_OnActorBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventOnActorBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowStealthComponent_OnActorBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_OnActorBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_OnActorBeginOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_OnActorBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowStealthComponent_OnActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowStealthComponent, nullptr, "OnActorBeginOverlap", nullptr, nullptr, sizeof(ShadowStealthComponent_eventOnActorBeginOverlap_Parms), Z_Construct_UFunction_UShadowStealthComponent_OnActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_OnActorBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_OnActorBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_OnActorBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowStealthComponent_OnActorBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowStealthComponent_OnActorBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShadowStealthComponent_OnActorEndOverlap_Statics
	{
		struct ShadowStealthComponent_eventOnActorEndOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShadowStealthComponent_OnActorEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventOnActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShadowStealthComponent_OnActorEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShadowStealthComponent_eventOnActorEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShadowStealthComponent_OnActorEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_OnActorEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShadowStealthComponent_OnActorEndOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShadowStealthComponent_OnActorEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShadowStealthComponent_OnActorEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShadowStealthComponent, nullptr, "OnActorEndOverlap", nullptr, nullptr, sizeof(ShadowStealthComponent_eventOnActorEndOverlap_Parms), Z_Construct_UFunction_UShadowStealthComponent_OnActorEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_OnActorEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShadowStealthComponent_OnActorEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShadowStealthComponent_OnActorEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShadowStealthComponent_OnActorEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShadowStealthComponent_OnActorEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UShadowStealthComponent_NoRegister()
	{
		return UShadowStealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UShadowStealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyOnFallBelowIntensities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NotifyOnFallBelowIntensities;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NotifyOnFallBelowIntensities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyOnExceedIntensities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NotifyOnExceedIntensities;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NotifyOnExceedIntensities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightTargetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SightTargetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNotifyFallBelowIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotifyFallBelowIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNotifyExceedIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotifyExceedIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyOnIntensities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NotifyOnIntensities;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NotifyOnIntensities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightIntensityUpperBoundOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightIntensityUpperBoundOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightIntensitySightedLowerBoundOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightIntensitySightedLowerBoundOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightIntensityHiddenLowerBoundOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightIntensityHiddenLowerBoundOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightShadowSenseEnabled_MetaData[];
#endif
		static void NewProp_AISightShadowSenseEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AISightShadowSenseEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ShadowMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShadowMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestSelfLocation_MetaData[];
#endif
		static void NewProp_TestSelfLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TestSelfLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestSockets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TestSockets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestSockets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappingShadowLights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlappingShadowLights;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_OverlappingShadowLights_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShadowStealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStealth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShadowStealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShadowStealthComponent_CheckLineOfSight, "CheckLineOfSight" }, // 1906688173
		{ &Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityHiddenLowerBound, "GetAISightIntensityHiddenLowerBound" }, // 2672725541
		{ &Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensitySightedLowerBound, "GetAISightIntensitySightedLowerBound" }, // 774555754
		{ &Z_Construct_UFunction_UShadowStealthComponent_GetAISightIntensityUpperBound, "GetAISightIntensityUpperBound" }, // 3197304904
		{ &Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensity, "GetLightIntensity" }, // 907227409
		{ &Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSelf, "GetLightIntensityAtSelf" }, // 447439531
		{ &Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocket, "GetLightIntensityAtSocket" }, // 2415311746
		{ &Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityAtSocketIndex, "GetLightIntensityAtSocketIndex" }, // 1199018969
		{ &Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGB, "GetLightIntensityRGB" }, // 110479158
		{ &Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSelf, "GetLightIntensityRGBAtSelf" }, // 3411799330
		{ &Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocket, "GetLightIntensityRGBAtSocket" }, // 2107798749
		{ &Z_Construct_UFunction_UShadowStealthComponent_GetLightIntensityRGBAtSocketIndex, "GetLightIntensityRGBAtSocketIndex" }, // 3751085168
		{ &Z_Construct_UFunction_UShadowStealthComponent_GetLocationAtSocketIndex, "GetLocationAtSocketIndex" }, // 1314327109
		{ &Z_Construct_UFunction_UShadowStealthComponent_GetSocketsNum, "GetSocketsNum" }, // 3804668766
		{ &Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature, "NotifyIntensityDelegate__DelegateSignature" }, // 3480653242
		{ &Z_Construct_UFunction_UShadowStealthComponent_OnActorBeginOverlap, "OnActorBeginOverlap" }, // 519112818
		{ &Z_Construct_UFunction_UShadowStealthComponent_OnActorEndOverlap, "OnActorEndOverlap" }, // 1556159426
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/ShadowStealthComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnFallBelowIntensities_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnFallBelowIntensities = { "NotifyOnFallBelowIntensities", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowStealthComponent, NotifyOnFallBelowIntensities_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnFallBelowIntensities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnFallBelowIntensities_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnFallBelowIntensities_Inner = { "NotifyOnFallBelowIntensities", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnExceedIntensities_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnExceedIntensities = { "NotifyOnExceedIntensities", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowStealthComponent, NotifyOnExceedIntensities_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnExceedIntensities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnExceedIntensities_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnExceedIntensities_Inner = { "NotifyOnExceedIntensities", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_SightTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_SightTarget = { "SightTarget", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowStealthComponent, SightTarget), Z_Construct_UClass_UShadowSightTargetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_SightTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_SightTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_SightTargetClass_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_SightTargetClass = { "SightTargetClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowStealthComponent, SightTargetClass), Z_Construct_UClass_UShadowSightTargetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_SightTargetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_SightTargetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_OnNotifyFallBelowIntensity_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_OnNotifyFallBelowIntensity = { "OnNotifyFallBelowIntensity", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowStealthComponent, OnNotifyFallBelowIntensity), Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_OnNotifyFallBelowIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_OnNotifyFallBelowIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_OnNotifyExceedIntensity_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_OnNotifyExceedIntensity = { "OnNotifyExceedIntensity", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowStealthComponent, OnNotifyExceedIntensity), Z_Construct_UDelegateFunction_UShadowStealthComponent_NotifyIntensityDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_OnNotifyExceedIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_OnNotifyExceedIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnIntensities_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnIntensities = { "NotifyOnIntensities", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowStealthComponent, NotifyOnIntensities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnIntensities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnIntensities_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnIntensities_Inner = { "NotifyOnIntensities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FShadowIntensityNotifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightIntensityUpperBoundOverride_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightIntensityUpperBoundOverride = { "AISightIntensityUpperBoundOverride", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowStealthComponent, AISightIntensityUpperBoundOverride), METADATA_PARAMS(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightIntensityUpperBoundOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightIntensityUpperBoundOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightIntensitySightedLowerBoundOverride_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightIntensitySightedLowerBoundOverride = { "AISightIntensitySightedLowerBoundOverride", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowStealthComponent, AISightIntensitySightedLowerBoundOverride), METADATA_PARAMS(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightIntensitySightedLowerBoundOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightIntensitySightedLowerBoundOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightIntensityHiddenLowerBoundOverride_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightIntensityHiddenLowerBoundOverride = { "AISightIntensityHiddenLowerBoundOverride", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowStealthComponent, AISightIntensityHiddenLowerBoundOverride), METADATA_PARAMS(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightIntensityHiddenLowerBoundOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightIntensityHiddenLowerBoundOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightShadowSenseEnabled_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	void Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightShadowSenseEnabled_SetBit(void* Obj)
	{
		((UShadowStealthComponent*)Obj)->AISightShadowSenseEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightShadowSenseEnabled = { "AISightShadowSenseEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShadowStealthComponent), &Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightShadowSenseEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightShadowSenseEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightShadowSenseEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_ShadowMethod_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_ShadowMethod = { "ShadowMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowStealthComponent, ShadowMethod), Z_Construct_UEnum_ShadowStealth_EShadowMethod, METADATA_PARAMS(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_ShadowMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_ShadowMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_ShadowMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_TestSelfLocation_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	void Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_TestSelfLocation_SetBit(void* Obj)
	{
		((UShadowStealthComponent*)Obj)->TestSelfLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_TestSelfLocation = { "TestSelfLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShadowStealthComponent), &Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_TestSelfLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_TestSelfLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_TestSelfLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_TestSockets_MetaData[] = {
		{ "Category", "ShadowStealth" },
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_TestSockets = { "TestSockets", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowStealthComponent, TestSockets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_TestSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_TestSockets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_TestSockets_Inner = { "TestSockets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParentSocket, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_OverlappingShadowLights_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ShadowStealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_OverlappingShadowLights = { "OverlappingShadowLights", nullptr, (EPropertyFlags)0x0044008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShadowStealthComponent, OverlappingShadowLights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_OverlappingShadowLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_OverlappingShadowLights_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_OverlappingShadowLights_Inner = { "OverlappingShadowLights", nullptr, (EPropertyFlags)0x0004000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShadowStealthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnFallBelowIntensities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnFallBelowIntensities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnExceedIntensities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnExceedIntensities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_SightTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_SightTargetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_OnNotifyFallBelowIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_OnNotifyExceedIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnIntensities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_NotifyOnIntensities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightIntensityUpperBoundOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightIntensitySightedLowerBoundOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightIntensityHiddenLowerBoundOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_AISightShadowSenseEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_ShadowMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_ShadowMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_TestSelfLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_TestSockets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_TestSockets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_OverlappingShadowLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowStealthComponent_Statics::NewProp_OverlappingShadowLights_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShadowStealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShadowStealthComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShadowStealthComponent_Statics::ClassParams = {
		&UShadowStealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UShadowStealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UShadowStealthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowStealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShadowStealthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShadowStealthComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShadowStealthComponent, 1981250253);
	template<> SHADOWSTEALTH_API UClass* StaticClass<UShadowStealthComponent>()
	{
		return UShadowStealthComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShadowStealthComponent(Z_Construct_UClass_UShadowStealthComponent, &UShadowStealthComponent::StaticClass, TEXT("/Script/ShadowStealth"), TEXT("UShadowStealthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShadowStealthComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UShadowStealthComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

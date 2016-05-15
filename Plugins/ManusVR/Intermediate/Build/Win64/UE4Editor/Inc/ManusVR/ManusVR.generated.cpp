// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Private/ManusVRPrivatePCH.h"
#include "ManusVR.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1ManusVR() {}
	void UManusVR2::StaticRegisterNativesUManusVR2()
	{
		FNativeFunctionRegistrar::RegisterFunction(UManusVR2::StaticClass(), "calibrate",(Native)&UManusVR2::execcalibrate);
		FNativeFunctionRegistrar::RegisterFunction(UManusVR2::StaticClass(), "getFingers",(Native)&UManusVR2::execgetFingers);
		FNativeFunctionRegistrar::RegisterFunction(UManusVR2::StaticClass(), "initManus",(Native)&UManusVR2::execinitManus);
		FNativeFunctionRegistrar::RegisterFunction(UManusVR2::StaticClass(), "setVibration",(Native)&UManusVR2::execsetVibration);
		FNativeFunctionRegistrar::RegisterFunction(UManusVR2::StaticClass(), "shutdownManus",(Native)&UManusVR2::execshutdownManus);
	}
	IMPLEMENT_CLASS(UManusVR2, 1407408663);
	void UManusVRAnimInstance::StaticRegisterNativesUManusVRAnimInstance()
	{
		FNativeFunctionRegistrar::RegisterFunction(UManusVRAnimInstance::StaticClass(), "GetLeftHandFingers",(Native)&UManusVRAnimInstance::execGetLeftHandFingers);
		FNativeFunctionRegistrar::RegisterFunction(UManusVRAnimInstance::StaticClass(), "GetLeftHandRotation",(Native)&UManusVRAnimInstance::execGetLeftHandRotation);
		FNativeFunctionRegistrar::RegisterFunction(UManusVRAnimInstance::StaticClass(), "GetRightHandFingers",(Native)&UManusVRAnimInstance::execGetRightHandFingers);
		FNativeFunctionRegistrar::RegisterFunction(UManusVRAnimInstance::StaticClass(), "GetRightHandRotation",(Native)&UManusVRAnimInstance::execGetRightHandRotation);
	}
	IMPLEMENT_CLASS(UManusVRAnimInstance, 3548798792);
	void UManusVRController::StaticRegisterNativesUManusVRController()
	{
	}
	IMPLEMENT_CLASS(UManusVRController, 1582398179);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API class UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API class UClass* Z_Construct_UClass_UAnimSequence_NoRegister();

	MANUSVR_API class UFunction* Z_Construct_UFunction_UManusVR2_calibrate();
	MANUSVR_API class UFunction* Z_Construct_UFunction_UManusVR2_getFingers();
	MANUSVR_API class UFunction* Z_Construct_UFunction_UManusVR2_initManus();
	MANUSVR_API class UFunction* Z_Construct_UFunction_UManusVR2_setVibration();
	MANUSVR_API class UFunction* Z_Construct_UFunction_UManusVR2_shutdownManus();
	MANUSVR_API class UClass* Z_Construct_UClass_UManusVR2_NoRegister();
	MANUSVR_API class UClass* Z_Construct_UClass_UManusVR2();
	MANUSVR_API class UFunction* Z_Construct_UFunction_UManusVRAnimInstance_GetLeftHandFingers();
	MANUSVR_API class UFunction* Z_Construct_UFunction_UManusVRAnimInstance_GetLeftHandRotation();
	MANUSVR_API class UFunction* Z_Construct_UFunction_UManusVRAnimInstance_GetRightHandFingers();
	MANUSVR_API class UFunction* Z_Construct_UFunction_UManusVRAnimInstance_GetRightHandRotation();
	MANUSVR_API class UClass* Z_Construct_UClass_UManusVRAnimInstance_NoRegister();
	MANUSVR_API class UClass* Z_Construct_UClass_UManusVRAnimInstance();
	MANUSVR_API class UClass* Z_Construct_UClass_UManusVRController_NoRegister();
	MANUSVR_API class UClass* Z_Construct_UClass_UManusVRController();
	MANUSVR_API class UPackage* Z_Construct_UPackage__Script_ManusVR();
	UFunction* Z_Construct_UFunction_UManusVR2_calibrate()
	{
		struct ManusVR2_eventcalibrate_Parms
		{
			bool leftHand;
			bool gyro;
			bool accel;
			bool fingers;
		};
		UObject* Outer=Z_Construct_UClass_UManusVR2();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("calibrate"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(ManusVR2_eventcalibrate_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(fingers, ManusVR2_eventcalibrate_Parms, bool);
			UProperty* NewProp_fingers = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("fingers"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(fingers, ManusVR2_eventcalibrate_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(fingers, ManusVR2_eventcalibrate_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(accel, ManusVR2_eventcalibrate_Parms, bool);
			UProperty* NewProp_accel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("accel"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(accel, ManusVR2_eventcalibrate_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(accel, ManusVR2_eventcalibrate_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(gyro, ManusVR2_eventcalibrate_Parms, bool);
			UProperty* NewProp_gyro = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("gyro"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(gyro, ManusVR2_eventcalibrate_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(gyro, ManusVR2_eventcalibrate_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(leftHand, ManusVR2_eventcalibrate_Parms, bool);
			UProperty* NewProp_leftHand = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("leftHand"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(leftHand, ManusVR2_eventcalibrate_Parms), 0x0010000000000082, CPP_BOOL_PROPERTY_BITMASK(leftHand, ManusVR2_eventcalibrate_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Manus2"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_accel"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_fingers"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_gyro"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManusVR2.h"));
			MetaData->SetValue(NewProp_leftHand, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManusVR2_getFingers()
	{
		struct ManusVR2_eventgetFingers_Parms
		{
			bool leftHand;
			float thumb;
			float index;
			float middle;
			float ring;
			float pink;
			FVector accel;
			FVector orientation;
		};
		UObject* Outer=Z_Construct_UClass_UManusVR2();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("getFingers"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04C20401, 65535, sizeof(ManusVR2_eventgetFingers_Parms));
			UProperty* NewProp_orientation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("orientation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(orientation, ManusVR2_eventgetFingers_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_accel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("accel"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(accel, ManusVR2_eventgetFingers_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_pink = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("pink"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(pink, ManusVR2_eventgetFingers_Parms), 0x0010000000000180);
			UProperty* NewProp_ring = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ring"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ring, ManusVR2_eventgetFingers_Parms), 0x0010000000000180);
			UProperty* NewProp_middle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("middle"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(middle, ManusVR2_eventgetFingers_Parms), 0x0010000000000180);
			UProperty* NewProp_index = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("index"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(index, ManusVR2_eventgetFingers_Parms), 0x0010000000000180);
			UProperty* NewProp_thumb = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("thumb"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(thumb, ManusVR2_eventgetFingers_Parms), 0x0010000000000180);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(leftHand, ManusVR2_eventgetFingers_Parms, bool);
			UProperty* NewProp_leftHand = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("leftHand"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(leftHand, ManusVR2_eventgetFingers_Parms), 0x0010000000000082, CPP_BOOL_PROPERTY_BITMASK(leftHand, ManusVR2_eventgetFingers_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Manus2"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManusVR2.h"));
			MetaData->SetValue(NewProp_leftHand, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManusVR2_initManus()
	{
		UObject* Outer=Z_Construct_UClass_UManusVR2();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("initManus"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Manus2"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManusVR2.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManusVR2_setVibration()
	{
		struct ManusVR2_eventsetVibration_Parms
		{
			bool leftHand;
			float power;
		};
		UObject* Outer=Z_Construct_UClass_UManusVR2();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("setVibration"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(ManusVR2_eventsetVibration_Parms));
			UProperty* NewProp_power = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("power"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(power, ManusVR2_eventsetVibration_Parms), 0x0010000000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(leftHand, ManusVR2_eventsetVibration_Parms, bool);
			UProperty* NewProp_leftHand = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("leftHand"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(leftHand, ManusVR2_eventsetVibration_Parms), 0x0010000000000082, CPP_BOOL_PROPERTY_BITMASK(leftHand, ManusVR2_eventsetVibration_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Manus2"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManusVR2.h"));
			MetaData->SetValue(NewProp_leftHand, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManusVR2_shutdownManus()
	{
		UObject* Outer=Z_Construct_UClass_UManusVR2();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("shutdownManus"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Manus2"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManusVR2.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManusVR2_NoRegister()
	{
		return UManusVR2::StaticClass();
	}
	UClass* Z_Construct_UClass_UManusVR2()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_ManusVR();
			OuterClass = UManusVR2::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20A00080;

				OuterClass->LinkChild(Z_Construct_UFunction_UManusVR2_calibrate());
				OuterClass->LinkChild(Z_Construct_UFunction_UManusVR2_getFingers());
				OuterClass->LinkChild(Z_Construct_UFunction_UManusVR2_initManus());
				OuterClass->LinkChild(Z_Construct_UFunction_UManusVR2_setVibration());
				OuterClass->LinkChild(Z_Construct_UFunction_UManusVR2_shutdownManus());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManusVR2_calibrate(), "calibrate"); // 320357086
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManusVR2_getFingers(), "getFingers"); // 3077164316
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManusVR2_initManus(), "initManus"); // 3325009080
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManusVR2_setVibration(), "setVibration"); // 2423386602
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManusVR2_shutdownManus(), "shutdownManus"); // 2528996672
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("ComponentReplication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ManusVR2.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ManusVR2.h"));
				MetaData->SetValue(OuterClass, TEXT("OnlyDefaultConstructorDeclared"), TEXT(""));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManusVR2(Z_Construct_UClass_UManusVR2, &UManusVR2::StaticClass, TEXT("UManusVR2"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManusVR2);
	UFunction* Z_Construct_UFunction_UManusVRAnimInstance_GetLeftHandFingers()
	{
		struct ManusVRAnimInstance_eventGetLeftHandFingers_Parms
		{
			TArray<float> OutFingers;
		};
		UObject* Outer=Z_Construct_UClass_UManusVRAnimInstance();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetLeftHandFingers"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(ManusVRAnimInstance_eventGetLeftHandFingers_Parms));
			UProperty* NewProp_OutFingers = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OutFingers"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(OutFingers, ManusVRAnimInstance_eventGetLeftHandFingers_Parms), 0x0010000000000180);
			UProperty* NewProp_OutFingers_Inner = new(EC_InternalUseOnlyConstructor, NewProp_OutFingers, TEXT("OutFingers"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ManusVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManusVRAnimInstance.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManusVRAnimInstance_GetLeftHandRotation()
	{
		struct ManusVRAnimInstance_eventGetLeftHandRotation_Parms
		{
			FRotator ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UManusVRAnimInstance();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetLeftHandRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04820401, 65535, sizeof(ManusVRAnimInstance_eventGetLeftHandRotation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, ManusVRAnimInstance_eventGetLeftHandRotation_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FRotator());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ManusVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManusVRAnimInstance.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManusVRAnimInstance_GetRightHandFingers()
	{
		struct ManusVRAnimInstance_eventGetRightHandFingers_Parms
		{
			TArray<float> OutFingers;
		};
		UObject* Outer=Z_Construct_UClass_UManusVRAnimInstance();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetRightHandFingers"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(ManusVRAnimInstance_eventGetRightHandFingers_Parms));
			UProperty* NewProp_OutFingers = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OutFingers"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(OutFingers, ManusVRAnimInstance_eventGetRightHandFingers_Parms), 0x0010000000000180);
			UProperty* NewProp_OutFingers_Inner = new(EC_InternalUseOnlyConstructor, NewProp_OutFingers, TEXT("OutFingers"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ManusVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManusVRAnimInstance.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManusVRAnimInstance_GetRightHandRotation()
	{
		struct ManusVRAnimInstance_eventGetRightHandRotation_Parms
		{
			FRotator ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UManusVRAnimInstance();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetRightHandRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04820401, 65535, sizeof(ManusVRAnimInstance_eventGetRightHandRotation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, ManusVRAnimInstance_eventGetRightHandRotation_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FRotator());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("ManusVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManusVRAnimInstance.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManusVRAnimInstance_NoRegister()
	{
		return UManusVRAnimInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UManusVRAnimInstance()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAnimInstance();
			Z_Construct_UPackage__Script_ManusVR();
			OuterClass = UManusVRAnimInstance::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800088;

				OuterClass->LinkChild(Z_Construct_UFunction_UManusVRAnimInstance_GetLeftHandFingers());
				OuterClass->LinkChild(Z_Construct_UFunction_UManusVRAnimInstance_GetLeftHandRotation());
				OuterClass->LinkChild(Z_Construct_UFunction_UManusVRAnimInstance_GetRightHandFingers());
				OuterClass->LinkChild(Z_Construct_UFunction_UManusVRAnimInstance_GetRightHandRotation());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseBlueprint, UManusVRAnimInstance, bool);
				UProperty* NewProp_bUseBlueprint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseBlueprint"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseBlueprint, UManusVRAnimInstance), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUseBlueprint, UManusVRAnimInstance), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsLeft, UManusVRAnimInstance, bool);
				UProperty* NewProp_bIsLeft = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsLeft"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsLeft, UManusVRAnimInstance), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bIsLeft, UManusVRAnimInstance), sizeof(bool), true);
				UProperty* NewProp_HandAnimation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HandAnimation"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HandAnimation, UManusVRAnimInstance), 0x0010000000000005, Z_Construct_UClass_UAnimSequence_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManusVRAnimInstance_GetLeftHandFingers(), "GetLeftHandFingers"); // 1923082958
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManusVRAnimInstance_GetLeftHandRotation(), "GetLeftHandRotation"); // 1282493658
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManusVRAnimInstance_GetRightHandFingers(), "GetRightHandFingers"); // 1539323027
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManusVRAnimInstance_GetRightHandRotation(), "GetRightHandRotation"); // 502891178
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("AnimInstance"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ManusVRAnimInstance.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ManusVRAnimInstance.h"));
				MetaData->SetValue(NewProp_bUseBlueprint, TEXT("Category"), TEXT("ManusVR"));
				MetaData->SetValue(NewProp_bUseBlueprint, TEXT("ModuleRelativePath"), TEXT("Public/ManusVRAnimInstance.h"));
				MetaData->SetValue(NewProp_bUseBlueprint, TEXT("ToolTip"), TEXT("Use Blueprint glove processing or build-in"));
				MetaData->SetValue(NewProp_bIsLeft, TEXT("Category"), TEXT("ManusVR"));
				MetaData->SetValue(NewProp_bIsLeft, TEXT("ModuleRelativePath"), TEXT("Public/ManusVRAnimInstance.h"));
				MetaData->SetValue(NewProp_bIsLeft, TEXT("ToolTip"), TEXT("Left or right hand"));
				MetaData->SetValue(NewProp_HandAnimation, TEXT("Category"), TEXT("ManusVR"));
				MetaData->SetValue(NewProp_HandAnimation, TEXT("ModuleRelativePath"), TEXT("Public/ManusVRAnimInstance.h"));
				MetaData->SetValue(NewProp_HandAnimation, TEXT("ToolTip"), TEXT("Animation to use"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManusVRAnimInstance(Z_Construct_UClass_UManusVRAnimInstance, &UManusVRAnimInstance::StaticClass, TEXT("UManusVRAnimInstance"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManusVRAnimInstance);
	UClass* Z_Construct_UClass_UManusVRController_NoRegister()
	{
		return UManusVRController::StaticClass();
	}
	UClass* Z_Construct_UClass_UManusVRController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_ManusVR();
			OuterClass = UManusVRController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20A00080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Input"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("ComponentReplication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ManusVRController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ManusVRController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManusVRController(Z_Construct_UClass_UManusVRController, &UManusVRController::StaticClass, TEXT("UManusVRController"), false, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManusVRController);
	UPackage* Z_Construct_UPackage__Script_ManusVR()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/ManusVR")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x7CDE9D90;
			Guid.B = 0x05A4749D;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS

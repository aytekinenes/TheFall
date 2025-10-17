// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheFall/Public/Interface/InteractionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
THEFALL_API UClass* Z_Construct_UClass_ATFCharacter_NoRegister();
THEFALL_API UClass* Z_Construct_UClass_UInteractionInterface();
THEFALL_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheFall();
// End Cross Module References

// Begin Interface UInteractionInterface Function GetInteractionText
struct InteractionInterface_eventGetInteractionText_Parms
{
	FText ReturnValue;
};
FText IInteractionInterface::GetInteractionText()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInteractionText instead.");
	InteractionInterface_eventGetInteractionText_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInteractionInterface_GetInteractionText = FName(TEXT("GetInteractionText"));
FText IInteractionInterface::Execute_GetInteractionText(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
	InteractionInterface_eventGetInteractionText_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_GetInteractionText);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetInteractionText_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInteractionInterface_GetInteractionText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/InteractionInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInteractionInterface_GetInteractionText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionInterface_eventGetInteractionText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionInterface_GetInteractionText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionInterface_GetInteractionText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_GetInteractionText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_GetInteractionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "GetInteractionText", nullptr, nullptr, Z_Construct_UFunction_UInteractionInterface_GetInteractionText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_GetInteractionText_Statics::PropPointers), sizeof(InteractionInterface_eventGetInteractionText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_GetInteractionText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionInterface_GetInteractionText_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractionInterface_eventGetInteractionText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionInterface_GetInteractionText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInterface_GetInteractionText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractionInterface::execGetInteractionText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetInteractionText_Implementation();
	P_NATIVE_END;
}
// End Interface UInteractionInterface Function GetInteractionText

// Begin Interface UInteractionInterface Function Interact
struct InteractionInterface_eventInteract_Parms
{
	ATFCharacter* Caller;
};
void IInteractionInterface::Interact(ATFCharacter* Caller)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
}
static FName NAME_UInteractionInterface_Interact = FName(TEXT("Interact"));
void IInteractionInterface::Execute_Interact(UObject* O, ATFCharacter* Caller)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
	InteractionInterface_eventInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_Interact);
	if (Func)
	{
		Parms.Caller=Caller;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
	{
		I->Interact_Implementation(Caller);
	}
}
struct Z_Construct_UFunction_UInteractionInterface_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/InteractionInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Caller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionInterface_Interact_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionInterface_eventInteract_Parms, Caller), Z_Construct_UClass_ATFCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionInterface_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionInterface_Interact_Statics::NewProp_Caller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_UInteractionInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_Interact_Statics::PropPointers), sizeof(InteractionInterface_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionInterface_Interact_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractionInterface_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionInterface_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInterface_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractionInterface::execInteract)
{
	P_GET_OBJECT(ATFCharacter,Z_Param_Caller);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_Caller);
	P_NATIVE_END;
}
// End Interface UInteractionInterface Function Interact

// Begin Interface UInteractionInterface Function IsInteracable
struct InteractionInterface_eventIsInteracable_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InteractionInterface_eventIsInteracable_Parms()
		: ReturnValue(false)
	{
	}
};
bool IInteractionInterface::IsInteracable() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsInteracable instead.");
	InteractionInterface_eventIsInteracable_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInteractionInterface_IsInteracable = FName(TEXT("IsInteracable"));
bool IInteractionInterface::Execute_IsInteracable(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
	InteractionInterface_eventIsInteracable_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_IsInteracable);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsInteracable_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInteractionInterface_IsInteracable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/InteractionInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractionInterface_IsInteracable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InteractionInterface_eventIsInteracable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionInterface_IsInteracable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractionInterface_eventIsInteracable_Parms), &Z_Construct_UFunction_UInteractionInterface_IsInteracable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionInterface_IsInteracable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionInterface_IsInteracable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_IsInteracable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_IsInteracable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "IsInteracable", nullptr, nullptr, Z_Construct_UFunction_UInteractionInterface_IsInteracable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_IsInteracable_Statics::PropPointers), sizeof(InteractionInterface_eventIsInteracable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_IsInteracable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionInterface_IsInteracable_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractionInterface_eventIsInteracable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionInterface_IsInteracable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInterface_IsInteracable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractionInterface::execIsInteracable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInteracable_Implementation();
	P_NATIVE_END;
}
// End Interface UInteractionInterface Function IsInteracable

// Begin Interface UInteractionInterface
void UInteractionInterface::StaticRegisterNativesUInteractionInterface()
{
	UClass* Class = UInteractionInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInteractionText", &IInteractionInterface::execGetInteractionText },
		{ "Interact", &IInteractionInterface::execInteract },
		{ "IsInteracable", &IInteractionInterface::execIsInteracable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionInterface);
UClass* Z_Construct_UClass_UInteractionInterface_NoRegister()
{
	return UInteractionInterface::StaticClass();
}
struct Z_Construct_UClass_UInteractionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/InteractionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionInterface_GetInteractionText, "GetInteractionText" }, // 4218317190
		{ &Z_Construct_UFunction_UInteractionInterface_Interact, "Interact" }, // 300606422
		{ &Z_Construct_UFunction_UInteractionInterface_IsInteracable, "IsInteracable" }, // 2665205811
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_TheFall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionInterface_Statics::ClassParams = {
	&UInteractionInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionInterface()
{
	if (!Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton, Z_Construct_UClass_UInteractionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton;
}
template<> THEFALL_API UClass* StaticClass<UInteractionInterface>()
{
	return UInteractionInterface::StaticClass();
}
UInteractionInterface::UInteractionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionInterface);
UInteractionInterface::~UInteractionInterface() {}
// End Interface UInteractionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionInterface, UInteractionInterface::StaticClass, TEXT("UInteractionInterface"), &Z_Registration_Info_UClass_UInteractionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionInterface), 2610785242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h_1527584861(TEXT("/Script/TheFall"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_Interface_InteractionInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

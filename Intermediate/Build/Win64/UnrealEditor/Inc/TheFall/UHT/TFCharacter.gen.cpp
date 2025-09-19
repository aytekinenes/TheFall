// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheFall/Public/BaseClass/TFCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTFCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
THEFALL_API UClass* Z_Construct_UClass_ATFCharacter();
THEFALL_API UClass* Z_Construct_UClass_ATFCharacter_NoRegister();
THEFALL_API UClass* Z_Construct_UClass_UStatlineComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheFall();
// End Cross Module References

// Begin Class ATFCharacter
void ATFCharacter::StaticRegisterNativesATFCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATFCharacter);
UClass* Z_Construct_UClass_ATFCharacter_NoRegister()
{
	return ATFCharacter::StaticClass();
}
struct Z_Construct_UClass_ATFCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseClass/TFCharacter.h" },
		{ "ModuleRelativePath", "Public/BaseClass/TFCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TFCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseClass/TFCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Statline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATFCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATFCharacter_Statics::NewProp_Statline = { "Statline", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATFCharacter, Statline), Z_Construct_UClass_UStatlineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statline_MetaData), NewProp_Statline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATFCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATFCharacter_Statics::NewProp_Statline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATFCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATFCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TheFall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATFCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATFCharacter_Statics::ClassParams = {
	&ATFCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATFCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATFCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATFCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATFCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATFCharacter()
{
	if (!Z_Registration_Info_UClass_ATFCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATFCharacter.OuterSingleton, Z_Construct_UClass_ATFCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATFCharacter.OuterSingleton;
}
template<> THEFALL_API UClass* StaticClass<ATFCharacter>()
{
	return ATFCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATFCharacter);
ATFCharacter::~ATFCharacter() {}
// End Class ATFCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATFCharacter, ATFCharacter::StaticClass, TEXT("ATFCharacter"), &Z_Registration_Info_UClass_ATFCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATFCharacter), 3357187621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_2809866164(TEXT("/Script/TheFall"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_TheFall_TheFall_Source_TheFall_Public_BaseClass_TFCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrum/TantrumCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumCharacterBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TANTRUM_API UClass* Z_Construct_UClass_ATantrumCharacterBase();
TANTRUM_API UClass* Z_Construct_UClass_ATantrumCharacterBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tantrum();
// End Cross Module References

// Begin Class ATantrumCharacterBase
void ATantrumCharacterBase::StaticRegisterNativesATantrumCharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATantrumCharacterBase);
UClass* Z_Construct_UClass_ATantrumCharacterBase_NoRegister()
{
	return ATantrumCharacterBase::StaticClass();
}
struct Z_Construct_UClass_ATantrumCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TantrumCharacterBase.h" },
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinImpactSpeed_MetaData[] = {
		{ "Category", "Fall Impact" },
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxImpactSpeed_MetaData[] = {
		{ "Category", "Fall Impact" },
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinStunTime_MetaData[] = {
		{ "Category", "Fall Impact" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//time in seconds\n" },
#endif
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "time in seconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStunTime_MetaData[] = {
		{ "Category", "Fall Impact" },
		{ "ModuleRelativePath", "TantrumCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinImpactSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxImpactSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinStunTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStunTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATantrumCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MinImpactSpeed = { "MinImpactSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATantrumCharacterBase, MinImpactSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinImpactSpeed_MetaData), NewProp_MinImpactSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MaxImpactSpeed = { "MaxImpactSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATantrumCharacterBase, MaxImpactSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxImpactSpeed_MetaData), NewProp_MaxImpactSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MinStunTime = { "MinStunTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATantrumCharacterBase, MinStunTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinStunTime_MetaData), NewProp_MinStunTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MaxStunTime = { "MaxStunTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATantrumCharacterBase, MaxStunTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStunTime_MetaData), NewProp_MaxStunTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATantrumCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MinImpactSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MaxImpactSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MinStunTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumCharacterBase_Statics::NewProp_MaxStunTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATantrumCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Tantrum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATantrumCharacterBase_Statics::ClassParams = {
	&ATantrumCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATantrumCharacterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATantrumCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATantrumCharacterBase()
{
	if (!Z_Registration_Info_UClass_ATantrumCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATantrumCharacterBase.OuterSingleton, Z_Construct_UClass_ATantrumCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATantrumCharacterBase.OuterSingleton;
}
template<> TANTRUM_API UClass* StaticClass<ATantrumCharacterBase>()
{
	return ATantrumCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATantrumCharacterBase);
ATantrumCharacterBase::~ATantrumCharacterBase() {}
// End Class ATantrumCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATantrumCharacterBase, ATantrumCharacterBase::StaticClass, TEXT("ATantrumCharacterBase"), &Z_Registration_Info_UClass_ATantrumCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATantrumCharacterBase), 3813122588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumCharacterBase_h_1034578748(TEXT("/Script/Tantrum"),
	Z_CompiledInDeferFile_FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

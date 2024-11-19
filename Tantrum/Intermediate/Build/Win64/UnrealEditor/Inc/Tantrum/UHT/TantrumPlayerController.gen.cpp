// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tantrum/TantrumPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTantrumPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
TANTRUM_API UClass* Z_Construct_UClass_ATantrumPlayerController();
TANTRUM_API UClass* Z_Construct_UClass_ATantrumPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tantrum();
// End Cross Module References

// Begin Class ATantrumPlayerController
void ATantrumPlayerController::StaticRegisterNativesATantrumPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATantrumPlayerController);
UClass* Z_Construct_UClass_ATantrumPlayerController_NoRegister()
{
	return ATantrumPlayerController::StaticClass();
}
struct Z_Construct_UClass_ATantrumPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TantrumPlayerController.h" },
		{ "ModuleRelativePath", "TantrumPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Look" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Base lookup rate, in deg/sec\n" },
#endif
		{ "ModuleRelativePath", "TantrumPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base lookup rate, in deg/sec" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookRightRate_MetaData[] = {
		{ "Category", "Look" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//base lookright rate, in deg/sec\n" },
#endif
		{ "ModuleRelativePath", "TantrumPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "base lookright rate, in deg/sec" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TantrumPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookRightRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATantrumPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumPlayerController_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATantrumPlayerController, BaseLookUpRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData), NewProp_BaseLookUpRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumPlayerController_Statics::NewProp_BaseLookRightRate = { "BaseLookRightRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATantrumPlayerController, BaseLookRightRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLookRightRate_MetaData), NewProp_BaseLookRightRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATantrumPlayerController_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATantrumPlayerController, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATantrumPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumPlayerController_Statics::NewProp_BaseLookUpRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumPlayerController_Statics::NewProp_BaseLookRightRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATantrumPlayerController_Statics::NewProp_SprintSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATantrumPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Tantrum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATantrumPlayerController_Statics::ClassParams = {
	&ATantrumPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATantrumPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATantrumPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATantrumPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATantrumPlayerController()
{
	if (!Z_Registration_Info_UClass_ATantrumPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATantrumPlayerController.OuterSingleton, Z_Construct_UClass_ATantrumPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATantrumPlayerController.OuterSingleton;
}
template<> TANTRUM_API UClass* StaticClass<ATantrumPlayerController>()
{
	return ATantrumPlayerController::StaticClass();
}
ATantrumPlayerController::ATantrumPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATantrumPlayerController);
ATantrumPlayerController::~ATantrumPlayerController() {}
// End Class ATantrumPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATantrumPlayerController, ATantrumPlayerController::StaticClass, TEXT("ATantrumPlayerController"), &Z_Registration_Info_UClass_ATantrumPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATantrumPlayerController), 4015268306U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumPlayerController_h_3113304890(TEXT("/Script/Tantrum"),
	Z_CompiledInDeferFile_FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

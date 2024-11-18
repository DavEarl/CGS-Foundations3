// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TantrumPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANTRUM_TantrumPlayerController_generated_h
#error "TantrumPlayerController.generated.h already included, missing '#pragma once' in TantrumPlayerController.h"
#endif
#define TANTRUM_TantrumPlayerController_generated_h

#define FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATantrumPlayerController(); \
	friend struct Z_Construct_UClass_ATantrumPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATantrumPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tantrum"), NO_API) \
	DECLARE_SERIALIZER(ATantrumPlayerController)


#define FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATantrumPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATantrumPlayerController(ATantrumPlayerController&&); \
	ATantrumPlayerController(const ATantrumPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATantrumPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATantrumPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATantrumPlayerController) \
	NO_API virtual ~ATantrumPlayerController();


#define FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumPlayerController_h_12_PROLOG
#define FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANTRUM_API UClass* StaticClass<class ATantrumPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_CGS_Foundations3_Tantrum_Source_Tantrum_TantrumPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

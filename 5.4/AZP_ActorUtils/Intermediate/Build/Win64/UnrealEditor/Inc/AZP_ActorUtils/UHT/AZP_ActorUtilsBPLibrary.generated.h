// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AZP_ActorUtilsBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
#ifdef AZP_ACTORUTILS_AZP_ActorUtilsBPLibrary_generated_h
#error "AZP_ActorUtilsBPLibrary.generated.h already included, missing '#pragma once' in AZP_ActorUtilsBPLibrary.h"
#endif
#define AZP_ACTORUTILS_AZP_ActorUtilsBPLibrary_generated_h

#define FID_Unreal_Projects_ActorUtils_Plugins_AZP_ActorUtils_Source_AZP_ActorUtils_Public_AZP_ActorUtilsBPLibrary_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetLocationsBetweenActors); \
	DECLARE_FUNCTION(execGetActorsBetweenActorsLine); \
	DECLARE_FUNCTION(execFindActorsInRadiusChain); \
	DECLARE_FUNCTION(execGetRandomPointInCircle); \
	DECLARE_FUNCTION(execSpawnActorsInCircle); \
	DECLARE_FUNCTION(execFindMatchingActors); \
	DECLARE_FUNCTION(execGetNearestActorArrayWithTag); \
	DECLARE_FUNCTION(execGetNearestActorArray);


#define FID_Unreal_Projects_ActorUtils_Plugins_AZP_ActorUtils_Source_AZP_ActorUtils_Public_AZP_ActorUtilsBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUAZP_ActorUtilsBPLibrary(); \
	friend struct Z_Construct_UClass_UAZP_ActorUtilsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UAZP_ActorUtilsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AZP_ActorUtils"), NO_API) \
	DECLARE_SERIALIZER(UAZP_ActorUtilsBPLibrary)


#define FID_Unreal_Projects_ActorUtils_Plugins_AZP_ActorUtils_Source_AZP_ActorUtils_Public_AZP_ActorUtilsBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAZP_ActorUtilsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAZP_ActorUtilsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAZP_ActorUtilsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAZP_ActorUtilsBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAZP_ActorUtilsBPLibrary(UAZP_ActorUtilsBPLibrary&&); \
	UAZP_ActorUtilsBPLibrary(const UAZP_ActorUtilsBPLibrary&); \
public: \
	NO_API virtual ~UAZP_ActorUtilsBPLibrary();


#define FID_Unreal_Projects_ActorUtils_Plugins_AZP_ActorUtils_Source_AZP_ActorUtils_Public_AZP_ActorUtilsBPLibrary_h_25_PROLOG
#define FID_Unreal_Projects_ActorUtils_Plugins_AZP_ActorUtils_Source_AZP_ActorUtils_Public_AZP_ActorUtilsBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ActorUtils_Plugins_AZP_ActorUtils_Source_AZP_ActorUtils_Public_AZP_ActorUtilsBPLibrary_h_28_RPC_WRAPPERS \
	FID_Unreal_Projects_ActorUtils_Plugins_AZP_ActorUtils_Source_AZP_ActorUtils_Public_AZP_ActorUtilsBPLibrary_h_28_INCLASS \
	FID_Unreal_Projects_ActorUtils_Plugins_AZP_ActorUtils_Source_AZP_ActorUtils_Public_AZP_ActorUtilsBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AZP_ACTORUTILS_API UClass* StaticClass<class UAZP_ActorUtilsBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ActorUtils_Plugins_AZP_ActorUtils_Source_AZP_ActorUtils_Public_AZP_ActorUtilsBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

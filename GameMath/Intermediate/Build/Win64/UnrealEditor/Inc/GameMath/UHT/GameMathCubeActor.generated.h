// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMathCubeActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GAMEMATH_GameMathCubeActor_generated_h
#error "GameMathCubeActor.generated.h already included, missing '#pragma once' in GameMathCubeActor.h"
#endif
#define GAMEMATH_GameMathCubeActor_generated_h

#define FID_Github_UnrealEngine_GameMath_GameMath_Source_GameMath_GameMathCubeActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBoxOverlap);


#define FID_Github_UnrealEngine_GameMath_GameMath_Source_GameMath_GameMathCubeActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameMathCubeActor(); \
	friend struct Z_Construct_UClass_AGameMathCubeActor_Statics; \
public: \
	DECLARE_CLASS(AGameMathCubeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameMath"), NO_API) \
	DECLARE_SERIALIZER(AGameMathCubeActor)


#define FID_Github_UnrealEngine_GameMath_GameMath_Source_GameMath_GameMathCubeActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGameMathCubeActor(AGameMathCubeActor&&); \
	AGameMathCubeActor(const AGameMathCubeActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameMathCubeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameMathCubeActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameMathCubeActor) \
	NO_API virtual ~AGameMathCubeActor();


#define FID_Github_UnrealEngine_GameMath_GameMath_Source_GameMath_GameMathCubeActor_h_9_PROLOG
#define FID_Github_UnrealEngine_GameMath_GameMath_Source_GameMath_GameMathCubeActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_UnrealEngine_GameMath_GameMath_Source_GameMath_GameMathCubeActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_UnrealEngine_GameMath_GameMath_Source_GameMath_GameMathCubeActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Github_UnrealEngine_GameMath_GameMath_Source_GameMath_GameMathCubeActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEMATH_API UClass* StaticClass<class AGameMathCubeActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_UnrealEngine_GameMath_GameMath_Source_GameMath_GameMathCubeActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

#pragma once
#include "CoreMinimal.h"
#include "EMAIN_STORY_CATEGORY.generated.h"

UENUM(BlueprintType)
enum class EMAIN_STORY_CATEGORY : uint8 {
    NONE,
    COMMON,
    CHARA_PROLOGUE,
    CHARA_FINAL,
    COUPLING,
    OVERALL_FINAL,
    EPILOGUE,
    MERCHANT,
    EXTRA,
};


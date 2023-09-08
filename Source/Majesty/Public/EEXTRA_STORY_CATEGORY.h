#pragma once
#include "CoreMinimal.h"
#include "EEXTRA_STORY_CATEGORY.generated.h"

UENUM(BlueprintType)
enum class EEXTRA_STORY_CATEGORY : uint8 {
    NONE,
    CPL_GAK_SHO,
    CPL_KUS_KAR,
    CPL_ODO_KEN,
    CPL_SIN_TOU,
    FINAL,
    MAX_NUM,
};


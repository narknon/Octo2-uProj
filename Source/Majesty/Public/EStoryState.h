#pragma once
#include "CoreMinimal.h"
#include "EStoryState.generated.h"

UENUM(BlueprintType)
enum class EStoryState : uint8 {
    UNRELEASED,
    RELEASED,
    PLAYING,
    INTERRUPTION,
    TEMP_COMPLETED,
    COMPLETED,
    SEALED,
    HALF_SEALED,
};


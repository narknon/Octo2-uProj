#pragma once
#include "CoreMinimal.h"
#include "EDebugFixMoveMode.generated.h"

UENUM(BlueprintType)
enum class EDebugFixMoveMode : uint8 {
    NONE,
    WALK,
    RUN,
    DASH,
};


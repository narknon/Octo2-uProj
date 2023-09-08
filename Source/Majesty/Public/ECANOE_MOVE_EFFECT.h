#pragma once
#include "CoreMinimal.h"
#include "ECANOE_MOVE_EFFECT.generated.h"

UENUM(BlueprintType)
enum class ECANOE_MOVE_EFFECT : uint8 {
    WALK,
    DASH,
    EX_DASH,
    STOP,
    MAX_NUM,
};


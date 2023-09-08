#pragma once
#include "CoreMinimal.h"
#include "EKSCharacterMoveMode.generated.h"

UENUM(BlueprintType)
enum class EKSCharacterMoveMode : uint8 {
    WALK,
    DASH,
    EX_DASH,
    LADDER,
    LADDER_DASH,
    CANOE_WALK,
    CANOE_DASH,
    CANOE_EX_DASH,
    ENCOUNT,
    MAX_MOVE_MODE,
};


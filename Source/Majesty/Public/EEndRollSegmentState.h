#pragma once
#include "CoreMinimal.h"
#include "EEndRollSegmentState.generated.h"

UENUM(BlueprintType)
enum class EEndRollSegmentState : uint8 {
    NONE,
    WIPE_IN_EVENT_IMAGE,
    WIPE_OUT_1,
    WIPE_IN_BATTLE,
    WIPE_OUT_2,
    END,
};


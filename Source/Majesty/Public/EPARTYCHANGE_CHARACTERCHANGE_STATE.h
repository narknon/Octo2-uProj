#pragma once
#include "CoreMinimal.h"
#include "EPARTYCHANGE_CHARACTERCHANGE_STATE.generated.h"

UENUM(BlueprintType)
enum class EPARTYCHANGE_CHARACTERCHANGE_STATE : uint8 {
    eNONE,
    FADE_OUT_START,
    FADE_OUT_WAIT,
    FADE_IN_START,
    FADE_IN_WAIT,
};


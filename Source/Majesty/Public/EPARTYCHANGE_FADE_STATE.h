#pragma once
#include "CoreMinimal.h"
#include "EPARTYCHANGE_FADE_STATE.generated.h"

UENUM(BlueprintType)
enum class EPARTYCHANGE_FADE_STATE : uint8 {
    eNONE,
    FADE_OUT_START,
    FADE_OUT_WAIT,
    ON_FADE_OUT_PROC,
    FADE_IN_START,
    FADE_IN_WAIT,
};


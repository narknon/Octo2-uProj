#pragma once
#include "CoreMinimal.h"
#include "ERADARMAP_ICONANIMATION_STATE.generated.h"

UENUM(BlueprintType)
enum class ERADARMAP_ICONANIMATION_STATE : uint8 {
    eNONE_STATE,
    eTO_INSIDE_STATE,
    eTO_INSIDE_WAIT_STATE,
    eINSIDE_LOOP_STATE,
    eTO_OUTSIDE_STATE,
    eTO_OUTSIDE_WAIT_STATE,
    eOUTSIDE_LOOP_STATE,
};


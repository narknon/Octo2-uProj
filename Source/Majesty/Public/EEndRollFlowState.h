#pragma once
#include "CoreMinimal.h"
#include "EEndRollFlowState.generated.h"

UENUM(BlueprintType)
enum class EEndRollFlowState : uint8 {
    NONE,
    INIT,
    INIT_WAIT_SELF,
    INIT_WAIT_OTHER,
    READY,
    FIRST_BLANK,
    RUNNING,
    LAST_BLANK,
    END,
};


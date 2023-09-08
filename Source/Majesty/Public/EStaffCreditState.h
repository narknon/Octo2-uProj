#pragma once
#include "CoreMinimal.h"
#include "EStaffCreditState.generated.h"

UENUM(BlueprintType)
enum class EStaffCreditState : uint8 {
    NONE,
    INIT,
    INIT_WAIT,
    START_WAIT,
    RUNNING,
    END,
};


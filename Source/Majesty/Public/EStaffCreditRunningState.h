#pragma once
#include "CoreMinimal.h"
#include "EStaffCreditRunningState.generated.h"

UENUM(BlueprintType)
enum class EStaffCreditRunningState : uint8 {
    NONE,
    SCROLL,
    TO_DISOLVE,
    DISOLVE,
    END,
};


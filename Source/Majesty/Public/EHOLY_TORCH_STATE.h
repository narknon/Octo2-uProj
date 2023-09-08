#pragma once
#include "CoreMinimal.h"
#include "EHOLY_TORCH_STATE.generated.h"

UENUM(BlueprintType)
enum class EHOLY_TORCH_STATE : uint8 {
    INITIAL,
    BURN_OUT,
    REBURN,
};


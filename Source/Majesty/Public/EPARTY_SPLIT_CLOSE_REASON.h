#pragma once
#include "CoreMinimal.h"
#include "EPARTY_SPLIT_CLOSE_REASON.generated.h"

UENUM(BlueprintType)
enum class EPARTY_SPLIT_CLOSE_REASON : uint8 {
    eNone,
    eCanceled,
    eCompleted,
};


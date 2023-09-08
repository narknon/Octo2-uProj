#pragma once
#include "CoreMinimal.h"
#include "EBalloonType.generated.h"

UENUM(BlueprintType)
enum class EBalloonType : uint8 {
    NORMAL,
    ANGER,
    THINKING,
    DEEP_THINKING,
    DEEP_THINKING_FIXED_TEXT,
};


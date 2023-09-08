#pragma once
#include "CoreMinimal.h"
#include "EEventPostEffect.generated.h"

UENUM(BlueprintType)
enum class EEventPostEffect : uint8 {
    NONE,
    DOF,
    SEPIA,
    MONO,
    DEEP_THINKING,
    MAX,
};


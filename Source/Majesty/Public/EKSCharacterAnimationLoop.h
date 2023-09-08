#pragma once
#include "CoreMinimal.h"
#include "EKSCharacterAnimationLoop.generated.h"

UENUM(BlueprintType)
enum class EKSCharacterAnimationLoop : uint8 {
    NONE,
    ONESHOT,
    LOOP,
    ONESHOT_STOP,
};


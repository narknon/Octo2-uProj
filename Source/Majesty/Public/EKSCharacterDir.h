#pragma once
#include "CoreMinimal.h"
#include "EKSCharacterDir.generated.h"

UENUM(BlueprintType)
enum class EKSCharacterDir : uint8 {
    FRONT,
    REAR,
    LEFT,
    RIGHT,
    MAX_DIR,
};


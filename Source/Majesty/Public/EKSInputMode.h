#pragma once
#include "CoreMinimal.h"
#include "EKSInputMode.generated.h"

UENUM(BlueprintType)
enum class EKSInputMode : uint8 {
    MODE_CHARA,
    MODE_UI,
    MODE_MAX UMETA(Hidden),
};


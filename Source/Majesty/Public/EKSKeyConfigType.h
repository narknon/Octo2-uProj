#pragma once
#include "CoreMinimal.h"
#include "EKSKeyConfigType.generated.h"

UENUM(BlueprintType)
enum class EKSKeyConfigType : uint8 {
    TYPE_CONTROLLER,
    TYPE_KEYBOARD,
    TYPE_MOUSE,
    TYPE_MAX UMETA(Hidden),
};


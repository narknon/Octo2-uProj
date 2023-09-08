#pragma once
#include "CoreMinimal.h"
#include "EKeyboardLayoutType.generated.h"

UENUM(BlueprintType)
enum class EKeyboardLayoutType : uint8 {
    TYPE_NORMAL,
    TYPE_ITALIAN,
    TYPE_FRENCH,
    TYPE_SPANISH,
    TYPE_GERMAN,
    TYPE_DVOROK,
    TYPE_UNITED_KINGDOM,
    TYPE_US,
    TYPE_MAX UMETA(Hidden),
};


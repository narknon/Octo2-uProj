#pragma once
#include "CoreMinimal.h"
#include "ECreditFontColor.generated.h"

UENUM(BlueprintType)
enum class ECreditFontColor : uint8 {
    COLOR_A,
    COLOR_B,
    COLOR_MAX UMETA(Hidden),
};


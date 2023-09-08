#pragma once
#include "CoreMinimal.h"
#include "ECreditAlignment.generated.h"

UENUM(BlueprintType)
enum class ECreditAlignment : uint8 {
    CENTER,
    LEFT,
    RIGHT,
    LEFT_RIGHT,
};


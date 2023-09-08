#pragma once
#include "CoreMinimal.h"
#include "ELineupTime.generated.h"

UENUM(BlueprintType)
enum class ELineupTime : uint8 {
    eAlways,
    eDayOnly,
    eNightOnly,
};


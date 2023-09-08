#pragma once
#include "CoreMinimal.h"
#include "ETimeZoneType.generated.h"

UENUM(BlueprintType)
enum class ETimeZoneType : uint8 {
    NONE,
    MORNING,
    DAYTIME,
    EVENING,
    NIGHT,
    MAX,
};


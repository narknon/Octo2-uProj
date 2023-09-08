#pragma once
#include "CoreMinimal.h"
#include "EMJRegion.generated.h"

UENUM(BlueprintType)
enum class EMJRegion : uint8 {
    eUnknown,
    eJapan,
    eAmerica,
    eEurope,
    eAsia,
};


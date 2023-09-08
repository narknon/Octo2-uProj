#pragma once
#include "CoreMinimal.h"
#include "EPARTY_SPLIT_PLACEMENT_POSITION.generated.h"

UENUM(BlueprintType)
enum class EPARTY_SPLIT_PLACEMENT_POSITION : uint8 {
    eMain,
    eWilderness,
    eDesert,
    eIsland,
    eMountain,
};


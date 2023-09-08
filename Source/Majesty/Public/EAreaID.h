#pragma once
#include "CoreMinimal.h"
#include "EAreaID.generated.h"

UENUM(BlueprintType)
enum class EAreaID : uint8 {
    SNOW,
    CITY,
    SEA,
    MOUNTAIN,
    DESERT,
    ISLAND,
    WILDERNESS,
    FOREST,
    OCEAN,
};


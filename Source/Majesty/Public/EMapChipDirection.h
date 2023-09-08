#pragma once
#include "CoreMinimal.h"
#include "EMapChipDirection.generated.h"

UENUM(BlueprintType)
enum EMapChipDirection {
    EDIR_EAST,
    EDIR_WEST,
    EDIR_SOUTH,
    EDIR_NORTH,
    EDIR_SOUTH_EAST,
    EDIR_SOUTH_WEST,
    EDIR_NORTH_EAST,
    EDIR_NORTH_WEST,
    EDIR_CENTER,
};


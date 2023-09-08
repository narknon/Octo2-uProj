#pragma once
#include "CoreMinimal.h"
#include "EDB_LOAD_TIMING.generated.h"

UENUM(BlueprintType)
enum class EDB_LOAD_TIMING : uint8 {
    ULTRA_FIRST,
    FIRST,
    IN_GAME,
    ANY_TIME,
};


#pragma once
#include "CoreMinimal.h"
#include "EAWAKENING_MONSTER_PARAM.generated.h"

UENUM(BlueprintType)
enum class EAWAKENING_MONSTER_PARAM : uint8 {
    NONE,
    NORMAL,
    AWAKENING,
    AWAKENING_AFTER,
    MAX,
};


#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_DAMAGE_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_DAMAGE_TYPE : uint8 {
    NORMAL,
    WEAKNESS,
    CRITICAL,
    JUST_BREAK,
    BREAK_NORMAL,
    BREAK_WEAKNESS,
    BREAK_CRITICAL,
    MP_DAMAGE,
    BP_DAMAGE,
    SP_DAMAGE,
    MAX_HP_RATIO,
    FORCE_WEAKNESS,
};


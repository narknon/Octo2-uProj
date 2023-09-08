#pragma once
#include "CoreMinimal.h"
#include "EBATTLERESULT_BONUS_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBATTLERESULT_BONUS_TYPE : uint8 {
    eBONUS_TYPE_BREAK,
    eBONUS_TYPE_1TURN_KILL,
    eBONUS_TYPE_NO_DAMAGE,
    eBONUS_TYPE_OVERKILL,
    eBONUS_TYPE_OVERKILL_BREAK,
    eBONUS_TYPE_MAX UMETA(Hidden),
};


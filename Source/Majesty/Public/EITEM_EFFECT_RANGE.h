#pragma once
#include "CoreMinimal.h"
#include "EITEM_EFFECT_RANGE.generated.h"

UENUM(BlueprintType)
enum class EITEM_EFFECT_RANGE : uint8 {
    NONE,
    eMy,
    ePartyOne,
    ePartyAll,
    eSpecial,
    eEnemyOne,
    eEnemyAll,
};


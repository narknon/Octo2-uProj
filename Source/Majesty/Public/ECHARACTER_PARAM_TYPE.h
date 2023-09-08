#pragma once
#include "CoreMinimal.h"
#include "ECHARACTER_PARAM_TYPE.generated.h"

UENUM(BlueprintType)
enum class ECHARACTER_PARAM_TYPE : uint8 {
    HP,
    MP,
    BP,
    SP,
    POT,
    ATK,
    DEF,
    MATK,
    MDEF,
    ACC,
    EVA,
    CON,
    AGI,
};


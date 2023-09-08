#pragma once
#include "CoreMinimal.h"
#include "EREMINISCENCE_MERGE_DATA.generated.h"

UENUM(BlueprintType)
enum class EREMINISCENCE_MERGE_DATA : uint8 {
    MONEY,
    ITEM,
    EQUIPMENT,
    EQUIP_JOB,
    EQUIP_ABILITY,
    EXP,
    JP,
    DOPING_STATUS,
    LEARN_ABILITY,
    FOLLOW_NPC,
    TAME_MONSTER,
    TIME_ZONE,
    POT,
};


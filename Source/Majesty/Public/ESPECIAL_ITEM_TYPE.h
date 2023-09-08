#pragma once
#include "CoreMinimal.h"
#include "ESPECIAL_ITEM_TYPE.generated.h"

UENUM(BlueprintType)
enum class ESPECIAL_ITEM_TYPE : uint8 {
    NONE,
    HOLY_TORCH_KEY,
    ADVANCED_ABILITY,
    MUSIC_RECORD,
    RUSTED_WEAPON,
    LEGEND_WEAPON,
    BATTLE_TESTED_WEAPON,
    MEAT_ITEM,
    NOTE,
};


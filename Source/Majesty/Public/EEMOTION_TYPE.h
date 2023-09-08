#pragma once
#include "CoreMinimal.h"
#include "EEMOTION_TYPE.generated.h"

UENUM(BlueprintType)
enum class EEMOTION_TYPE : uint8 {
    SURPRISE,
    QUESTION,
    JOY,
    SWEAT,
    INSPRATION,
    ANGRY,
    SLEEP,
    IMPATIENCE,
    SILENCE,
    SHOCK,
    LOL,
    CHEER,
    FAINT,
    DRUNK,
    SAVE,
    MAIN_MISSION,
    SUB_MISSION,
    SHOP,
    INN,
    LINER_SHIP,
    BAR,
    GUILD,
    MUSIC_RECORD,
};


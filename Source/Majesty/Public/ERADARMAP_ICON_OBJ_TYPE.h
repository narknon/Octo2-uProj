#pragma once
#include "CoreMinimal.h"
#include "ERADARMAP_ICON_OBJ_TYPE.generated.h"

UENUM(BlueprintType)
enum class ERADARMAP_ICON_OBJ_TYPE : uint8 {
    NONE,
    FIELD_NPC,
    MAP_OBJECT,
    EVENT_TRIGGER,
    LEVEL_TRIGGER,
};


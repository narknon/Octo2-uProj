#pragma once
#include "CoreMinimal.h"
#include "EOBJ_TYPE.generated.h"

UENUM(BlueprintType)
enum class EOBJ_TYPE : uint8 {
    NORMAL_OBJ,
    WOOD_TREASURE_BOX,
    TREASURE_BOX,
    THIEF_TREASURE_BOX,
    HIDDEN_POINT,
    STORY_ITEM,
    OCEAN_TREASURE_BOX,
    OCEAN_WOOD_TREASURE_BOX,
    ENV_SE_GAYA,
};


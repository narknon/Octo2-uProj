#pragma once
#include "CoreMinimal.h"
#include "EBARMENU_STORY_SELECT_ITEM_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBARMENU_STORY_SELECT_ITEM_TYPE : uint8 {
    NOT_PROGRESSIVE,
    NOT_PROGRESSIVE_NOT_PT,
    CAN_NOT_START,
    PROGRESS,
    INTERRUPTION,
    INTERRUPTION_NOT_PT,
    CLEARED,
};


#pragma once
#include "CoreMinimal.h"
#include "ELevelTransitionNotice.generated.h"

UENUM(BlueprintType)
enum class ELevelTransitionNotice : uint8 {
    NONE,
    START_CHANGE_LEVEL,
    START_FADE_OUT,
    END_FADE_OUT,
    START_UNLOAD_LEVEL,
    END_UNLOAD_LEVEL,
    START_LEVEL_LOAD,
    END_LEVEL_LOAD,
    PREV_FADE_IN_ENTRY,
    PREV_FADE_IN_EXIT,
    START_FADE_IN,
    ENDT_FADE_IN,
    END_CHANGE_LEVEL,
};


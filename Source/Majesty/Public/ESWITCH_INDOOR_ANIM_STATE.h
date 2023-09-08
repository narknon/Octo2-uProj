#pragma once
#include "CoreMinimal.h"
#include "ESWITCH_INDOOR_ANIM_STATE.generated.h"

UENUM(BlueprintType)
enum class ESWITCH_INDOOR_ANIM_STATE : uint8 {
    NONE,
    INDOOR,
    OUTDOOR,
};


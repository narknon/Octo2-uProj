#pragma once
#include "CoreMinimal.h"
#include "EBalloonEventType.generated.h"

UENUM(BlueprintType)
enum class EBalloonEventType : uint8 {
    START_OPEN_ANIM,
    FINIHS_OPEN_ANIM,
    START_CLOSE_ANIM,
    FINIHS_CLOSE_ANIM,
    EVENT_SKIP,
};


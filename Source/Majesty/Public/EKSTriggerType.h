#pragma once
#include "CoreMinimal.h"
#include "EKSTriggerType.generated.h"

UENUM(BlueprintType)
enum class EKSTriggerType : uint8 {
    NONE,
    ETRIGGER_EVENT,
    ETRIGGER_CAMERA_LOCK,
    ETRIGGER_HOUSEIN,
    ETRIGGER_SHOP,
    ETRIGGER_TIMEZONE,
    ETRIGGER_ENCOUNT,
    ETRIGGER_LANTERN,
    ETRIGGER_CANOE_DOCK,
    MAX,
};


#pragma once
#include "CoreMinimal.h"
#include "ECOMMON_NOTIFICATION_STATE.generated.h"

UENUM(BlueprintType)
enum class ECOMMON_NOTIFICATION_STATE : uint8 {
    eUI_NONE,
    eUI_OPEN,
    eUI_WAIT,
    eUI_MESSAGE_IN,
    eUI_MESSAGE_WAIT,
    eUI_MESSAGE_OUT,
    eUI_CLOSE,
    eUI_TUTORIAL_WAIT,
    eUI_PAUSE,
    eUI_MAX UMETA(Hidden),
};


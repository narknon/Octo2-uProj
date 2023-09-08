#pragma once
#include "CoreMinimal.h"
#include "EINITIAL_OPTION_WIDGET_STATE.generated.h"

UENUM(BlueprintType)
enum class EINITIAL_OPTION_WIDGET_STATE : uint8 {
    eNone,
    eOpening,
    eOpend,
    eWaitingSave,
    eClosing,
    eClosed,
    eDialog,
};


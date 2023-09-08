#pragma once
#include "CoreMinimal.h"
#include "EPARTY_SPLIT_WIDGET_STATE.generated.h"

UENUM(BlueprintType)
enum class EPARTY_SPLIT_WIDGET_STATE : uint8 {
    eNone,
    eSelectingPosition,
    eSelectingCharater,
    eWaitingCloseDialog,
    eOpeningResult,
    eOpening = 0x64,
    eClosing,
};


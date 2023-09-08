#pragma once
#include "CoreMinimal.h"
#include "EDIALOG_STATE.generated.h"

UENUM(BlueprintType)
enum class EDIALOG_STATE : uint8 {
    eNONE,
    eOPEN,
    eCLOSE,
    eUPDATE,
    eUPDATE_WAIT,
};


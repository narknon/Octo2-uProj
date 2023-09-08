#pragma once
#include "CoreMinimal.h"
#include "EEVENTDIALOG_MODE.generated.h"

UENUM(BlueprintType)
enum class EEVENTDIALOG_MODE : uint8 {
    eNONE,
    eSUB_SEQ,
    eLABEL_JUMP,
    eCHOICE_ANSWER,
    eCLOSE_WAIT,
};


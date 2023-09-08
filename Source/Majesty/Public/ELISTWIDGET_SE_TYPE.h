#pragma once
#include "CoreMinimal.h"
#include "ELISTWIDGET_SE_TYPE.generated.h"

UENUM(BlueprintType)
enum class ELISTWIDGET_SE_TYPE : uint8 {
    OPEN,
    DECIDE_CLOSE,
    CANCEL_CLOSE,
    SELECT,
    DECIDE,
    CANCEL,
    FAILED,
};


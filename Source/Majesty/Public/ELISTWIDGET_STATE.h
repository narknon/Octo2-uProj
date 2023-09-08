#pragma once
#include "CoreMinimal.h"
#include "ELISTWIDGET_STATE.generated.h"

UENUM(BlueprintType)
enum class ELISTWIDGET_STATE : uint8 {
    NONE,
    OPEN,
    UPDATE,
    CLOSE,
};


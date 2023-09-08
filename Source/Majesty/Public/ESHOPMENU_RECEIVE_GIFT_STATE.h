#pragma once
#include "CoreMinimal.h"
#include "ESHOPMENU_RECEIVE_GIFT_STATE.generated.h"

UENUM(BlueprintType)
enum class ESHOPMENU_RECEIVE_GIFT_STATE : uint8 {
    eWAIT_DIALOG,
    eOPEN_SUCCESS_DIALOG,
    eOPEN_COMPLETED_DIALOG,
    eOPEN_OVER_DIALOG,
};


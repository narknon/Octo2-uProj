#pragma once
#include "CoreMinimal.h"
#include "ESTORY_SELECT_STATE.generated.h"

UENUM(BlueprintType)
enum class ESTORY_SELECT_STATE : uint8 {
    eNone,
    eSelect_Story,
    eOpening_Dialog,
    eSelected_Story,
    eSelected_Prologue,
};


#pragma once
#include "CoreMinimal.h"
#include "EFIELDCOMMAND_PURCHASE_STATE.generated.h"

UENUM(BlueprintType)
enum class EFIELDCOMMAND_PURCHASE_STATE : uint8 {
    eNONE,
    eOPEN,
    eLIST,
    ePURCHASE_CONFIRM,
    ePURCHASE_DISCOUNT,
    eSTEAL_CONFIRM,
    eCLOSE,
};


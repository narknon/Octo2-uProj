#pragma once
#include "CoreMinimal.h"
#include "EFIELDCOMMAND_LURE_STATE.generated.h"

UENUM(BlueprintType)
enum class EFIELDCOMMAND_LURE_STATE : uint8 {
    eNONE,
    eOPEN,
    eDIALOG,
    eCHANGE_DIALOG,
    eCLOSE,
    eFAILED_DIALOG_OPEN,
    eFAILED_DIALOG,
};


#pragma once
#include "CoreMinimal.h"
#include "EFIELDCOMMAND_BEG_STATE.generated.h"

UENUM(BlueprintType)
enum class EFIELDCOMMAND_BEG_STATE : uint8 {
    eNONE,
    eOPEN,
    eLIST,
    eEXEC_BEG,
    eFAILED_DIALOG,
    eCLOSE,
};


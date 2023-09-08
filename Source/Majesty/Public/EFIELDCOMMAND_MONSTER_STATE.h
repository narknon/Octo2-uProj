#pragma once
#include "CoreMinimal.h"
#include "EFIELDCOMMAND_MONSTER_STATE.generated.h"

UENUM(BlueprintType)
enum class EFIELDCOMMAND_MONSTER_STATE : uint8 {
    eNONE,
    eOPPONENT_DIALOG,
    eLEARN_ABILITY_CONFIRM_DIALOG,
    eSELECT_FORGET_ABILITY,
    eRELEASE_LIST_OPEN,
    eRELEASE_LIST,
    eRELEASE_OPEN,
    eRELEASE,
    eRELEASE_CLOSE,
    eCLOSE_UI,
    eFAILED_DIALOG,
    eDIALOG_WAITING,
    ePROCESS_OPEN,
};


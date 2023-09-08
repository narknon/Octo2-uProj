#pragma once
#include "CoreMinimal.h"
#include "EMAINSEQ_TYPE.generated.h"

UENUM(BlueprintType)
enum class EMAINSEQ_TYPE : uint8 {
    eNONE,
    eOUT_GAME,
    eFIELD,
    eFIELD_TRANDITION,
    eBATTLE_READY,
    eBATTLE,
    eGAMEOVER,
    eEVENT,
    eFIELDCOMMAND_MENU,
    eFIELDCOMMAND_UNIQUE_MENU,
    eMAINMENU,
    eMAINMENU_FAST_WORLD_MAP,
    ePARTY_CHAT,
    eTUTORIAL,
    eMAX,
};


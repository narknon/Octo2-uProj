#pragma once
#include "CoreMinimal.h"
#include "EGUILD_MENU_STATE.generated.h"

UENUM(BlueprintType)
enum class EGUILD_MENU_STATE : uint8 {
    eNONE,
    eFIRST_FLOW,
    eTOP,
    eLICENSE_MENU,
    eSUB_MENU,
    eEXIT,
    eEVENT_VIEW,
    eGET_LICENSE,
    eAFTER_GET_LICENSE,
    eREOPEN_SUBMENU,
    eREOPEN_LICENSE_MENU,
    eTUTORIAL_WAIT,
    eWAIT,
};


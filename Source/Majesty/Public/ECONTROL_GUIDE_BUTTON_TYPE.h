#pragma once
#include "CoreMinimal.h"
#include "ECONTROL_GUIDE_BUTTON_TYPE.generated.h"

UENUM(BlueprintType)
enum class ECONTROL_GUIDE_BUTTON_TYPE : uint8 {
    eNONE,
    eBUTTON_A,
    eBUTTON_B,
    eBUTTON_Y,
    eBUTTON_X,
    eCURSOR_UD,
    eCURSOR_LR,
    eCURSOR_ALL,
    eBUTTON_L,
    eBUTTON_R,
    eSTICK_L,
    eSTICK_R,
    eSTICK_R_UP,
    eSTICK_R_DOWN,
    eDIR_UD,
    eDIR_LR,
    eDIR_ALL,
    eBUTTON_PLUS,
    eBUTTON_MINUS,
    eBUTTON_ZL,
    eBUTTON_ZR,
    eBUTTON_ZL_ZR,
    eBUTTON_LSTICK,
    eBUTTON_DASH_B,
    eBUTTON_RADAR_R,
    eBUTTON_PARTY_CHANGE_ZL,
    eBUTTON_KEYBORARD_CURSOR_LR,
};


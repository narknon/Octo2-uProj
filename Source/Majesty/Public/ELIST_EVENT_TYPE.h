#pragma once
#include "CoreMinimal.h"
#include "ELIST_EVENT_TYPE.generated.h"

UENUM(BlueprintType)
enum class ELIST_EVENT_TYPE : uint8 {
    eDECIDE,
    eTOGGLE_DETAIL,
    eFOCUS,
    eOUT_FOCUS,
    eCHANGE_CATEGORY,
    eCATEGORY_PLUS,
    eINPUT_LEFT,
    eINPUT_RIGHT,
    eINPUT_Y,
    eINPUT_LB,
    eINPUT_RB,
    eCATEGORY_SELECT,
    eINPUT_PLUS,
    eINPUT_MINUS,
    eINPUT_L3,
    eCLOSE,
};


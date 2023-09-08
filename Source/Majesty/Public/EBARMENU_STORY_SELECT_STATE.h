#pragma once
#include "CoreMinimal.h"
#include "EBARMENU_STORY_SELECT_STATE.generated.h"

UENUM(BlueprintType)
enum class EBARMENU_STORY_SELECT_STATE : uint8 {
    eNONE,
    eOPEN,
    eSELECT,
    eDIALOG,
    eCHANGE_CLOSE,
    eCLOSE,
    eTUTORIAL,
    eREFRESH,
};


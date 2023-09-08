#pragma once
#include "CoreMinimal.h"
#include "ESUB_TITLE_STATE.generated.h"

UENUM(BlueprintType)
enum class ESUB_TITLE_STATE : uint8 {
    eNONE,
    eOPEN,
    ePLAY_SUBTITLE,
    eCLOSE,
    eFINISH,
};


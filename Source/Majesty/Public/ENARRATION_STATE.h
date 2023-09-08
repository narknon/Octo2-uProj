#pragma once
#include "CoreMinimal.h"
#include "ENARRATION_STATE.generated.h"

UENUM(BlueprintType)
enum class ENARRATION_STATE : uint8 {
    eNone,
    eOpen,
    eUPDATE,
    eSHOW_FLASKBACK,
    eNEXT_PAGE_START,
    eNEXT_PAGE,
    ePAGE_END,
    eCLOSE,
    eINPUT_WAITING,
    eFADE_WAITING,
};


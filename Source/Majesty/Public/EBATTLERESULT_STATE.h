#pragma once
#include "CoreMinimal.h"
#include "EBATTLERESULT_STATE.generated.h"

UENUM(BlueprintType)
enum class EBATTLERESULT_STATE : uint8 {
    eNONE,
    eOPEN,
    eUPDATE,
    eSUBPARTY_UPDATE,
    eDROPITEM_OPEN,
    eCLOSE,
    eINPUT_WAITING,
    eJP_TUTORIAL,
    eSUPPORTER_RETURN_OPEN,
};


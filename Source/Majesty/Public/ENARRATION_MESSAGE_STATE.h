#pragma once
#include "CoreMinimal.h"
#include "ENARRATION_MESSAGE_STATE.generated.h"

UENUM(BlueprintType)
enum class ENARRATION_MESSAGE_STATE : uint8 {
    eNONE,
    eUPDATE,
    eFADE_UPDATE,
    eFADE_UPDATE_FINISH,
    eFADEOUT,
};


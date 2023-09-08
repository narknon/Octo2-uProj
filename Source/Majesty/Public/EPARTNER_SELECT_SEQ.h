#pragma once
#include "CoreMinimal.h"
#include "EPARTNER_SELECT_SEQ.generated.h"

UENUM(BlueprintType)
enum class EPARTNER_SELECT_SEQ : uint8 {
    eNONE,
    eOPEN_PROCESS,
    eDIALOG_RUNNING,
    eCLOSE_SELF,
    eWAIT,
};


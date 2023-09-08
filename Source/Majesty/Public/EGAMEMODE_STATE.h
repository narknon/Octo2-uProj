#pragma once
#include "CoreMinimal.h"
#include "EGAMEMODE_STATE.generated.h"

UENUM(BlueprintType)
enum class EGAMEMODE_STATE : uint8 {
    eNONE,
    eCREATE_MANAGER,
    eCOMPLETE,
};


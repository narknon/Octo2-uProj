#pragma once
#include "CoreMinimal.h"
#include "EDEBUGMENU_STATE.generated.h"

UENUM(BlueprintType)
enum class EDEBUGMENU_STATE : uint8 {
    eNONE,
    eTOP,
    ePARAM,
    eCLOSING,
};


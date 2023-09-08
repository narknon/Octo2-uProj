#pragma once
#include "CoreMinimal.h"
#include "EMAINMENU_SEQ_STATE.generated.h"

UENUM(BlueprintType)
enum class EMAINMENU_SEQ_STATE : uint8 {
    eNONE,
    eOPEN,
    eUPDATE,
    eCLOSE,
};


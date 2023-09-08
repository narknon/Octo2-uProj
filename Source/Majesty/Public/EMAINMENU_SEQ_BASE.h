#pragma once
#include "CoreMinimal.h"
#include "EMAINMENU_SEQ_BASE.generated.h"

UENUM(BlueprintType)
enum class EMAINMENU_SEQ_BASE : uint8 {
    eNONE,
    eOPEN,
    eUPDATE,
    ePAUSE,
    eCLOSE,
};


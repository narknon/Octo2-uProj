#pragma once
#include "CoreMinimal.h"
#include "EFIELDCOMMAND_MENUITEM_STATE.generated.h"

UENUM(BlueprintType)
enum class EFIELDCOMMAND_MENUITEM_STATE : uint8 {
    eNONE,
    eOPEN,
    eUPDATE,
    eDECIDE,
    eCLOSE,
    eSELECT,
};


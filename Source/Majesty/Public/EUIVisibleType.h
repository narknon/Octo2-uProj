#pragma once
#include "CoreMinimal.h"
#include "EUIVisibleType.generated.h"

UENUM(BlueprintType)
enum class EUIVisibleType : uint8 {
    EFIELD_COMMAND,
    ETREASURE_BOX,
    ESHOP,
    EHOUSE,
    EBATTLE,
    EEVENT,
    EPARTY_CHAT,
    EMAIN_MENU,
};


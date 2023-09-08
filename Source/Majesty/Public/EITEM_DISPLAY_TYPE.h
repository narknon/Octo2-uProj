#pragma once
#include "CoreMinimal.h"
#include "EITEM_DISPLAY_TYPE.generated.h"

UENUM(BlueprintType)
enum class EITEM_DISPLAY_TYPE : uint8 {
    eDISABLE,
    eITEM_USE,
    eON_HIT,
    eBATTLE_START,
    eON_TAKE_DAMAGE,
};


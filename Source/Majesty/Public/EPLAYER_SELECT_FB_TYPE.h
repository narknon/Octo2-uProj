#pragma once
#include "CoreMinimal.h"
#include "EPLAYER_SELECT_FB_TYPE.generated.h"

UENUM(BlueprintType)
enum class EPLAYER_SELECT_FB_TYPE : uint8 {
    eIDLE,
    eIDLE_LOOP,
    eSELECT_DAY,
    eSELECT_NIGHT,
};


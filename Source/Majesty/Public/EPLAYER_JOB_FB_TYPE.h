#pragma once
#include "CoreMinimal.h"
#include "EPLAYER_JOB_FB_TYPE.generated.h"

UENUM(BlueprintType)
enum class EPLAYER_JOB_FB_TYPE : uint8 {
    eIDLE,
    eSELECT,
    eSELECT_LOOP,
};


#pragma once
#include "CoreMinimal.h"
#include "ESWITCH_INDOOR_TENPLATE_TYPE.generated.h"

UENUM(BlueprintType)
enum class ESWITCH_INDOOR_TENPLATE_TYPE : uint8 {
    eMANUAL,
    eBASIC,
    eCROSS_FLOOR,
    eSAME_FLOOR,
    eOUTDOOR,
    eMANSION,
};


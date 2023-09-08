#pragma once
#include "CoreMinimal.h"
#include "EMISSIONRECORD_TYPE.generated.h"

UENUM(BlueprintType)
enum class EMISSIONRECORD_TYPE : uint8 {
    eNONE,
    eMAIN_MISSION,
    eSUB_MISSION,
    eEXTRA_MISSION,
};


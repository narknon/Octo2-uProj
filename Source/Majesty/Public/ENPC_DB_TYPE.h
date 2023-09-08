#pragma once
#include "CoreMinimal.h"
#include "ENPC_DB_TYPE.generated.h"

UENUM(BlueprintType)
enum class ENPC_DB_TYPE : uint8 {
    eHEAR,
    eHEAR_INFO,
    eLEAD,
    ePURCHASE,
    eBattle,
};


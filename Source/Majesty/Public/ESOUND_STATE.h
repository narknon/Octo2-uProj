#pragma once
#include "CoreMinimal.h"
#include "ESOUND_STATE.generated.h"

UENUM(BlueprintType)
enum class ESOUND_STATE : uint8 {
    eSTOP,
    eCHANGE_BGM,
    eFADEIN,
    eFADEOUT,
    ePLAYING,
};


#pragma once
#include "CoreMinimal.h"
#include "ETUTORIAL_SEQ.generated.h"

UENUM(BlueprintType)
enum class ETUTORIAL_SEQ : uint8 {
    eNONE,
    eSHOW,
    eCHANGE,
    eFADE_WAIT,
};


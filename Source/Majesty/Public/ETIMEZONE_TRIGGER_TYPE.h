#pragma once
#include "CoreMinimal.h"
#include "ETIMEZONE_TRIGGER_TYPE.generated.h"

UENUM(BlueprintType)
enum class ETIMEZONE_TRIGGER_TYPE : uint8 {
    None,
    eDAYTIME,
    eNIGHT,
    eALL,
    eMORNING,
    eEVENING,
};


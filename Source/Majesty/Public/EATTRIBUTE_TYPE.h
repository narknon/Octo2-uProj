#pragma once
#include "CoreMinimal.h"
#include "EATTRIBUTE_TYPE.generated.h"

UENUM(BlueprintType)
enum class EATTRIBUTE_TYPE : uint8 {
    eNONE,
    eFIRE,
    eICE,
    eTHUNDER,
    eWIND,
    eLIGHT,
    eDARK,
};


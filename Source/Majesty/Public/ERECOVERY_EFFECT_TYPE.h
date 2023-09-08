#pragma once
#include "CoreMinimal.h"
#include "ERECOVERY_EFFECT_TYPE.generated.h"

UENUM(BlueprintType)
enum class ERECOVERY_EFFECT_TYPE : uint8 {
    eNONE,
    eHP,
    eMP,
    ePOTENTIAL,
};


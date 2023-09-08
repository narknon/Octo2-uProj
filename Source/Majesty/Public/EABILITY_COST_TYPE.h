#pragma once
#include "CoreMinimal.h"
#include "EABILITY_COST_TYPE.generated.h"

UENUM(BlueprintType)
enum class EABILITY_COST_TYPE : uint8 {
    eNONE,
    eMP,
    eHP,
    eBP,
    eSP,
    eMP_RATIO,
    eMONEY,
    eNUM,
    eINVENTOR,
};


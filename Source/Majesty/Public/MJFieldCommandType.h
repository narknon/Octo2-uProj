#pragma once
#include "CoreMinimal.h"
#include "MJFieldCommandType.generated.h"

UENUM(BlueprintType)
enum class MJFieldCommandType : uint8 {
    eGeneric,
    ePurchase,
    eSteal,
    eBattle,
    eMonster,
    eLure,
    eSearch,
    eHire,
    eReveal,
    eHear,
    eLead,
    eBribery,
    eBeg,
    eRob,
    eAssassinate,
    eDose,
    ePlacate,
};


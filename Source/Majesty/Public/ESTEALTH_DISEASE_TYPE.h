#pragma once
#include "CoreMinimal.h"
#include "ESTEALTH_DISEASE_TYPE.generated.h"

UENUM(BlueprintType)
enum class ESTEALTH_DISEASE_TYPE : uint8 {
    eSTEALTH_NORMAL,
    eSTEALTH_STEAM,
    eSTEALTH_SUPPORTER,
    eSTEALTH_POSSESSION,
    eSTEALTH_CHANGELING,
    eSTEALTH_NON_PARTICIPATION,
    eSTEALTH_ENVIRONMENT,
    eSTEALTH_MAX UMETA(Hidden),
};

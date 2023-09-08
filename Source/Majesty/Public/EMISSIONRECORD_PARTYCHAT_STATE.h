#pragma once
#include "CoreMinimal.h"
#include "EMISSIONRECORD_PARTYCHAT_STATE.generated.h"

UENUM(BlueprintType)
enum class EMISSIONRECORD_PARTYCHAT_STATE : uint8 {
    eNONE,
    eSELECT,
    eCONFIRM_DIALOG,
};


#pragma once
#include "CoreMinimal.h"
#include "EEQUIPMENT_ALL_CHARA_STATE.generated.h"

UENUM(BlueprintType)
enum class EEQUIPMENT_ALL_CHARA_STATE : uint8 {
    eNONE,
    eCATEGORY_SELECT,
    eSELECT_LIST,
    eCONFIRM_RECOMMENDED_ALL,
    eWAIT,
};


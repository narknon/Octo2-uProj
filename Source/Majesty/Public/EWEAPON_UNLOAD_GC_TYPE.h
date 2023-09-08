#pragma once
#include "CoreMinimal.h"
#include "EWEAPON_UNLOAD_GC_TYPE.generated.h"

UENUM(BlueprintType)
enum class EWEAPON_UNLOAD_GC_TYPE : uint8 {
    eNONE,
    eSTEP_OUT,
    eTURN_END,
    eBATTLE_END,
};


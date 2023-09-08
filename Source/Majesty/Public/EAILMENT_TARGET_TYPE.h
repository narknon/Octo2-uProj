#pragma once
#include "CoreMinimal.h"
#include "EAILMENT_TARGET_TYPE.generated.h"

UENUM(BlueprintType)
enum class EAILMENT_TARGET_TYPE : uint8 {
    eDEPEND,
    eENFORCER,
    eRANDOM,
    ePARTY_ALL,
    ePARTY_SINGLE,
    eENEMY_ALL,
    eENEMY_SINGLE,
    eCHARACTER_ALL,
    eBATTLE_FIELD,
    eHP_LOWEST,
    eHP_HIGHEST,
    eEXCEPT_ENFORCER,
    eRANDOM_EXCEPT_ENFORCER,
    eRANDOM_EXCEPT_DISEASE,
    eCHASE,
    eOWNER,
    eMAX,
};


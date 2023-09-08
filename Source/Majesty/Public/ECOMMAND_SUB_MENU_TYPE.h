#pragma once
#include "CoreMinimal.h"
#include "ECOMMAND_SUB_MENU_TYPE.generated.h"

UENUM(BlueprintType)
enum class ECOMMAND_SUB_MENU_TYPE : uint8 {
    eNONE,
    eUNIQUE,
    eDEFAULT_JOB,
    eEXTEND_JOB,
    eMONSTER,
    eSUPPORTER,
    eMATERIAL_A,
    eMATERIAL_B,
    eITEM,
    eWEAPON,
    eMERCENARY,
    eLEARNING,
    eMULTI_MONSTER,
    ePOTENTIALITY_ACTION,
};


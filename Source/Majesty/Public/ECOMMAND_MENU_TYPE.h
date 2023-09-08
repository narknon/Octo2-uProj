#pragma once
#include "CoreMinimal.h"
#include "ECOMMAND_MENU_TYPE.generated.h"

UENUM(BlueprintType)
enum class ECOMMAND_MENU_TYPE : uint8 {
    eCOMMAND,
    eSUB_MENU,
    eBOOST,
    eESCAPE,
    eDEFENSE,
    eMONSTER,
    eSUPPORTER,
    ePREPARATION,
    eITEM,
    eWEAPON_THROW,
    eINVENTOR_ITEM,
};


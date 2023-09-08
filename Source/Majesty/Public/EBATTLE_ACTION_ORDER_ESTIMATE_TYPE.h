#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_ACTION_ORDER_ESTIMATE_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_ACTION_ORDER_ESTIMATE_TYPE : uint8 {
    eNONE,
    eTOP,
    eFIRST,
    eGUARD,
    eLAST,
    eAGI_UP,
    eAGI_DOWN,
    eCOUNT_UP,
    eCOUNT_DOWN,
    eBUFF_COPY,
    eFIRST_PARTY,
    eCOUNT_UP_SELF,
};


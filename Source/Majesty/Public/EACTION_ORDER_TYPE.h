#pragma once
#include "CoreMinimal.h"
#include "EACTION_ORDER_TYPE.generated.h"

UENUM(BlueprintType)
enum class EACTION_ORDER_TYPE : uint8 {
    eNORMAL,
    eTOP,
    eFIRST,
    eGUARD,
    eLAST,
    eDELAY,
    eBREAK_STYLE,
    eBREAK,
    eCHARGE_ACTION,
    eBREAK_ACT,
    eLAST_ACT,
    eBRIBE_ACT,
};


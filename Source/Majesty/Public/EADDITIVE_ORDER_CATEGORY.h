#pragma once
#include "CoreMinimal.h"
#include "EADDITIVE_ORDER_CATEGORY.generated.h"

UENUM(BlueprintType)
enum class EADDITIVE_ORDER_CATEGORY : uint8 {
    eALL,
    eRERAISE,
    eFIRST_ATTACK,
    eLAST_ATTACK,
    eCOUNTER,
};


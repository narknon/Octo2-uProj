#pragma once
#include "CoreMinimal.h"
#include "EADDITIVE_ORDER_TYPE.generated.h"

UENUM(BlueprintType)
enum class EADDITIVE_ORDER_TYPE : uint8 {
    eREFLECTION,
    eCOUNTER,
    eCHASE_ATTACK,
    eDOUBLE_ATTACK,
    eREPEAT,
    eACTION_COPY,
    eRERAISE,
    eFIRST_ATTACK,
    eENCHANT_ATTRIBUTE,
    eENEMY_SIGN_OF_BOOST,
    eLAST_ATTACK,
    eCOUNER_ON_DEAD,
    eDANCER_SONG,
    eAUTO_TAME_MONSTER,
};


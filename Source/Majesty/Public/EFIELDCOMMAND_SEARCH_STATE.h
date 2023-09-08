#pragma once
#include "CoreMinimal.h"
#include "EFIELDCOMMAND_SEARCH_STATE.generated.h"

UENUM(BlueprintType)
enum class EFIELDCOMMAND_SEARCH_STATE : uint8 {
    eNONE,
    eOPEN,
    eOPEN_SEARCH,
    eOPEN_BRIBERY,
    eOPEN_BRIBERY_FAILED,
    eSEARCH_CONFIRM,
    eBRIBERY_CONFIRM,
    eBRIBERY_FAILED,
    eCONFIRM_CLOSE,
    eDETAIL,
    eCLOSE,
    eOPEN_SPECIAL,
    eWAITING,
};


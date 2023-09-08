#pragma once
#include "CoreMinimal.h"
#include "ELIST_CHARACTER_CHANGE_STATE.generated.h"

UENUM(BlueprintType)
enum class ELIST_CHARACTER_CHANGE_STATE : uint8 {
    eNONE,
    eOPEN,
    eCHARACTER_SELECT,
    eCHARACTER_DECISION,
    eCHARACTER_CHANGE_ANIME,
    eCONFIRM_REMOVE_CHARACTER,
    eFADE,
    eERROR_MESSAGE,
    eCLOSE,
    eEND,
};


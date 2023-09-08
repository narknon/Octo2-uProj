#pragma once
#include "CoreMinimal.h"
#include "EPARTY_SPLIT_STATE.generated.h"

UENUM(BlueprintType)
enum class EPARTY_SPLIT_STATE : uint8 {
    eNONE,
    eOPEN,
    eCHARACTER_SELECT,
    eCHARACTER_DECISION,
    eCHARACTER_CHANGE_ANIME,
    eCLOSE,
    eFIX_DIALOG,
    eCANCEL_DIALOG,
};


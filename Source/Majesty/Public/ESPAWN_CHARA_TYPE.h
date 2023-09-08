#pragma once
#include "CoreMinimal.h"
#include "ESPAWN_CHARA_TYPE.generated.h"

UENUM(BlueprintType)
enum class ESPAWN_CHARA_TYPE : uint8 {
    eACTION_ID,
    eNPC_LABEL,
    ePLACEMENT_LABEL,
    ePARTY_POSITION,
    eTHIEF,
};


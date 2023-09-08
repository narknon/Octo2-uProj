#pragma once
#include "CoreMinimal.h"
#include "EDEBUFF_ATTACHSOCKET_TYPE.generated.h"

UENUM(BlueprintType)
enum class EDEBUFF_ATTACHSOCKET_TYPE : uint8 {
    eBLIND,
    eSTUN,
    eETC,
    eUI_DAMAGE,
    eUI_STATUS,
    eADDEFF01,
    eSIGN,
};


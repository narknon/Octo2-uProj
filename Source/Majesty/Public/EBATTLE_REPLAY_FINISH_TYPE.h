#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_REPLAY_FINISH_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_REPLAY_FINISH_TYPE : uint8 {
    eNORMAL,
    eADDITIVE,
    eCOUNTER,
    eREFLECTION,
    ePOISON,
};


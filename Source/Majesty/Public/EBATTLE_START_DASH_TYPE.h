#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_START_DASH_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_START_DASH_TYPE : uint8 {
    eNONE,
    eNORMAL,
    eADVANTAGE,
    eBACK_ATTACK,
};


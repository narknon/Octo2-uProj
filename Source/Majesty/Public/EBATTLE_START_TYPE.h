#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_START_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_START_TYPE : uint8 {
    eNORMAL,
    eADVANTAGE,
    eBACK_ATTACK,
};


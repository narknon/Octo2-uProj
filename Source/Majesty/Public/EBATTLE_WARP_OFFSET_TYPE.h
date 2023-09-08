#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_WARP_OFFSET_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_WARP_OFFSET_TYPE : uint8 {
    eWARP_OFFSET_DEFAULT,
    eWARP_OFFSET_BACK,
    eWARP_OFFSET_FRONT,
    eWARP_OFFSET_MAX UMETA(Hidden),
};


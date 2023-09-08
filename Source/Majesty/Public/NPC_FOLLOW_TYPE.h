#pragma once
#include "CoreMinimal.h"
#include "NPC_FOLLOW_TYPE.generated.h"

UENUM(BlueprintType)
enum class NPC_FOLLOW_TYPE : uint8 {
    LEAD,
    LURE,
    HIRE,
    PLACATE,
};


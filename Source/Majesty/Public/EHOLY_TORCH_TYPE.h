#pragma once
#include "CoreMinimal.h"
#include "EHOLY_TORCH_TYPE.generated.h"

UENUM(BlueprintType)
enum class EHOLY_TORCH_TYPE : uint8 {
    DESERT,
    WILDERNESS,
    MOUNTAIN,
    ISLAND,
    MAX_NUM,
};


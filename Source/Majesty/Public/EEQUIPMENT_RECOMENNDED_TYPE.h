#pragma once
#include "CoreMinimal.h"
#include "EEQUIPMENT_RECOMENNDED_TYPE.generated.h"

UENUM(BlueprintType)
enum class EEQUIPMENT_RECOMENNDED_TYPE : uint8 {
    eCHARA_RECOMENNDED,
    eALL_RECOMENNDED,
    eCHARA_RECOMENNDED_CATEGORY,
    eALL_RECOMENNDED_CATEGORY,
};


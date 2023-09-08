#pragma once
#include "CoreMinimal.h"
#include "ELEVEL_TYPE.generated.h"

UENUM(BlueprintType)
enum class ELEVEL_TYPE : uint8 {
    FIELD,
    BATTLE,
    MAX_NUM,
};


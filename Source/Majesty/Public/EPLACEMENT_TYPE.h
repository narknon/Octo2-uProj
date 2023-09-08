#pragma once
#include "CoreMinimal.h"
#include "EPLACEMENT_TYPE.generated.h"

UENUM(BlueprintType)
enum class EPLACEMENT_TYPE : uint8 {
    eNONE,
    eNPC,
    eOBJECT,
    eEVENT_TRIGGER,
    eSEQUENCER,
};


#pragma once
#include "CoreMinimal.h"
#include "EBARMENU_STORY_PROGRESSTYPE.generated.h"

UENUM(BlueprintType)
enum class EBARMENU_STORY_PROGRESSTYPE : uint8 {
    eNONE,
    ePROGRESS,
    eINTERRUPTION,
    eCLEARED,
};


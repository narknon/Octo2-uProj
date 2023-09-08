#pragma once
#include "CoreMinimal.h"
#include "EWEAPON_CATEGORY.generated.h"

UENUM(BlueprintType)
enum class EWEAPON_CATEGORY : uint8 {
    eSWORD,
    eLANCE,
    eDAGGER,
    eAXE,
    eBOW,
    eROD,
    eNONE,
};


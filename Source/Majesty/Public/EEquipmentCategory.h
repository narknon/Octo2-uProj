#pragma once
#include "CoreMinimal.h"
#include "EEquipmentCategory.generated.h"

UENUM(BlueprintType)
enum class EEquipmentCategory : uint8 {
    eSWORD,
    eLANCE,
    eDAGGER,
    eAXE,
    eBOW,
    eROD,
    eSHIELD,
    eHAT,
    eCLOTH,
    eLIGHT_HELMET,
    eLIGHT_ARMOR,
    eHEAVY_HELMET,
    eHEAVY_ARMOR,
    eACCESSORY,
};


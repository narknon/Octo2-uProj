#pragma once
#include "CoreMinimal.h"
#include "EItemCategoryData.generated.h"

UENUM(BlueprintType)
enum class EItemCategoryData : uint8 {
    eCONSUMABLE,
    eMATERIAL_A,
    eMATERIAL_B,
    eTRADING,
    eTREASURE,
    eEQUIPMENT,
    eINFORMATION,
    eMATERIAL_C,
};


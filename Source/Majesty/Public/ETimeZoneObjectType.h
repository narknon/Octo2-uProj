#pragma once
#include "CoreMinimal.h"
#include "ETimeZoneObjectType.generated.h"

UENUM(BlueprintType)
enum class ETimeZoneObjectType : uint8 {
    eNONE,
    eLIGHT,
    eEMITTER,
    eSOUND,
};


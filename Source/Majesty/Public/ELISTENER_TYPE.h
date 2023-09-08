#pragma once
#include "CoreMinimal.h"
#include "ELISTENER_TYPE.generated.h"

UENUM(BlueprintType)
enum class ELISTENER_TYPE : uint8 {
    eNONE,
    eFIELD,
    eBATTLE,
    eSCRIPT_EVENT,
    eSEQ_EVENT,
};


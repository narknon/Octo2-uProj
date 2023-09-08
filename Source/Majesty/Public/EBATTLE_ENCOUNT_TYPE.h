#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_ENCOUNT_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_ENCOUNT_TYPE : uint8 {
    eNORMAL,
    eEVENT,
    eBOUT,
    eINVADE,
    eREVEAL,
    eREPLAY,
    eEIGHT_BATTLE,
    ePREPARATION,
};


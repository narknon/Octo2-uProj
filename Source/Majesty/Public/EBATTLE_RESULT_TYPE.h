#pragma once
#include "CoreMinimal.h"
#include "EBATTLE_RESULT_TYPE.generated.h"

UENUM(BlueprintType)
enum class EBATTLE_RESULT_TYPE : uint8 {
    eNONE,
    eNORMAL,
    eFULL_BOOST_FINISH,
    eBOSS_FINISH,
    eREVEAL_RESULT,
    eSHORT_RESULT,
    eEIGHT_BATTLE,
};


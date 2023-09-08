#pragma once
#include "CoreMinimal.h"
#include "ESAVELOAD_RESULT.generated.h"

UENUM(BlueprintType)
enum class ESAVELOAD_RESULT : uint8 {
    eLOAD_SUCCEEDED,
    eSAVE_SUCCEEDED,
    eLOAD_FAILED,
    eSAVE_FAILED,
    eCANCEL,
    eIS_RUNNING,
};


#pragma once
#include "CoreMinimal.h"
#include "EJudgeFastTravelAvailableResponse.generated.h"

UENUM(BlueprintType)
enum class EJudgeFastTravelAvailableResponse : uint8 {
    Available,
    UnAvailable_OpenDialog,
    UnAvailable_NoOpenDialog,
};


#pragma once
#include "CoreMinimal.h"
#include "EGET_DATATABLE_RESULT.generated.h"

UENUM(BlueprintType)
enum class EGET_DATATABLE_RESULT : uint8 {
    Success,
    NotFound,
    NotMatch,
};


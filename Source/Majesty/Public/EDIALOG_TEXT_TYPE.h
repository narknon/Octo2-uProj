#pragma once
#include "CoreMinimal.h"
#include "EDIALOG_TEXT_TYPE.generated.h"

UENUM(BlueprintType)
enum class EDIALOG_TEXT_TYPE : uint8 {
    eDIALOG_TEXT_YESNO,
    eDIALOG_TEXT_YES,
    eDIALOG_TEXT_OK,
    eDIALOG_TEXT_CANCEL,
    eDIALOG_TEXT_CLOSE,
    eDIALOG_TEXT_MAX UMETA(Hidden),
};


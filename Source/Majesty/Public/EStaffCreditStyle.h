#pragma once
#include "CoreMinimal.h"
#include "EStaffCreditStyle.generated.h"

UENUM(BlueprintType)
enum class EStaffCreditStyle : uint8 {
    NO_STYLE,
    TEXT_TITLE,
    TEXT_SUBTITLE,
    TEXT_SUBTITLE_2,
    TEXT_COL_1,
    TEXT_COL_2,
    IMAGE,
    SPACE,
    LINE_1,
    LINE_2,
    TEXT_COL_1_1,
    TEXT_COL_2_1,
    LINE_3,
};


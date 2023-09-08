#pragma once
#include "CoreMinimal.h"
#include "EADD_MEMBER_END_STATUS.generated.h"

UENUM(BlueprintType)
enum class EADD_MEMBER_END_STATUS : uint8 {
    eNONE,
    eOPEN_CHANGE_CHECK,
    eWAIT_CHANGE_CHECK,
    eOPEN_CHARACTER_CHANGE,
    eUPDATE_CHARACTER_CHANGE,
    eEND_CHARACTER_CHANGE,
    eWAIT_CHANGE_CANCEL,
    eFINISH,
};


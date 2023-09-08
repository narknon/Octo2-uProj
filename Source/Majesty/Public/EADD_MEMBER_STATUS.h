#pragma once
#include "CoreMinimal.h"
#include "EADD_MEMBER_STATUS.generated.h"

UENUM(BlueprintType)
enum class EADD_MEMBER_STATUS : uint8 {
    eNONE,
    eDIALOG,
    eOPEN_CHARACTER_CHANGE,
    eUPDATE_CHARACTER_CHANGE,
    eEND_CHARACTER_CHANGE,
    eCHK_PARTYMEMBER,
    eADD_MEMBER,
};


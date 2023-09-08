#pragma once
#include "CoreMinimal.h"
#include "EACTION_COMMAND_USEABLE.generated.h"

UENUM(BlueprintType)
enum class EACTION_COMMAND_USEABLE : uint8 {
    eUSEABLE,
    eDISABLE,
    eCOMMAND_SEAL,
};


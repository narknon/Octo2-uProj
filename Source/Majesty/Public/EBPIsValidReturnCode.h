#pragma once
#include "CoreMinimal.h"
#include "EBPIsValidReturnCode.generated.h"

UENUM(BlueprintType)
namespace EBPIsValidReturnCode {
    enum Type {
        IsValid,
        IsNotValid,
    };
}


#pragma once
#include "CoreMinimal.h"
#include "EBPFuncReturnCode.generated.h"

UENUM(BlueprintType)
namespace EBPFuncReturnCode {
    enum Type {
        Success,
        Failed,
    };
}


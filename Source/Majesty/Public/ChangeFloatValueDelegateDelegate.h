#pragma once
#include "CoreMinimal.h"
#include "ChangeFloatValueDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FChangeFloatValueDelegate, float, fValue);


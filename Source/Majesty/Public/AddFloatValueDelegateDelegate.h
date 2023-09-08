#pragma once
#include "CoreMinimal.h"
#include "AddFloatValueDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FAddFloatValueDelegate, float, fValue);


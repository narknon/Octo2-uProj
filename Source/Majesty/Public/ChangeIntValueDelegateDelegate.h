#pragma once
#include "CoreMinimal.h"
#include "ChangeIntValueDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FChangeIntValueDelegate, int32, nValue);


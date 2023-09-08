#pragma once
#include "CoreMinimal.h"
#include "AddIntValueDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FAddIntValueDelegate, int32, nValue);


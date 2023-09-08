#pragma once
#include "CoreMinimal.h"
#include "ChangeListValueDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FChangeListValueDelegate, int32, nValue);


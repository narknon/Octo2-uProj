#pragma once
#include "CoreMinimal.h"
#include "AddToggleValueDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FAddToggleValueDelegate, bool, bValue);


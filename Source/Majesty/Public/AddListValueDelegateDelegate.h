#pragma once
#include "CoreMinimal.h"
#include "AddListValueDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FAddListValueDelegate, int32, nValue);


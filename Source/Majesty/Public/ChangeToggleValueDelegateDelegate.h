#pragma once
#include "CoreMinimal.h"
#include "ChangeToggleValueDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FChangeToggleValueDelegate, bool, bValue);


#pragma once
#include "CoreMinimal.h"
#include "SelectForgetAbilityEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSelectForgetAbilityEvent, int32, SelectCursorPosition, bool, IsDecide);


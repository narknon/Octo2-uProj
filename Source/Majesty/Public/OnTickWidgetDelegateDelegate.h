#pragma once
#include "CoreMinimal.h"
#include "OnTickWidgetDelegateDelegate.generated.h"

class UDebugMenuParamWidgetBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnTickWidgetDelegate, UDebugMenuParamWidgetBase*, Widget);


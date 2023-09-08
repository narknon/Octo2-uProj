#pragma once
#include "CoreMinimal.h"
#include "DebugListMenuItem.h"
#include "DebugListMenuDecidedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FDebugListMenuDecided, const FDebugListMenuItem&, menuItem);


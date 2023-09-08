#pragma once
#include "CoreMinimal.h"
#include "SelectCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSelectCallback, int32, SelectIndex);


#pragma once
#include "CoreMinimal.h"
#include "CloseFinishCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCloseFinishCallback, int32, SelectIndex);


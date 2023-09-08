#pragma once
#include "CoreMinimal.h"
#include "OnClosedPartySplitParam.h"
#include "OnClosedPartySplitWithResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClosedPartySplitWithResult, FOnClosedPartySplitParam, Param);


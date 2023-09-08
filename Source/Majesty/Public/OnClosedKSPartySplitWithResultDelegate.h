#pragma once
#include "CoreMinimal.h"
#include "EPARTY_SPLIT_CLOSE_REASON.h"
#include "OnClosedKSPartySplitWithResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClosedKSPartySplitWithResult, EPARTY_SPLIT_CLOSE_REASON, reason);


#pragma once
#include "CoreMinimal.h"
#include "EREQUEST_RESULT.h"
#include "RequestDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FRequestDelegate, EREQUEST_RESULT, Result);


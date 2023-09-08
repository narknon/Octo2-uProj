#pragma once
#include "CoreMinimal.h"
#include "CameraInterpolationDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCameraInterpolationDelegate, float, fRatio);


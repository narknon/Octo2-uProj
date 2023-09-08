#pragma once
#include "CoreMinimal.h"
#include "AddSubMenuDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FAddSubMenuDelegate, int32, nHierarchy, const FString&, Name);


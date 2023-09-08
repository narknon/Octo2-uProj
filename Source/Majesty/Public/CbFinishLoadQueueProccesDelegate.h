#pragma once
#include "CoreMinimal.h"
#include "CbFinishLoadQueueProccesDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCbFinishLoadQueueProcces, UPARAM(Ref) TArray<UObject*>&, objList);


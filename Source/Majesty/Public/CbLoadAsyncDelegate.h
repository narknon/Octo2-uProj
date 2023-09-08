#pragma once
#include "CoreMinimal.h"
#include "CbLoadAsyncDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCbLoadAsync, UPARAM(Ref) TArray<UObject*>&, objList);


#pragma once
#include "CoreMinimal.h"
#include "InitAfterSpawnManagerDelegate.generated.h"

class AAcqManagerBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FInitAfterSpawnManager, AAcqManagerBase*, manager);


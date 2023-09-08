#pragma once
#include "CoreMinimal.h"
#include "LoadSystemDataDelegateDelegate.generated.h"

class UKSSaveSystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FLoadSystemDataDelegate, const FString&, SlotName, const int32, UserIndex, UKSSaveSystem*, SystemData);


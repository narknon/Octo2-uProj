#pragma once
#include "CoreMinimal.h"
#include "SaveGameDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FSaveGameDelegate, const FString&, SlotName, const int32, UserIndex, bool, IsSuccesss);


#pragma once
#include "CoreMinimal.h"
#include "LoadGameDelegateDelegate.generated.h"

class UMJSaveData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FLoadGameDelegate, const FString&, SlotName, const int32, UserIndex, UMJSaveData*, SaveGame);


#pragma once
#include "CoreMinimal.h"
#include "CbLoadCharaAssetDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FCbLoadCharaAsset, int32, CharacterResourceId, UPARAM(Ref) TArray<UObject*>&, FlipbookResourceObject);


#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPARTY_SPLIT_PLACEMENT_POSITION.h"
#include "EPlayableCharacterID.h"
#include "PartySplitUiUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UPartySplitUiUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPartySplitUiUtil();
    UFUNCTION(BlueprintCallable)
    static bool SavePartySplitResult(const TMap<EPlayableCharacterID, EPARTY_SPLIT_PLACEMENT_POSITION>& party);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompletePartySplit(const TMap<EPlayableCharacterID, EPARTY_SPLIT_PLACEMENT_POSITION>& party);
    
};


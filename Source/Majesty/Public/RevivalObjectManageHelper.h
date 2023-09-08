#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KSObjectData.h"
#include "PlacementData.h"
#include "RevivalObjectManageHelper.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API URevivalObjectManageHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URevivalObjectManageHelper();
    UFUNCTION(BlueprintCallable)
    static void RegisterRevivalObject(const FKSObjectData& ObjectData, const FPlacementData& PlacementData);
    
};


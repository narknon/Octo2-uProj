#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "KSObjectData.h"
#include "ObjectDataTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UObjectDataTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UObjectDataTableUtility();
    UFUNCTION(BlueprintCallable)
    static FName GetObjectLabelById(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetObjectDataRow(FKSObjectData& OutData, FName TargetLabel);
    
};


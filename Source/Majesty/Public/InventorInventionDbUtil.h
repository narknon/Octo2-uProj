#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "InventionData.h"
#include "InventorInventionDbUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UInventorInventionDbUtil : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UInventorInventionDbUtil();
    UFUNCTION(BlueprintCallable)
    static bool GetInventionDataByRowName(FInventionData& OutData, const FName& RowName);
    
};


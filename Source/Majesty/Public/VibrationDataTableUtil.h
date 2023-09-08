#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "VibrationDataTableUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UVibrationDataTableUtil : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UVibrationDataTableUtil();
    UFUNCTION(BlueprintCallable)
    static bool GetAllPs5VibrationDataRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAllFfeVibrationDataRowNames(TArray<FName>& OutRowNames);
    
};


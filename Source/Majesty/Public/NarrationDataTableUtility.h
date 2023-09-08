#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NarrationDataBase.h"
#include "NarrationDataTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UNarrationDataTableUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNarrationDataTableUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 NarrationDataLabelToID(FName NarrationDataLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName NarrationDataIDToLabel(int32 NarrationDataID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNarrationDataRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNarrationData(FName RowName, FNarrationDataBase& outRowData);
    
};


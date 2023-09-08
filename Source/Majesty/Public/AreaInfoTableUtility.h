#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AreaInfoData.h"
#include "EBPFuncReturnCode.h"
#include "AreaInfoTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UAreaInfoTableUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAreaInfoTableUtility();
    UFUNCTION(BlueprintCallable)
    static void GetAreaInfoTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAreaInfoData(FAreaInfoData& OutData, FName TargetLabel);
    
};


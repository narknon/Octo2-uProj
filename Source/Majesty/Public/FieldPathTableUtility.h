#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBPFuncReturnCode.h"
#include "FieldPathInfoData.h"
#include "FieldPathTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UFieldPathTableUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFieldPathTableUtility();
    UFUNCTION(BlueprintCallable)
    static void GetFieldPathTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFieldPathData(FFieldPathInfoData& OutData, FName TargetLabel);
    
};


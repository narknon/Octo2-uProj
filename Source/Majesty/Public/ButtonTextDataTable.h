#pragma once
#include "CoreMinimal.h"
#include "ButtonTextData.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "ButtonTextDataTable.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UButtonTextDataTable : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UButtonTextDataTable();
    UFUNCTION(BlueprintCallable)
    static bool GetButtonTextTableRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FButtonTextData& OutData, FName TargetLabel, bool LogEnable);
    
};


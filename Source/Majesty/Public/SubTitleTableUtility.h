#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "SubTitleDataBase.h"
#include "SubTitleTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API USubTitleTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    USubTitleTableUtility();
    UFUNCTION(BlueprintCallable)
    static void GetSubTitleTable(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSubTitleDataBase& OutData, FName Label);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSubTitleRowNames(TArray<FName>& OutRowNames);
    
};


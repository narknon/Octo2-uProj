#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "SupportCharacterData.h"
#include "SupportCharacterDataUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API USupportCharacterDataUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    USupportCharacterDataUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetSupportCharacterTableRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSupportCharacterData& OutData, FName Label);
    
    UFUNCTION(BlueprintCallable)
    static bool GeSupportCharacterTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
};


#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "KSSpriteData.h"
#include "CustomSpriteDataTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UCustomSpriteDataTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UCustomSpriteDataTableUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetMissionCustomSpriteRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FKSSpriteData& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCustomSpriteRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FKSSpriteData& OutData, FName TargetLabel, bool LogEnable);
    
};


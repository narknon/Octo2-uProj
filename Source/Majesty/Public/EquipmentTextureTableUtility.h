#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "EquipmentTextureData.h"
#include "EquipmentTextureTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UEquipmentTextureTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UEquipmentTextureTableUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetEquipmentTextureRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FEquipmentTextureData& OutData, FName TargetLabel, bool LogEnable);
    
};


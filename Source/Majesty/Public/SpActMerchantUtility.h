#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "ESPACT_MER_TRIGGER_TYPE.h"
#include "SpActMerchantResult.h"
#include "SpActionMerchant_Data.h"
#include "SpActionMerchant_MenuData.h"
#include "SpActionMerchant_Type.h"
#include "SpActMerchantUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API USpActMerchantUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    USpActMerchantUtility();
    UFUNCTION(BlueprintCallable)
    static bool MakeSpecialActionDataForMenu(FName spActLabel, FSpActionMerchant_MenuData& outSpActData);
    
    UFUNCTION(BlueprintCallable)
    static FText MakeDescriptionText(const FSpActionMerchant_Data& spActData);
    
    UFUNCTION(BlueprintCallable)
    static void GetSpActionTypeByLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSpActionMerchant_Type& outType, FName typeLabel);
    
    UFUNCTION(BlueprintCallable)
    static void GetSpActionDataByNpcId(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSpActionMerchant_Data& OutData, int32 NPCID);
    
    UFUNCTION(BlueprintCallable)
    static void GetSpActionDataByLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSpActionMerchant_Data& OutData, FName dataLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool ExecMerchantSpecialAction_WithoutNpc(FSpActMerchantResult& OutResult, ESPACT_MER_TRIGGER_TYPE Trigger, int32 originalPrice);
    
    UFUNCTION(BlueprintCallable)
    static bool ExecMerchantSpecialAction_WithNpc(FSpActMerchantResult& OutResult, int32 NPCID, ESPACT_MER_TRIGGER_TYPE Trigger, int32 originalPrice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMerchantSpecialAction_WithoutNpc(ESPACT_MER_TRIGGER_TYPE Trigger);
    
};


#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EHUNTER_PARTNER_ID.h"
#include "ESpecialActionType.h"
#include "ProcessItemNum.h"
#include "SpecialActionData.h"
#include "SpecialActionDataUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API USpecialActionDataUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    USpecialActionDataUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SpecialActionLabelToID(FName Label);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName SpecialActionIDToLabel(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSpecialActionTableRowDataByEnum(FSpecialActionData& OutData, ESpecialActionType SpecialActionType);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSpecialActionTableRowData(FSpecialActionData& OutData, FName Label);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetProcessItemNumData(FProcessItemNum& OutData, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetProcessItemNum(int32 ID, int32 remainCallNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLegendSeaMonsterIndex(int32 Normal, int32 Awake, int32 awakeAfter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetHunterPartnerMonsterLabelById(EHUNTER_PARTNER_ID partnerID, bool ignoreAwakening);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetHunterPartnerMonsterLabel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetHunterPartnerActionLabelById(EHUNTER_PARTNER_ID partnerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetHunterPartnerActionLabel();
    
};


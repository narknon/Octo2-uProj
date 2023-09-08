#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "ENPC_DB_TYPE.h"
#include "NPCBattleData.h"
#include "NPCHearDataBase.h"
#include "NPCHearInfoDataBase.h"
#include "NPCLeadDataBase.h"
#include "NPCPurchaseDataBase.h"
#include "NPCDataBaseUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UNPCDataBaseUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UNPCDataBaseUtility();
    UFUNCTION(BlueprintCallable)
    static bool GetNPCPurchaseData(FName RowName, FNPCPurchaseDataBase& outPurchaseData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNPCLeadData(FName RowName, FNPCLeadDataBase& outLeadData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNPCHearInfoData(FName RowName, FNPCHearInfoDataBase& outHearInfoData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNPCHearData(FName RowName, FNPCHearDataBase& outHearData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNPCDataBaseRowNames(ENPC_DB_TYPE Type, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNPCBattleData(FName RowName, FNPCBattleData& outBattleData);
    
};


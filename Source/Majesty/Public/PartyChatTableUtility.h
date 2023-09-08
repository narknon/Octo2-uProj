#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "EDBNoticeType.h"
#include "EPARTY_CHAT_TYPE.h"
#include "PartyChat.h"
#include "PartyChatTableUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UPartyChatTableUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UPartyChatTableUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 PartyChatLabelToID(FName PartyChatLable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName PartyChatIDToLabel(int32 PartyChatId);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyPartyChatDB(FName dbName, EDBNoticeType notice);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPartyChatTableRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPartyChatRowDataFromEventLabel(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FPartyChat& OutData, FName EventLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPartyChatRowDataByID(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FPartyChat& OutData, int32 TargetID, bool LogEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPartyChatRowData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FPartyChat& OutData, FName TargetLabel, bool LogEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetPartyChatLabelsRelatedMainStory(FName MainStoryLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetPartyChatLabelsOthers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetPartyChatLabelsByType(EPARTY_CHAT_TYPE Type);
    
};


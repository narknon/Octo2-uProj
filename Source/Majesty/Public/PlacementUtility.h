#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "ENPCEVENT_TYPE.h"
#include "LabelListData.h"
#include "NPCData.h"
#include "PlacementData.h"
#include "PlacementEventParamSet.h"
#include "PlacementUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UPlacementUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UPlacementUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMerchantSubStoryFromPlacementLabel(FName PlacementLabel);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlacementNameByLevelName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& outLabel, FName levelName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlacementInfo(FLabelListData& OutLabelInfo, FName RowName);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlacementEventParamSetByIndex(const FPlacementData& PlacementData, int32 Index, FPlacementEventParamSet& outEventParamSet);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlacementDataRowNames(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlacementDataByLevelName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FPlacementData>& outInfoData, FName levelName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlacementData(FPlacementData& OutData, FName TargetLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNPCDataByPlacementInfo(FNPCData& OutData, FName PlacementLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNPCDataByNPCLabel(FNPCData& OutData, FName NPCLabel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetActivePlacementEventParamSet(const FPlacementData& PlacementData, TArray<FPlacementEventParamSet>& outEventParamSet);
    
    UFUNCTION(BlueprintCallable)
    static FName GetActiveEventLabelFromEventTypeAndParam(FName NPCLabel, ENPCEVENT_TYPE EventType, FName EventParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void EventTypeStringToByte(const FString& strData, uint8& retByte);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_OutputPlacementInfo(FName levelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CharaDirStringToByte(const FString& strData, uint8& retByte);
    
};


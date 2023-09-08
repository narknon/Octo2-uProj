#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EDBNoticeType.h"
#include "ELevelTriggerID.h"
#include "LEVEL_AREA_TYPE.h"
#include "RadarMapDestinationData.h"
#include "RadarMapDisplayData.h"
#include "RadarMapUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API URadarMapUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    URadarMapUtility();
    UFUNCTION(BlueprintCallable)
    static bool Setup();
    
    UFUNCTION(BlueprintCallable)
    static void RefreshRadarMap();
    
    UFUNCTION(BlueprintCallable)
    static void NotifyRadarMapDb(FName dbName, EDBNoticeType notice);
    
    UFUNCTION(BlueprintCallable)
    static void GetSubStoryDestinationLevelTriggerInLevel(TArray<ELevelTriggerID>& outMainStoryLvTrigIdList, TArray<ELevelTriggerID>& outSubStoryLvTrigIdList, FName levelName);
    
    UFUNCTION(BlueprintCallable)
    static void GetDestinationSubPlacementInLevel(TArray<FRadarMapDisplayData>& outIconPlacement, FName levelName);
    
    UFUNCTION(BlueprintCallable)
    static void GetDestinationPlacementInLevel(TArray<FRadarMapDisplayData>& outIconPlacement, FName levelName);
    
    UFUNCTION(BlueprintCallable)
    static void GetDestinationLevelTriggerInLevel(TArray<ELevelTriggerID>& outLevelTriggerIdList, FName levelName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDestinationDataByMainStory(FRadarMapDestinationData& OutRow, FName MainStory, FName levelName, LEVEL_AREA_TYPE LevelAreaType);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDestinationData(FRadarMapDestinationData& OutRow, FName Label);
    
};


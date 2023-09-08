#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SaveDataUtilBase.h"
#include "SaveMissionData.h"
#include "MissionSaveDataUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UMissionSaveDataUtil : public USaveDataUtilBase {
    GENERATED_BODY()
public:
    UMissionSaveDataUtil();
    UFUNCTION(BlueprintCallable)
    static bool SetSubStoryState(int32 AreaID, int32 missionSaveDataIndex, int32 State);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSubStoryOrder(int32 MissionIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetSubStoryNewFlag(int32 AreaID, int32 missionSaveDataIndex, bool bNewFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSubStoryMarker(int32 AreaID, int32 missionSaveDataIndex, int32 MapID, FVector MarkerPos);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSubStoryClearIndex(int32 AreaID, int32 missionSaveDataIndex, int32 ClearIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSubMissionData(int32 AreaID, FSaveMissionData newSubMissionData);
    
    UFUNCTION(BlueprintCallable)
    static void SetMainMissionProgressCount(int32 CharacterID, int32 progressCount);
    
    UFUNCTION(BlueprintCallable)
    static void SetExtraStoryProgressCount(int32 ExStoryCategory, int32 progressCount);
    
    UFUNCTION(BlueprintCallable)
    static bool ResetSubStoryOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSubStoryState(int32 AreaID, int32 missionSaveDataIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSubStoryOrder(TArray<int32>& outSubMissionOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSubStoryNewFlag(int32 AreaID, int32 missionSaveDataIndex);
    
    UFUNCTION(BlueprintCallable)
    static void GetSubStoryMarkerInMap(int32 MapID, TArray<int32>& outAreaID, TArray<int32>& outMissionSaveDataIndex, TArray<FVector>& outMarkerPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSubStoryClearIndex(int32 AreaID, int32 missionSaveDataIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSubMissionData(int32 AreaID, FSaveMissionData& outSubMissionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMainMissionProgressCount_FromSaveCharacterData(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetExtraStoryProgressCount(int32 ExStoryCategory);
    
};


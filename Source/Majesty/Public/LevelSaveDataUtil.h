#pragma once
#include "CoreMinimal.h"
#include "ELEVEL_DARK_STATE.h"
#include "EWorldMapIslandLayerArea.h"
#include "EWorldMapMaskArea.h"
#include "EWorldMapPrologueMaskArea.h"
#include "MapData.h"
#include "RevivalObjectSaveData.h"
#include "SaveDataUtilBase.h"
#include "LevelSaveDataUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ULevelSaveDataUtil : public USaveDataUtilBase {
    GENERATED_BODY()
public:
    ULevelSaveDataUtil();
    UFUNCTION(BlueprintCallable)
    static void SetVisitedMap(bool bVisited, int32 MapID);
    
    UFUNCTION(BlueprintCallable)
    static void SetShowMapIcon(bool bVisited, int32 MapID);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMapData(int32 levelId, FMapData NewMapData);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsVisitedWorldMapPrologueMaskArea(EWorldMapPrologueMaskArea MaskArea, bool IsVisited);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsVisitedWorldMapMaskArea(EWorldMapMaskArea MaskArea, bool IsVisited);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsVisitedWorldMapIslandLayerArea(EWorldMapIslandLayerArea Area, bool IsVisited);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentLevelDarkState(ELEVEL_DARK_STATE darkState);
    
    UFUNCTION(BlueprintCallable)
    static void SetConnectionValue(int32 TownID, int32 ConnectionValue);
    
    UFUNCTION(BlueprintCallable)
    static void ResetLostWayCount();
    
    UFUNCTION(BlueprintCallable)
    static bool OpenTreasureBox(int32 levelId, int32 ObjectUniqueID);
    
    UFUNCTION(BlueprintCallable)
    static void IncreaseLostWayCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetVisitedMap(int32 MapID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetShowMapIcon(int32 MapID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLostWayCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsVisitedWorldMapPrologueMaskArea(EWorldMapPrologueMaskArea MaskArea);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsVisitedWorldMapMaskArea(EWorldMapMaskArea MaskArea);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsVisitedWorldMapIslandLayerArea(EWorldMapIslandLayerArea Area);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELEVEL_DARK_STATE GetCurrentLevelDarkState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetConnectionValue(int32 TownID);
    
    UFUNCTION(BlueprintCallable)
    static bool FindMapData(int32 levelId, FMapData& FoundMapData);
    
    UFUNCTION(BlueprintCallable)
    static bool DEBUG_CloseTreasureBox(int32 levelId, int32 ObjectUniqueID);
    
    UFUNCTION(BlueprintCallable)
    static void AddOrOverrideRevivalObjectSaveData(const FRevivalObjectSaveData& newData);
    
};


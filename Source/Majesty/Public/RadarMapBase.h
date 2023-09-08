#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGameColor.h"
#include "ENOTICE_TYPE.h"
#include "ERADARMAP_ICON_OBJ_TYPE.h"
#include "ERADARMAP_ICON_TYPE.h"
#include "KSUserWidgetBase.h"
#include "NoticeArgs.h"
#include "RadarMapDisplayData.h"
#include "RadarMapIconParam.h"
#include "RadarMapBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API URadarMapBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRadarMapIconParam> m_DestinationIconParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FRadarMapDisplayData> m_PositionOverlapPrevention;
    
public:
    URadarMapBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetRadarMapVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBackTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveIcon_AllSubStoryEventTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveIcon_AllMapObject();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveIcon_AllLevelTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveIcon_AllFieldNpc();
    
    UFUNCTION(BlueprintCallable)
    void RemoveDestinationIconParam(FName DestinationLabel);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllDestinationIconParam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RefreshLevelTriggerIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RefreshAllIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshSpawnComplete(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NextSwitch(bool& IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void ModifyDestinationIconParam(FName DestinationLabel, const FRadarMapIconParam& iconParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRadarMapIconParam GetDestinationIconParam(FName DestinationLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExistsDestinationIconParam(FName DestinationLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Debug_GetAllDestinationIconParam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ClearIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckTreasureBoxIcon(int32 TreasureIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckHiddenPointIcon(int32 PointIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddIcon(int32& attachIndex, FName DestinationLabel, ERADARMAP_ICON_TYPE IconType, ERADARMAP_ICON_OBJ_TYPE ObjType, uint8 LevelTriggerID, FName NextFieldName, FName TargetObjectName, FVector Position, int32 TreasureIndex, EGameColor gameColor, EGameColor RippleColor, int32 TargetCharaID);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddDestinationIconParam(FName DestinationLabel, const FRadarMapIconParam& iconParam);
    
};


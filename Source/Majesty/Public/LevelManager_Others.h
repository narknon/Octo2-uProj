#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EBPFuncReturnCode.h"
#include "EDBNoticeType.h"
#include "ELevelTriggerID.h"
#include "ENOTICE_TYPE.h"
#include "EPLACEMENT_TYPE.h"
#include "EquipLanternData.h"
#include "KSLevelPostProcessData.h"
#include "NoticeArgs.h"
#include "PlacementData.h"
#include "PlacementEventParamSet.h"
#include "PlayerLocation.h"
#include "ReminiscenceRestorePlacement.h"
#include "LevelManager_Others.generated.h"

class AEventTriggerBox;
class AKSCharacterBase;
class AKSObjectBase;
class ALevelSequenceActor;
class AMJLevelManager;
class AMJPathSplineObject;
class UMaterialParameterCollection;
class UObject;

UCLASS(Blueprintable)
class MAJESTY_API ALevelManager_Others : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKSLevelPostProcessData> m_PostProcessData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PostParam_VignetteWeakRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PostParam_VignetteNormalRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PostParam_FocalRegionWideAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PostParam_DofScaleWeakRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PostParam_DofScaleNormalRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PostParam_GainRateMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PostParam_GainRateMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Debug_BarNotPlaceCharaRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Debug_BarPlaceCharaRateOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_Debug_BarCharaList;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TWeakObjectPtr<AKSCharacterBase>> NPCList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, TWeakObjectPtr<AKSCharacterBase>> NPCIDList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AKSCharacterBase>> ReserveDestroyNpcList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AKSObjectBase*> MapObjectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AEventTriggerBox*> EventTriggerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ALevelSequenceActor*> PlacedSequencerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMJPathSplineObject*> m_apNPCPathList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChangeBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nTreasureBoxCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsGameOverPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTransitionToGameOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_LevelChangeByLinerShip;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_MPC_PGControl;
    
    ALevelManager_Others(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void VisibleEmotionAllNPC(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void VisibleCategoryAll(EPLACEMENT_TYPE eType, bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VisibleBarCharacter();
    
    UFUNCTION(BlueprintCallable)
    void VisibleAll(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void Visible(EPLACEMENT_TYPE eType, FName Label, bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnPlacementObject(EPLACEMENT_TYPE ePlacementType, FName TempDataLabel, FVector vSpawnPos, bool bRefreshFollowNPC, const FPlacementData& pPlacementData, bool bFadeChara, bool bForceSpawn);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool Spawn_TimeZoneChange(EPLACEMENT_TYPE eType, FName Label);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleBarChangeCharacter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupNPCPathList();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLevelChangeByLinerShip(bool bLinerShip);
    
    UFUNCTION(BlueprintCallable)
    void SetChangeBGM(bool change);
    
    UFUNCTION(BlueprintCallable)
    void SetBgmIdFromOuter(int32 BGMID);
    
    UFUNCTION(BlueprintCallable)
    void ResetInHouseSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetCameraLockParam();
    
    UFUNCTION(BlueprintCallable)
    void RequestRestorePlayerPlacement(const FReminiscenceRestorePlacement& restorePlacement);
    
    UFUNCTION(BlueprintCallable)
    void RequestMapInLocation(const FPlayerLocation& Location);
    
    UFUNCTION(BlueprintCallable)
    void RequestMapInEquipLantern(const FEquipLanternData& EquipLantern);
    
    UFUNCTION(BlueprintCallable)
    void RequestMapInCameraLock(const FVector& CameraLockPos, ELevelTriggerID LevelTriggerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveTargetNPC_ByID(int32 npdUniqID);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveObjectFromList(EPLACEMENT_TYPE eType, FName ObjLabel);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool RemoveList_TimeZoneChange(EPLACEMENT_TYPE eType, FName Label);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveList_TargetNPC(AKSCharacterBase* pNPC);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveList(EPLACEMENT_TYPE eType, FName ObjLabel);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveAllType();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveAll(EPLACEMENT_TYPE eType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RefreshSwoon(int32 NPCUniqID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool RefreshSpawn(UObject* WorldContextObject, FName levelName, bool FadeChara, bool ForceSpawn, bool NextTimeZone, bool bUpdateSwoon);
    
    UFUNCTION(BlueprintCallable)
    void RefreshPostProcess(bool bCheckEventPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshPlacedObject(EPLACEMENT_TYPE ePlacementType, FName TempDataLabel, bool bRefreshFollowNPC, bool bUpdateSwoon);
    
    UFUNCTION(BlueprintCallable)
    void RefreshCurrentCameraLock_Delay(ENOTICE_TYPE noticeType, const FNoticeArgs& Args);
    
    UFUNCTION(BlueprintCallable)
    void RefreshCurrentCameraLock();
    
    UFUNCTION(BlueprintCallable)
    void RefreshCameraLockByLevelTriggerId(ELevelTriggerID TriggerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshBarChangeCharacter();
    
    UFUNCTION(BlueprintCallable)
    void RecalcCollectedPostProcessVolumes();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Proc_OnFinishLoadFieldLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Proc_OnFinishFadeOut_Field_Last();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Proc_OnFinishFadeOut_Field_First();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Proc_OnFinishFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Proc_OnFieldLevelShown_Last();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Proc_OnFieldLevelShown_First();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Proc_OnBeginLevelChangeFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartGameOver();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnShownField_AfterBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishFadeIn_AfterBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishBattle();
    
    UFUNCTION(BlueprintCallable)
    void NotifyGameParamDB(FName dbName, EDBNoticeType notice);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTimeZoneThatCanPlaced(const FPlacementData& cPlaceData, bool NextTimeZone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTimeZoneCheck(const FPlacementData& cPlaceInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequestedMapInLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequestedMapInEquipLantern();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsGameOverLevelLoad();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsFindList(EPLACEMENT_TYPE eType, FName Label);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitOnBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HouseChangeVisible(bool inHouse, int32 floor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FReminiscenceRestorePlacement GetRestorePlayerPlacement();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelSequenceActor* GetPlacedSequencer(FName Label);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKSCharacterBase* GetNPCUniqID(int32 UniqID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMJPathSplineObject*> GetNPCPathList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetNpcLabels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKSCharacterBase* GetNPC(FName ObjLabel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetMJLevelManager(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, AMJLevelManager*& outLevelManager);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetMapObjectLabels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKSObjectBase* GetMapObject(FName Label);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerLocation GetMapInLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEquipLanternData GetMapInEquipLantern();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMapInCameraLockPos();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLevelChangeByLinerShip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetEventTriggerLabels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEventTriggerBox* GetEventTrigger(FName Label);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetDelayedSpawnNpcLabelList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBgmIdFromOuter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetBattleEnemyGroupID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AKSCharacterBase*> GetAllNPC();
    
    UFUNCTION(BlueprintCallable)
    void FloorVisibleChangeCheck(UPARAM(Ref) FName& PlacementLabel, int32 nCheckFloor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndBattleWipe(int32 GameOverCursor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyDontPlaceObject(EPLACEMENT_TYPE ePlacementType, FName TempDataLabel, bool bFadeChara, const TArray<int32>& anFollowNPCID, int32 nUniqUndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Debug_ShowPostProcessVolumeInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Debug_ChangeBarChara();
    
    UFUNCTION(BlueprintCallable)
    void CollectPostProcessVolumes();
    
    UFUNCTION(BlueprintCallable)
    void ClearRestorePlayerPlacement();
    
    UFUNCTION(BlueprintCallable)
    void ClearPostProcessVolumes();
    
    UFUNCTION(BlueprintCallable)
    void ClearMapInLocation();
    
    UFUNCTION(BlueprintCallable)
    void ClearMapInEquipLantern();
    
    UFUNCTION(BlueprintCallable)
    void ClearMapInCameraLock();
    
    UFUNCTION(BlueprintCallable)
    void ClearForciblyPostProcessVolumes();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearCollisionDisabledNPC();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckLevelTriggerEnable();
    
    UFUNCTION(BlueprintCallable)
    bool CheckExtendedSpawnByEndDelayCount(const FPlacementData& PlacementData, int32 nUnqIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckEventParamCondition(const FPlacementEventParamSet& eventParamSet);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeMapPreProcess(int32 NextMapID);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyScreenBrightness(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyCornerDarkness(bool bIsNormal, bool CheckEventPlaying);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool AddPlacedSequencerList(FName ObjLabel, ALevelSequenceActor* pObj);
    
    UFUNCTION(BlueprintCallable)
    bool AddNPCList(FName ObjLabel, AKSCharacterBase* pObj);
    
    UFUNCTION(BlueprintCallable)
    bool AddMapObjectList(FName ObjLabel, AKSObjectBase* pObj);
    
    UFUNCTION(BlueprintCallable)
    bool AddEventTriggerList(FName ObjLabel, AEventTriggerBox* pObj);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddCollisionDisabledNPC(int32 NPCUniqID);
    
};


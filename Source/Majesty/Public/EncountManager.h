#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AcqManagerBase.h"
#include "EAreaID.h"
#include "EBATTLE_ENCOUNT_TYPE.h"
#include "EBATTLE_START_TYPE.h"
#include "EBATTLE_VIEWER_MODE.h"
#include "EKSCharacterDir.h"
#include "ENOTICE_TYPE.h"
#include "EPlayableCharacterID.h"
#include "EncountFlagData.h"
#include "EncountFlagStartEndData.h"
#include "EncountTriggerData.h"
#include "NoticeArgs.h"
#include "RareEnemyParam.h"
#include "EncountManager.generated.h"

class AKSTriggerBase;

UCLASS(Blueprintable)
class MAJESTY_API AEncountManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsViewerMode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EncountPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterDir EncountDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TressaSpeialStepLevel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_RequestRestoreEncountVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayableCharacterID m_eFixFirstOrderPlayerID;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBATTLE_VIEWER_MODE Debug_BattleViewerMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Debug_EnemyGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Debug_EnemyIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Debug_PlacementID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug_UseBattleViewerParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug_UseBattleRandomParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug_UseExtraJob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Debug_RandomPartyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Debug_RandomPartyLevelRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Debug_RandomPartyNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPlayableCharacterID> Debug_BattleViewePartyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug_UseBattleViewerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Debug_BattleViewerMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug_IsWaterSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug_UseFixedSituation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBATTLE_START_TYPE Debug_FixedSituation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBATTLE_ENCOUNT_TYPE Debug_FixedBattleMode;
    
    AEncountManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartRobBattle(FName EnemyGroupID, EBATTLE_START_TYPE StartType, bool IsPlayEventAfterBattle, int32 nBattleMapIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartRevealBattle(FName EnemyGroupID, bool IsPlayEventAfterBattle, int32 nBattleMapIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartPreparationBattle(FName EnemyGroupID, bool IsPlayEventAfterBattle, int32 nBattleMapIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartInvadeBattle(FName EnemyGroupID, EBATTLE_START_TYPE StartType, bool IsPlayEventAfterBattle, int32 nBattleMapIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartEventBattle(FName EncountVolumeID, bool IsEventBGM, bool SingleBattle, EPlayableCharacterID CharacterID, bool IsNextEvent, EPlayableCharacterID FixFirstOrderPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartEightBattle(FName EnemyGroupID, bool IsPlayEventAfterBattle, int32 nBattleMapIndex, UPARAM(Ref) TArray<EPlayableCharacterID>& MainParty, UPARAM(Ref) TArray<EPlayableCharacterID>& SubParty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StartBoutBattle(FName EnemyGroupID, bool IsPlayEventAfterBattle, int32 nBattleMapIndex, EPlayableCharacterID eBattleCHaraID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SettingBattleParam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetLiquidationSkip(bool SkipLiquidation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetForceStopEncountStep(int32 nForceStopEncountStepCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetEncountVolume(FEncountTriggerData TriggerData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetAfterMainMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RestoreEncountVolumeFromSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RestoreEncount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetEncountVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetEncountStep();
    
    UFUNCTION(BlueprintCallable)
    void RequestRestoreEncountVolumeFromSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RefleshEncountVolume();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelChanged(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChkEncountFlagStartEndData(UPARAM(Ref) FEncountFlagStartEndData& chkEncountData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetViewerParameter(EBATTLE_VIEWER_MODE& eViewerMode, TArray<FName>& astrEnemyIDList, FName& strPlacementID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReplaceEncountFlagData(UPARAM(Ref) FEncountFlagData& chkData, UPARAM(Ref) FName& EncountTriggerLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetLiquidationSkip(bool& SkipLiquidation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayableCharacterID GetFixFirstOrderPlayer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetEncountType(EBATTLE_ENCOUNT_TYPE& EncountType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetEncountTriggerID(int32& TriggerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetEncountParameter(FName& strEnemyGroupID, bool& bIsEventBGM, EBATTLE_ENCOUNT_TYPE& eEncountType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetEncounterLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetEncountCameraRotation(FRotator& EncountSign);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetDangerLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FEncountTriggerData GetCurrentEncountTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBattleViewerMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GeRareEnemyParameter(FRareEnemyParam& cRareCatlinParam, FRareEnemyParam& cRareOctlinParam, EAreaID& eArea);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Debug_StartViewerBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Debug_SetFixedSituation(int32 Situation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Debug_SetFixedEnemyGroupID(FName GrounpID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Debug_SetFixedEncount(bool Fixed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Debug_SetEncountSoon(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Debug_SetEightBattle(int32 PartyLevel, int32 LevelRange, bool bEnableEightBattle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Debug_SetDisableStepRandom(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Debug_SetBattleViewerSituation(EBATTLE_START_TYPE FixedSituation, bool UseFixedSituation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Debug_SetBattleViewerParty(UPARAM(Ref) TArray<EPlayableCharacterID>& PartyList, bool UseBattleViewerParty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Debug_SetBattleViewerMode(EBATTLE_VIEWER_MODE ViewerMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Debug_SetBattleViewerMap(FName ViewerMapID, bool IsWaterSide, bool UseBattleViewerMap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Debug_SetBattleViewerEnemy(FName EnemyGroupID, UPARAM(Ref) TArray<FName>& EnemyIDList, FName PlacementID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Debug_SetBattleRandomParty(int32 PartyLevel, int32 LevelRange, int32 PartyNum, bool UseExtraJob, bool UseRandomParty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Debug_SetBattleMode(EBATTLE_ENCOUNT_TYPE eBattleMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void Debug_GetFixedEncount(bool& Fixed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void Debug_GetEncountSoon(bool& Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void Debug_GetEncountInfo(FString& outDebugInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void Debug_GetDisableStepRandom(bool& Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Debug_GetBattleRandomParty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName Debug_GetActiveEncountVolumeLabel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Debug_CreateRandomPartyData(int32 CharacterID, int32 PartyLevel, bool UseExtraJob);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CalcEncounterLevel(int32 levelId, int32& EncounterLevel, int32& DangerLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BattleStartExec();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BackupEncount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddEncountTrigger(AKSTriggerBase* Trigger);
    
};


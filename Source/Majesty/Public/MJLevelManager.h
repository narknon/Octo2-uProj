#pragma once
#include "CoreMinimal.h"
#include "DebugListMenuItem.h"
#include "ELEVEL_TYPE.h"
#include "ELevelLoaderNotice.h"
#include "ELevelTransitionNotice.h"
#include "ELevelTransitionType.h"
#include "ELevelTriggerID.h"
#include "LevelLoaderNoticeDelegateDelegate.h"
#include "LevelLoaderRequest.h"
#include "LevelManagerBase.h"
#include "LevelTransitionNoticeDelegateDelegate.h"
#include "NextMapInfo.h"
#include "MJLevelManager.generated.h"

class ALevelManager_Others;
class ULevelLoader;
class ULevelStreaming;

UCLASS(Blueprintable)
class MAJESTY_API AMJLevelManager : public ALevelManagerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelTransitionNoticeDelegate OnNotifyLevelTransition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelLoaderNoticeDelegate OnNotifyLevelLoader;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelTriggerID m_RequestLevelTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_ChangeBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_UseFadeUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_PrevLevelInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_PrevLevelSea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsGameOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelManager_Others* m_LvlMng_Others;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNextMapInfo m_NextMapInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsFirstVisitLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelLoader* m_Debug_BattleLevelLoader;
    
public:
    AMJLevelManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool SwitchActiveLevel(ELEVEL_TYPE levelType, int32 MapIndex, bool useFade);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartFadeIn();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSwitchActiveParam(int32 MapIndex, ELEVEL_TYPE NextLevelType);
    
    UFUNCTION(BlueprintCallable)
    void SetRequestedLevelTriggerID(ELevelTriggerID TriggerID);
    
    UFUNCTION(BlueprintCallable)
    void SetNextMapInfoByName(FName NextMapName, ELevelTriggerID ReqTrigger, bool UseFadeUI, bool ChangeBGM, ELEVEL_TYPE NextLevelType);
    
    UFUNCTION(BlueprintCallable)
    void SetNextMapInfoByID(int32 NextMapID, ELevelTriggerID ReqTrigger, bool UseFadeUI, bool ChangeBGM, ELEVEL_TYPE NextLevelType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetFirstVisited(bool bFirstVisited);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SaveVisitedMap(FName SaveLevel);
    
    UFUNCTION(BlueprintCallable)
    void RequestRevealBattle(bool bReveal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RequestLoadFieldLevel(FName Map, ELevelTriggerID TriggerID, bool Fade, bool ChangeBGM);
    
    UFUNCTION(BlueprintCallable)
    void RequestLevelChange();
    
private:
    UFUNCTION(BlueprintCallable)
    void Proc_AfterUnloadLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaderCommandCompleted(int32 loaderId, const FLevelLoaderRequest& request);
    
    UFUNCTION(BlueprintCallable)
    void NotifyLevelTransition(FName levelId, ELEVEL_TYPE levelType, ELevelTransitionNotice notice);
    
    UFUNCTION(BlueprintCallable)
    void NotifyLevelLoader(FName levelName, ELEVEL_TYPE levelType, ELevelLoaderNotice notice);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameLevelChanging();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsRunningFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsRunningFadeIn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrevLevelSea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrevLevelInGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelChangeFinishFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsImmovableByFieldChanging();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadeOutState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFadeInAllowed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChanging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseFadeUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELevelTransitionType GetTransitionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELevelTriggerID GetRequestedLevelTriggerID() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNextLevelId() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelManager_Others* GetLevelManagerOthers() const;
    
    UFUNCTION(BlueprintCallable)
    ULevelStreaming* GetFieldLevelStreaming();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetChangeBGM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELEVEL_TYPE GetActiveLevelType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool FinishBattleLevel();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_ShowManagerInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetMemProf_OnUnloadLevel(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetMemProf_OnEndChangeLevel(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetMemProf_OnBattleEnd(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetForceRevealBattleMap(bool bForce);
    
private:
    UFUNCTION(BlueprintCallable)
    static void Debug_SetForceLostWay(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_RequestSimulatedChangLevel();
    
public:
    UFUNCTION(BlueprintCallable)
    void Debug_RequestOverrideBattleMap(FName battleMapName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Debug_OnTransitionEvent(FName levelId, ELEVEL_TYPE levelType, ELevelTransitionNotice notice);
    
private:
    UFUNCTION(BlueprintCallable)
    bool Debug_ChangeLevelOnDecided(const FDebugListMenuItem& menuItem);
    
    UFUNCTION(BlueprintCallable)
    void Debug_ChangeLevelOnClosed();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ChangeFieldLevelWithParams(FName levelId, ELevelTriggerID levelTrgId, bool useFade, bool ChangeBGM);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeFieldLevel(FName levelId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallLevelTransision(ELEVEL_TYPE levelType, ELevelTransitionNotice notice);
    
};


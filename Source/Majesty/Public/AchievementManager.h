#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "EAchievementStatus.h"
#include "ENOTICE_TYPE.h"
#include "MJFieldCommandType.h"
#include "NoticeArgs.h"
#include "AchievementManager.generated.h"

class AAchievementManager;
class UServiceConnecter;

UCLASS(Blueprintable)
class MAJESTY_API AAchievementManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UServiceConnecter* m_Service;
    
public:
    AAchievementManager(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldMapOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnUnLockAchievement();
    
    UFUNCTION(BlueprintCallable)
    void OnTitleScene(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnSwoonNpcByFc(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnSubStoryRecordOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnSubStoryClear(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnStoryRecordReOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnStoryRecordOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnStartFieldMainSequenceAfterExBoss(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnRefreshFollowCharacter(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnPartyMemberChangeMenuOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnOpenEndCardEpilogue(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnOpenEndCard(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnMusicRecordOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnMainStoryTaskClear(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnMainStoryClear(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnJoinedCharacter(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnJobMenuOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnItemMenuOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnInformationFieldCommandOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnGetItem(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishFieldCommand(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipMenuOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnCreatedPlayerController(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeVisitedLevel(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnBreak(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnBoostAttack(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginLinerShip(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnAttack(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnAcquisitionAdvancedAbility(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnAcquisitionAbility(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityMenuOpen(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AAchievementManager* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAchievementStatus GetAchievementStatus(FName achiveLabel);
    
private:
    UFUNCTION(BlueprintCallable)
    void DelayOnEpilogueEndCardUnlockAchievement(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void DelayOnEndCardUnlockAchievement(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
public:
    UFUNCTION(BlueprintCallable)
    void Debug_ShowDebugInfo(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetFieldCommandSuccessCount(MJFieldCommandType FCType, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    bool Debug_ResetAllAchievement();
    
    UFUNCTION(BlueprintCallable)
    bool Debug_ForceUnlockAchievement(FName AchieveLabel);
    
    UFUNCTION(BlueprintCallable)
    bool Debug_ForceLockAchievement(FName AchieveLabel);
    
};


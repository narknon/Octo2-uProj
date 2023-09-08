#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AchievementData.h"
#include "NoticeArgs.h"
#include "EvaluateAchievementFunctions.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UEvaluateAchievementFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEvaluateAchievementFunctions();
    UFUNCTION(BlueprintCallable)
    static bool EvaluateVisitLevelCount(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateSwoonNpcUniqueCount(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateSubStoryClearCount(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateSpecifySpecialItemCount_MusicRecord(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateSpecifySpecialItemCount_BattleTestedWeapon(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateSpecifySpecialItemCount(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateOwnShip(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateOpenEndCard(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateMaxDamage(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateMainStoryRecordReOpen(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateMainStoryClearCount(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateMainStoryClear(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateLinerShipCount(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateJoinedPlayerCharacterCount(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateJobItemCount(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateInformationFieldCommandSuccessCount(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateFollowingCount(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateExtraStoryRecordReOpen(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateEpilogueClear(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateClearExBoss(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateBreakCount(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateBoostAttackCount(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateAllAchievement(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateAcquisitonDivineAbilityCount(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateAcquisitonAdvancedAbilityCount(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateAcquisitonAbilityCount(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateAcquisitonAbility(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool CalculateMainStoryProgress(const FAchievementData& achieve, const FNoticeArgs& NoticeArgs, float& outProgress);
    
};


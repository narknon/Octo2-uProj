#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BarMenuStoryItem.h"
#include "EBARMENU_STORY_SELECT_ITEM_TYPE.h"
#include "EEXTRA_STORY_CATEGORY.h"
#include "EPlayableCharacterID.h"
#include "EStoryState.h"
#include "MAINMENU_MISSION_RECORD_DATA.h"
#include "MJListWidgetItemData.h"
#include "WorldMapDestinationData.h"
#include "StoryFunction.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UStoryFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStoryFunction();
    UFUNCTION(BlueprintCallable)
    static bool UpdateMainStoryProgressOnPlayEvent(FName mainStoryTaskLabel);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateMainStoryProgressCount(FName MainStoryLabel, int32 progressCount);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateFixedFieldBgmOnChangeLevel(FName MainStoryTask);
    
private:
    UFUNCTION(BlueprintCallable)
    static void UpdateExtraStoryProgressCount(EEXTRA_STORY_CATEGORY ExStoryCategory, int32 progressCount);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateCharaMainStoryProgressCount(int32 PlayerCharaId, int32 progressCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StartSubStory(FName subStoryLabel);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayingEpilogue(bool bPlaying);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMainStoryTaskViewFlag(FName mainStoryTaskLabel, bool playingFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetMainStoryEventFlags(int32 MainStoryId, bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetMainStoryAllTaskCleared(int32 MainStoryId, bool bCleared);
    
    UFUNCTION(BlueprintCallable)
    static bool ResumeMainStorySpecifiedChara(int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable)
    static bool ResumeMainStory(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable)
    static void ResetMainStoryData(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable)
    static void RecoveryConnectionOnPrologueTown(EPlayableCharacterID PlayerCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeWorldMapDestinationList(TArray<FWorldMapDestinationData>& outDestData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText MakeSubStoryStartConditionFailedText(FName subStoryLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSubStoryRecordAreaOpend(int32 AreaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReleasedMerchantShip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingPrologue(int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingOverallFinalChapter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingMainScenarioInCurrentLevel(int32 characterScenarioType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingEpilogue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOverallFinalChapterInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMapRelatedCharaPrologue(FName levelName, EPlayableCharacterID CharaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompletedSubStory(FName subStoryLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompletedOverallFinalChapter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompletedAllCouplingStory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnyCharaPlayingPrologue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnyCharaCompletedFinalChapter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAllCharaCompletedFinalChapter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Is1stSelectedCharaCompletedFinalChapter();
    
    UFUNCTION(BlueprintCallable)
    static bool InterruptMainStorySpecifiedChara(int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable)
    static void InterruptMainStoryForSubMembers();
    
    UFUNCTION(BlueprintCallable)
    static bool InterruptMainStory(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSubStoryState(FName subStoryLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayingPrologueReminiscenceIndex();
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayingMainStoryInLevel(UPARAM(Ref) TArray<int32>& outMainStoryIdList, FName levelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayingMainStoryID(int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlayablePrologueList(UPARAM(Ref) TArray<int32>& outPlayableCharaID);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlayableMainStoryListInWorldMap(UPARAM(Ref) TArray<FBarMenuStoryItem>& outMainStoryList, FName WorldMapLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMainStoryTaskTargetCharacterId(FName mainStoryTaskLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBARMENU_STORY_SELECT_ITEM_TYPE GetMainStoryStateInStorySelectMenu(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMainStoryRecordGaugeLength(int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMainStoryProgressCountFromStoryId(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMainStoryProgressCount(int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable)
    static FName GetFixedFieldBgm(FName levelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetExtraStoryRecordGaugeLength(EEXTRA_STORY_CATEGORY exCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetExtraStoryProgressCount(EEXTRA_STORY_CATEGORY ExStoryCategory);
    
    UFUNCTION(BlueprintCallable)
    static void GetCharaIdListPlayingMainStoryInLevel(UPARAM(Ref) TArray<int32>& outCharaIdList, FName levelName, bool includeInterruption);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllCompletedMainStoryIds(TArray<int32>& IDs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetActiveMainStoryID(int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetupJustBeforeFinalChapter(bool bPartnerA);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_ModifyMainStoryState(int32 MainStoryId, EStoryState storyState, bool bPlayLastEvent);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_CompleteMainStoryInProgress(int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable)
    static void CreateSubStoryRecordDataListItem(UPARAM(Ref) TArray<FMAINMENU_MISSION_RECORD_DATA>& outRecordData, int32 AreaID);
    
    UFUNCTION(BlueprintCallable)
    static void CreateSubStoryAllRecordDataListItem(UPARAM(Ref) TArray<FMAINMENU_MISSION_RECORD_DATA>& outRecordData);
    
    UFUNCTION(BlueprintCallable)
    static void CreateMainStoryRecordDataListItemByStoryId(UPARAM(Ref) TArray<FMAINMENU_MISSION_RECORD_DATA>& outTaskInfo, UPARAM(Ref) TArray<FMJListWidgetItemData>& outListItemData, int32 MainStoryId, int32 CategoryId);
    
    UFUNCTION(BlueprintCallable)
    static void ControlMainStoryEventObjectOnInterruptFromBar(int32 MainStoryId, bool bInterrupt);
    
    UFUNCTION(BlueprintCallable)
    static void ControlMainStoryEventObjectOnInterrupt(FName MainStoryLabel, bool bInterrupt, bool bRefreshObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompleteSubStory(FName subStoryLabel, int32 ClearIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompleteFakeSubStory(FName subStoryLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckSubStoryStartCondition(FName subStoryLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanPlayMainStory(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanOpenTutorialByMap(FName WorldMapLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanOpenStorySelectByBar(FName WorldMapLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanOpenMainStorySelectMenuByMap(FName WorldMapLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CalcRecoveryRelationshipCost(int32 TownID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalcMainStoryTotalProgress();
    
};


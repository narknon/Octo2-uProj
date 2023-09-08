#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EBPFuncReturnCode.h"
#include "EDBNoticeType.h"
#include "EEXTRA_STORY_CATEGORY.h"
#include "EPlayableCharacterID.h"
#include "ESTORY_TASK_TYPE.h"
#include "EStoryState.h"
#include "MainMissionData.h"
#include "MainStoryData.h"
#include "SubMissionData.h"
#include "StoryDataUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UStoryDataUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UStoryDataUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 SubStoryLabelToId(FName subStoryLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName SubStoryIdToLabel(int32 subStoryId);
    
    UFUNCTION(BlueprintCallable)
    static bool StartMainStoryFromNewGame(int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshMainStoryRelease(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshAllMainStoryState();
    
    UFUNCTION(BlueprintCallable)
    static void RefreshAllMainStoryRelease();
    
    UFUNCTION(BlueprintCallable)
    static void NotifySubStoryDB(FName dbName, EDBNoticeType notice);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyMainStoryDB(FName dbName, EDBNoticeType notice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 MainStoryTaskLabelToId(FName mainStoryTaskLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MainStoryTaskIdToLabel(int32 mainStoryTaskId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 MainStoryLabelToId(FName MainStoryLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MainStoryIdToLabel(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSubStoryDataExists(FName subStoryLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStorySealed(EStoryState storyState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStoryCompleted(EStoryState storyState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMerchantSubStory(FName subStoryLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMainStoryTaskDataExists(FName mainStoryTaskLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMainStoryPrologue(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMainStoryPlayableStateById(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompletedMainStoryCharacterFinalChapter(int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnyCharacterPlayingMainStory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetTutorailSubStoryLabels();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetSubStoryTitleTextLabel(FName subStoryLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSubStoryRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSubStoryNumInAllArea();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSubStoryNumByAreaId_WithoutMerchantSubStory(int32 AreaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSubStoryNumByAreaId(int32 AreaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSubStoryMissionIndex(FName subStoryLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetSubStoryLabelsInAllArea();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetSubStoryLabelsByAreaId(int32 AreaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSubStoryLabelsArrayIndex(FName subStoryLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetSubStoryLabelByAreaIdAndArrayIndex(int32 AreaID, int32 ArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    static void GetSubStoryDataByRowName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FSubMissionData& outStoryData, FName subStoryLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetSubStoryCommonLabels();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSubStoryAreaId(FName subStoryLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetMainStoryTaskTitleTextLabel(FName mainStoryTaskLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMainStoryTaskRowNames(TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMainStoryTaskProgressValue(FName mainStoryTaskLabel);
    
    UFUNCTION(BlueprintCallable)
    static void GetMainStoryTaskLabelsByCharaIdWithBranch(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, TArray<FName>& outLabelList, int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetMainStoryTaskLabelsByCharaId(int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMainStoryTaskLabelList(TArray<FName>& outTaskLabelList, int32 MainStoryId, ESTORY_TASK_TYPE TaskType);
    
    UFUNCTION(BlueprintCallable)
    static void GetMainStoryTaskDataByRowName(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FMainMissionData& outStoryData, FName mainStoryTaskLabel);
    
    UFUNCTION(BlueprintCallable)
    static FName GetMainStoryNextTask(FName mainStoryTaskLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetMainStoryLabelFromTask(FName mainStoryTaskLabel);
    
    UFUNCTION(BlueprintCallable)
    static void GetMainStoryIdListInWorldMap(TArray<int32>& outMainStoryIdList, FName WorldMapLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMainStoryGaugeMaxValue(EPlayableCharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMainStoryDifficultyPoint(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMainStoryDataById(int32 MainStoryId, FMainStoryData& OutData);
    
    UFUNCTION(BlueprintCallable)
    static void GetMainStoryCurrentTaskData(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, FMainMissionData& outStoryData, int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMainStoryCharacterPrologueId(int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMainStoryCharacterFinalChapterId(int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMainStoryCharacterAllPrologueId(TArray<int32>& outPrologueId, int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetMainStoryAllLabels();
    
    UFUNCTION(BlueprintCallable)
    static void GetFastTravelPermissionByCharaId(TEnumAsByte<EBPFuncReturnCode::Type>& returnCode, bool& outUnavailableFastTravel, FName& outAuthorizationFastTravel, int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetExtraStoryIdByExCategory(TArray<int32>& outMainStoryId, EEXTRA_STORY_CATEGORY exCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetExtraStoryGaugeMaxValue(EEXTRA_STORY_CATEGORY extraStory);
    
    UFUNCTION(BlueprintCallable)
    static bool GetExtraStoryAllId(TArray<int32>& outMainStoryId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCharacterMainStoryIdForStoryRecord(TArray<int32>& outMainStoryId, int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCharacterMainStoryAllId(TArray<int32>& outMainStoryId, int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetChapterText(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAllSubStoryIds(TArray<int32>& outIds);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetReleaseAllStoryRecord(bool bRelease);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_IsReleasedAllStoryRecord();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_IsIgnoreMainStoryReleased();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_IgnoreMainStoryReleased(bool bIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMainStoryReleaseConditionById(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMainStoryReleaseConditionByData(const FMainStoryData& MainStoryData);
    
};


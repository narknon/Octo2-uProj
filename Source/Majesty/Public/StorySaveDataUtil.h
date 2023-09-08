#pragma once
#include "CoreMinimal.h"
#include "EStoryState.h"
#include "MainStorySaveData.h"
#include "MainStoryTaskSaveData.h"
#include "SaveDataUtilBase.h"
#include "StorySaveDataUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UStorySaveDataUtil : public USaveDataUtilBase {
    GENERATED_BODY()
public:
    UStorySaveDataUtil();
    UFUNCTION(BlueprintCallable)
    static void SetPlayingMainStoryID(int32 PlayerCharaId, int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMainStoryTaskTimeZoneOnPlayed(int32 mainStoryTaskId, int32 TimezoneType, int32 timeZonePosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetMainStoryTaskEventObjectFlag(int32 mainStoryTaskId, int32 Index, int32 FlagID, bool Val);
    
    UFUNCTION(BlueprintCallable)
    static void SetMainStoryTaskCleared(int32 mainStoryTaskId, bool bCleared);
    
    UFUNCTION(BlueprintCallable)
    static void SetMainStoryState(int32 MainStoryId, EStoryState State);
    
    UFUNCTION(BlueprintCallable)
    static void SetMainStoryRecordNew(int32 mainStoryTaskId, bool bNew);
    
    UFUNCTION(BlueprintCallable)
    static void SetMainStoryCurrentTaskID(int32 MainStoryId, int32 CurrentTaskID);
    
    UFUNCTION(BlueprintCallable)
    static void SetInterruptedMainStoryID(int32 PlayerCharaId, int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable)
    static void SetConfirmedMainStory(int32 MainStoryId, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoInterruptMainStoryId_ByPrologue(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoInterruptMainStoryId(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUnPlayedMainStory(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMainStoryTaskCleared(int32 mainStoryTaskId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsConfirmedMainStory(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompletedMainStory(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayingMainStoryID(int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMainStoryTaskTimeZoneTypeOnPlayed(int32 mainStoryTaskId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMainStoryTaskTimeZonePositionOnPlayed(int32 mainStoryTaskId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMainStoryTaskSaveData(int32 mainStoryTaskId, FMainStoryTaskSaveData& outMainStoryTaskSaveData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMainStoryTaskEventObjectFlag(int32 mainStoryTaskId, int32 Index, int32& FlagID, bool& Val);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStoryState GetMainStoryState(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMainStorySaveData(int32 MainStoryId, FMainStorySaveData& outMainStorySaveData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMainStoryRecordNew(int32 mainStoryTaskId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMainStoryCurrentTaskID(int32 MainStoryId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInterruptedMainStoryID(int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAutoInterruptMainStoryId_ByPrologue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAutoInterruptMainStoryId();
    
    UFUNCTION(BlueprintCallable)
    static bool GetAllPlayingMainStoryIDs(TArray<int32>& outMainStoryIds);
    
    UFUNCTION(BlueprintCallable)
    static void ClearPlayingMainStoryID(int32 PlayerCharaId);
    
    UFUNCTION(BlueprintCallable)
    static void ClearInterruptedMainStoryID(int32 PlayerCharaId);
    
};


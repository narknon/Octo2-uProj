#pragma once
#include "CoreMinimal.h"
#include "EPARTY_CHAT_STATE.h"
#include "SaveDataUtilBase.h"
#include "PartyChatSaveDataUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UPartyChatSaveDataUtil : public USaveDataUtilBase {
    GENERATED_BODY()
public:
    UPartyChatSaveDataUtil();
    UFUNCTION(BlueprintCallable)
    static void SetState(int32 PartyChatId, EPARTY_CHAT_STATE State);
    
    UFUNCTION(BlueprintCallable)
    static bool SetPartyChatTimeZoneOnPlayed(int32 PartyChatId, int32 TimezoneType, int32 timeZonePosition);
    
    UFUNCTION(BlueprintCallable)
    static void SetPartyChatLevelOnPlayed(int32 PartyChatId, int32 levelId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetPartyChatEventObjectFlag(int32 PartyChatId, int32 FlagID, bool Val);
    
    UFUNCTION(BlueprintCallable)
    static void SetNewFlag(int32 PartyChatId, bool bNew);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPartyChatFlag(int32 PartyChatId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPARTY_CHAT_STATE GetState(int32 PartyChatId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPartyChatTimeZoneTypeOnPlayed(int32 PartyChatId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPartyChatTimeZonePositionOnPlayed(int32 PartyChatId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPartyChatLevelOnPlayed(int32 PartyChatId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetPartyChatLabelsRelatedMainStoryWithReleasedState(FName MainStoryLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPartyChatEventObjectFlag(int32 PartyChatId, int32& FlagID, bool& Val);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetNewFlag(int32 PartyChatId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLevelChangeCounterForFinalChapterHintPartyChat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsUnRelease(int32 PartyChatId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsRelease(int32 PartyChatId);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetLevelChangeCounterForFinalChapterHintPartyChat(int32 newCount);
    
};


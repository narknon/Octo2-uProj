#pragma once
#include "CoreMinimal.h"
#include "DataTableUtilityBase.h"
#include "EDBNoticeType.h"
#include "ActivityDataUtility.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UActivityDataUtility : public UDataTableUtilityBase {
    GENERATED_BODY()
public:
    UActivityDataUtility();
    UFUNCTION(BlueprintCallable)
    static void RequestResetAllActiveActivities();
    
    UFUNCTION(BlueprintCallable)
    static void RequestRefreshActivity();
    
    UFUNCTION(BlueprintCallable)
    static void RequestNewGame();
    
    UFUNCTION(BlueprintCallable)
    static void NotifyActivityDB(FName dbName, EDBNoticeType notice);
    
    UFUNCTION(BlueprintCallable)
    static bool IsNotClearedAnyActivityTask();
    
    UFUNCTION(BlueprintCallable)
    static bool IsAllActivityTaskCleared();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetAllMainStoryLabelRelatedActivity();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetActivityAvailability(const FString& activityId, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_ResumeActivity(const FString& activityId);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_ResetAllMainStory();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_OutputAllMainStory();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_ClearAllMainStory();
    
};


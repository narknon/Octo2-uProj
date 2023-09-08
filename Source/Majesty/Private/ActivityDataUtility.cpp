#include "ActivityDataUtility.h"

UActivityDataUtility::UActivityDataUtility() {
}

void UActivityDataUtility::RequestResetAllActiveActivities() {
}

void UActivityDataUtility::RequestRefreshActivity() {
}

void UActivityDataUtility::RequestNewGame() {
}

void UActivityDataUtility::NotifyActivityDB(FName dbName, EDBNoticeType notice) {
}

bool UActivityDataUtility::IsNotClearedAnyActivityTask() {
    return false;
}

bool UActivityDataUtility::IsAllActivityTaskCleared() {
    return false;
}

TArray<FName> UActivityDataUtility::GetAllMainStoryLabelRelatedActivity() {
    return TArray<FName>();
}

void UActivityDataUtility::Debug_SetActivityAvailability(const FString& activityId, bool bEnabled) {
}

void UActivityDataUtility::Debug_ResumeActivity(const FString& activityId) {
}

void UActivityDataUtility::Debug_ResetAllMainStory() {
}

void UActivityDataUtility::Debug_OutputAllMainStory() {
}

void UActivityDataUtility::Debug_ClearAllMainStory() {
}



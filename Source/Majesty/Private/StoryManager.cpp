#include "StoryManager.h"

AStoryManager::AStoryManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AStoryManager::StartMainStory(FName MainStoryLabel) {
    return false;
}



void AStoryManager::OnFinishSubStoryStartEvent_Implementation() {
}

void AStoryManager::OnFinishSubStoryCompleteEvent_Implementation() {
}

void AStoryManager::OnFinishMainStoryEvent(ENOTICE_TYPE noticeType, const FNoticeArgs& Args) {
}


void AStoryManager::Debug_ShowDebugInfo(bool bEnable) {
}

void AStoryManager::Debug_PlayMainStoryTaskEvent(int32 mainStoryTaskId, bool bFromStartingTask) {
}


void AStoryManager::CallbackOnDialogCloseFinish(int32 SelectIndex) {
}

void AStoryManager::CallbackEventEnd(ENOTICE_TYPE noticeType, const FNoticeArgs& Args) {
}



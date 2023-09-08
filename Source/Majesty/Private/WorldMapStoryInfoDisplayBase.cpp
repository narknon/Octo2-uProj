#include "WorldMapStoryInfoDisplayBase.h"

UWorldMapStoryInfoDisplayBase::UWorldMapStoryInfoDisplayBase() {
    this->m_IsFocus = false;
    this->m_IsForceHidden = false;
    this->m_StoryInfoTextWidget = NULL;
}



void UWorldMapStoryInfoDisplayBase::ScrubAnimation(float ElapsedTime) {
}


bool UWorldMapStoryInfoDisplayBase::GetIsForceHidden() const {
    return false;
}

bool UWorldMapStoryInfoDisplayBase::GetIsFocus() const {
    return false;
}




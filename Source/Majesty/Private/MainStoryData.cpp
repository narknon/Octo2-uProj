#include "MainStoryData.h"

FMainStoryData::FMainStoryData() {
    this->ID = 0;
    this->PlayerCharaId = EPlayableCharacterID::eNONE;
    this->ReleaseNoticeFlag = false;
    this->SealFlag = 0;
    this->StoryCategory = EMAIN_STORY_CATEGORY::NONE;
    this->ExStoryCategory = EEXTRA_STORY_CATEGORY::NONE;
    this->ChapterIndex = 0;
    this->ClearDifficultyPoint = 0;
    this->RecoverSwoonOnClear = false;
}


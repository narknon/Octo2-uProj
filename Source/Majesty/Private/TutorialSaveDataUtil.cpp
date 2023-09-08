#include "TutorialSaveDataUtil.h"

UTutorialSaveDataUtil::UTutorialSaveDataUtil() {
}

void UTutorialSaveDataUtil::SetTutorialListFlagFromLabel(FName FlagPartLabel, bool Flag) {
}

void UTutorialSaveDataUtil::SetTutorialListFlag(ETUTORIAL_TYPE Type, bool Flag) {
}

void UTutorialSaveDataUtil::SetOpenedTutorialFromLabel(FName FlagPartLabel, bool Flag) {
}

void UTutorialSaveDataUtil::SetOpenedTutorial(ETUTORIAL_TYPE Type, bool Flag) {
}

void UTutorialSaveDataUtil::SetCanDisplayBranchMainStory(int32 CharacterID, bool bDisplay) {
}

bool UTutorialSaveDataUtil::IsViewTutorialListFromLabel(FName FlagPartLabel) {
    return false;
}

bool UTutorialSaveDataUtil::IsViewTutorialList(ETUTORIAL_TYPE Type) {
    return false;
}

bool UTutorialSaveDataUtil::IsOpenedTutorial(ETUTORIAL_TYPE Type) {
    return false;
}

bool UTutorialSaveDataUtil::CanDisplayBranchMainStory(int32 CharacterID) {
    return false;
}



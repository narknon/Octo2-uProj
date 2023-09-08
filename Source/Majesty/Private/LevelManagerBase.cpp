#include "LevelManagerBase.h"

ALevelManagerBase::ALevelManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ALevelManagerBase::RegisterSubLevelSuffix(FName subLevelSuffix) {
}

bool ALevelManagerBase::IsLevelShown(FName levelName) const {
    return false;
}

bool ALevelManagerBase::IsLevelLoaded(FName levelName) const {
    return false;
}



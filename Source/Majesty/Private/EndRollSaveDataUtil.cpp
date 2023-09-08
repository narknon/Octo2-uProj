#include "EndRollSaveDataUtil.h"

UEndRollSaveDataUtil::UEndRollSaveDataUtil() {
}

EEndRollSegmentSet UEndRollSaveDataUtil::GetClearedEndRollSegmentByIndex(int32 Index) {
    return EEndRollSegmentSet::ER_NONE;
}

bool UEndRollSaveDataUtil::AddClearedMainStory(EEndRollSegmentSet Segment) {
    return false;
}



#include "EndRollSegmentPlayData.h"

UEndRollSegmentPlayData::UEndRollSegmentPlayData() {
}

EEndRollSegmentSet UEndRollSegmentPlayData::GetSegmentSetID() const {
    return EEndRollSegmentSet::ER_NONE;
}

FName UEndRollSegmentPlayData::GetEventImage() const {
    return NAME_None;
}

bool UEndRollSegmentPlayData::GetBattleRevivalFlag() const {
    return false;
}



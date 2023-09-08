#include "KSObjectData.h"

FKSObjectData::FKSObjectData() {
    this->ID = 0;
    this->ObjectType = 0;
    this->IsCollision = false;
    this->IsPutOnGround = false;
    this->IsMoney = false;
    this->HaveItemCnt = 0;
    this->HideDialog = false;
    this->IsRevivalByLevelChange = false;
}


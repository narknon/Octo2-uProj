#include "PlayerLocation.h"

FPlayerLocation::FPlayerLocation() {
    this->levelId = 0;
    this->RecentLevelTriggerId = 0;
    this->Dir = EKSCharacterDir::FRONT;
}


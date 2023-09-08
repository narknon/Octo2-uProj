#include "KSObjectBase.h"

AKSObjectBase::AKSObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsMoveEnd = false;
    this->Dir = EKSCharacterDir::FRONT;
    this->HouseChangeVisibleFlag = false;
    this->m_ObjType = EOBJ_TYPE::NORMAL_OBJ;
    this->m_ObjUniqueID = 0;
}

void AKSObjectBase::SetupObjectAfterSpawn(FName PlacementLabel, EOBJ_TYPE ObjType, FVector spawnPos) {
}


void AKSObjectBase::SetObjectUniqueID(int32 UniqueId) {
}

void AKSObjectBase::SetObjectEnable_Implementation(bool Enable) {
}

void AKSObjectBase::SetMoveEnd() {
}

void AKSObjectBase::SetHouseChangeVisibleFlag(bool isVisble) {
}

void AKSObjectBase::SetDir(EKSCharacterDir eDir) {
}

bool AKSObjectBase::Move(const FVector& Location, float Sec) {
    return false;
}

bool AKSObjectBase::IsOpenedTreasureBox_Implementation() {
    return false;
}

FName AKSObjectBase::GetPlacementLabel() const {
    return NAME_None;
}

FName AKSObjectBase::GetOpenText_Implementation() {
    return NAME_None;
}

int32 AKSObjectBase::GetObjectUniqueID() const {
    return 0;
}

EOBJ_TYPE AKSObjectBase::GetObjectType() const {
    return EOBJ_TYPE::NORMAL_OBJ;
}

bool AKSObjectBase::GetHouseChangeVisibleFlag() {
    return false;
}

void AKSObjectBase::CbLoadedAssets(TArray<UObject*>& objList) {
}

void AKSObjectBase::ActionEnter_Implementation() {
}



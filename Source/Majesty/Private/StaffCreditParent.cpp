#include "StaffCreditParent.h"

UStaffCreditParent::UStaffCreditParent() {
    this->creditTable = NULL;
    this->totalStagingTime = 0.00f;
    this->ViewportHeight = 0.00f;
    this->DisolvePartsTime = 0.00f;
}




bool UStaffCreditParent::SetupStaffCredit() {
    return false;
}

void UStaffCreditParent::SetTotalStagingTime(float NewTotalStagingTime) {
}

void UStaffCreditParent::SetNextState_Local(EStaffCreditState NextState) {
}

void UStaffCreditParent::SetDataTable(UDataTable* NewCreditTable) {
}




bool UStaffCreditParent::IsDisplayDebugInfo() {
    return false;
}

EStaffCreditState UStaffCreditParent::GetPrevState_Local() const {
    return EStaffCreditState::NONE;
}

EStaffCreditState UStaffCreditParent::GetCurrentState_Local() const {
    return EStaffCreditState::NONE;
}

void UStaffCreditParent::DebugUpdate() {
}


bool UStaffCreditParent::CheckCompleteScroll() {
    return false;
}




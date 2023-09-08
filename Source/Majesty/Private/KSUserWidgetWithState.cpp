#include "KSUserWidgetWithState.h"

UKSUserWidgetWithState::UKSUserWidgetWithState() {
}

void UKSUserWidgetWithState::UpdateState() {
}

void UKSUserWidgetWithState::SetNextState(int32 NextState) {
}

void UKSUserWidgetWithState::OnUpdateState_Implementation(int32 CurrentState) {
}

void UKSUserWidgetWithState::OnEndState_Implementation(int32 CurrentState, int32 NextState) {
}

void UKSUserWidgetWithState::OnBeginState_Implementation(int32 PrevState, int32 CurrentState) {
}

bool UKSUserWidgetWithState::IsClosingState_Implementation(int32 State) {
    return false;
}

void UKSUserWidgetWithState::InitState() {
}

int32 UKSUserWidgetWithState::GetPrevState() const {
    return 0;
}

int32 UKSUserWidgetWithState::GetNextState() const {
    return 0;
}

int32 UKSUserWidgetWithState::GetCurrentState() const {
    return 0;
}



#include "SplineMoveComponent.h"

USplineMoveComponent::USplineMoveComponent() {
    this->m_bNearPlayer = false;
    this->m_fPathZ = 1.00f;
    this->m_fPow = 1.00f;
    this->m_fBaseCheck = 0.10f;
    this->m_fOverCheckDistance = 60.00f;
    this->m_nChangeDirCnt = 1;
    this->m_nChangeDirCntDef = 4;
    this->m_fArrivalDistance = 10;
    this->m_fPathDistance = 0.00f;
    this->m_pPath = NULL;
    this->m_fMoveDiffCheck = 0.00f;
}

bool USplineMoveComponent::SetUpSplineData(UPathSplineComponent* uGetSpline, EPATH_TYPE eType) {
    return false;
}

void USplineMoveComponent::SetUpFieldPathData(FFieldPathInfoData InfoData) {
}

void USplineMoveComponent::SetSplineMovePointSetting(const USplineComponent* uSpline) {
}

void USplineMoveComponent::SetMoveStopEvent(bool Enable) {
}

void USplineMoveComponent::SetFirstPosition(const USplineComponent* uSpline) {
}

bool USplineMoveComponent::NPCCharacterMoving(const USplineComponent* uSpline, float fDeltaTime, float fWaitTime, float fSearchRange) {
    return false;
}

bool USplineMoveComponent::IsEndPointArrived(const USplineComponent* uSpline) {
    return false;
}

bool USplineMoveComponent::GetNowMoveSpeed(const USplineComponent* uSpline) {
    return false;
}

FString USplineMoveComponent::GetDebugSplineMoveParam() {
    return TEXT("");
}

float USplineMoveComponent::GetCurrentSplinePosition(const USplineComponent* uSpline) {
    return 0.0f;
}

bool USplineMoveComponent::CheckTalkEffectVisible() {
    return false;
}

void USplineMoveComponent::CheckNearPlayer(float fWaitTime, float fSearchRange) {
}

bool USplineMoveComponent::CheckContactPlayerInterval(float fDeltaTime) {
    return false;
}

bool USplineMoveComponent::CalcStartCheck(float fDelatTime) {
    return false;
}



#include "UIFlashbackBase.h"

UUIFlashbackBase::UUIFlashbackBase() {
    this->SeqFlashback = EFlashbackSequence::INIT;
    this->EndTime = 0.00f;
    this->UpdateTime = 0.00f;
}

bool UUIFlashbackBase::TickInternal(float DeltaTime) {
    return false;
}

bool UUIFlashbackBase::Start(FName strName, float Time) {
    return false;
}

void UUIFlashbackBase::ResetParam() {
}

void UUIFlashbackBase::Reset() {
}

bool UUIFlashbackBase::LoadStart_Implementation() {
    return false;
}

bool UUIFlashbackBase::IsInit() const {
    return false;
}

bool UUIFlashbackBase::IsAnimFinish() const {
    return false;
}


EFlashbackSequence UUIFlashbackBase::GetFlashbackSeq() {
    return EFlashbackSequence::INIT;
}

bool UUIFlashbackBase::Finish(float Time) {
    return false;
}

bool UUIFlashbackBase::CheckResourceData_Implementation(FName ResorceLabel) {
    return false;
}

bool UUIFlashbackBase::AddImage(FName ResourceName) {
    return false;
}



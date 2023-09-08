#include "ReferenceSequencer.h"

AReferenceSequencer::AReferenceSequencer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pDeepThinkActor = NULL;
    this->m_pDeepDirectingActor = NULL;
    this->m_pDeepDirecting = NULL;
}

void AReferenceSequencer::StopReferenceSequencer(ENOTICE_TYPE eNoticeType, const FNoticeArgs& Args) {
}

void AReferenceSequencer::StartDeepThink_Implementation(FName TagName, FVector AddOffset) {
}

void AReferenceSequencer::StartDeepDirecting_Implementation() {
}

void AReferenceSequencer::SetToolsTimeZone(ETimeZoneType eTime) {
}

void AReferenceSequencer::SetDeepThinkParameter(FName TagName, FVector Offset) {
}



ETimeZoneType AReferenceSequencer::GetToolsTimeZone() {
    return ETimeZoneType::NONE;
}

FName AReferenceSequencer::GetDeepThinkTagName() {
    return NAME_None;
}

FVector AReferenceSequencer::GetDeepThinkOffset() {
    return FVector{};
}

ULevelSequence* AReferenceSequencer::GetDeepThink() {
    return NULL;
}

ULevelSequence* AReferenceSequencer::GetDeepDirecting() {
    return NULL;
}

void AReferenceSequencer::EndDeepThink_Implementation() {
}

void AReferenceSequencer::EndDeepDirecting_Implementation() {
}

void AReferenceSequencer::CreateSequenceActor() {
}

void AReferenceSequencer::AllStopSequencer() {
}



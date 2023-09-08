#include "AcqUserWidget.h"

UAcqUserWidget::UAcqUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ResetToDefaultAnim = NULL;
    this->StopTickWhenWidgetPaused = false;
}

void UAcqUserWidget::StopAnimsImmediately(const TArray<UWidgetAnimation*>& anims) {
}

void UAcqUserWidget::StopAnimImmediately(UWidgetAnimation* anim) {
}

void UAcqUserWidget::StopAllAnimImmediatelyByGroup(EWidgetAnimationGroup group) {
}

void UAcqUserWidget::StopAllAnimImmediately() {
}

void UAcqUserWidget::ResetAppearance_Implementation() {
}

void UAcqUserWidget::GroupingAnimations_Implementation() {
}

float UAcqUserWidget::GetNormalizedElapsedTime(UWidgetAnimation* anim) {
    return 0.0f;
}

bool UAcqUserWidget::GetAllAnimations(TArray<UWidgetAnimation*>& outAllAnims) {
    return false;
}

void UAcqUserWidget::EvaluateAnimationSpecificFrame(UWidgetAnimation* anim, int32 frame, bool isStopAllAnimBeforeEval) {
}

void UAcqUserWidget::EvaluateAnimationLastFrame(UWidgetAnimation* anim, bool isStopAllAnimBeforeEval) {
}

void UAcqUserWidget::AddNonGroupingAnimationsToDefaultGroup() {
}

void UAcqUserWidget::AddAnimationsToGroup(EWidgetAnimationGroup group, TArray<UWidgetAnimation*> anims) {
}

UUMGSequencePlayer* UAcqUserWidget::AcqPlayAnimationDefault(UWidgetAnimation* anim, float StartAtTime, bool isStopAllAnimBeforePlay, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed) {
    return NULL;
}

UUMGSequencePlayer* UAcqUserWidget::AcqPlayAnimationAtTime(UWidgetAnimation* anim, float StartAtTime, bool isStopAllAnimBeforePlay) {
    return NULL;
}

UUMGSequencePlayer* UAcqUserWidget::AcqPlayAnimation(UWidgetAnimation* anim, bool isStopAllAnimBeforePlay, bool isFast) {
    return NULL;
}



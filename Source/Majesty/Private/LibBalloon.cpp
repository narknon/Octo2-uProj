#include "LibBalloon.h"

ULibBalloon::ULibBalloon() {
}

UBalloonBundleWidgetBase* ULibBalloon::GetBalloonBundleWidget() {
    return NULL;
}

FAddBalloonParam ULibBalloon::CreateBalloonParam_Auto(FName TalkLabel, FVector2D balloonOffset, EEventBalloonDir BalloonDir, bool EnableTail, AActor* TargetActor, float Scale) {
    return FAddBalloonParam{};
}



#include "KSManagerDirector.h"

AKSManagerDirector::AKSManagerDirector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BalloonBundleWidget = NULL;
}

AKSManagerDirector* AKSManagerDirector::GetInstance() {
    return NULL;
}

UBalloonBundleWidgetBase* AKSManagerDirector::GetBalloonBundleWidget() {
    return NULL;
}



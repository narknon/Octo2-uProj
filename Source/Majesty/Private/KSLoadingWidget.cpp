#include "KSLoadingWidget.h"

UKSLoadingWidget::UKSLoadingWidget() {
}


bool UKSLoadingWidget::StopLoading(ELOADING_REASON reason) {
    return false;
}


bool UKSLoadingWidget::StartLoading(ELOADING_REASON reason) {
    return false;
}

ERESOLUTION_TYPE UKSLoadingWidget::GetLoadingResourceResolution() {
    return ERESOLUTION_TYPE::eHD;
}



#include "UIWidgetReferenceData.h"

FUIWidgetReferenceData::FUIWidgetReferenceData() {
    this->ID = 0;
    this->ZOrder = 0;
    this->CreatePhase = EWIDGET_CREATE_PHASE::NONE;
    this->IsAddViewport = false;
}


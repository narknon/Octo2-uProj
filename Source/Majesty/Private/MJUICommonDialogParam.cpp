#include "MJUICommonDialogParam.h"

FMJUICommonDialogParam::FMJUICommonDialogParam() {
    this->DefaultButton = 0;
    this->EnableCancelKey = false;
    this->CancelKeyValue = 0;
    this->AutoSelectClose = false;
    this->AttachDetailWidget = NULL;
    this->DetailOnTop = false;
    this->AttachCaptionWidget = NULL;
    this->CaptionOnTop = false;
    this->UseCaptionSeparation = false;
    this->RequestFlag = false;
    this->DuplicationFlag = false;
    this->InputReceptionFlag = false;
    this->UseSelectWidget = false;
    this->SelectWidgetOnTop = false;
    this->BloodFlag = false;
    this->EnableOpenSe = false;
}


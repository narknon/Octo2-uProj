#include "DiseaseDataBase.h"

FDiseaseDataBase::FDiseaseDataBase() {
    this->ID = 0;
    this->DisplayOrder = 0;
    this->EnableResist = false;
    this->EnableTurnCount = false;
    this->BattleEndContinue = false;
    this->EnableBuffExtension = false;
    this->EnableDebuffExtension = false;
    this->EnableDeconditionExtension = false;
    this->EnableChangePermanent = false;
    this->EnableDiseaseCopy = false;
    this->AdvValue1 = 0;
    this->AdvValue2 = 0;
    this->AdvValue3 = 0;
    this->AdvValue4 = 0;
    this->AttachEffect = false;
    this->GroundEffect = false;
}


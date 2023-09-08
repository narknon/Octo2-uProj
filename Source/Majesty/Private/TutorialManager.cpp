#include "TutorialManager.h"

ATutorialManager::ATutorialManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TutorialType = ETUTORIAL_TYPE::eNONE;
    this->UITutorial = NULL;
    this->IsEndCard = false;
    this->IsEpilouge = false;
}



void ATutorialManager::SetTutorialData(ETUTORIAL_TYPE Type, bool& FindData) {
}

void ATutorialManager::OpenTutorialListData_Implementation(FDataTableTutorialList ListData, bool AutoPushPop, bool ForcedDisplay, bool& IsOpen, UUITutorialBase*& Tutorial) {
}

void ATutorialManager::OpenTutorialFromLabel_Implementation(FName Label, bool ForcedDisplay, bool& IsOpen, int32 CharaID) {
}

void ATutorialManager::OpenTutorial_Implementation(ETUTORIAL_TYPE Type, bool ForcedDisplay, bool& IsOpen, int32 CharaID) {
}

void ATutorialManager::OpenEndCardEpilogue_Implementation(ETUTORIAL_TYPE Type, bool ForcedDisplay, bool& IsOpen) {
}

void ATutorialManager::OpenEndCard_Implementation(ETUTORIAL_TYPE Type, bool ForcedDisplay, bool& IsOpen, int32 CharaID) {
}

void ATutorialManager::OnTutorialFinish() {
}



bool ATutorialManager::IsExsistRequest() {
    return false;
}

void ATutorialManager::GetTutorialPageDataFromFlagPartLabels(TArray<FName> FlagPartLabels, TArray<FDataTableTutorialPageData>& PageData) {
}

void ATutorialManager::GetTutorialPageData(TArray<FDataTableTutorialPageData>& PageData, bool CheckNextPage) {
}

int32 ATutorialManager::GetRequestCharaID() {
    return 0;
}

void ATutorialManager::GetPageLabelIndex(int32 CharacterID, int32& PageLabelIndex) {
}

void ATutorialManager::ForceTutorialClose(bool RequestClear) {
}

void ATutorialManager::ExecuteTutorialFinishEvent() {
}

bool ATutorialManager::CheckOpendTutorialList(TArray<FName>& OpenedFlagPartLabels) {
    return false;
}

void ATutorialManager::ChangeStateMain() {
}



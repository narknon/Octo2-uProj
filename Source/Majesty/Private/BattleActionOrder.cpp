#include "BattleActionOrder.h"

ABattleActionOrder::ABattleActionOrder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_nActionCharacterCount = 0;
}

bool ABattleActionOrder::UpdateNextOrderIndex() {
    return false;
}


bool ABattleActionOrder::UpdateCurrentOrderIndex() {
    return false;
}




bool ABattleActionOrder::SortActionOrderByWaitTime(TArray<FActionOrderData>& acTargetOrder) {
    return false;
}

bool ABattleActionOrder::SortActionOrderByNextTime(TArray<FActionOrderData>& acTargetOrder) {
    return false;
}

bool ABattleActionOrder::ShuffleActionOrder(TArray<FActionOrderData>& acTargetOrder) {
    return false;
}




























bool ABattleActionOrder::MoveActionOrderByIndex(TArray<FActionOrderData>& acTargetOrder, int32 nTargetIndex, int32 nToIndex) {
    return false;
}












bool ABattleActionOrder::GetOrderIconFromCharaRef(TArray<FActionOrderData>& searchArray, ABattleCharacterBase* targetRef, FActionOrderData& Data) {
    return false;
}












bool ABattleActionOrder::Debug_OutputOrderLogFromBodyList(const FString& Title, TArray<FString> BodyList) {
    return false;
}

bool ABattleActionOrder::Debug_OutputOrderLog(const FString& Title, const FString& Body) {
    return false;
}

bool ABattleActionOrder::Debug_OutputOrderIconLog(const UActionOrderIcon* cIcon, const FString& Title) {
    return false;
}

bool ABattleActionOrder::Debug_GetCommonOrderDataLog(const FActionOrderData cTarget, bool IsCurrent, FString& OutBody) {
    return false;
}






bool ABattleActionOrder::CheckSpecialOrderAllAGIUp(int32 AbilityID) {
    return false;
}

bool ABattleActionOrder::CheckSpecialOrderAGIUpSelfDown(int32 AbilityID) {
    return false;
}


bool ABattleActionOrder::CheckEnablePartyChangeOrder(EACTION_ORDER_TYPE eOrderType) {
    return false;
}






void ABattleActionOrder::AssignNextOrderIndex() {
}

void ABattleActionOrder::AssignCurrentOrderIndex() {
}





#include "DebugListMenuComponent.h"

UDebugListMenuComponent::UDebugListMenuComponent() {
}

void UDebugListMenuComponent::SetDelegateOnDecided(FDebugListMenuDecided onDecided) {
}

void UDebugListMenuComponent::SetDelegateOnClosed(FDebugListMenuDelegate OnClosed) {
}

void UDebugListMenuComponent::OpenMenu() {
}

bool UDebugListMenuComponent::IsRunning() const {
    return false;
}

void UDebugListMenuComponent::InitMenu(int32 filterColNum, int32 itemColNum) {
}

void UDebugListMenuComponent::CloseMenu() {
}

void UDebugListMenuComponent::ClearDelegateOnDecided() {
}

void UDebugListMenuComponent::AddItemDataArray(const TArray<FDebugListMenuItem>& Data) {
}

void UDebugListMenuComponent::AddItemData(const FDebugListMenuItem& Data) {
}

void UDebugListMenuComponent::AddFilterDataArray(const TArray<FDebugListMenuFilter>& Data) {
}

void UDebugListMenuComponent::AddFilterData(const FDebugListMenuFilter& Data) {
}

void UDebugListMenuComponent::AddFilter(int32 Index, FText& Text, bool bChecked) {
}



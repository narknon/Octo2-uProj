#include "DebugMenuSupportBase.h"

UDebugMenuSupportBase::UDebugMenuSupportBase() {
    this->IsSubMenuActive = false;
    this->m_nCurrentHierarchy = 0;
    this->m_nMaxHierarchy = 0;
    this->m_nParentHierarchy = 0;
}

void UDebugMenuSupportBase::OnPreInitWidgetFunc(FDebugParam& Param) {
}

void UDebugMenuSupportBase::OnDecideFunc(FDebugParam& Param) {
}

void UDebugMenuSupportBase::OnChangeFunc(FDebugParam& Param) {
}

void UDebugMenuSupportBase::Initialize() {
}

TArray<FDebugParam> UDebugMenuSupportBase::GetSubMenuParam(int32 Index) {
    return TArray<FDebugParam>();
}

TArray<FDebugParam> UDebugMenuSupportBase::GetDebugSubMenuList(const FDebugParam& baseManuItem) {
    return TArray<FDebugParam>();
}

TArray<FDebugParam> UDebugMenuSupportBase::GetDebugParamFromHierarchy(int32 nHierarcy) {
    return TArray<FDebugParam>();
}

void UDebugMenuSupportBase::DebugPrintScreenMessage(const FString& str, FColor col) {
}

void UDebugMenuSupportBase::CreateMenu_Implementation() {
}

void UDebugMenuSupportBase::CloseMenu_Implementation() {
}

int32 UDebugMenuSupportBase::BackParentHierarchy() {
    return 0;
}

void UDebugMenuSupportBase::AddToggleVal_Change(const FString& MenuName, bool Enable, FChangeToggleValueDelegate NewOnChangeFunc, FAddToggleValueDelegate NewOnDecideFunc) {
}

void UDebugMenuSupportBase::AddToggleVal(const FString& MenuName, bool Enable, FAddToggleValueDelegate NewOnDecideFunc) {
}

void UDebugMenuSupportBase::AddSubMenuEnd() {
}

void UDebugMenuSupportBase::AddSubMenuBegin(const FString& MenuName, FAddSubMenuDelegate NewOnDecideFunc) {
}

void UDebugMenuSupportBase::AddListVal_Change_PreInitWidget(const FString& MenuName, TArray<FText> strList, int32 StartIndex, FChangeListValueDelegate NewOnChangeFunc, FAddListValueDelegate NewOnDecideFunc, FPreInitWidgetDelegate NewOnPreInitWidgetFunc) {
}

void UDebugMenuSupportBase::AddListVal_Change(const FString& MenuName, TArray<FText> strList, int32 StartIndex, FChangeListValueDelegate NewOnChangeFunc, FAddListValueDelegate NewOnDecideFunc) {
}

void UDebugMenuSupportBase::AddListVal(const FString& MenuName, TArray<FText> strList, int32 StartIndex, FAddListValueDelegate NewOnDecideFunc) {
}

void UDebugMenuSupportBase::AddIntVal_Change(const FString& MenuName, int32 DefaultValue, int32 intMin, int32 intMax, FChangeIntValueDelegate NewOnChangeFunc, FAddIntValueDelegate NewOnDecideFunc) {
}

void UDebugMenuSupportBase::AddIntVal(const FString& MenuName, int32 DefaultValue, int32 intMin, int32 intMax, FAddIntValueDelegate NewOnDecideFunc) {
}

void UDebugMenuSupportBase::AddInfomationWithCallback(const FString& MenuName, const FString& InformationStr, FOnTickWidgetDelegate OnTickFunc, EDEBUG_INFORMATION_COLOR_TYPE ColorType) {
}

void UDebugMenuSupportBase::AddInfomation(const FString& MenuName, const FString& InfomationStr, EDEBUG_INFORMATION_COLOR_TYPE ColorType) {
}

void UDebugMenuSupportBase::AddFloatVal_Change(const FString& MenuName, float DefaultValue, float floatMin, float floatMax, FChangeFloatValueDelegate NewOnChangeFunc, FAddFloatValueDelegate NewOnDecideFunc) {
}

void UDebugMenuSupportBase::AddFloatVal(const FString& MenuName, float DefaultValue, float floatMin, float floatMax, FAddFloatValueDelegate NewOnDecideFunc) {
}



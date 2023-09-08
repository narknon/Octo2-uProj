#include "KSUIManager.h"

AKSUIManager::AKSUIManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_WidgetTemporalyHiddenComponent = NULL;
    this->m_LetterWidget = NULL;
}

void AKSUIManager::UnLockInputMode() {
}

void AKSUIManager::SetLetterWidget(ULetterBoxBase* letterWidget) {
}

void AKSUIManager::SetHelpOpen(bool IsOpen) {
}

void AKSUIManager::ResetHiddenFlag() {
}

void AKSUIManager::ResetFromTitle() {
}

void AKSUIManager::RemoveUIPartsList(EKSUIPartsKind Kind) {
}

void AKSUIManager::RemoveList(EKSUIKind Kind) {
}


void AKSUIManager::RefreshTextLanguageAllWidget() {
}

void AKSUIManager::RefreshTextLanguage() const {
}

int32 AKSUIManager::PushActive(UUserWidget* PushUI) {
    return 0;
}

void AKSUIManager::PopActiveUIWith(UUserWidget* UI, bool& IsPop, UUserWidget*& PopUI) {
}

void AKSUIManager::PopActive(UUserWidget*& PopUI) {
}

int32 AKSUIManager::OpenRequest(UUserWidget* PushUI, bool UseStack) {
    return 0;
}


UKSUserWidgetBase* AKSUIManager::Open(EKSUIKind Kind) {
    return NULL;
}

bool AKSUIManager::NoticeCreatedWidget(EWIDGET_CREATE_PHASE CreatePhase) {
    return false;
}

void AKSUIManager::LockInputMode() {
}


bool AKSUIManager::IsStack(UUserWidget* CheckUI) const {
    return false;
}

bool AKSUIManager::IsCreatedWidget(EKSUIKind UIType) {
    return false;
}

bool AKSUIManager::IsClosingStackFromWidget(UUserWidget* CheckUI) const {
    return false;
}

bool AKSUIManager::IsClosingStack() const {
    return false;
}

bool AKSUIManager::IsBulkLoadedWidgets(EWIDGET_CREATE_PHASE CreatePhase) {
    return false;
}

TMap<FName, UKSUserWidgetBase*> AKSUIManager::GetWidgetTable() {
    return TMap<FName, UKSUserWidgetBase*>();
}

UKSUserWidgetBase* AKSUIManager::GetWidgetInstance(EKSUIKind UIType) {
    return NULL;
}

UKSUserWidgetBase* AKSUIManager::GetWidget(FName WidgetName) {
    return NULL;
}

UUserWidget* AKSUIManager::GetUIPartsList(EKSUIPartsKind Kind) {
    return NULL;
}

UWidgetTemporaryHiddenComponent* AKSUIManager::GetTemporayHiddenComponent() const {
    return NULL;
}

TSoftClassPtr<UUserWidget> AKSUIManager::GetPartsWidgetClass_Implementation(EKSUIPartsKind Kind) {
    return NULL;
}

UKSUserWidgetBase* AKSUIManager::GetList(EKSUIKind Kind) {
    return NULL;
}

ULetterBoxBase* AKSUIManager::GetLetterWidget() {
    return NULL;
}

bool AKSUIManager::GetInputModeLock() {
    return false;
}

bool AKSUIManager::GetHelpOpen() const {
    return false;
}

int32 AKSUIManager::GetActiveStackCount() const {
    return 0;
}

UUserWidget* AKSUIManager::GetActiveStack() const {
    return NULL;
}


void AKSUIManager::DeleteStack(UUserWidget* DeleteUI) {
}

void AKSUIManager::Debug_ShowDebugInfo(bool bEnable) {
}

void AKSUIManager::Debug_ShowActiveUI_Stack() {
}

void AKSUIManager::Debug_ForceClearActiveUI_Stack() {
}

void AKSUIManager::Debug_EnableTextSizeInfo(bool bEnable) {
}

void AKSUIManager::Debug_CreateWidget(FName WidgetName) {
}

UUserWidget* AKSUIManager::CreateUIParts(EKSUIPartsKind Kind) {
    return NULL;
}

UKSUserWidgetBase* AKSUIManager::CreateTemporaryWidgets(EKSUIKind UIType) {
    return NULL;
}

UUserWidget* AKSUIManager::CreateNonManagedWidgetByClassPtr(const TSoftClassPtr<UUserWidget>& Class, int32 ZOrder, ESlateVisibility InVisibility) const {
    return NULL;
}

void AKSUIManager::CloseRequestFromKind(EKSUIKind Kind, bool ForceClose) {
}

void AKSUIManager::CloseRequest(UUserWidget* PopUI, bool ForceClose) {
}



UKSUserWidgetBase* AKSUIManager::Close(EKSUIKind Kind) {
    return NULL;
}

bool AKSUIManager::BulkLoadWidgets(EWIDGET_CREATE_PHASE CreatePhase) {
    return false;
}

bool AKSUIManager::BulkCreateWidgets(EWIDGET_CREATE_PHASE CreatePhase) {
    return false;
}

bool AKSUIManager::AddUIPartsList(EKSUIPartsKind Kind, UUserWidget* UIParts) {
    return false;
}

void AKSUIManager::AddToViewport(UUserWidget* Target, int32 ZOrder) {
}

void AKSUIManager::AddToPlayerScreen(UUserWidget* Target, int32 ZOrder) {
}



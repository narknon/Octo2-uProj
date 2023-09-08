#include "KSUIStatics.h"

UKSUIStatics::UKSUIStatics() {
}

void UKSUIStatics::ReloadUIResources() {
}

int32 UKSUIStatics::PushActive(UUserWidget* PushUI) {
    return 0;
}

void UKSUIStatics::PopActiveUIWith(UUserWidget* UI, bool& IsPop, UUserWidget*& PopUI) {
}

void UKSUIStatics::PopActive(UUserWidget*& PopUI) {
}

int32 UKSUIStatics::OpenRequest(UUserWidget* PushUI, bool UseStack) {
    return 0;
}

void UKSUIStatics::OpenMainMenu(bool FastWorldMap) {
}

bool UKSUIStatics::IsUIResManagerLoading() {
    return false;
}

bool UKSUIStatics::IsStack(UUserWidget* CheckUI) {
    return false;
}

bool UKSUIStatics::IsKSUserWidgetRunning(EKSUIKind inKind) {
    return false;
}

bool UKSUIStatics::IsClosingStack() {
    return false;
}

UTexture2D* UKSUIStatics::GetUIResTexture2D(FName resName) {
    return NULL;
}

UStaticMesh* UKSUIStatics::GetUIResStaticMesh(FName resName) {
    return NULL;
}

UUserWidget* UKSUIStatics::GetUIPartsWidget(EKSUIPartsKind Kind) {
    return NULL;
}

UBalloonBundleWidgetBase* UKSUIStatics::GetBalloonBundle() {
    return NULL;
}

UUserWidget* UKSUIStatics::GetActiveStack() {
    return NULL;
}

FVector2D UKSUIStatics::GetAbsoluteSize(UWidget* Target) {
    return FVector2D{};
}

void UKSUIStatics::DeleteStackUI(UUserWidget* DeleteUI) {
}

void UKSUIStatics::Debug_SetEventForceSkip(bool bforceSkip) {
}

void UKSUIStatics::Debug_SetBalloonMessageFullSkip(bool bSkip) {
}

FText UKSUIStatics::ConvertMoneyToText_int64(int64 Money, int32 MinDigit, int32 MaxDigit) {
    return FText::GetEmpty();
}

FText UKSUIStatics::ConvertMoneyToText(int32 Money, int32 MinDigit, int32 MaxDigit) {
    return FText::GetEmpty();
}

void UKSUIStatics::CloseRequestFromKind(EKSUIKind Kind, bool ForceClose) {
}

void UKSUIStatics::CloseRequest(UUserWidget* PopUI, bool ForceClose) {
}

bool UKSUIStatics::CloseMainMenuFromMissionRecordPartyChat(bool FastClose) {
    return false;
}

bool UKSUIStatics::CloseMainMenu(bool FastClose) {
    return false;
}

void UKSUIStatics::AddToScreen(UUserWidget* Target, int32 ZOrder, bool UsePlayer) {
}



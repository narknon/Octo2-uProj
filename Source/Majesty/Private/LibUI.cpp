#include "LibUI.h"

ULibUI::ULibUI() {
}

void ULibUI::UpdateProgress(float CurrentTime, float MaxTime) {
}

void ULibUI::TurnOffTemporaryHiddenFlag(EWIDGET_TEMPORARY_HIDE_USER hideUser) {
}

void ULibUI::TemporaryCloseActionPopup() {
}

void ULibUI::SetWidgetVisible(EKSUIKind Type, ESlateVisibility Visible) {
}

void ULibUI::SetWidgetPaused(bool isPause) {
}

void ULibUI::SetSupportAbilityMenuEnable(bool Enable) {
}

void ULibUI::SetRadarForceHidden(bool ForceHidden) {
}

void ULibUI::SetLetterBoxWidget(ULetterBoxBase* letterWidget) {
}

void ULibUI::SetJobMenuEnable(bool Enable) {
}

void ULibUI::SetIsOpeningPartyChatNotification(bool IsOpening) {
}

void ULibUI::SetHelpWindowPositionByWidget(const UUserWidget* Widget) {
}

void ULibUI::SetHelpWindowPosition(const FVector2D& NewPosition) {
}

void ULibUI::SetHelpWindowOffset(const FVector2D& Offset) {
}

void ULibUI::SetAbilityMenuEnable(bool Enable) {
}

void ULibUI::ResetMapNameNotification() {
}

void ULibUI::ReOpenSubTitle() {
}

void ULibUI::ReOpenGuildMenu() {
}

void ULibUI::ReOpenEnterActionPopup() {
}

void ULibUI::PushMapNameNotification(FName RegionName, FName MapName, int32 EncounterLevel, int32 DangerLevel, bool IsOpenKeep, UTexture* EmblemTexture, FName NotificationFormat) {
}

void ULibUI::OpenTutorialUI(const TArray<FDataTableTutorialPageData>& PageData, ETUTORIAL_TYPE Type, UUITutorialBase*& UITutorial, bool IsEndCard, bool IsEpilouge) {
}

void ULibUI::OpenSubTitle(FName SubTitleLabel, bool RequestEvent, FName AfterEventLabel) {
}

void ULibUI::OpenStoryNotificationSubStory(FName TitleLabel, FName FormatTextLabel) {
}

void ULibUI::OpenStoryNotificationMarchant(FName MainStoryLabel, FName TitleLabel, FName FormatTextLabel) {
}

void ULibUI::OpenStoryNotificationCoupling(FName MainStoryLabel, FName TitleLabel, FName FormatTextLabel) {
}

void ULibUI::OpenScreenCaputreWithTexture(FName ResourceLabel) {
}

void ULibUI::OpenScreenCapture(bool PlayNoice) {
}

void ULibUI::OpenSaveLoadMenu(bool SaveMode, bool FromDebugMenu) {
}

UPartySplitWidgetBase* ULibUI::OpenPartySplitWidget() {
    return NULL;
}

UMusicPlayerWidget* ULibUI::OpenMusicPlayer() {
    return NULL;
}

void ULibUI::OpenMissionRecord() {
}

UKSPartySplitWidgetBase* ULibUI::OpenKSPartySplitWidget() {
    return NULL;
}

void ULibUI::OpenHelpWindowWithOffset(const FVector2D& Offset) {
}

void ULibUI::OpenHelpWindow() {
}

void ULibUI::OpenGuildMenu(FName guildLabel, bool& IsOpen) {
}

void ULibUI::OpenFieldCommandPreviewMenu(AKSCharacterBase* targetNpc) {
}

void ULibUI::OpenFieldCommandMenu(AKSCharacterBase* targetNpc, bool DrawLeft, TArray<MJFieldCommandType> CommandList) {
}

bool ULibUI::OpenFieldCommandJudge(AKSCharacterBase* TargetChara, TArray<MJFieldCommandType> CommandList) {
    return false;
}

void ULibUI::OpenEnterActionPopup(AActor* TargetActor, FName ActionTextLabel) {
}

UDiseaseListWidget* ULibUI::OpenDiseaseListUI() {
    return NULL;
}

void ULibUI::OpenBusinessWithNpcNotificationAnimal(const FSpActMerchantResult& SpActMerchantResult, bool bIsFast) {
}

void ULibUI::OpenBusinessWithNpcNotification(const FSpActMerchantResult& SpActMerchantResult, bool bIsFast) {
}

bool ULibUI::IsRunningPartySplitWidget() {
    return false;
}

bool ULibUI::IsRunningMusicPlayer() {
    return false;
}

bool ULibUI::IsRunningKSPartySplitWidget() {
    return false;
}

bool ULibUI::IsRunningFieldCommandPreviewMenu() {
    return false;
}

bool ULibUI::IsOpeningGuildMenu() {
    return false;
}

bool ULibUI::IsMainMenuFastWorldMapMode() {
    return false;
}

bool ULibUI::IsActiveSubTitle() {
    return false;
}

void ULibUI::HideWidgetTemporary(bool isHide, EWIDGET_TEMPORARY_HIDE_USER hideUser) {
}

UTexture2D* ULibUI::GetSourceTextureFromPaperSprite(UPaperSprite* Target) {
    return NULL;
}

bool ULibUI::GetNoiceFinish() {
    return false;
}

ULetterBoxBase* ULibUI::GetLetterBoxWidget() {
    return NULL;
}

EPARTY_SPLIT_CLOSE_REASON ULibUI::GetKSPartySplitWidgetCloseReason() {
    return EPARTY_SPLIT_CLOSE_REASON::eNone;
}

bool ULibUI::GetGuildReOpenFlag() {
    return false;
}

bool ULibUI::GetFCMenuUniqueCommandFlow() {
    return false;
}

bool ULibUI::GetFCMenuInputEnableMode() {
    return false;
}

bool ULibUI::GetEnableSafetyBalloon() {
    return false;
}

FName ULibUI::GetAfterEventLabel() {
    return NAME_None;
}

void ULibUI::Debug_SetIsForceHideQuitGameMenu(bool Val) {
}

void ULibUI::Debug_SetIsForceAvailableTrialData(bool Val) {
}

void ULibUI::Debug_SetEnableSafetyBalloon(bool Enable) {
}

bool ULibUI::Debug_GetIsForceHideQuitGameMenu() {
    return false;
}

bool ULibUI::Debug_GetIsForceAvailableTrialData() {
    return false;
}

void ULibUI::CloseSubTitle(bool& IsNext) {
}

void ULibUI::CloseScreenCapture() {
}

void ULibUI::ClosePartySplitWidget() {
}

void ULibUI::CloseMusicPlayer() {
}

void ULibUI::CloseKSPartySplitWidget() {
}

void ULibUI::CloseFieldCommandPreviewMenu(bool OpenJudgeWindow) {
}

void ULibUI::CloseFieldCommandMenu(bool OpenJudgeWindow, bool StateCheck) {
}

void ULibUI::CloseEnterActionPopup() {
}

void ULibUI::CloseDiseaseListUI() {
}

void ULibUI::CloseBusinessWithNpcNotification(bool bIsFast) {
}

bool ULibUI::CanMainMenuOpen() {
    return false;
}

bool ULibUI::CanMainMenuClose() {
    return false;
}

void ULibUI::ApplyLetterBoxSize() {
}



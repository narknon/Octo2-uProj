#include "MJListItemWidget.h"

UMJListItemWidget::UMJListItemWidget() {
    this->RefText_Col1 = NULL;
    this->RefText_Col2 = NULL;
    this->RefText_Col3 = NULL;
    this->RefText_Unit = NULL;
    this->RefIcon_Cursor = NULL;
    this->RefIcon_Item = NULL;
    this->RefIcon_Item_0 = NULL;
    this->RefImg_StrikeThrough = NULL;
    this->RefImg_BackGround = NULL;
    this->RefFixedIcon = NULL;
    this->RefVBox_Detail = NULL;
    this->RefColumnExtension = NULL;
    this->RefTitle = NULL;
    this->RefAnim_Focus = NULL;
    this->RefAnim_OutFocus = NULL;
    this->RefAnim_Decide = NULL;
    this->RefAnim_DisableFocus = NULL;
    this->RefAnim_DisableOutFocus = NULL;
    this->DefaultVisibility = false;
    this->IsFirstSetup = true;
    this->RefSpacer = NULL;
    this->RefDivider = NULL;
    this->RefRankWidget = NULL;
    this->CurrentAnimation = NULL;
    this->IndxInAll = 0;
    this->ShowUnit = true;
    this->ColumnExtension = NULL;
    this->TextCol2_Dark = false;
    this->itemStatus = ELIST_ITEM_STATUS::eENABLE;
    this->ResetToDefaultAnimDisable = NULL;
}

void UMJListItemWidget::UpdateCheckIcon(bool StrikeThrough) {
}

void UMJListItemWidget::StopAnim() {
}

void UMJListItemWidget::Setup_Implementation(const FMJListWidgetItemData& itemmData, ELIST_NUM_UNIT_TYPE unitType, bool& success) {
}

void UMJListItemWidget::SetTitleWidget(UUserWidget* titleWidget) {
}

void UMJListItemWidget::SetTextToColumn1(FName TextLabel) {
}

void UMJListItemWidget::SetTextColor_Implementation(const FSlateColor& Color) {
}

void UMJListItemWidget::SetSpacer(ELIST_ITEM_NEXT_SPACE spacerType) {
}


void UMJListItemWidget::SetNumUnit(ELIST_NUM_UNIT_TYPE unitType) {
}

void UMJListItemWidget::SetItemDataIsRank(UTexture2D* itemTexture, const FText& Name, const FText& Value_0, const FText& Value_1, int32 rankNum, const FText& Detail, ELIST_ITEM_STATUS Status) {
}

void UMJListItemWidget::SetItemData_Implementation(UTexture2D* iconTex, UTexture2D* iconTex0, const FText& Name, const FText& value0, const FText& value1, const FText& Detail, ELIST_ITEM_STATUS Status) {
}

void UMJListItemWidget::SetIconColor(const FSlateColor& Color) {
}

void UMJListItemWidget::SetFixedIcon(UTexture2D* Tex) {
}

void UMJListItemWidget::SetDetailWidget(UListItemDetailWidgetBase* detailWidget) {
}

void UMJListItemWidget::SetDarkToTextCol2(bool Dark) {
}


void UMJListItemWidget::SetColumnExWidget(UUserWidget* extensionWidget) {
}

void UMJListItemWidget::SetColorByStatus(ELIST_ITEM_STATUS newPram) {
}

void UMJListItemWidget::SetCol1Icon(UTexture2D* iconTex) {
}

void UMJListItemWidget::RemoveDetailWidget() {
}

void UMJListItemWidget::RemoveColumnExWidget() {
}

void UMJListItemWidget::PlayAnim(UWidgetAnimation* anim, bool isFast) {
}

void UMJListItemWidget::OutFocus_Implementation(bool isFast) {
}

void UMJListItemWidget::InitInstance_Implementation(bool& success) {
}

void UMJListItemWidget::Init_Implementation(int32 indexInAll, bool showColumn2, bool showColumn3, ELIST_ITEM_STATUS NewItemStatus, bool StrikeThrough) {
}

int32 UMJListItemWidget::GetItemIndexAll() {
    return 0;
}

float UMJListItemWidget::GetHeight() const {
    return 0.0f;
}

FVector2D UMJListItemWidget::GetCursorRelativePosition() {
    return FVector2D{};
}

UUserWidget* UMJListItemWidget::GetColumnExWidget() const {
    return NULL;
}

void UMJListItemWidget::Focus_Implementation(bool isFast) {
}

void UMJListItemWidget::FirstSetup() {
}

void UMJListItemWidget::Decide_Implementation() {
}



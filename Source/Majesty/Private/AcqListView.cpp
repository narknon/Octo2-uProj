#include "AcqListView.h"
#include "Templates/SubclassOf.h"

UAcqListView::UAcqListView() : UListView(FObjectInitializer::Get()) {
}

void UAcqListView::SetNumDesignerPreviewEntries(int32 Num) {
}

void UAcqListView::SetEntryWidgetClass(TSubclassOf<UAcqUserWidget> newEntryWidgetClass) {
}

UUserWidget* UAcqListView::GetSelectItemWidget(UObject* Item) {
    return NULL;
}



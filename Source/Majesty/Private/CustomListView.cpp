#include "CustomListView.h"

UCustomListView::UCustomListView() : UListView(FObjectInitializer::Get()) {
}

UUserWidget* UCustomListView::GetSelectItemWidget(UObject* Item) {
    return NULL;
}



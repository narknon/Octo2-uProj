#include "DiseaseListWidget.h"

UDiseaseListWidget::UDiseaseListWidget() {
    this->m_WidgetState = EDiseaseListState::eNone;
}

void UDiseaseListWidget::SortDiseaseList(TArray<FDiseaseListItemData>& list) {
}

void UDiseaseListWidget::SetWidgetState(EDiseaseListState State) {
}

EDiseaseListState UDiseaseListWidget::GetWidgetState() {
    return EDiseaseListState::eNone;
}



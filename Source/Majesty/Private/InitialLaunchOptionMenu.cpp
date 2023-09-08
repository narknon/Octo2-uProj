#include "InitialLaunchOptionMenu.h"

UInitialLaunchOptionMenu::UInitialLaunchOptionMenu() : UUserWidget(FObjectInitializer::Get()) {
    this->m_WidgetState = EINITIAL_OPTION_WIDGET_STATE::eNone;
}

void UInitialLaunchOptionMenu::UpdateWidgetState(EINITIAL_OPTION_WIDGET_STATE WidgetState) {
}



#include "DebugCanvasComponent.h"

UDebugCanvasComponent::UDebugCanvasComponent() {
    this->AutoArrangement = false;
    this->AutoID = 0;
}

void UDebugCanvasComponent::SetVisible(bool bVisible) {
}

void UDebugCanvasComponent::SetAutoArrangement(bool Enable, FVector2D Pos) {
}

void UDebugCanvasComponent::RemoveTextWithID(int32 ID) {
}

void UDebugCanvasComponent::RemoveText() {
}

void UDebugCanvasComponent::RemovePrimitiveWithID(int32 ID) {
}

void UDebugCanvasComponent::RemovePrimitive() {
}

void UDebugCanvasComponent::RemoveAllText() {
}

void UDebugCanvasComponent::RemoveAllPrimitive() {
}

bool UDebugCanvasComponent::IsVisible() const {
    return false;
}

void UDebugCanvasComponent::AddTextWithID(int32 ID, const FDebugTextData& textData) {
}

void UDebugCanvasComponent::AddText(const FDebugTextData& textData) {
}

void UDebugCanvasComponent::AddRowPartText(FText Text, FLinearColor Color) {
}

void UDebugCanvasComponent::AddPrimitiveWithID(int32 ID, const FDebugPrimitiveData& primData) {
}

void UDebugCanvasComponent::AddPrimitive(const FDebugPrimitiveData& primData) {
}



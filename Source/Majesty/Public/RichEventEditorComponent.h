#pragma once
#include "CoreMinimal.h"
#include "PaperFlipbookComponent.h"
#include "RichEventEditorComponent.generated.h"

UCLASS(Blueprintable, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API URichEventEditorComponent : public UPaperFlipbookComponent {
    GENERATED_BODY()
public:
    URichEventEditorComponent();
};


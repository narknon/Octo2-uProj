#pragma once
#include "CoreMinimal.h"
#include "WorldMapPivotComponentBase.h"
#include "WorldMapPivotComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UWorldMapPivotComponent : public UWorldMapPivotComponentBase {
    GENERATED_BODY()
public:
    UWorldMapPivotComponent();
};


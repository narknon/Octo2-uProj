#pragma once
#include "CoreMinimal.h"
#include "WorldMapPivotComponentBase.h"
#include "WorldMapPivotComponentV2.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UWorldMapPivotComponentV2 : public UWorldMapPivotComponentBase {
    GENERATED_BODY()
public:
    UWorldMapPivotComponentV2();
};


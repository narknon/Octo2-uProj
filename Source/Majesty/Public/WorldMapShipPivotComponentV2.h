#pragma once
#include "CoreMinimal.h"
#include "WorldMapPivotComponentV2.h"
#include "WorldMapShipPivotComponentV2.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UWorldMapShipPivotComponentV2 : public UWorldMapPivotComponentV2 {
    GENERATED_BODY()
public:
    UWorldMapShipPivotComponentV2();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateShipPosition();
    
};


#pragma once
#include "CoreMinimal.h"
#include "Components/BillboardComponent.h"
#include "SpawnPointBillboardComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API USpawnPointBillboardComponent : public UBillboardComponent {
    GENERATED_BODY()
public:
    USpawnPointBillboardComponent();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WorldMapIconBase.h"
#include "PlayerSelectIconBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UPlayerSelectIconBase : public UWorldMapIconBase {
    GENERATED_BODY()
public:
    UPlayerSelectIconBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFlipBook();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetSnapPositionOffset() const;
    
};


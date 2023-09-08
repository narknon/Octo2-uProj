#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MJPathSplineObject.generated.h"

class USplineComponent;
class UTextRenderComponent;

UCLASS(Blueprintable)
class MAJESTY_API AMJPathSplineObject : public AActor {
    GENERATED_BODY()
public:
    AMJPathSplineObject(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void DebugShowSplineObject(const USplineComponent* uSpline, UTextRenderComponent* cTextRender, int32 nIndex);
    
    UFUNCTION(BlueprintCallable)
    void DebugCreateSplineObject(const USplineComponent* uSpline, UTextRenderComponent* cTextRender, int32 nIndex);
    
};


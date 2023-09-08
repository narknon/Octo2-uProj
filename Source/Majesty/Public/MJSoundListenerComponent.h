#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ELISTENER_TYPE.h"
#include "MJSoundListenerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UMJSoundListenerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UMJSoundListenerComponent();
    UFUNCTION(BlueprintCallable)
    void ChangeListenerPoint(ELISTENER_TYPE eListenerType, USceneComponent* pParentComponent);
    
};


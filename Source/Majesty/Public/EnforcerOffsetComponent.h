#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EnforcerOffsetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UEnforcerOffsetComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform EnforcerOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsEnforcerTarget;
    
public:
    UEnforcerOffsetComponent();
    UFUNCTION(BlueprintCallable)
    void SetEnforcerTarget(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnforcerOffset(FTransform cTransform);
    
};


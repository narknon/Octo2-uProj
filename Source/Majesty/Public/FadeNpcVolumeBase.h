#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FadeNpcVolumeBase.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API AFadeNpcVolumeBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NpcFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AdditionalNpcFadeTime;
    
public:
    AFadeNpcVolumeBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalFadeTime();
    
};


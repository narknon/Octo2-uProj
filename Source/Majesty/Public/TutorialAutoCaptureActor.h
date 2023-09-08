#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETutorialAutoCaptureActorState.h"
#include "TutorialAutoCaptureActor.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API ATutorialAutoCaptureActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETutorialAutoCaptureActorState m_State;
    
public:
    ATutorialAutoCaptureActor(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void SetState(ETutorialAutoCaptureActorState State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETutorialAutoCaptureActorState GetState() const;
    
};


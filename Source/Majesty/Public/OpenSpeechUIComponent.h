#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OpenSpeechUIComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UOpenSpeechUIComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SubTitleLabel;
    
    UOpenSpeechUIComponent();
    UFUNCTION(BlueprintCallable)
    void OpenSpeechUI();
    
    UFUNCTION(BlueprintCallable)
    void CloseSpeechUI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCanBegin();
    
};


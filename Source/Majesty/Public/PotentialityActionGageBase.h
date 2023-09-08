#pragma once
#include "CoreMinimal.h"
#include "AcqUserWidget.h"
#include "EPlayableCharacterID.h"
#include "PotentialityActionGageBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UPotentialityActionGageBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayableCharacterID m_PlayableCharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsDead;
    
public:
    UPotentialityActionGageBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetValue(float CurrentValue, float MaxValue, bool isSkipAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup(EPlayableCharacterID PlayableCharacterId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayOpenAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayCloseAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRevival();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDead();
    
};


#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "TimeZoneChangeUI.generated.h"

class UTimeChangeButton;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UTimeZoneChangeUI : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimeChangeButton* m_pTimeChangeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_pOpenAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_pForceCloseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStartTime;
    
public:
    UTimeZoneChangeUI();
protected:
    UFUNCTION(BlueprintCallable)
    void StopAllAnimation();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerInput();
    
    UFUNCTION(BlueprintCallable)
    void ForceClose();
    
};


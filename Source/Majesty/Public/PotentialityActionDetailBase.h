#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "PotentialityActionDetailBase.generated.h"

class UKSTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UPotentialityActionDetailBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKSTextBlock* m_pTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKSTextBlock* m_pDetailText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_pOpenAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_pCloseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_pForceCloseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_pForceOpenAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCloseTime;
    
public:
    UPotentialityActionDetailBase();
    UFUNCTION(BlueprintCallable)
    void SetText(FName TitleLabel, FName DetailLabel);
    
private:
    UFUNCTION(BlueprintCallable)
    void Open();
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceOpen();
    
    UFUNCTION(BlueprintCallable)
    void ForceClose();
    
private:
    UFUNCTION(BlueprintCallable)
    void Close();
    
};


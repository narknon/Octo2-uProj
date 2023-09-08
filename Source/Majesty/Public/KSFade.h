#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EFADE_TYPE.h"
#include "FadeFinishDelegate.h"
#include "KSFade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UKSFade : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFADE_TYPE FadeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TickType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FadeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility EndSlateVisible;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeFinish OnFinishFadeOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeFinish OnFinishFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_DebugFadeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugFadeColorEnable;
    
    UKSFade();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupDebugFadeColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadeVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadeEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFADE_TYPE GetFadeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool FadeOut(const FLinearColor& inColor, float inEndTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool FadeInit(const FLinearColor& rColor, const float inEndTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool FadeIn(const FLinearColor& inColor, float inEndTime);
    
    UFUNCTION(BlueprintCallable)
    bool FadeEnd();
    
};


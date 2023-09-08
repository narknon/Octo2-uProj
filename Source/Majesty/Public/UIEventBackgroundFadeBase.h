#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EINNER_SEQUENCE.h"
#include "KSUserWidgetBase.h"
#include "UIEventBackgroundFadeBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UUIEventBackgroundFadeBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EINNER_SEQUENCE InnerSeq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTime;
    
public:
    UUIEventBackgroundFadeBase();
protected:
    UFUNCTION(BlueprintCallable)
    bool TickInternal(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    bool StartFadeOut(FName ResourceLabel, float Time, FLinearColor BaseColor);
    
    UFUNCTION(BlueprintCallable)
    bool StartFadeIn(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFadeMaterialParam(FLinearColor Color, FName ResourceLabel);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadeOutFinish() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadeInFinish() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EINNER_SEQUENCE GetInnerSquence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EndFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EndFadeIn();
    
};


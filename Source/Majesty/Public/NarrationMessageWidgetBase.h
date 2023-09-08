#pragma once
#include "CoreMinimal.h"
#include "AcqUserWidget.h"
#include "TalkVoice.h"
#include "NarrationMessageWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UNarrationMessageWidgetBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
    UNarrationMessageWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkipDraw();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNottingLine();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBlankLine();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlayMessage(const FText& Text, int32 TextJustification, bool DisableAnimation, float DrawTime, FTalkVoice VoiceData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFadeOut();
    
};


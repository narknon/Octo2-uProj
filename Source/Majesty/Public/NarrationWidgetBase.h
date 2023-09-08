#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "NarrationDataBase.h"
#include "NarrationWidgetBase.generated.h"

class UNarrationMessageWidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UNarrationWidgetBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    UNarrationWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDrawMessage(bool& IsEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetPlayPageMessage(const FNarrationDataBase& page);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAnimationMode(bool PassBGOpen, bool PassBGClose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayNote(FName NoteLabel, bool UseBackground);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayNarration(FName NarrationSetLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PhraseMessageDraw();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenInner();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OneLineDraw(UNarrationMessageWidgetBase* TargetObject, FName TalkLabel, int32 TextJustification, bool DisableAnimation, bool IsVoiceSkip);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NextPage(bool& IsEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close(bool IsForceClose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AllDrawMessage();
    
};


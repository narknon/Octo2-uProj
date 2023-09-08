#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "StoryRecordBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UStoryRecordBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayPartyChat;
    
public:
    UStoryRecordBase();
    UFUNCTION(BlueprintCallable)
    void SetPartyChatPlay(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PreCloseAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PartyChatStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PartyChatReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PartyChatFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPartyChatPlay();
    
};


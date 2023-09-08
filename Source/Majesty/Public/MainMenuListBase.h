#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ENOTICE_TYPE.h"
#include "NoticeArgs.h"
#include "MainMenuListBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UMainMenuListBase : public UUserWidget {
    GENERATED_BODY()
public:
    UMainMenuListBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPartyRefresh(ENOTICE_TYPE eNoticeType, const FNoticeArgs& NoticeArgs);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};


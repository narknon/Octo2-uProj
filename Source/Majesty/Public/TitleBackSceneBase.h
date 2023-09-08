#pragma once
#include "CoreMinimal.h"
#include "AcqUserWidget.h"
#include "ETitleMovieState.h"
#include "TitleBackSceneBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UTitleBackSceneBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETitleMovieState m_State;
    
public:
    UTitleBackSceneBase();
    UFUNCTION(BlueprintCallable)
    void SetState(ETitleMovieState NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Debug_SetPrintCurrentTimeText(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Debug_GetIsPrintCurrentTime();
    
};


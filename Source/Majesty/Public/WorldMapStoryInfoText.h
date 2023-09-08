#pragma once
#include "CoreMinimal.h"
#include "AcqUserWidget.h"
#include "WorldMapStoryInfoText.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UWorldMapStoryInfoText : public UAcqUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsPlayingTextLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_LoopAnim;
    
public:
    UWorldMapStoryInfoText();
    UFUNCTION(BlueprintCallable)
    void SetIsPlayingTextLoopAnim(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void ScrubAnimation(float ElapsedTime);
    
};


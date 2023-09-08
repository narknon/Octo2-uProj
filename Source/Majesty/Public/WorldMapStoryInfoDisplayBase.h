#pragma once
#include "CoreMinimal.h"
#include "AcqUserWidget.h"
#include "EWorldMapZoomType.h"
#include "WorldMapDestinationData.h"
#include "WorldMapStoryInfoDisplayBase.generated.h"

class UWorldMapStoryInfoText;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UWorldMapStoryInfoDisplayBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsForceHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMapStoryInfoText* m_StoryInfoTextWidget;
    
public:
    UWorldMapStoryInfoDisplayBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(const FWorldMapDestinationData& StoryInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetForceHidden(bool isHidden);
    
    UFUNCTION(BlueprintCallable)
    void ScrubAnimation(float ElapsedTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitIsFocus(EWorldMapZoomType ZoomType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsForceHidden() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeUIFocus(bool IsFocus, bool isFast);
    
};


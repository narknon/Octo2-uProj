#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/UserWidget.h"
#include "EWidgetAnimationGroup.h"
#include "WidgetAnimationGroupData.h"
#include "AcqUserWidget.generated.h"

class UUMGSequencePlayer;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAJESTY_API UAcqUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ResetToDefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWidgetAnimationGroup, FWidgetAnimationGroupData> WidgetAnimationGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopTickWhenWidgetPaused;
    
public:
    UAcqUserWidget();
    UFUNCTION(BlueprintCallable)
    void StopAnimsImmediately(const TArray<UWidgetAnimation*>& anims);
    
    UFUNCTION(BlueprintCallable)
    void StopAnimImmediately(UWidgetAnimation* anim);
    
    UFUNCTION(BlueprintCallable)
    void StopAllAnimImmediatelyByGroup(EWidgetAnimationGroup group);
    
    UFUNCTION(BlueprintCallable)
    void StopAllAnimImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetAppearance();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GroupingAnimations();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalizedElapsedTime(UWidgetAnimation* anim);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetAllAnimations(TArray<UWidgetAnimation*>& outAllAnims);
    
public:
    UFUNCTION(BlueprintCallable)
    void EvaluateAnimationSpecificFrame(UWidgetAnimation* anim, int32 frame, bool isStopAllAnimBeforeEval);
    
    UFUNCTION(BlueprintCallable)
    void EvaluateAnimationLastFrame(UWidgetAnimation* anim, bool isStopAllAnimBeforeEval);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddNonGroupingAnimationsToDefaultGroup();
    
    UFUNCTION(BlueprintCallable)
    void AddAnimationsToGroup(EWidgetAnimationGroup group, TArray<UWidgetAnimation*> anims);
    
public:
    UFUNCTION(BlueprintCallable)
    UUMGSequencePlayer* AcqPlayAnimationDefault(UWidgetAnimation* anim, float StartAtTime, bool isStopAllAnimBeforePlay, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable)
    UUMGSequencePlayer* AcqPlayAnimationAtTime(UWidgetAnimation* anim, float StartAtTime, bool isStopAllAnimBeforePlay);
    
    UFUNCTION(BlueprintCallable)
    UUMGSequencePlayer* AcqPlayAnimation(UWidgetAnimation* anim, bool isStopAllAnimBeforePlay, bool isFast);
    
};


#pragma once
#include "CoreMinimal.h"
#include "KSUserWidgetBase.h"
#include "StoryNotificationBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UStoryNotificationBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
    UStoryNotificationBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenSubStory(FName TitleLabel, FName FormatTextLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenMarchant(FName MainStoryLabel, FName TitleLabel, FName FormatTextLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenCoupling(FName MainStoryLabel, FName TitleLabel, FName FormatTextLabel);
    
};


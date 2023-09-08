#pragma once
#include "CoreMinimal.h"
#include "WidgetAnimationGroupData.generated.h"

class UWidgetAnimation;

USTRUCT(BlueprintType)
struct FWidgetAnimationGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> Animations;
    
    MAJESTY_API FWidgetAnimationGroupData();
};


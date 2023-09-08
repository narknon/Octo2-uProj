#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AddBalloonParam.h"
#include "EEventBalloonDir.h"
#include "LibBalloon.generated.h"

class AActor;
class UBalloonBundleWidgetBase;

UCLASS(Blueprintable)
class MAJESTY_API ULibBalloon : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibBalloon();
    UFUNCTION(BlueprintCallable)
    static UBalloonBundleWidgetBase* GetBalloonBundleWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAddBalloonParam CreateBalloonParam_Auto(FName TalkLabel, FVector2D balloonOffset, EEventBalloonDir BalloonDir, bool EnableTail, AActor* TargetActor, float Scale);
    
};


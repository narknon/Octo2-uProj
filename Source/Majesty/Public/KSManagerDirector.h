#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KSManagerDirector.generated.h"

class AKSManagerDirector;
class UBalloonBundleWidgetBase;

UCLASS(Blueprintable)
class MAJESTY_API AKSManagerDirector : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBalloonBundleWidgetBase* BalloonBundleWidget;
    
public:
    AKSManagerDirector(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AKSManagerDirector* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBalloonBundleWidgetBase* GetBalloonBundleWidget();
    
};


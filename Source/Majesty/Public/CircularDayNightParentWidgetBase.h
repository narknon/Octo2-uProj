#pragma once
#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"
#include "CircularDayNightParentWidgetBase.generated.h"

class UWidget;

UCLASS(Blueprintable)
class MAJESTY_API UCircularDayNightParentWidgetBase : public UCanvasPanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ChildWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsChildKeepHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float RotationAngle;
    
public:
    UCircularDayNightParentWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetRotationAngle(float newRotationAngle);
    
};


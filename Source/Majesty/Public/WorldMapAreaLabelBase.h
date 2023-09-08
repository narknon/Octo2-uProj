#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AcqUserWidget.h"
#include "WorldMapAreaLabelBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UWorldMapAreaLabelBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOpenning;
    
public:
    UWorldMapAreaLabelBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector2D GetOverlapArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOpenning() const;
    
};


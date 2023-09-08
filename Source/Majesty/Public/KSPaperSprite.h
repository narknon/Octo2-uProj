#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PaperSprite.h"
#include "KSPaperSprite.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UKSPaperSprite : public UPaperSprite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CharaFootPivot;
    
    UKSPaperSprite();
    UFUNCTION(BlueprintCallable)
    FVector2D GetOffset();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetDimension();
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PaperFlipbook.h"
#include "FlipbookCalcData.h"
#include "KSPaperFlipbook.generated.h"

class UKSPaperSprite;

UCLASS(Blueprintable)
class MAJESTY_API UKSPaperFlipbook : public UPaperFlipbook {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UKSPaperSprite*> m_PaperSpritePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKSPaperSprite* m_pPrevSprite;
    
public:
    UKSPaperFlipbook();
    UFUNCTION(BlueprintCallable)
    void ResetKeyFrames(bool releaseSprite);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMaxSpriteSize() const;
    
    UFUNCTION(BlueprintCallable)
    void CalcFlipbookData(FFlipbookCalcData& Data);
    
};


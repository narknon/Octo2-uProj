#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Image.h"
#include "FlipbookCalcData.h"
#include "FBImage.generated.h"

class UKSPaperFlipbook;
class UPaperFlipbook;
class UPaperSprite;

UCLASS(Blueprintable)
class MAJESTY_API UFBImage : public UImage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UKSPaperFlipbook*> CustomFlipbook;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperFlipbook* flipbook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlipbookCalcData CalcData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoSizeUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DrawSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AnimationLoop;
    
    UFBImage();
    UFUNCTION(BlueprintCallable)
    void Tick(const float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SwitchFlipbookModifyTarget();
    
    UFUNCTION(BlueprintCallable)
    bool SetFlipbook(UPaperFlipbook* NewFlipbook);
    
    UFUNCTION(BlueprintCallable)
    void SetFBSize(UPaperSprite* TargetSprite);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawSize(const FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationLoop(bool bLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlipbookAnimeFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetSpriteOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMaxFBSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKSPaperFlipbook* GetFlipbookModifyTarget();
    
    UFUNCTION(BlueprintCallable)
    void CalcSprite();
    
};


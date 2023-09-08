#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "FrameGrabberManager.generated.h"

class UMaterialInstanceDynamic;
class UTexture2D;

UCLASS(Blueprintable)
class MAJESTY_API AFrameGrabberManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstanceDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> CaptureFrameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CaptureFrameTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NoiseAnimation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCaptureSuccess;
    
public:
    AFrameGrabberManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StopFrameGrab();
    
    UFUNCTION(BlueprintCallable)
    bool StartFrameGrab();
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialInstanceDynamic(UMaterialInstanceDynamic* MaterialInstance);
    
    UFUNCTION(BlueprintCallable)
    void SetCaptureEnable(bool Enable);
    
};


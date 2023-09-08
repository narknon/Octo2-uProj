#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "EAcqImageResourceType.h"
#include "MateriaTextureLabel.h"
#include "AcqImage.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class MAJESTY_API UAcqImage : public UImage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAcqImageResourceType ResourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetResourceFromOnRebuilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Acq_TextureForPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Acq_TextureLabelForRuntime_AutoFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Acq_TextureLabelForRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMateriaTextureLabel> Acq_MaterialTextureParams;
    
public:
    UAcqImage();
protected:
    UFUNCTION(BlueprintCallable)
    void ResetBrushResource();
    
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KSFlipbookKeyFrame.h"
#include "KSUIFlipbookData.generated.h"

class UMaterialInterface;
class UPaperFlipbook;

USTRUCT(BlueprintType)
struct FKSUIFlipbookData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Fps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKSFlipbookKeyFrame> KeyFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperFlipbook* flipbook;
    
    MAJESTY_API FKSUIFlipbookData();
};


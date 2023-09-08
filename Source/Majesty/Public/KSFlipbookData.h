#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KSFlipbookKeyFrame.h"
#include "KSFlipbookData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FKSFlipbookData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Fps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKSFlipbookKeyFrame> KeyFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    MAJESTY_API FKSFlipbookData();
};


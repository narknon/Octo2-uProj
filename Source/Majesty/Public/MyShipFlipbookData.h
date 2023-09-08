#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMYSHIP_CUSTOM_TYPE.h"
#include "MyShipFlipbookData.generated.h"

USTRUCT(BlueprintType)
struct FMyShipFlipbookData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMYSHIP_CUSTOM_TYPE ColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMYSHIP_CUSTOM_TYPE SailType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FlipbookName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshResourceLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OpenSailMeshResourceLabel;
    
    MAJESTY_API FMyShipFlipbookData();
};


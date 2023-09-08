#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EWIDGET_CREATE_PHASE.h"
#include "UIWidgetReferenceData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FUIWidgetReferenceData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BaseClassPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> InstancePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWIDGET_CREATE_PHASE CreatePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAddViewport;
    
    MAJESTY_API FUIWidgetReferenceData();
};


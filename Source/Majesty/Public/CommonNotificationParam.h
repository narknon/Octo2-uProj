#pragma once
#include "CoreMinimal.h"
#include "ECommonNotificationType.h"
#include "CommonNotificationParam.generated.h"

USTRUCT(BlueprintType)
struct FCommonNotificationParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MessageTextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MessageTextLabel_Param0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonNotificationType CommonNotificationType;
    
    MAJESTY_API FCommonNotificationParam();
};


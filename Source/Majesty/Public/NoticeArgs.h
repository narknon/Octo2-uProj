#pragma once
#include "CoreMinimal.h"
#include "NoticeArgs.generated.h"

USTRUCT(BlueprintType)
struct FNoticeArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    int32 IntParam0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    FName NameParam0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Octo2")
    TArray<int32> IntParams;
    
    MAJESTY_API FNoticeArgs();
};


#pragma once
#include "CoreMinimal.h"
#include "ServiceConnecter.h"
#include "OssServiceConnecter.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UOssServiceConnecter : public UServiceConnecter {
    GENERATED_BODY()
public:
    UOssServiceConnecter();
};


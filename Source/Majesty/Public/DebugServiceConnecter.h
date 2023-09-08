#pragma once
#include "CoreMinimal.h"
#include "ServiceConnecter.h"
#include "DebugServiceConnecter.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UDebugServiceConnecter : public UServiceConnecter {
    GENERATED_BODY()
public:
    UDebugServiceConnecter();
};


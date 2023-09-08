#pragma once
#include "CoreMinimal.h"
#include "ServiceConnecter.h"
#include "NullServiceConnecter.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UNullServiceConnecter : public UServiceConnecter {
    GENERATED_BODY()
public:
    UNullServiceConnecter();
};


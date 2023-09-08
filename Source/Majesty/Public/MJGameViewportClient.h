#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "MJGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class MAJESTY_API UMJGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UMJGameViewportClient();
};


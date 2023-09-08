#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnUnLockedAchievementDelegate.h"
#include "ServiceConnecter.generated.h"

UCLASS(Abstract, Blueprintable)
class MAJESTY_API UServiceConnecter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnLockedAchievement OnUnLockedAchievement;
    
    UServiceConnecter();
};


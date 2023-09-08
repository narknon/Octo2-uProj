#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TitleBackgroundMoviePlayerBase.generated.h"

class UManaComponent;

UCLASS(Blueprintable)
class MAJESTY_API ATitleBackgroundMoviePlayerBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UManaComponent* m_ManaComponent;
    
public:
    ATitleBackgroundMoviePlayerBase(const FObjectInitializer& ObjectInitializer);
};


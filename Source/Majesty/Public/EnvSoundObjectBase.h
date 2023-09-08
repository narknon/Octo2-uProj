#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnvSoundObjectBase.generated.h"

class UAtomComponent;

UCLASS(Blueprintable)
class MAJESTY_API AEnvSoundObjectBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* m_cpAtomComponent;
    
public:
    AEnvSoundObjectBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void BattleChange_SavePlayingState();
    
    UFUNCTION(BlueprintCallable)
    void BattleChange_RestorePlayingState();
    
};


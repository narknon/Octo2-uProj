#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AISACCtrlParam.h"
#include "AISACControlComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UAISACControlComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAISACCtrlParam> m_acAISACData;
    
    UAISACControlComponent();
    UFUNCTION(BlueprintCallable)
    void SetupAISAC();
    
};


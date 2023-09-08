#pragma once
#include "CoreMinimal.h"
#include "KSTriggerBase.h"
#include "HouseEnterTrigger.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API AHouseEnterTrigger : public AKSTriggerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nInFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nOutFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fManualFocusDistance_Room;
    
public:
    AHouseEnterTrigger(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void SetupFocalLength(bool bIsHouseIn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOutFloor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInFloor();
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MJBoxTrigger.h"
#include "CameraLockTrigger.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class MAJESTY_API ACameraLockTrigger : public AMJBoxTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLockX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLockY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLockZ;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_LimitLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_LimitLockFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_LimitUnlock;
    
public:
    ACameraLockTrigger(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetLimitPosition(const FVector& limitLock, const FVector& limitLockFar, const FVector& limitUnlock);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UBoxComponent* GetCollision();
    
    UFUNCTION(BlueprintCallable)
    FVector ClamptLockPositionInRange(const FVector& lockPosition);
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventFlagData.h"
#include "EventFlagObjectBase.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API AEventFlagObjectBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventFlagData> m_anEventFlagData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrologueForceHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SwitchVisibilityOnPostTick;
    
public:
    AEventFlagObjectBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisible(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetupEventFlagVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupEnable(int32 nFlagIndex, bool bStatusFlag);
    
    UFUNCTION(BlueprintCallable)
    TArray<FEventFlagData> GetEventFlagArray();
    
};


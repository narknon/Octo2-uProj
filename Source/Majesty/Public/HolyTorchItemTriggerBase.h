#pragma once
#include "CoreMinimal.h"
#include "EHOLY_TORCH_TYPE.h"
#include "EPlayableCharacterID.h"
#include "MJBoxTrigger.h"
#include "HolyTorchItemTriggerBase.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API AHolyTorchItemTriggerBase : public AMJBoxTrigger {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHOLY_TORCH_TYPE HolyTorchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EventLabels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPlayableCharacterID> RequiredCharaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerStartFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerEndFlag;
    
public:
    AHolyTorchItemTriggerBase(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void SwitchShiningMirror(bool bEnable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTriggerEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShiningMirrorFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPlayEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterConditon(int32 nIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckReburnCondition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckLuminusStatue();
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TriggerBase.h"
#include "EKSTriggerType.h"
#include "KSTriggerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class MAJESTY_API AKSTriggerBase : public ATriggerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSTriggerType m_eTriggerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nProcessOrder;
    
    AKSTriggerBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Update(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugTextColor(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugText(const FString& debugStr);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKSTriggerType GetTriggerType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanActivateTrigger();
    
};


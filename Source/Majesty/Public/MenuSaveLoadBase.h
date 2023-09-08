#pragma once
#include "CoreMinimal.h"
#include "ESAVELOAD_RESULT.h"
#include "ESaveDataLoadTarget.h"
#include "KSUserWidgetWithState.h"
#include "MenuSaveLoadBase.generated.h"

class UKSSaveSystem;

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UMenuSaveLoadBase : public UKSUserWidgetWithState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveDataLoadTarget m_LoadTarget;
    
public:
    UMenuSaveLoadBase();
    UFUNCTION(BlueprintCallable)
    void SetLoadTarget(ESaveDataLoadTarget Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenMenu(bool IsSaveMode, bool FromDebugMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UKSSaveSystem* GetTargetSystemData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetResult(ESAVELOAD_RESULT& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESaveDataLoadTarget GetLoadTarget();
    
};


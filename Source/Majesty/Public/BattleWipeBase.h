#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AcqUserWidget.h"
#include "EBATTLE_WIPE_STATE.h"
#include "BattleWipeBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UBattleWipeBase : public UAcqUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBattleEndWipeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableWhiteOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExecWipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBATTLE_WIPE_STATE m_eState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugWipeColorEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_DebugWipeColor;
    
    UBattleWipeBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WipeOutAtBattleStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WipeOutAtBattleEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WipeInAtBattleStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WipeInAtBattleEnd();
    
    UFUNCTION(BlueprintCallable)
    void SetWhiteOut(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupDebugWipeColor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsReadyAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecWipe();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableWhiteOut();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleEndWipeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideWipeAtBattleEnd_Immediately();
    
};


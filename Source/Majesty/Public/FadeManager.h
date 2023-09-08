#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AcqManagerBase.h"
#include "EFADE_KIND.h"
#include "EFADE_TYPE.h"
#include "EFADE_USER.h"
#include "EWIPE_KIND.h"
#include "FadeManager.generated.h"

class UBattleWipeBase;
class UKSFade;

UCLASS(Blueprintable)
class MAJESTY_API AFadeManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKSFade* m_FadeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattleWipeBase* m_BattleWipeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_FadeUser;
    
public:
    AFadeManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void WipeOut(EWIPE_KIND WipeKind);
    
    UFUNCTION(BlueprintCallable)
    void WipeInAtBattleEndFromEvent();
    
    UFUNCTION(BlueprintCallable)
    void WipeIn(EWIPE_KIND WipeKind);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCancelWipeOutAtBattleEnd(bool Val);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadeUser(EFADE_USER User);
    
    UFUNCTION(BlueprintCallable)
    bool IsFadeEnd();
    
    UFUNCTION(BlueprintCallable)
    bool IsBattleWipeActive();
    
    UFUNCTION(BlueprintCallable)
    bool IsBattleEndWipeOut();
    
    UFUNCTION(BlueprintCallable)
    void HideBattleEndWipe_Immediately();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCancelWipeOutAtBattleEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKSFade* GetFadeWidget(EFADE_KIND FadeKind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFadeUser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFADE_TYPE GetFadeType(EFADE_KIND FadeKind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBattleWipeBase* GetBattleWipeWidget();
    
    UFUNCTION(BlueprintCallable)
    UKSFade* FadeOut(EFADE_KIND FadeKind, float EndTime, const FLinearColor Color, EFADE_USER FadeUser);
    
    UFUNCTION(BlueprintCallable)
    UKSFade* FadeInImmediately(EFADE_KIND FadeKind, EFADE_USER FadeUser);
    
    UFUNCTION(BlueprintCallable)
    UKSFade* FadeIn(EFADE_KIND FadeKind, float EndTime, const FLinearColor Color, EFADE_USER FadeUser);
    
    UFUNCTION(BlueprintCallable)
    UKSFade* ClearFadeForcibly(EFADE_KIND FadeKind);
    
};


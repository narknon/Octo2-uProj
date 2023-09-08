#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EBATTLE_STYLE_TYPE.h"
#include "StyleChangeComponent.generated.h"

class ABattleCharacterBase;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UStyleChangeComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cOwnerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* m_cPlayerStatusUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBATTLE_STYLE_TYPE m_eUniqueStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBATTLE_STYLE_TYPE m_eCurrentStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nStyleChangePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nStyleChangePointMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nResumeBoostPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bStyleChangeReady;
    
public:
    UStyleChangeComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStyleChangePoint(int32 nNewStyleChangePoint, int32& outCurrentPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerStatusUI(UUserWidget* cPlayerStatusUI);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RecoveryStyleChangePoint(int32 nValue);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnStyleChange();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnBreakStyle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnBoostStyle();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OffStyleChange(bool bCancel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OffBreakStyle(bool bCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OffBoostStyle(bool bCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStyleChangeReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStyleChangePointMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStyleChangeExec();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStyleChangeAvailable();
    
    UFUNCTION(BlueprintCallable)
    void InitStyleChange(EBATTLE_STYLE_TYPE eUniqueStyle, int32 nStyleChangePoint, int32 nStyleChangePointMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBATTLE_STYLE_TYPE GetUniqueStyle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetStyleChangePoint(int32& outStyleChangePoint, int32& outStyleChangePointMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBATTLE_STYLE_TYPE GetCurrentStyle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool FinishStyleChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DecisionStyleChange();
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetStyleChangePointMax(int32 nValue);
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetStyleChangePoint(int32 nValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckEnableBreakStyle();
    
};


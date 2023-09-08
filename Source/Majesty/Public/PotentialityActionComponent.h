#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPOTENTIALITY_ACTION_TYPE.h"
#include "PotentialityActionData.h"
#include "PotentialityActionComponent.generated.h"

class ABattleCharacterBase;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UPotentialityActionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattleCharacterBase* m_cOwnerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* m_cPlayerStatusUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* m_cPlayerSubStatusUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nResumeBoostPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nResumeActionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPotentialityActionData m_cPotentialityActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPOTENTIALITY_ACTION_TYPE m_eUniqueActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nActionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nActionPointMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bActionReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bActionExec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDoubleActionExec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsExecBreakAct;
    
public:
    UPotentialityActionComponent();
    UFUNCTION(BlueprintCallable)
    void SetPotentialityActionPoint(int32 nNewActionPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerSubStatusUI(UUserWidget* cPlayerStatusUI);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerStatusUI(UUserWidget* cPlayerStatusUI);
    
    UFUNCTION(BlueprintCallable)
    void SetExecBreakAct(bool bExecBreakAct);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResumeUnusedPotentialityAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RecoveryPotentialityActionPoint(int32 nValue);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnPotentialityAction_Common();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnPotentialityAction();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OffPotentialityAction_Common(bool bCancel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OffPotentialityAction(bool bCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPotentialityActionReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPotentialityActionPointMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPotentialityActionExec();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPotentialityActionAvailable();
    
    UFUNCTION(BlueprintCallable)
    void InitPotentialityAction(FPotentialityActionData cActionData, int32 nActionPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPOTENTIALITY_ACTION_TYPE GetUniquePotentialityAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPotentialityActionPoint(int32& outActionPoint, int32& outActionPointMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPotentialityActionData GetPotentialityActionData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPotentialityActionCommandText(FName& outActionCommandName, FName& outActionCommandDetail);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetPotentialityActionAbility();
    
    UFUNCTION(BlueprintCallable)
    void FullPotentialityActionPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool FinishPotentialityAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecPotentialityAction();
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetPotentialityActionPointMax(int32 nValue);
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetPotentialityActionPoint(int32 nValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckEnablePotentialityAction(EPOTENTIALITY_ACTION_TYPE eActionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddPotentialityActionPoint(int32 nAddActionPoint, bool bIgnoreAddAbility);
    
};


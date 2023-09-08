#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPlayableCharacterID.h"
#include "ETRANSPORTATION_TYPE.h"
#include "ETRANSPORT_EFFECT.h"
#include "LEVEL_AREA_TYPE.h"
#include "PlayerPropertyComponent.generated.h"

class AEventTriggerBox;
class AKSCharacterBase;
class ASwitchIndoorTrigger;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UPlayerPropertyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETRANSPORTATION_TYPE m_CurrentTransportType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETRANSPORT_EFFECT m_CurrentTransportEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    LEVEL_AREA_TYPE m_CurrentLevelArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayableCharacterID m_PlayerCharacterID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EnableFCJudge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKSCharacterBase* m_RefTalkCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEventTriggerBox* m_RefEventTriger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASwitchIndoorTrigger* m_RefSwitchIndoorTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsPTC_CheckSwitchIndoorTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsMissionRecord_CheckSwitchIndoorTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsPTC_SwitchIndoorTriggerEndOverlapIgnore;
    
public:
    UPlayerPropertyComponent();
    UFUNCTION(BlueprintCallable)
    void SetRefTalkCharacter(AKSCharacterBase* Val);
    
    UFUNCTION(BlueprintCallable)
    void SetRefSwitchIndoorTrigger(ASwitchIndoorTrigger* Val);
    
    UFUNCTION(BlueprintCallable)
    void SetRefEventTriger(AEventTriggerBox* Val);
    
    UFUNCTION(BlueprintCallable)
    EPlayableCharacterID SetPlayerID(EPlayableCharacterID ID);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionRecord_CheckSwitchIndoorTrigger(bool bIsTriiger);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableFCJudge(bool Val);
    
    UFUNCTION(BlueprintCallable)
    ETRANSPORTATION_TYPE SetCurrentTransportType(ETRANSPORTATION_TYPE Value);
    
    UFUNCTION(BlueprintCallable)
    ETRANSPORT_EFFECT SetCurrentTransportEffectType(ETRANSPORT_EFFECT Value);
    
    UFUNCTION(BlueprintCallable)
    LEVEL_AREA_TYPE SetCurrentLevelArea(LEVEL_AREA_TYPE Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionRecord_CheckSwitchIndoorTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKSCharacterBase* GetRefTalkCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASwitchIndoorTrigger* GetRefSwitchIndoorTrigger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEventTriggerBox* GetRefEventTriger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayableCharacterID GetPlayerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableFCJudge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETRANSPORTATION_TYPE GetCurrentTransportType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETRANSPORT_EFFECT GetCurrentTransportEffectType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    LEVEL_AREA_TYPE GetCurrentLevelArea();
    
    UFUNCTION(BlueprintCallable)
    void ClearReferenceObject();
    
};


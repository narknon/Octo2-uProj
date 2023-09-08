#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NPCBattleData.h"
#include "NPCHearDataBase.h"
#include "NPCLeadDataBase.h"
#include "NPCPurchaseDataBase.h"
#include "NpcPropertyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAJESTY_API UNpcPropertyComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_NpcLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NpcUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_RequestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsEnableMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsMoveNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsNoReactionNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsEnableFieldCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsPlayingAutoTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AutoBalloonDistance;
    
public:
    UNpcPropertyComponent();
    UFUNCTION(BlueprintCallable)
    void SetRequestID(int32 Val);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayingAutoTalk(bool Val);
    
    UFUNCTION(BlueprintCallable)
    int32 SetNpcUniqueID(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    FName SetNpcLabel(FName Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsNoReactionNPC(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMoveNPC(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEnableMove(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEnableFieldCommand(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoBalloonDistance(float Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwoon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSignBoard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAutoTalk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGramoPhone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequestID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPurchaseData(FNPCPurchaseDataBase& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNpcUniqueID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNpcLabel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLeadData(FNPCLeadDataBase& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsNoReactionNPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMoveNPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEnableMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEnableFieldCommand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHearData(FNPCHearDataBase& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBattleData(FNPCBattleData& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAutoBalloonDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckFieldCommandEnable();
    
};


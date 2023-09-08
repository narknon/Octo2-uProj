#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActionOrderData.h"
#include "EACTION_ORDER_TYPE.h"
#include "EBATTLE_START_TYPE.h"
#include "BattleActionOrder.generated.h"

class ABattleCharacterBase;
class UActionOrderIcon;

UCLASS(Blueprintable)
class MAJESTY_API ABattleActionOrder : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionOrderData> m_acActionOrderPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionOrderData> m_acCurrentOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionOrderData> m_acReserveCurrentOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acCurrentCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionOrderData> m_acEstimateCurrentOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionOrderData> m_acNextOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionOrderData> m_acReserveNextOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acNextCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionOrderData> m_acEstimateNextOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acCurrentCharacterForSubParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acNextCharacterForSubParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionOrderData> m_acCurrentOrderForSubParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionOrderData> m_acNextOrderForSubParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acSubPartyPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleCharacterBase*> m_acSubEnemyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nActionCharacterCount;
    
public:
    ABattleActionOrder(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool UpdateNextOrderIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateNextOrder();
    
    UFUNCTION(BlueprintCallable)
    bool UpdateCurrentOrderIndex();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SubActionCharacterCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SortPredicateByWaitTime(const FActionOrderData& cElementA, const FActionOrderData& cElementB);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SortPredicateByNextTime(const FActionOrderData& cElementA, const FActionOrderData& cElementB);
    
    UFUNCTION(BlueprintCallable)
    bool SortActionOrderByWaitTime(UPARAM(Ref) TArray<FActionOrderData>& acTargetOrder);
    
    UFUNCTION(BlueprintCallable)
    bool SortActionOrderByNextTime(UPARAM(Ref) TArray<FActionOrderData>& acTargetOrder);
    
    UFUNCTION(BlueprintCallable)
    bool ShuffleActionOrder(UPARAM(Ref) TArray<FActionOrderData>& acTargetOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupSubPartyPlayer(UPARAM(Ref) TArray<ABattleCharacterBase*>& acSubPartyPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupFirstTurnPlayer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetNextOrderChange(ABattleCharacterBase* cTargetCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEstimateActionOrderChange(UPARAM(Ref) TArray<FActionOrderData>& acTargetOrder, ABattleCharacterBase* cTargetCharacter, EACTION_ORDER_TYPE eOrderType, bool bBuffOrder, bool& FindCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetCurrentOrderChange(ABattleCharacterBase* cTargetCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBattleFirstActionTurn(UPARAM(Ref) TArray<ABattleCharacterBase*>& acFirstActionCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetActionOrderChange(UPARAM(Ref) TArray<FActionOrderData>& acTargetOrder, ABattleCharacterBase* cTargetCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SealActionOrder(ABattleCharacterBase* cTarget, FActionOrderData& cTargetOrder, bool& bSealNextOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetNextOrderForIsOrderChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetEstimateNextOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetEstimateCurrentOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetCurrentOrderForIsOrderChange();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetCurrentCharacterWaitTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetActionOrderForIsOrderChange(UPARAM(Ref) TArray<FActionOrderData>& acTargetOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReplaceActionOrder(UPARAM(Ref) TArray<FActionOrderData>& acTargetOrder, UPARAM(Ref) TArray<FActionOrderData>& acReserveList, EACTION_ORDER_TYPE eType, ABattleCharacterBase* cReplaceCharacter, int32 nReplaceIndex, bool bReturnOrderToReserve, FActionOrderData& cReplaceOrder);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveNextOrderForSubParty(ABattleCharacterBase* cTargetCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveNextOrder(ABattleCharacterBase* cTargetCharacter, bool bEverSince);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveCurrentOrderForSubParty(ABattleCharacterBase* cTargetCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveCurrentOrder(ABattleCharacterBase* cTargetCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveBreakStyleOrder(UPARAM(Ref) TArray<FActionOrderData>& acTargetOrder, UPARAM(Ref) TArray<FActionOrderData>& acReserveList);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveBreakStyle();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveActionOrderForEstimate(UPARAM(Ref) TArray<FActionOrderData>& acTargetOrder, ABattleCharacterBase* cTargetCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveActionOrderByIndex(UPARAM(Ref) TArray<FActionOrderData>& acTargetOrder, UPARAM(Ref) TArray<FActionOrderData>& acReserveList, int32 nRemoveIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveActionOrder(UPARAM(Ref) TArray<FActionOrderData>& acTargetOrder, UPARAM(Ref) TArray<FActionOrderData>& acReserveList, ABattleCharacterBase* cTargetCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PopOrder(ABattleCharacterBase*& cNextCharacter, FActionOrderData& cNextOrderData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlaySubIconOpenAnim(UPARAM(Ref) TArray<FActionOrderData>& OrderData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PlaySubIconCloseAnim(UPARAM(Ref) TArray<FActionOrderData>& OrderData);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool MoveActionOrderByIndex(UPARAM(Ref) TArray<FActionOrderData>& acTargetOrder, int32 nTargetIndex, int32 nToIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool MoveActionOrder(UPARAM(Ref) TArray<FActionOrderData>& acTargetOrder, EACTION_ORDER_TYPE eType, int32 nMoveCount, bool bIsNextOrder);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsSettledOrderForEightBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsNextCharacterCross();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsNextCharacterContinue(ABattleCharacterBase* cCheckCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsCurrentOrderComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InsertNextOrderForSubParty(int32& nInsetIndex, ABattleCharacterBase* cTargetCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InsertNextOrder(int32& nInsetIndex, ABattleCharacterBase* cTargetCharacter, EACTION_ORDER_TYPE eType, float fDelay, bool bUseIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InsertCurrentOrderForSubParty(int32& nInsetIndex, ABattleCharacterBase* cTargetCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InsertCurrentOrder(int32& nInsetIndex, ABattleCharacterBase* cTargetCharacter, EACTION_ORDER_TYPE eType, float fDelay, bool bUseIcon);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InsertActionOrder(UPARAM(Ref) TArray<FActionOrderData>& acTargetOrder, UPARAM(Ref) FActionOrderData& cInsertOrder, int32& nInsetIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitializeActionOrder(UPARAM(Ref) TArray<ABattleCharacterBase*>& acBattlePlayer, UPARAM(Ref) TArray<ABattleCharacterBase*>& acBattleEnemy, EBATTLE_START_TYPE eStartType);
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetOrderIconFromCharaRef(UPARAM(Ref) TArray<FActionOrderData>& searchArray, ABattleCharacterBase* targetRef, FActionOrderData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetOrder(ABattleCharacterBase*& cNextCharacter, FActionOrderData& cNextOrderData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetEstimateActionOrderList(TArray<FActionOrderData>& acCurrentOrder, TArray<FActionOrderData>& acNextOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetActionOrderList(TArray<FActionOrderData>& acCurrentOrder, TArray<FActionOrderData>& acNextOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool FindNextOrderByCharacter(ABattleCharacterBase* cTargetCharacter, TArray<FActionOrderData>& acFindOrderList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool FindCurrentOrderByCharacter(ABattleCharacterBase* cTargetCharacter, TArray<FActionOrderData>& acFindOrderList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecMoveNextOrder(EACTION_ORDER_TYPE eType, int32 nMoveCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecMoveCurrentOrder(EACTION_ORDER_TYPE eType, int32 nMoveCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecEstimateNextOrder(UPARAM(Ref) TArray<ABattleCharacterBase*>& acTargetCharacter, EACTION_ORDER_TYPE eOrderType, int32 nMoveCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecEstimateCurrentOrder(UPARAM(Ref) TArray<ABattleCharacterBase*>& acTargetCharacter, EACTION_ORDER_TYPE eOrderType, int32 nMoveCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ExecEstimateActionOrder(UPARAM(Ref) TArray<ABattleCharacterBase*>& acTargetCharacter, EACTION_ORDER_TYPE eOrderType, int32 nMoveCount, bool bContainCurrentOrder, bool bContinueEstimate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EndCharacterOrderForEightBattle();
    
    UFUNCTION(BlueprintCallable)
    static bool Debug_OutputOrderLogFromBodyList(const FString& Title, TArray<FString> BodyList);
    
    UFUNCTION(BlueprintCallable)
    static bool Debug_OutputOrderLog(const FString& Title, const FString& Body);
    
    UFUNCTION(BlueprintCallable)
    static bool Debug_OutputOrderIconLog(const UActionOrderIcon* cIcon, const FString& Title);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_GetCommonOrderDataLog(const FActionOrderData cTarget, bool IsCurrent, FString& OutBody);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CreateSubPartyOrder(UPARAM(Ref) TArray<ABattleCharacterBase*>& acSubPartyCharacter, UPARAM(Ref) TArray<FActionOrderData>& acOriginalOrder, UPARAM(Ref) TArray<FActionOrderData>& acOrderResult, UPARAM(Ref) TArray<FActionOrderData>& acReserveList, UPARAM(Ref) TArray<FActionOrderData>& acBribeOrderList, bool IsNextOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CreateSubPartyCharacterList(UPARAM(Ref) TArray<ABattleCharacterBase*>& acSubPartyCharacter, UPARAM(Ref) TArray<FActionOrderData>& acOrderResult, bool IsNextOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CreateMainPartyCharacterList(UPARAM(Ref) TArray<FActionOrderData>& acOriginalOrder, UPARAM(Ref) TArray<FActionOrderData>& acOrderResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CreateActionOrder(UPARAM(Ref) TArray<ABattleCharacterBase*>& acBattleCharacter, UPARAM(Ref) TArray<FActionOrderData>& acOrderResult, UPARAM(Ref) TArray<FActionOrderData>& acReserveList);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ClearCurrentOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckSpecialOrderAllAGIUp(int32 AbilityID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckSpecialOrderAGIUpSelfDown(int32 AbilityID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckShuffleEnable(FActionOrderData cTargetOrder);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckEnablePartyChangeOrder(EACTION_ORDER_TYPE eOrderType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ChangeBattleTurn();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ChangeBattleSubParty(ABattleCharacterBase* cActiveCharacter, bool DefeatChange);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ChangeBattlePartyMember(UPARAM(Ref) TArray<ABattleCharacterBase*>& acChangePlayerList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BribeActionOrder(ABattleCharacterBase* cEnforcer, ABattleCharacterBase* cTarget, FActionOrderData& cReplaceOrder, FActionOrderData& cTargetOrder, bool& bReplaceNextOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BreakActionOrder(ABattleCharacterBase* cTargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    void AssignNextOrderIndex();
    
    UFUNCTION(BlueprintCallable)
    void AssignCurrentOrderIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddNextOrderCharacter(ABattleCharacterBase* cAddCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddLastActionOrder(UPARAM(Ref) TArray<FActionOrderData>& acTargetOrder, UPARAM(Ref) FActionOrderData& cInsertOrder, int32& nInsetIndex);
    
};


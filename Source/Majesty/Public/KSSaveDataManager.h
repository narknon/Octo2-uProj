#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AcqManagerBase.h"
#include "EBPIsValidReturnCode.h"
#include "EEndRollSegmentSet.h"
#include "EKSPartySet.h"
#include "EKSSaveSlotName.h"
#include "EPlayableCharacterID.h"
#include "SaveBackPackItem.h"
#include "SaveGameDelegateDelegate.h"
#include "KSSaveDataManager.generated.h"

class AKSSaveDataManager;
class UKSSaveSystem;
class UMJSaveData;

UCLASS(Blueprintable)
class MAJESTY_API AKSSaveDataManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMJSaveData* SaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKSSaveSystem* SaveSystem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> m_TemporaryBackpackItemList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsCreatedsystemSaveData;
    
    AKSSaveDataManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool ValidateAtlantisPartySet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSlotData(EKSSaveSlotName slotIdx);
    
    UFUNCTION(BlueprintCallable)
    bool SubItemFromBackpack(FName ItemLabel, int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartAutoSave(const FSaveGameDelegate& AutoSavedDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetupReminiscenceParty(EPlayableCharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetupLastDungeonParty(UPARAM(Ref) TArray<int32>& Party1, UPARAM(Ref) TArray<int32>& Party2);
    
    UFUNCTION(BlueprintCallable)
    bool SetupLastDungeonMode(UPARAM(Ref) TArray<int32>& Party1, UPARAM(Ref) TArray<int32>& Party2);
    
    UFUNCTION(BlueprintCallable)
    bool SetupFixedParty(const TArray<EPlayableCharacterID>& fixedCharaList);
    
    UFUNCTION(BlueprintCallable)
    void SetupBackpackItemList(const TArray<FSaveBackPackItem>& saveBackpackItemList);
    
    UFUNCTION(BlueprintCallable)
    void SetupAtlantisPartySet(EKSPartySet PartySetID, const TArray<int32>& mainMember, const TArray<int32>& subMember);
    
    UFUNCTION(BlueprintCallable)
    void SetNewGame(bool NewIsNewGame);
    
    UFUNCTION(BlueprintCallable)
    void SetLastAccessSlotIndex(EKSSaveSlotName slotIdx);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCreatedsystemSaveData(bool IsCreatedsystemSaveData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetGameSaveData_Native(UMJSaveData* saveData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGameSaveData_BP(UMJSaveData* saveData);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGameSaveData(UMJSaveData* saveData);
    
    UFUNCTION(BlueprintCallable)
    static void SetEventPlayedFlag(int32 Index, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetEventFlag(int32 Index, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    static void SetEventCounter(int32 Index, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEndrollSegmentBattleReplay(EEndRollSegmentSet SegmentID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBattleSpeed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetBackpackItem(const int32 ItemId, const int32 ItemNum);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAutoSavePlayerLocation(FVector PlayerLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoSaveEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoSaved(bool NewIsAutoSaved);
    
    UFUNCTION(BlueprintCallable)
    bool ResumeNormalPartySet();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RestoreParty();
    
    UFUNCTION(BlueprintCallable)
    bool ResetPartySet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetBattleSpeed();
    
    UFUNCTION(BlueprintCallable)
    void RefreshBackpackSaveData();
    
    UFUNCTION(BlueprintCallable)
    bool PrepareAtlantisPartySet();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishAutoSaveSystemData(const FString& SlotName, const int32 UserIndex, bool IsSuccesss);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishAutoSaveGameData(const FString& SlotName, const int32 UserIndex, bool IsSuccesss);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndAutoSave();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MergePartyData();
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidEventFlag(TEnumAsByte<EBPIsValidReturnCode::Type>& returnCode, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoSaved() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitSystemData();
    
    UFUNCTION(BlueprintCallable)
    bool InitPartyData(EPlayableCharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitGameData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKSSaveSystem* GetSysSaveData() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetSaveBackpackDataWithBuffer(int32 BufferSize, TArray<FSaveBackPackItem>& outBackPackitemsWithBuffer);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetSaveBackpackData(TArray<FSaveBackPackItem>& outBackPackItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKSSaveSlotName GetLastAccessSlotIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AKSSaveDataManager* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMJSaveData* GetGameSaveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetEventPlayedFlag(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetEventFlagByName(FName FlagLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetEventFlag(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEventCounter(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKSPartySet GetCurrentPartySet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetCalcBaseBattleSpeed();
    
    UFUNCTION(BlueprintCallable)
    bool GetBackpackItem(int32& ItemNum, const int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAutoSavePlayerLocation() const;
    
    UFUNCTION(BlueprintCallable)
    bool FinishLastDungeonMode();
    
    UFUNCTION(BlueprintCallable)
    bool FinishFixedParty();
    
    UFUNCTION(BlueprintCallable)
    void FindItemFromBackpack(FName ItemLabel, bool& isFind, int32& Num);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetupAtlantisPartySetRandom();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetRandomParticipationOrder();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_ResumeNormalPartySet();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_PrintItemAcquisitionHistory();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_ClearParticipationOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckEventFlag(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool ChangePartySet(EKSPartySet PartySetID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeBattleSpeed();
    
    UFUNCTION(BlueprintCallable)
    bool AddItemToBackpack(FName ItemLabel, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    bool AddItemsToBackpack(const TMap<FName, int32>& itemAndNum);
    
    UFUNCTION(BlueprintCallable)
    static void AddEventCounter(int32 Index, int32 Value);
    
};


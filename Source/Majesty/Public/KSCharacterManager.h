#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AcqManagerBase.h"
#include "EKSCharacterDir.h"
#include "EKSCharacterMoveMode.h"
#include "ENOTICE_TYPE.h"
#include "EPlayableCharacterID.h"
#include "FollowNpcObjectData.h"
#include "LEVEL_AREA_TYPE.h"
#include "MJFieldCommandType.h"
#include "NoticeArgs.h"
#include "KSCharacterManager.generated.h"

class AKSCharacterBase;
class UMJSaveData;
class UPlayerLocationTrace;

UCLASS(Blueprintable)
class MAJESTY_API AKSCharacterManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKSCharacterBase* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKSCharacterBase*> PartyCharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKSCharacterBase*> UsePartyCharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PartyFollowOffsetBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PartyFollowOffsetLadderUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PartyFollowOffsetLadderDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PartyFollowOffsetCanoe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PartyFollowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKSCharacterBase*> BarCharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFollowNpcObjectData> FollowCharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FollowNpcID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKSCharacterBase*> PartnerCharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKSCharacterBase* PlayFCActionCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PartyCharacterEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastPartyMemberIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKSCharacterBase* LastPartyMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLeadCharacterEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLureCharacterEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHireCharacterEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlacateCharacterEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BarCharacterEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OpenMyShipSail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, AKSCharacterBase*> m_CharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerLocationTrace* m_PlayerLocationTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKSCharacterBase*> PartyFollowCharaList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AKSCharacterBase*> EpiloguePartyChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPlayableCharacterID> EpiloguePartyCharaId;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationTimeMaxWork;
    
    AKSCharacterManager(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePartyFollowOffset();
    
public:
    UFUNCTION(BlueprintCallable)
    void UnregisterFromCharacterList(AKSCharacterBase* Character);
    
    UFUNCTION(BlueprintCallable)
    void SetupPlayers();
    
    UFUNCTION(BlueprintCallable)
    void SetupPartyCharacter();
    
    UFUNCTION(BlueprintCallable)
    void SetupEpilogueParty();
    
    UFUNCTION(BlueprintCallable)
    void SetSkipPartyCharacterEnableFromCallbackLoaded();
    
    UFUNCTION(BlueprintCallable)
    void SetShowDebugInfo(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetPartyHouseIn(float Scale, float OffsetHeight, bool HouseOut, bool bNotPartyRefresh);
    
    UFUNCTION(BlueprintCallable)
    void SetPartyGravity(bool Enable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPartyFollowOffset();
    
    UFUNCTION(BlueprintCallable)
    void SetPartyCharacterInstance(int32 PartyIndex, AKSCharacterBase* chara);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPartyCharacterEnable(bool inEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPartnerCharacterInstance(int32 partnerIndex, AKSCharacterBase* chara);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMyShipSail(bool bOpen);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetFollowCharacterInstance(int32 followIndex, AKSCharacterBase* chara, MJFieldCommandType FCType);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCharacterMoveMode_AlsoPlayer(EKSCharacterMoveMode eMoveMode, bool excludeDash);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterMoveMode(EKSCharacterMoveMode eMoveMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterEnable(int32 Category, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetBarCharacterEnableAll(bool inEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetBarCharacterEnable(int32 Index, bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SavePlayerPlacementFromTheater();
    
    UFUNCTION(BlueprintCallable)
    void SavePlayerPlacementFromPChat();
    
    UFUNCTION(BlueprintCallable)
    void RestorePlayerPlacement();
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayerLocationHistory(FVector InLocation, EKSCharacterDir InDir);
    
    UFUNCTION(BlueprintCallable)
    void ResetPartyCharacterForOutGame();
    
    UFUNCTION(BlueprintCallable)
    void ResetPartyCharacter();
    
    UFUNCTION(BlueprintCallable)
    void ResetNewFollowMove();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetFollowMasterCharacterID();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetFollowerLocation();
    
    UFUNCTION(BlueprintCallable)
    void ResetCanoeEffect();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTemporaryEnemyResourceLabel(FName enemyResLabel);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEpiloguePartyCharacter();
    
    UFUNCTION(BlueprintCallable)
    void RemoveCharacter(AKSCharacterBase* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveBarCharacterAll();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllTemporaryEnemyResourceLabel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveAllEquipment(EPlayableCharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable)
    void RegisterToCharacterList(AKSCharacterBase* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RegisterNpcToFollowNPCList(MJFieldCommandType FCType);
    
    UFUNCTION(BlueprintCallable)
    void RefreshPartyLocation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshPartyFollowOffset();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RefreshPartyCharacter(bool bSkipLoadResource);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshPartyAfterChangeMember();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RefreshPartnerCharacters();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshHunterPartnerVisibility();
    
    UFUNCTION(BlueprintCallable)
    void RefreshFollowFormation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RefreshFollowCharacters();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RefreshFollowCharacter(AKSCharacterBase* Target);
    
    UFUNCTION(BlueprintCallable)
    void PushPlayerLocationToHistory(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void LoadCharacterResource(TArray<FName> CharaResourceLabels);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledCharacter_HunterPartner();
    
    UFUNCTION(BlueprintCallable)
    bool InitPartyLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitParams(FVector MovePoint, EKSCharacterDir Dir);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitAfterLoadSaveData(UMJSaveData* saveData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AKSCharacterBase*> GetUsePartyCharacterList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetTemporaryEnemyResourceLabelList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRunMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetResidentResourceLabelList(TArray<FName>& LabelList, bool ContainNpcResource);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKSCharacterBase* GetPlayerObject();
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerMoveHistoryParams(int32 Index, FVector& Location, uint8& Dir, EKSCharacterMoveMode& Mode, bool& success);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerLocationHistory(int32 Index, FVector& out_Location, EKSCharacterDir& out_Dir, EKSCharacterMoveMode& outMoveMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    LEVEL_AREA_TYPE GetPlayerCurrentArea();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKSCharacterBase* GetPlacateFollowNPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AKSCharacterBase*> GetPartyCharacterList();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKSCharacterBase* GetPartyCharacterInstance(int32 PartyIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    AKSCharacterBase* GetPartyCharacterIndex(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPartyCharacterEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AKSCharacterBase* GetPartyCharacter(EPlayableCharacterID CharacterID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKSCharacterBase* GetPartnerCharacterInstance(int32 partnerIndex);
    
    UFUNCTION(BlueprintCallable)
    AKSCharacterBase* GetPartnerCharacter(int32 Index) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMyShipSail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKSCharacterBase* GetLureFollowNPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocationIndex(int32 inOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKSCharacterBase* GetLeadFollowNPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKSCharacterBase* GetLastPartyMember() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKSCharacterBase* GetHireFollowNPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFollowNpcNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFollowNpcIdList(TArray<int32>& outFollowIds, TArray<int32>& outSubIds);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKSCharacterBase* GetFollowMember(MJFieldCommandType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFollowMasterNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayableCharacterID GetFollowMasterCharacterID(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKSCharacterBase* GetFollowCharacterInstance(int32 followIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKSCharacterMoveMode GetCharacterMoveMode();
    
    UFUNCTION(BlueprintCallable)
    AKSCharacterBase* GetBarCharacterIndex(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FullRecoveryCharacter(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FullRecoveryAllPartyMember();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool EquipItem(EPlayableCharacterID CharacterID, FName ItemLabel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DelegateForShipMovingSE(ENOTICE_TYPE noticeType, const FNoticeArgs& Args);
    
public:
    UFUNCTION(BlueprintCallable)
    static void Debug_ShowFollowInfo(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetTempDisableFallPrevention();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetPushPlayerPosCountPerSec(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetPartyLoad(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetFallLimit(int32 fallLimit);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetEnableNewFollow(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetEnableFallPrevention(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_OutputPlayerLocationHistory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_IsEnableFallPrevention();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Debug_GetPushPlayerPosCountPerSec();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_GetPartyLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Debug_GetFallLimit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Debug_GetEnableNewFollow();
    
    UFUNCTION(BlueprintCallable)
    void Debug_DrawFollowFormation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPartyCharaLadderAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BeginPlayers();
    
    UFUNCTION(BlueprintCallable)
    void AddTemporaryEnemyResourceLabel(FName enemyResLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AKSCharacterBase* AddPlayerCharacter(EPlayableCharacterID PlayerID, const FVector& Location, EKSCharacterDir Dir);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AKSCharacterBase* AddPartyCharacter(AKSCharacterBase* Follow, int32 PartyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AKSCharacterBase* AddPartnerCharacter(AKSCharacterBase* Follow);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddFollowMasterCharacterID(EPlayableCharacterID CharacterID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AKSCharacterBase* AddFieldCharacter(const FName& ActionLabel, const FVector& Location, EKSCharacterDir Dir);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AKSCharacterBase* AddEventCharacter(const FName& ActionLabel, const FVector& Location, EKSCharacterDir Dir);
    
    UFUNCTION(BlueprintCallable)
    AKSCharacterBase* AddEpiloguePartyCharacter(EPlayableCharacterID PlayerCharaId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AKSCharacterBase* AddBarCharacter(const FName& ActionLabel, const FVector& Location, EKSCharacterDir Dir, int32 charIndex);
    
};


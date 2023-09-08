#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CharacterFormData.h"
#include "EDBNoticeType.h"
#include "EJOB_TYPE.h"
#include "EKSCharacterAction.h"
#include "EKSCharacterDir.h"
#include "EKSCharacterMoveMode.h"
#include "EKSInputMode.h"
#include "EPlayableCharacterID.h"
#include "ESUPPORT_AILMENT_TYPE.h"
#include "ESpecialActionType.h"
#include "LEVEL_AREA_TYPE.h"
#include "MJFieldCommandType.h"
#include "PlayableCharacterData.h"
#include "SimpleActionLoad.h"
#include "SupportAbilityDataBase.h"
#include "KSCharacterFunction.generated.h"

class AActor;
class AKSCharacterBase;
class AKSPlayerController;
class UBoxComponent;
class UObject;
class UPlayerPropertyComponent;

UCLASS(Blueprintable)
class MAJESTY_API UKSCharacterFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKSCharacterFunction();
    UFUNCTION(BlueprintCallable)
    static void SubPlayerCharacterFirstEquipment(EPlayableCharacterID CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static LEVEL_AREA_TYPE Static_GetPlayerCurrentArea();
    
    UFUNCTION(BlueprintCallable)
    static bool StartPlayerLadderUp(AActor* ladderActor, UBoxComponent* ladderUpTrigger, const FVector& StartPosition);
    
    UFUNCTION(BlueprintCallable)
    static bool StartPlayerLadderDown(AActor* ladderActor, UBoxComponent* ladderUpTrigger, const FVector& StartPosition);
    
    UFUNCTION(BlueprintCallable)
    static void StartEpilogueParty();
    
    UFUNCTION(BlueprintCallable)
    static AKSCharacterBase* SpawnPlayerCharacter(EPlayableCharacterID PlayerID, const FVector& Location, EKSCharacterDir Dir);
    
    UFUNCTION(BlueprintCallable)
    static AKSCharacterBase* SpawnNPCCharacter(const FName& ActionLabel, const FVector& Location, EKSCharacterDir Dir);
    
    UFUNCTION(BlueprintCallable)
    static AKSCharacterBase* SpawnEventCharacter(const FName& ActionLabel, const FVector& Location, EKSCharacterDir Dir);
    
    UFUNCTION(BlueprintCallable)
    static AKSCharacterBase* SpawnBarCharacter(const FName& ActionLabel, const FVector& Location, EKSCharacterDir Dir, int32 charIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SortCharacterIDFromJobDisplay(TArray<int32> CharaID, TArray<int32>& outCharaID);
    
    UFUNCTION(BlueprintCallable)
    static bool SetUpLadderUpStart(AActor* ladderActor, UBoxComponent* upCollision, FVector vPosition, EKSCharacterMoveMode eCheckMode, EKSCharacterMoveMode eSetMode, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool SetUpLadderDownStart(AActor* ladderActor, UBoxComponent* downCollision, FVector vPosition, EKSCharacterMoveMode eCheckMode, EKSCharacterMoveMode eSetMode, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetupFirstLearnAbility();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPlayerCharacterInput(UObject* WorldContextObject, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetPartyHouseIn(float Scale, float OffsetHeight, bool HouseOut, bool bNotPartyRefresh);
    
    UFUNCTION(BlueprintCallable)
    static void SetMyShipSail(bool bOpen);
    
    UFUNCTION(BlueprintCallable)
    static void SetLadderMoveParamsToPlayer(const FVector& upEndPos, const FVector& downEndPos);
    
    UFUNCTION(BlueprintCallable)
    static void SetLadderCharacterPosition(FVector vPosition, EKSCharacterMoveMode eMoveMode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetKSInputMode(UObject* WorldContextObject, EKSInputMode Mode);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void ResetPartyCharacterForOutGame();
    
    UFUNCTION(BlueprintCallable)
    static void ResetLadderMode();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveCharacter(AKSCharacterBase* Character);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterCharacterToManageList(AKSCharacterBase* Character);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshPartyCharacterFormation();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RefreshPartyAfterChangeMember(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RefreshCharacterVoice(UObject* WorldContextObject, TArray<int32>& CharacterIDs);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshCharacterResource(bool containNPC);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshCharacterLantern();
    
    UFUNCTION(BlueprintCallable)
    static void NotifyCharaFormDB(FName dbName, EDBNoticeType notice);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRegisteredInManageList(AKSCharacterBase* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerCharacterInput(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerCharacter(AActor* charaActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlacateFollowNPC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMainPlayerCharacter(EPlayableCharacterID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLureFollowNPC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLearnedAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLeadFollowNPC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHireFollowNPC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGuestPlayerCharacterFromID(int32 CharaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGuestPlayerCharacter(EPlayableCharacterID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFieldCommandActionEnd(AKSCharacterBase* Character);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEquipedSupportAbility(int32 CharacterID, ESUPPORT_AILMENT_TYPE SupportAilment, FSupportAbilityDataBase& outEquipedSupportAbility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEightParty();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void InitPlayerAfterSetSaveData(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetTargetRearLocation(AKSCharacterBase* TargetCharacter, float Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EKSCharacterDir GetReverseDirByPosition(AKSCharacterBase* CharaA, AKSCharacterBase* CharB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EKSCharacterDir GetReverseDir(const EKSCharacterDir& Dir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPlayerPropertyComponent* GetPlayerProperty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AKSCharacterBase* GetPlayerObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPlayerDataByIntID(int32 CharacterID, FPlayableCharacterData& CharacterData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPlayerDataByID(EPlayableCharacterID PlayerID, FPlayableCharacterData& CharacterData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetPlayerCharacterLabelWithForm(UObject* WorldContextObject, EPlayableCharacterID PlayerID, uint8 CharaForm);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static uint8 GetPlayerCharacterForm(UObject* WorldContextObject, EPlayableCharacterID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetNPCResourceLabelFromLevelName_NoReaction(TArray<FSimpleActionLoad>& OutData, FName levelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetNPCResourceLabelFromLevelName_ExceptNoReaction(TArray<FName>& OutData, FName levelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetNPCResourceLabelFromLevelName(TArray<FName>& OutData, FName levelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMyShipSail();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EKSCharacterMoveMode GetMoveModeForAction(EKSCharacterAction Action);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetLandLocation(UObject* WorldContextObject, FVector& OutNewLocation, const FVector& Location, float Length, const FVector AddOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AKSPlayerController* GetKSPlayerController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EKSInputMode GetKSInputMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetDirVector(EKSCharacterDir Dir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetCurrentPartyResourceLabel(TArray<FName>& OutData, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ESpecialActionType> GetCharacterSpecialActionTypeList(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESpecialActionType GetCharacterSpecialActionType(int32 CharacterID, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetCharacterSpecialActionTextLabelsForMenuName(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetCharacterSpecialActionTextLabelsForMenuDetail(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetCharacterSpecialActionTextLabelsForBattleCommandName(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetCharacterSpecialActionTextLabelsForBattleCommandDetail(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetCharacterSpecialActionTextLabelsForAbilityLabel(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetCharacterSpecialActionTextLabelForPlayerSelectDetail(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetCharacterSpecialActionTextLabelForMenuName(int32 CharacterID, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetCharacterSpecialActionTextLabelForMenuDetail(int32 CharacterID, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetCharacterSpecialActionTextLabelForBattleCommandName(int32 CharacterID, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetCharacterSpecialActionTextLabelForBattleCommandDetail(int32 CharacterID, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetCharacterSpecialActionTextLabelForAbilityLabel(int32 CharacterID, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetCharacterLabelNameForSaveLoad(UObject* WorldContextObject, EPlayableCharacterID PlayerID, EJOB_TYPE JobID, int32 CharaForm);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetCharacterLabelNameForJob(UObject* WorldContextObject, EPlayableCharacterID PlayerID, EJOB_TYPE JobID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetCharacterLabelNameForEventFlag(UObject* WorldContextObject, EPlayableCharacterID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetCharacterLabelNameForBaseJob(UObject* WorldContextObject, EPlayableCharacterID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetCharacterLabelName(UObject* WorldContextObject, EPlayableCharacterID PlayerID, EJOB_TYPE JobID, bool IsEventFlagCheck);
    
    UFUNCTION(BlueprintCallable)
    static EPlayableCharacterID GetCharacterID(AKSCharacterBase* Target, bool& IsPlayableCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCharacterFormData(FCharacterFormData& OutData, FName Label, EKSCharacterAction Action, EKSCharacterDir Dir);
    
    UFUNCTION(BlueprintCallable)
    static TArray<MJFieldCommandType> GetCharacterFieldCommandType(EPlayableCharacterID PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllPlayerCharacterIdList(TArray<int32>& outCharaIdList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllPlayerCharacterEnumList(TArray<EPlayableCharacterID>& outCharaEnumList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetActionLabelNameByResourceLabel(FName ResourceLabel);
    
    UFUNCTION(BlueprintCallable)
    static void FullRecoveryAllPartyMember();
    
    UFUNCTION(BlueprintCallable)
    static bool FinishLadderModeWithoutPosition(EKSCharacterMoveMode eCheckMode, EKSCharacterMoveMode eSetMode, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool FinishLadderMode(FVector vPosition, EKSCharacterMoveMode eCheckMode, EKSCharacterMoveMode eSetMode, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool EndPlayerLadderUp(const FVector& EndPosition);
    
    UFUNCTION(BlueprintCallable)
    static bool EndPlayerLadderDown(const FVector& EndPosition);
    
    UFUNCTION(BlueprintCallable)
    static void EndEpilogueParty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EnablePartyCharaRemove();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> Debug_GetPlayableCharacterIdNameList();
    
    UFUNCTION(BlueprintCallable)
    static FString Debug_GetPlayableCharacterIdName(EPlayableCharacterID CharaID);
    
    UFUNCTION(BlueprintCallable)
    static void ClearActionReferenceObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckStopAction(FName ActionLabel, EKSCharacterAction Action);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckLadderState(EKSCharacterMoveMode eMoveMode, bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckHaveLantern();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckCharacterHaveSpecialAction(int32 CharacterID, ESpecialActionType Type, int32& OutputIndex);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerCharacterFirstEquipment(EPlayableCharacterID CharacterID);
    
};


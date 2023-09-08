#pragma once
#include "CoreMinimal.h"
#include "EBPFuncReturnCode.h"
#include "EEQUIPMENT_PART.h"
#include "EHUNTER_PARTNER_ID.h"
#include "EMYSHIP_CUSTOM_PART.h"
#include "EMYSHIP_CUSTOM_TYPE.h"
#include "EPlayableCharacterID.h"
#include "ETameMonsterMode.h"
#include "MJFieldCommandType.h"
#include "SaveBackPackItem.h"
#include "SaveDataUtilBase.h"
#include "SaveEquipmentData.h"
#include "SaveEquipmentDataID.h"
#include "SaveFollowNpcData.h"
#include "SavePlayerCharacterData.h"
#include "TameMonsterData.h"
#include "CharacterSaveDataUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UCharacterSaveDataUtil : public USaveDataUtilBase {
    GENERATED_BODY()
public:
    UCharacterSaveDataUtil();
    UFUNCTION(BlueprintCallable)
    static bool UpdateFollowNpcSupportLimit(MJFieldCommandType FieldCommandType, int32 SupportLimit);
    
    UFUNCTION(BlueprintCallable)
    static void SubPlayerMoney(int32 SubMoney);
    
    UFUNCTION(BlueprintCallable)
    static void SetTameMonsterMode(ETameMonsterMode Mode);
    
    UFUNCTION(BlueprintCallable)
    static void SetTameMonsterData(int32 Index, FTameMonsterData NewTameMonster);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerMoney(int32 Money);
    
    UFUNCTION(BlueprintCallable)
    static void SetMyShipCustomFirstChoice(EMYSHIP_CUSTOM_PART Part, EMYSHIP_CUSTOM_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetMyShipCustom(EMYSHIP_CUSTOM_PART Part, EMYSHIP_CUSTOM_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetLegendMonsterData(int32 Index, FTameMonsterData NewLegendMonster);
    
    UFUNCTION(BlueprintCallable)
    static void SetHunterPartner(EHUNTER_PARTNER_ID partnerID);
    
    UFUNCTION(BlueprintCallable)
    static bool SetFollowWaitingNpc(int32 NPCID, int32 SupportLimitCount, MJFieldCommandType FieldCommandType, EPlayableCharacterID CharaID);
    
    UFUNCTION(BlueprintCallable)
    static bool SetFollowNpc(int32 NPCID, int32 SupportLimitCount, MJFieldCommandType FieldCommandType, EPlayableCharacterID CharaID);
    
    UFUNCTION(BlueprintCallable)
    static void SetFirstEquipment(EPlayableCharacterID PlayerCharaId);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterRawMP(int32 PlayerCharaId, int32 MP);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterRawHP(int32 PlayerCharaId, int32 HP);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterLevelAndExp(int32 PlayerCharaId, int32 Level, int32 Exp);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterJobPoint(int32 PlayerCharaId, int32 JP);
    
    UFUNCTION(BlueprintCallable)
    static void SetCharacterData(int32 CharacterIndex, const FSavePlayerCharacterData& CharacterData);
    
    UFUNCTION(BlueprintCallable)
    static void SetBackpackItemList(const TArray<FSaveBackPackItem>& ItemList);
    
    UFUNCTION(BlueprintCallable)
    static void SetAdvancedAbility(int32 CharacterID, int32 AbilityIndex, bool IsLearn);
    
    UFUNCTION(BlueprintCallable)
    static void SetAbility(int32 CharacterID, int32 JobID, int32 AbilityIndex, bool IsLearn);
    
    UFUNCTION(BlueprintCallable)
    static void MergePlayerMoney(int32 ReminiMoney);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLearnAdvancedAbility(int32 CharacterID, int32 AbilityIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTameMonsterNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ETameMonsterMode GetTameMonsterMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSecondJobID_FromSaveCharacterData(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRawPOT_FromSaveCharacterData(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRawMP_FromSaveCharacterData(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRawHP_FromSaveCharacterData(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPriorityJobID_FromSaveCharacterData(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerMoney();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMYSHIP_CUSTOM_TYPE GetMyShipCustomFirstChoice(EMYSHIP_CUSTOM_PART Part);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMYSHIP_CUSTOM_TYPE GetMyShipCustom(EMYSHIP_CUSTOM_PART Part);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLevel_FromSaveCharacterData(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLegendMonsterNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetJobPoint_FromSaveCharacterData(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EHUNTER_PARTNER_ID GetHunterPartner();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFollowWaitingNpcUniqueId(TArray<int32>& outUniqId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFollowWaitingNPCDataByType(int32& NPCID, int32& SupportLimit, MJFieldCommandType FieldCommandType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFollowWaitingNpcByFieldCommandType(MJFieldCommandType FieldCommandType, FSaveFollowNpcData& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFollowNpcUniqueId(TArray<int32>& outUniqId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFollowNPCDataByType(int32& NPCID, int32& SupportLimit, MJFieldCommandType FieldCommandType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFollowNpcByNpcUniqueId(int32 NPCID, FSaveFollowNpcData& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFollowNpcByFieldCommandType(MJFieldCommandType FieldCommandType, FSaveFollowNpcData& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFollowNpcByCharacterIdAndFieldCommandType(EPlayableCharacterID CharaID, MJFieldCommandType Type, FSaveFollowNpcData& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFollowNpcByCharacterID(EPlayableCharacterID CharaID, FSaveFollowNpcData& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFollowNpcAndWaitingNpcUniqueId(TArray<int32>& outUniqId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FSaveFollowNpcData> GetFollowNpc();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFirstJobID_FromSaveCharacterData(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetExp_FromSaveCharacterData(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetEquipSupportSkill_FromSaveCharacterData(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSaveEquipmentDataID GetEquipment_FromSaveCharacterData(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharacterID_FromSaveCharacterData(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCharacterFixedEquipment(int32 CharacterID, EEQUIPMENT_PART Part);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetCharacterEquipmentPartLabel(int32 CharacterID, EEQUIPMENT_PART Part);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetCharacterEquipmentLabels(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSaveEquipmentData GetCharacterEquipmentLabel(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSavePlayerCharacterData GetCharacterData(int32 CharacterID);
    
    UFUNCTION(BlueprintCallable)
    static bool FindCharacterFromPlayerMember(int32 CharacterID, int32& FoundIndex, FSavePlayerCharacterData& FoundCharacter, TEnumAsByte<EBPFuncReturnCode::Type>& returnCode);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteTameMonsterInvadeID(int32 TargetInvadeID);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteTameMonster(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteLegendMonster(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteFollowWaitingNpc(MJFieldCommandType FieldCommandType);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteFollowNpcByCharacterID(EPlayableCharacterID CharaID);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteFollowNpc(MJFieldCommandType FieldCommandType);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetAllAbility(int32 CharacterID, bool FullOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckCharacterAlive_SpecialActionType(int32 SpecialActionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanShowHunterPartnerInParty();
    
    UFUNCTION(BlueprintCallable)
    static bool AddTameMonster(FTameMonsterData TameMonster);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerMoney(int32 AddMoney);
    
    UFUNCTION(BlueprintCallable)
    static bool AddLegendMonster(FTameMonsterData LegendMonster);
    
};


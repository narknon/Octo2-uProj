#pragma once
#include "CoreMinimal.h"
#include "EKSPartySet.h"
#include "EPlayableCharacterID.h"
#include "SaveDataUtilBase.h"
#include "SavePlayerCharacterData.h"
#include "PartySaveDataUtil.generated.h"

UCLASS(Blueprintable)
class MAJESTY_API UPartySaveDataUtil : public USaveDataUtilBase {
    GENERATED_BODY()
public:
    UPartySaveDataUtil();
    UFUNCTION(BlueprintCallable)
    static bool UpdateCurrentPartySet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPartySolo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBattleMember(EPlayableCharacterID CharaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetSubMemberCharacterIDs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetSubMemberArrayIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FSavePlayerCharacterData> GetSubMember();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPlayableCharacterID GetPartyTopCharacterID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FSavePlayerCharacterData> GetMemberFromMainMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetMainMemberCharacterIDs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetMainMemberArrayIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetLastAtlantisPartySet(EKSPartySet partySet);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FSavePlayerCharacterData> GetBattleMember();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckInSubParty(EPlayableCharacterID CharaID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckInPartySet(EPlayableCharacterID CharaID, EKSPartySet partySet);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckInParty(EPlayableCharacterID CharaID);
    
};


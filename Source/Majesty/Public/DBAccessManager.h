#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemData.h"
#include "ItemDataForMenu.h"
#include "NPCData.h"
#include "DBAccessManager.generated.h"

class ADBAccessManager;

UCLASS(Blueprintable)
class MAJESTY_API ADBAccessManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> m_SupporterLabelToNpcLableTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> m_EnemyLabelToNpcLableTable;
    
public:
    ADBAccessManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SearchAbilitySetFromRestricWeapon(const FName& WeaponLabel, FName& AbilitySetLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PrepareDBAccess(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FText MakeItemDetailText(const FItemData& ItemData, int32 CharacterID);
    
    UFUNCTION(BlueprintCallable)
    bool GetNpcLabelBySupporterLabel(FName& outLabel, FName SupporterLabel);
    
    UFUNCTION(BlueprintCallable)
    bool GetNpcLabelByEnemyLabel(FName& outLabel, FName EnemyLabel);
    
    UFUNCTION(BlueprintCallable)
    bool GetNpcDataBySupporterLabel(FNPCData& OutData, FName SupporterLabel);
    
    UFUNCTION(BlueprintCallable)
    bool GetNpcDataByEnemyLabel(FNPCData& OutData, FName EnemyLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetMenuJobLabelList(TArray<FName>& outJobList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetMenuJobIDList(TArray<int32>& outIDList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetItemDataForMenu(const FName& ItemLabel, FItemDataForMenu& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ADBAccessManager* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool ConvertUniqueIDToLabel(int32 NPCUniqID, FName& NPCLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool ConvertSupportAbilityIdToLabel(int32 SuportAbilityId, FName& SuportAbilityLabel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool ConvertLabelToAbilitySetID(FName AbilitySetLabel, int32& AbilitySetID);
    
};


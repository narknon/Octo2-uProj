#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMANAGER_CREATE_PHASE.h"
#include "InitAfterSpawnManagerDelegate.h"
#include "AcqManagerFactory.generated.h"

class AAcqManagerBase;
class AAcqManagerFactory;
class UDataTable;
class UObject;

UCLASS(Blueprintable)
class MAJESTY_API AAcqManagerFactory : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_ManagerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UClass*> m_NameToClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UClass*> m_NameToBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FName> m_BaseClassToName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TWeakObjectPtr<AAcqManagerBase>> m_apManagerTable;
    
public:
    AAcqManagerFactory(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StartManagers(EMANAGER_CREATE_PHASE CreatePhase);
    
    UFUNCTION(BlueprintCallable)
    void SetInitAfterSpawn(FName managerName, const FInitAfterSpawnManager& initAfterSpawn);
    
    UFUNCTION(BlueprintCallable)
    void ResetTables();
    
    UFUNCTION(BlueprintCallable)
    void ResetManagersFromTitle();
    
    UFUNCTION(BlueprintCallable)
    void ResetManagersAll();
    
    UFUNCTION(BlueprintCallable)
    void ResetManagers(EMANAGER_CREATE_PHASE CreatePhase);
    
    UFUNCTION(BlueprintCallable)
    void PostInitManagers(EMANAGER_CREATE_PHASE CreatePhase);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadedClassObject(UPARAM(Ref) TArray<UObject*>& objList);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExist(FName managerName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailableByCategory(EMANAGER_CREATE_PHASE CreatePhase);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(TSoftObjectPtr<UDataTable> managerTable);
    
    UFUNCTION(BlueprintCallable)
    static AAcqManagerBase* GetManagerInstance(UClass* managerClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAcqManagerBase* GetManager(FName managerName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AAcqManagerFactory* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    void DestroyManagers(EMANAGER_CREATE_PHASE CreatePhase);
    
    UFUNCTION(BlueprintCallable)
    void DestroyManager(FName managerName);
    
    UFUNCTION(BlueprintCallable)
    void Debug_ShowManagerInfo(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void Debug_GetManagerInfo(UPARAM(Ref) FString& outDebugInfo);
    
    UFUNCTION(BlueprintCallable)
    bool CreateManagersSequentially(EMANAGER_CREATE_PHASE CreatePhase);
    
    UFUNCTION(BlueprintCallable)
    void CreateManagers(EMANAGER_CREATE_PHASE CreatePhase);
    
    UFUNCTION(BlueprintCallable)
    bool CreateManagerClassesSequentially(EMANAGER_CREATE_PHASE CreatePhase);
    
};


#pragma once
#include "CoreMinimal.h"
#include "AcqManagerBase.h"
#include "EDB_LOAD_TIMING.h"
#include "RowNameIdSet.h"
#include "DatabaseManager.generated.h"

class UDataTable;
class UObject;
class UScriptStruct;

UCLASS(Blueprintable)
class MAJESTY_API ADatabaseManager : public AAcqManagerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_DatabaseInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UScriptStruct*, FName> m_StructToName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UDataTable*> m_DatabaseTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRowNameIdSet> m_RowNameIdSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> m_AsyncLoading;
    
public:
    ADatabaseManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static void Static_Unload(FName dbName);
    
    UFUNCTION(BlueprintCallable)
    static bool Static_LoadSyncSingle(FName dbName);
    
    UFUNCTION(BlueprintCallable)
    static bool Static_LoadSyncByTiming(EDB_LOAD_TIMING LoadTiming);
    
    UFUNCTION(BlueprintCallable)
    static bool Static_LoadAsyncSingle(FName dbName);
    
    UFUNCTION(BlueprintCallable)
    static bool Static_LoadAsyncByTiming(EDB_LOAD_TIMING LoadTiming);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Static_IsLoading(FName dbName);
    
    UFUNCTION(BlueprintCallable)
    static bool Static_IsLoaded(FName dbName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Static_IsAnythingLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Static_GetRowNames(TArray<FName>& OutRowNames, FName dbName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Static_GetRowName(FName dbName, int32 rowId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Static_GetRowID(FName dbName, FName RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDataTable* Static_GetDBPtr(FName dbName);
    
    UFUNCTION(BlueprintCallable)
    bool SetDbInfoTable(TSoftObjectPtr<UDataTable> dbInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoaded(UPARAM(Ref) TArray<UObject*>& objList);
    
public:
    UFUNCTION(BlueprintCallable)
    static void Debug_ShowDBInfo(bool bEnable);
    
};


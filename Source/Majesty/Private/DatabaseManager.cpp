#include "DatabaseManager.h"

ADatabaseManager::ADatabaseManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_DatabaseInfo = NULL;
}

void ADatabaseManager::Static_Unload(FName dbName) {
}

bool ADatabaseManager::Static_LoadSyncSingle(FName dbName) {
    return false;
}

bool ADatabaseManager::Static_LoadSyncByTiming(EDB_LOAD_TIMING LoadTiming) {
    return false;
}

bool ADatabaseManager::Static_LoadAsyncSingle(FName dbName) {
    return false;
}

bool ADatabaseManager::Static_LoadAsyncByTiming(EDB_LOAD_TIMING LoadTiming) {
    return false;
}

bool ADatabaseManager::Static_IsLoading(FName dbName) {
    return false;
}

bool ADatabaseManager::Static_IsLoaded(FName dbName) {
    return false;
}

bool ADatabaseManager::Static_IsAnythingLoading() {
    return false;
}

bool ADatabaseManager::Static_GetRowNames(TArray<FName>& OutRowNames, FName dbName) {
    return false;
}

FName ADatabaseManager::Static_GetRowName(FName dbName, int32 rowId) {
    return NAME_None;
}

int32 ADatabaseManager::Static_GetRowID(FName dbName, FName RowName) {
    return 0;
}

UDataTable* ADatabaseManager::Static_GetDBPtr(FName dbName) {
    return NULL;
}

bool ADatabaseManager::SetDbInfoTable(TSoftObjectPtr<UDataTable> dbInfo) {
    return false;
}

void ADatabaseManager::OnLoaded(TArray<UObject*>& objList) {
}

void ADatabaseManager::Debug_ShowDBInfo(bool bEnable) {
}



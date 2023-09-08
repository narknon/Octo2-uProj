#include "AcqManagerFactory.h"

AAcqManagerFactory::AAcqManagerFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ManagerList = NULL;
}

void AAcqManagerFactory::StartManagers(EMANAGER_CREATE_PHASE CreatePhase) {
}

void AAcqManagerFactory::SetInitAfterSpawn(FName managerName, const FInitAfterSpawnManager& initAfterSpawn) {
}

void AAcqManagerFactory::ResetTables() {
}

void AAcqManagerFactory::ResetManagersFromTitle() {
}

void AAcqManagerFactory::ResetManagersAll() {
}

void AAcqManagerFactory::ResetManagers(EMANAGER_CREATE_PHASE CreatePhase) {
}

void AAcqManagerFactory::PostInitManagers(EMANAGER_CREATE_PHASE CreatePhase) {
}

void AAcqManagerFactory::OnLoadedClassObject(TArray<UObject*>& objList) {
}

bool AAcqManagerFactory::IsExist(FName managerName) {
    return false;
}

bool AAcqManagerFactory::IsAvailableByCategory(EMANAGER_CREATE_PHASE CreatePhase) {
    return false;
}

void AAcqManagerFactory::Initialize(TSoftObjectPtr<UDataTable> managerTable) {
}

AAcqManagerBase* AAcqManagerFactory::GetManagerInstance(UClass* managerClass) {
    return NULL;
}

AAcqManagerBase* AAcqManagerFactory::GetManager(FName managerName) {
    return NULL;
}

AAcqManagerFactory* AAcqManagerFactory::GetInstance() {
    return NULL;
}

void AAcqManagerFactory::DestroyManagers(EMANAGER_CREATE_PHASE CreatePhase) {
}

void AAcqManagerFactory::DestroyManager(FName managerName) {
}

void AAcqManagerFactory::Debug_ShowManagerInfo(bool bShow) {
}

void AAcqManagerFactory::Debug_GetManagerInfo(FString& outDebugInfo) {
}

bool AAcqManagerFactory::CreateManagersSequentially(EMANAGER_CREATE_PHASE CreatePhase) {
    return false;
}

void AAcqManagerFactory::CreateManagers(EMANAGER_CREATE_PHASE CreatePhase) {
}

bool AAcqManagerFactory::CreateManagerClassesSequentially(EMANAGER_CREATE_PHASE CreatePhase) {
    return false;
}



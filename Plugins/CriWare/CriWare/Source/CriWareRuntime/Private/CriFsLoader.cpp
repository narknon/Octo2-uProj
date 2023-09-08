#include "CriFsLoader.h"
#include "CriFsLoaderComponent.h"

ACriFsLoader::ACriFsLoader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LoaderComponent = CreateDefaultSubobject<UCriFsLoaderComponent>(TEXT("CriFsLoaderComponent0"));
    this->RootComponent = LoaderComponent;
}



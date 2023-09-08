#include "TitleBackgroundMoviePlayerBase.h"
#include "ManaComponent.h"

ATitleBackgroundMoviePlayerBase::ATitleBackgroundMoviePlayerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ManaComponent = CreateDefaultSubobject<UManaComponent>(TEXT("ManaComponent"));
}



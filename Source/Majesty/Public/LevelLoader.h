#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LevelLoader.generated.h"

class ULevelSet;

UCLASS(Blueprintable)
class ULevelLoader : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSet* m_TargetLevelSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ULevelSet*> m_LoadedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_LevelSetClass;
    
public:
    ULevelLoader();
};


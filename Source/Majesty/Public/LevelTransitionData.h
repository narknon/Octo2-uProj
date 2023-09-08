#pragma once
#include "CoreMinimal.h"
#include "ECharacterMoveModeForDB.h"
#include "EKSCharacterDir.h"
#include "ELevelTriggerID.h"
#include "LevelTransitionData.generated.h"

USTRUCT(BlueprintType)
struct FLevelTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnableFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelTriggerID NextLevelTriggerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKSCharacterDir MapInCharaDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterMoveModeForDB MapInCharaMoveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextMapNoticeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableAutoSave;
    
    MAJESTY_API FLevelTransitionData();
};


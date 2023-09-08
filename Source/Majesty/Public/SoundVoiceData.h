#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SoundVoiceData.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FSoundVoiceData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CueSheetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> Resource;
    
    MAJESTY_API FSoundVoiceData();
};


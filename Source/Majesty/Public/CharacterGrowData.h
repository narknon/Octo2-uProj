#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharacterParam.h"
#include "FieldCommandParam.h"
#include "CharacterGrowData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterGrowData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterParam Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldCommandParam FCParameter;
    
    MAJESTY_API FCharacterGrowData();
};


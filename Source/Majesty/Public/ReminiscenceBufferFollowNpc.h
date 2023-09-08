#pragma once
#include "CoreMinimal.h"
#include "ReminiscenceBufferBase.h"
#include "SaveFollowNpcData.h"
#include "ReminiscenceBufferFollowNpc.generated.h"

USTRUCT(BlueprintType)
struct FReminiscenceBufferFollowNpc : public FReminiscenceBufferBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveFollowNpcData> Org_FollowNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveFollowNpcData> Org_FollowWaitingNpc;
    
public:
    MAJESTY_API FReminiscenceBufferFollowNpc();
};


#pragma once
#include "CoreMinimal.h"
#include "EKSPartyMember.generated.h"

UENUM(BlueprintType)
enum class EKSPartyMember : uint8 {
    MEMBER_00,
    MEMBER_01,
    MEMBER_02,
    MEMBER_03,
    FOLLOWER_00,
    FOLOOWER_01,
    FOLLOWER_02,
    FOLOOWER_03,
    PARTY_MEMBER_MAX UMETA(Hidden),
};


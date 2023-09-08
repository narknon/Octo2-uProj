#pragma once
#include "CoreMinimal.h"
#include "GuildData.h"
#include "KSUserWidgetBase.h"
#include "GuildMenuBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MAJESTY_API UGuildMenuBase : public UKSUserWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuildData GuildData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName guildLabel;
    
public:
    UGuildMenuBase();
    UFUNCTION(BlueprintCallable)
    void SetGuildData(FName Label);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReOpenGuildMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetReOpenFlag();
    
};


#pragma once
#include "CoreMinimal.h"
#include "EPlayableCharacterID.h"
#include "CharactersGridPanelCharacterSelectNoticeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharactersGridPanelCharacterSelectNotice, EPlayableCharacterID, SelectedCharacter);


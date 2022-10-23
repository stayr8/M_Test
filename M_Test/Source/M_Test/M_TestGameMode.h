// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "M_TestGameMode.generated.h"

UCLASS(minimalapi)
class AM_TestGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AM_TestGameMode();

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG")
		UUserWidget* CurrentWidget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG")
		TSubclassOf<UUserWidget> HUDWidget;


};




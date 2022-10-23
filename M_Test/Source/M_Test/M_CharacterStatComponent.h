// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "M_CharacterStatComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class M_TEST_API UM_CharacterStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UM_CharacterStatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void InitializeComponent() override;

public:	
	void SetNewLevel(int32 NewLevel);

private:
	struct FM_CharacterData* CurrentStatData = nullptr;
	UPROPERTY(EditInstanceOnly, Category = "Stat", Meta = (AllowPrivateAccess = true))
		int32 Level;

	UPROPERTY(Transient, VisibleInstanceOnly, Category = "Stat", Meta = (AllowPrivateAccess = true))
		int32 CurrentHP;

		
};

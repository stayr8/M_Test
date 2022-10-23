// Fill out your copyright notice in the Description page of Project Settings.


#include "M_CharacterStatComponent.h"
#include "M_GameInstance.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UM_CharacterStatComponent::UM_CharacterStatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	bWantsInitializeComponent = true;

	Level = 1;
	CurrentHP = 1;

	// ...
}


// Called when the game starts
void UM_CharacterStatComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UM_CharacterStatComponent::InitializeComponent()
{
	Super::InitializeComponent();
	SetNewLevel(Level);
}

void UM_CharacterStatComponent::SetNewLevel(int32 NewLevel)
{
	auto M_GameInstance = Cast<UM_GameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	if (M_GameInstance != nullptr)
	{
		CurrentStatData = M_GameInstance->GetM_CharacterData(NewLevel);
		if (nullptr != CurrentStatData)
		{
			Level = NewLevel;
			CurrentHP = CurrentStatData->MaxHP;
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Level (%d) data doesn't exist"), NewLevel);
		}
	}
}





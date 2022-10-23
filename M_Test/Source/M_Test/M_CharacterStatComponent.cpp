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
			SetHP(CurrentStatData->MaxHP);
			CurrentHP = CurrentStatData->MaxHP;
			CurrentSpeed = CurrentStatData->Speed;
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Level (%d) data doesn't exist"), NewLevel);
		}
	}
}

void UM_CharacterStatComponent::SetDamage(float NewDamage)
{
	if (CurrentStatData != nullptr)
	{
		SetHP(FMath::Clamp<float>(CurrentHP - NewDamage, 0, CurrentStatData->MaxHP));
	}
}

void UM_CharacterStatComponent::SetHP(float NewHP)
{
	CurrentHP = NewHP;
	// 체력 변동 델리게이트 호출
	OnHPChanged.Broadcast();
	// float 수치로 0에 최대한 근접한 오차 이하일 경우
	if (CurrentHP < KINDA_SMALL_NUMBER)
	{
		CurrentHP = 0;

		// 죽었을때의 델리게이트 호출
		OnHPIsZero.Broadcast();
	}
}

float UM_CharacterStatComponent::SetSpeed()
{
	return CurrentSpeed;
}



float UM_CharacterStatComponent::GetAttack()
{
	return CurrentStatData->Attack;
}

// 남은 체력의 퍼센티지 반환
float UM_CharacterStatComponent::GetHPRatio()
{
	return (CurrentStatData->MaxHP < KINDA_SMALL_NUMBER) ? 0 : (CurrentHP / CurrentStatData->MaxHP);
}





// Fill out your copyright notice in the Description page of Project Settings.


#include "M_CharacterWidget.h"
#include "M_CharacterStatComponent.h"
#include "Components/ProgressBar.h"

void UM_CharacterWidget::BindCharacterStat(UM_CharacterStatComponent* NewCharacterStat)
{
	if (nullptr != NewCharacterStat)
	{
		CurrentCharacterStat = NewCharacterStat;
		NewCharacterStat->OnHPChanged.AddUObject(this, &UM_CharacterWidget::UpdateHPWidget);
	}
}

void UM_CharacterWidget::NativeConstruct()
{
	Super::NativeConstruct();
	HPProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PB_HPBar")));
	UpdateHPWidget();
}

void UM_CharacterWidget::UpdateHPWidget()
{
	if (CurrentCharacterStat.IsValid())
	{
		if (nullptr != HPProgressBar)
		{
			HPProgressBar->SetPercent(CurrentCharacterStat->GetHPRatio());
		}
	}
}

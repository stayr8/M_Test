// Fill out your copyright notice in the Description page of Project Settings.


#include "M_GameInstance.h"

UM_GameInstance::UM_GameInstance()
{
	FString CharacterDataPath = TEXT("/Game/Data/M_CharacterDataTable.M_CharacterDataTable");
	static ConstructorHelpers::FObjectFinder<UDataTable> DT_MCHARACTER(*CharacterDataPath);
	M_CharacterTable = DT_MCHARACTER.Object;
}

void UM_GameInstance::Init()
{
	//UE_LOG(LogTemp, Warning, TEXT("DropExp of Level 20 M_Character %d"), GetM_CharacterData(20)->MaxHP);
}

FM_CharacterData* UM_GameInstance::GetM_CharacterData(int32 level)
{
	return M_CharacterTable->FindRow<FM_CharacterData>(*FString::FromInt(level), TEXT(""));
}

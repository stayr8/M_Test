// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/GameInstance.h"
#include "M_GameInstance.generated.h"

// ����ü ����
USTRUCT(BlueprintType)
struct FM_CharacterData : public FTableRowBase
{
	GENERATED_BODY()

public:
	FM_CharacterData() : CharacterName(FText::FromString("Name")), Level(1), MaxHP(100.0f), Attack(10.0f), Speed(200.0f) {}
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		FText CharacterName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Level;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 MaxHP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Attack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Speed;
};

/**
 * 
 */
UCLASS()
class M_TEST_API UM_GameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UM_GameInstance();

	virtual void Init() override;

	FM_CharacterData* GetM_CharacterData(int32 level);

private:
	UPROPERTY()
		class UDataTable* M_CharacterTable;
	
};

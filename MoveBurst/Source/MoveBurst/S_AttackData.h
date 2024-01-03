// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "S_AttackData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MOVEBURST_API FS_AttackData
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName AttackName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName inputString;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bAffectMoveGauge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float movementGaugeDecreased;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float movementGaugeIncreased;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bRequiresMeter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float meterAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float attackDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float meterGain;


	FS_AttackData();
	~FS_AttackData();
};

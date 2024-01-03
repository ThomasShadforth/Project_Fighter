// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MoveBurst_PlayerController.generated.h"

/**
 * 
 */

UCLASS()
class MOVEBURST_API AMoveBurst_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;

public:

	AMoveBurst_PlayerController();

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<class UUserWidget> playerHUDClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UUserWidget* playerHUD;

public:

};

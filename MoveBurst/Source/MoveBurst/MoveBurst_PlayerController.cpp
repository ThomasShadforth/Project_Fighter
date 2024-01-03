// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveBurst_PlayerController.h"
#include "Blueprint/UserWidget.h"

AMoveBurst_PlayerController::AMoveBurst_PlayerController() {

}

void AMoveBurst_PlayerController::BeginPlay() {
	Super::BeginPlay();

	if (playerHUDClass) {
		playerHUD = CreateWidget<UUserWidget>(this, playerHUDClass);

		if (playerHUD) {
			playerHUD->AddToViewport();
			playerHUD->SetVisibility(ESlateVisibility::Visible);
		}
	}
}
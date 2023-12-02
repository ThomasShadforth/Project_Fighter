// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveBurst_PlayerAnimInstance.h"
#include "MoveBurst_Player.h"

UMoveBurst_PlayerAnimInstance::UMoveBurst_PlayerAnimInstance() :
	speed(0.f),
	bIsMovingForward(false),
	bIsMovingBackward(false),
	bCrouching(false)
{

}


void UMoveBurst_PlayerAnimInstance::UpdateAnimationProperties(float DeltaTime) {
	if (playerCharacter == nullptr) {
		playerCharacter = Cast<AMoveBurst_Player>(TryGetPawnOwner());
	}

	if (playerCharacter) {

	}
}

void UMoveBurst_PlayerAnimInstance::NativeInitializeAnimation() {
	playerCharacter = Cast<AMoveBurst_Player>(TryGetPawnOwner());
}
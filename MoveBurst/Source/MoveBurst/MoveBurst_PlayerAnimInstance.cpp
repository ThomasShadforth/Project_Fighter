// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveBurst_PlayerAnimInstance.h"
#include "MoveBurst_Player.h"
#include "GameFramework/CharacterMovementComponent.h"

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

		if (playerCharacter) {
			playerMovementComp = playerCharacter->GetCharacterMovement();
		}
	}

	if (playerCharacter && playerMovementComp) {
		velocity = playerMovementComp->Velocity;
		velocity.Z = 0.0f;
		speed = velocity.Length();

		bShouldMove = speed > 0.01 && playerMovementComp->GetCurrentAcceleration() != FVector::Zero();
		
		bIsFalling = playerMovementComp->IsFalling();
	}
}

void UMoveBurst_PlayerAnimInstance::NativeInitializeAnimation() {
	playerCharacter = Cast<AMoveBurst_Player>(TryGetPawnOwner());

	if (playerCharacter) {
		playerMovementComp = playerCharacter->GetCharacterMovement();
	}
}
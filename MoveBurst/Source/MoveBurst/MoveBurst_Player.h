// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "EnhancedActionKeyMapping.h"
#include "MoveBurst_Player.generated.h"



UCLASS()
class MOVEBURST_API AMoveBurst_Player : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* playerDefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* moveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* jumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* crouchAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* pressRightAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* pressLeftAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* releaseRightAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* releaseLeftAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* releaseCrouchAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* releaseJumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* lightPunchAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		UInputAction* mediumPunchAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		UInputAction* heavyPunchAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		UInputAction* lightKickAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		UInputAction* mediumKickAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		UInputAction* heavyKickAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
		UInputAction* directionalInputAction;

	//Empty action used to reset last input pressed
	UInputAction* emptyAction;

public:
	// Sets default values for this character's properties
	AMoveBurst_Player();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Landed(const FHitResult& Hit) override;

	void Move(const FInputActionValue& Value);

	void DirectionalInput(const FInputActionValue& Value);

	void ResetPreviousDirection();

	void MoveForward(float value);

	void PressLeft();

	void ReleaseLeft();

	void PressRight();

	void ReleaseRight();

	void ProcessEnhancedDoubleTap();

	void ResetDoubleTapInput();

	void ResetSpeed();

	void Jump();

	void StopJump();

	void JumpRelease();

	void CrouchHeld();

	void CrouchReleased();

	void Crouch();

	void StopCrouch();

	void InterpCapsuleHalfHeight(float DeltaTime);

	void ResetJumpHeight();

	void SetFacingRight();

	void Backstep(float backstepDistance);

	void StopBackstep();

	void Airdash(float horizontalDistance, float verticalDistance = 0.0f, bool bDisableGravity = false);

	void StopAirdash();

	void ReenableGravity();

	void ReceiveAttackInput();

	void PlayAttackMontage(FName attackName);

	UFUNCTION(BlueprintCallable)
	void FinishAttackMontage();

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* tempSpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* tempCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	bool bCrouching;

	float currentCapsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float standingCapsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float crouchingCapsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float normalJumpHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float highJumpHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float doubleJumpHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float normalWalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float dashSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	bool bCanDash;

	bool bInputEnabled;

	int dashTapCount;
	FInputAxisKeyMapping previousMoveInput;

	bool bCrouchHeld;

	bool bJumpHeld;

	//Experimental - booleans for holding down the directional buttons (Will look into more suitable methods if possible)
	bool bRightDirectionHeld;
	bool bLeftDirectionHeld;

	FTimerHandle crouchReleaseTimer;
	FTimerHandle dashTapTimer;

	FInputActionKeyMapping lastMovementPressed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FEnhancedActionKeyMapping lastMoveInput;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bFacingRight;

	bool bDashing;

	bool bCanAirDash;

	bool bCanAttack;

	float defaultGravityScale;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Directional Input", meta = (AllowPrivateAccess = "true"))
	FVector2D previousInputDirection;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Directional Input", meta = (AllowPrivateAccess = "true"))
	FVector2D currentInputDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
		UAnimMontage* punchAttackMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
		UAnimMontage* kickAttackMontage;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "EnhancedActionKeyMapping.h"
#include "S_AttackData.h"
#include "DamageInterface.h"
#include "MoveBurst_Player.generated.h"



UCLASS()
class MOVEBURST_API AMoveBurst_Player : public ACharacter, public IDamageInterface
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

	bool ContinuedDirectionalInput();

	void AddToCommandString(FString inputToAdd);

	void ResetCommandString();

	//Checks the command input string, determines what name to pass to the attack montage method
	void CheckCommandString();

	void FinishDirectionalInput();

	void ResetPreviousDirection();

	void MoveForward(float value);

	void FinishMoving();

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

	void GetAttackInputName(FString& outAttackName, FName inputName);

	void PlayAttackMontage(FName attackName, bool specialAttack = false);

	UFUNCTION(BlueprintCallable)
	void FinishAttackMontage();

	//Move Gauge Methods
	void ReduceMoveGauge(float reduceRate, float DeltaTime, bool bOverTime, float threshold);

	void IncreaseMoveGauge(float amountIncreased, bool bOverTime, float DeltaTime, float threshold);

	void CheckMoveGauge();
	
	bool CheckAttackData(FName AttackString);

	//Overlap methods for each limb hitbox/sphere
	UFUNCTION()
		void OnRightArmOverlapStarted(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnLeftArmOverlapStarted(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnRightLegOverlapStarted(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnLeftLegOverlapStarted(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void HitOpponent(AActor* OtherActor);

	void GainSpecialMeter();

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
	FTimerHandle commandResetTimer;

	FInputActionKeyMapping lastMovementPressed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FEnhancedActionKeyMapping lastMoveInput;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bFacingRight;

	bool bDashing;

	bool bCanAirDash;

	bool bCanAttack;

	bool bDirectionInputHeld;

	float defaultGravityScale;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Directional Input", meta = (AllowPrivateAccess = "true"))
	FVector2D previousInputDirection;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Directional Input", meta = (AllowPrivateAccess = "true"))
	FVector2D currentInputDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UAnimMontage* punchAttackMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UAnimMontage* kickAttackMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UAnimMontage* specialAttackMontage;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Directional Input", meta = (AllowPrivateAccess = "true"))
	FString commandString;

	FString lastHeldDirectionalInput;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Directional Input", meta = (AllowPrivateAccess = "true"))
	TArray<FString> commandInputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float maxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float specialGauge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float specialGaugeMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move Gauge", meta = (AllowPrivateAccess = "true"))
	float moveGauge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move Gauge", meta = (AllowPrivateAccess = "true"))
	float moveGaugeMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move Gauge", meta = (AllowPrivateAccess = "true"))
	float moveMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack Data", meta = (AllowPrivateAccess = "true"))
	TArray<FS_AttackData> attackData;

	bool bIsMoving;

	//Track how much the movegauge has increased or decreased within a given window. Used to determine when the gauge is checked
	float moveGaugeDecreaseAmount;

	float moveGaugeIncreaseAmount;

	bool bIsRecoveringGauge;

	//To Do: Create a combat component for storing attack data, etc.
	FS_AttackData* currentAttack;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* rightArmBox;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UBoxComponent* leftArmBox;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UBoxComponent* rightLegBox;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	UBoxComponent* leftLegBox;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	FORCEINLINE float GetHealthPercent() const { return health / maxHealth; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE float GetSpecialGaugePercent() const { return specialGauge / specialGaugeMax; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE float GetMoveGaugePercent() const { return moveGauge / moveGaugeMax; }

	virtual void OnHit_Implementation(AActor* InstigatingActor, FS_AttackData AttackData) override;

	UFUNCTION(BlueprintCallable)
	void ActivateRightArmHitBox();

	UFUNCTION(BlueprintCallable)
	void ActivateLeftArmHitBox();

	UFUNCTION(BlueprintCallable)
	void ActivateRightLegHitBox();

	UFUNCTION(BlueprintCallable)
	void ActivateLeftLegHitBox();

	UFUNCTION(BlueprintCallable)
	void DeactivateRightArm();

	UFUNCTION(BlueprintCallable)
	void DeactivateLeftArm();

	UFUNCTION(BlueprintCallable)
	void DeactivateRightLeg();

	UFUNCTION(BlueprintCallable)
	void DeactivateLeftLeg();

};

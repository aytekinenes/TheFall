// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interface/SaveActorInterface.h"
#include "StatlineComponent.generated.h"

UENUM(BlueprintType)
enum class ECoreStat : uint8
{
	CS_HEALTH UMETA(DisplayName="Health"),
	CS_STAMINA UMETA(DisplayName = "Stamina"),
	CS_HUNGER UMETA(DisplayName = "Hunger"),
	CS_THIRST UMETA(DisplayName = "Thirst")
};

USTRUCT(BlueprintType)
struct FCoreStat
{
	GENERATED_USTRUCT_BODY()
	
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true"))
	float Current = 100;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true"))
	float Max = 100;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true"))// TODO: Set back to Visible AnyWhere
	float PerSecondTick = 1;

public:

	FCoreStat()
	{

	};

	FCoreStat(const float& current, const float& max, const float& tick)
	{
		Current = current;
		Max = max;
		PerSecondTick = tick;
	}

	void TickStat(const float& DeltaTime)
	{
		Current = FMath::Clamp(Current + (PerSecondTick * DeltaTime), 0, Max);
	}

	void Adjust(const float& Amount)
	{
		Current = FMath::Clamp(Current + Amount, 0, Max);
	}

	float Percentile() const
	{
		return Current / Max;
	}

	void AdjustTick(const float& NewTick)
	{
		PerSecondTick = NewTick;
	}

	float GetCurrent() const  {
		return Current; 
	}
	FString GetSaveString()
	{
		FString Ret = FString::SanitizeFloat(Current);
		Ret += "|";
		Ret += FString::SanitizeFloat(Max);
		Ret += "|";
		Ret += FString::SanitizeFloat(PerSecondTick);
		return Ret;
	}
	void UpdateFromSaveString(TArray<FString> Parts) 
	{
		if (Parts.Num() != 3)
		{
			// TODO: Log Error
			return;
		}
		Current = FCString::Atof(*Parts[0]);
		Max = FCString::Atof(*Parts[1]);
		PerSecondTick = FCString::Atof(*Parts[2]);

	}
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THEFALL_API UStatlineComponent : public UActorComponent, public ISaveActorInterface
{
	GENERATED_BODY()

private:

	class UCharacterMovementComponent* OwningCharMovementComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true"))
	FCoreStat Health;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true"))
	FCoreStat Stamina;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true"))// TODO: Set back to Visible AnyWhere
	FCoreStat Hunger = FCoreStat(100,100, -2.125);
	UPROPERTY(EditAnywhere, BlueprintReadOnly, SaveGame, meta = (AllowPrivateAccess = "true")) // TODO: Set back to Visible AnyWhere
	FCoreStat Thirst = FCoreStat(100, 100, -2.25);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bIsSprinting = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bIsSneaking = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float SprintCostMultiplier = 2;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float WalkSpeed = 125;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float SprintSpeed = 450;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float SneakSpeed = 75;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float JumpCost= 10;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float SecondsForStaminaExhaustion = 5;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float CurrentStaminaExhuastion = 0;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float StarvingHealthDamagePerSecond = 1;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float DehydrationHealthDamagePerSecond = 1;

	void TickStats(const float& DeltaTime);
	void TickStamina(const float& DeltaTime);
	void TickHunger(const float& DeltaTime);
	void TickThirst(const float& DeltaTime);
	bool isValidSprinting();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	

	UStatlineComponent();


	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void SetMovementCompReference(UCharacterMovementComponent* Comp);

	UFUNCTION(BlueprintCallable)
	float GetStatPercentile(const ECoreStat Stat) const;

	UFUNCTION(BlueprintCallable)
	bool CanSprint() const;

	UFUNCTION(BlueprintCallable)
	void SetSprinting(const bool& IsSprinting);

	UFUNCTION(BlueprintCallable)
	void SetSneaking(const bool& IsSneaking);

	UFUNCTION(BlueprintCallable)
	bool CanJump();

	UFUNCTION(BlueprintCallable)
	void HasJumped();

	virtual FSaveComponentData GetComponentSaveData_Implementation();
	void SetComponentSaveData_Implementation(FSaveComponentData Data);


};

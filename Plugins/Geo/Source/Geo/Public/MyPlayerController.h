// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "Blueprint/UserWidget.h"

#include "MyPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
class AShowModels;
class UMyUserWidget;
/**
 * 
 */
UCLASS()
class GEO_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* InteractAction;
		
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* ChooseModelAction;

	UPROPERTY()
	UMyUserWidget* MyWidget;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UMyUserWidget> xWidget;
	//UPROPERTY()
	//UClass* xWidget;

	UPROPERTY()
	bool openWidget = false;

	UPROPERTY()
	AShowModels* pM = nullptr;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Model")
	FTransform SpawnTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Model")
	APlayerCameraManager* CurrentCamera;
private:
	void InteractStart(const FInputActionValue& Value);

	void ChooseModel(const FInputActionValue& Value);
	//void InteractComplete(const FInputActionValue& Value);
	UFUNCTION()
	void CreateGeoUI();

	UFUNCTION(BlueprintCallable)
	void SetUIInputMode(bool bEnableUI);
};

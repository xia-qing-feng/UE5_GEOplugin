// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShowModels.h"

#include "MyUserWidget.generated.h"


//class UButton;
class USlider;
class URadialSlider;
class UButton;
class UMyFileOpen;
class USpinBox;
/**
 * 
 */




UCLASS()
class GEO_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget)) // 绑定UMG同名控件
	USlider* SizeSlider;

	UPROPERTY(meta = (BindWidget)) // 绑定UMG同名控件
	URadialSlider* PitchSlider;
	UPROPERTY(meta = (BindWidget)) // 绑定UMG同名控件
	URadialSlider* YawSlider;
	UPROPERTY(meta = (BindWidget)) // 绑定UMG同名控件
	URadialSlider* RollSlider;
	UPROPERTY(meta = (BindWidget)) // 绑定UMG同名控件
	UButton* FileButton;

	UPROPERTY(meta = (BindWidget)) // 绑定UMG同名控件
	USpinBox* SB_Simple;
	UPROPERTY(meta = (BindWidget)) // 绑定UMG同名控件
	UButton* Button_Simple;


	UPROPERTY(meta = (BindWidget)) // 绑定UMG同名控件
	USpinBox* SB_Smooth;
	UPROPERTY(meta = (BindWidget)) // 绑定UMG同名控件
	UButton* Button_Smooth;

	UPROPERTY(meta = (BindWidget)) // 绑定UMG同名控件
	USpinBox* SB_subdiv;
	UPROPERTY(meta = (BindWidget)) // 绑定UMG同名控件
	UButton* Button_subdiv;

	UPROPERTY(meta = (BindWidget)) // 绑定UMG同名控件
	USpinBox* SB_Chamfer;
	UPROPERTY(meta = (BindWidget)) // 绑定UMG同名控件
	UButton* Button_Chamfer;

	UPROPERTY()
	AShowModels* TargetModel;

	//UPROPERTY()
	//UMyFileOpen* FileOpentool;
	
	
	UFUNCTION()
	void SliderChangedSize(float Value);
	
	UFUNCTION()
	void SliderChangedRotation(float Value, EMyRotate curRotate);

	UFUNCTION()
	void SliderChangeRotP(float Value);
	UFUNCTION()
	void SliderChangeRotY(float Value);
	UFUNCTION()
	void SliderChangeRotR(float Value);
	UFUNCTION()
	void OpenFolder();
	UFUNCTION()
	void Smooth();
	UFUNCTION()
	void Simplify();
	UFUNCTION()
	void Subdivide();
	UFUNCTION()
	void Chamfer();


public:
	UFUNCTION()
	void SetTargetModel(AShowModels* pm);
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ProceduralMeshComponent.h"
#include "Assimp4UE.h"
#include "Blueprint/UserWidget.h"

#include <string>


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShowModels.generated.h"


UENUM()
enum class EMyRotate
{
	pitch,
	yaw,
	roll
};

UENUM()
enum class EUpdateStatus
{
	create,
	change,
	tmp,
};

UCLASS()
class GEO_API AShowModels : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AShowModels();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UProceduralMeshComponent* PMC;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator PMCPreRot;

	UFUNCTION()
	void SetMeshScale(FVector ModelSize);
	UFUNCTION()
	void SetMeshRotate(float ModelSize, EMyRotate curRot);

	UFUNCTION()
	void UpdateMesh(FString fp, EUpdateStatus updateState);

	UFUNCTION()
	void BindOnclick(UPrimitiveComponent* ClickedComp, FKey ButtonPressed);

	UFUNCTION()
	void SmoothMesh(float val);
	UFUNCTION()
	void SimplifyMesh(float val);
	UFUNCTION()
	void SubdivideMesh(int val);
	UFUNCTION()
	void ChamferMesh(float val);

private:
	UPROPERTY()
	int  MeshSectionNums;

	std::string ModelPath;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

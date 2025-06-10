// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/DynamicMeshComponent.h"
#include "assimp/scene.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GeoScript.generated.h"



UCLASS()
class GEO_API AGeoScript : public AActor
{
	GENERATED_BODY()
	//TUniquePtr<UDynamicMesh> TestMesh;
public:	
	// Sets default values for this actor's properties
	AGeoScript();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

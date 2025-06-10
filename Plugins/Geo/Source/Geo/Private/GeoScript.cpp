// Fill out your copyright notice in the Description page of Project Settings.


#include "GeoScript.h"

// Sets default values
AGeoScript::AGeoScript()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGeoScript::BeginPlay()
{
	Super::BeginPlay();
	//TestMesh = MakeUnique<UDynamicMesh>(this);

}

// Called every frame
void AGeoScript::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


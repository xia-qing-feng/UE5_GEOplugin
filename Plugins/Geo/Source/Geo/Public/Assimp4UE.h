// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <assimp/scene.h> 
#include "ProceduralMeshComponent.h"

/**
 * 
 */
class GEO_API Assimp4UE
{

public:
	USTRUCT(BlueprintType)
		struct FModelData
	{

		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FVector> Vertices; //������Ϣ

		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FVector> Normals; //������Ϣ

		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<int32> Triangles; //������Ϣ

		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FProcMeshTangent> Tangents; //������Ϣ

		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FColor> VertexColors; //������ɫ

		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FVector2D> UV;

		TArray<TArray<FVector2D>> UVs; //UV����Ϣ

		bool IsValid() const
		{
			if (Vertices.IsEmpty() || Normals.IsEmpty() || Triangles.IsEmpty() || UVs.IsEmpty())
			{
				return false;
			}
			return true;
		}
	};


private:
	TArray<FModelData> OutModels;

public:
	Assimp4UE();
	~Assimp4UE();

	bool ExtractModelInfo(FString FileName, TArray<FModelData>& OutModelInfo);

	void ProcessNode(aiNode* Node, const aiScene* Scene, TArray<FModelData>& MeshDatas);

	bool ExtractMeshInfo(aiMesh* Mesh, FModelData& MeshData); 

	TArray<FModelData>& GetModels(FString& FileName);
};

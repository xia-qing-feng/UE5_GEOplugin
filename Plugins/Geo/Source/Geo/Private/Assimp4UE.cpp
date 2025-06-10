// Fill out your copyright notice in the Description page of Project Settings.


#include "Assimp4UE.h"
#include <assimp/Importer.hpp>
#include <assimp/postprocess.h>
#include <assimp/mesh.h>
#include <assimp/matrix4x4.h> 
#include "Math/UnrealMathUtility.h"


Assimp4UE::Assimp4UE()
{
}



Assimp4UE::~Assimp4UE()
{
}

bool Assimp4UE::ExtractModelInfo(FString FileName, TArray<FModelData>& OutModelInfo)
{
	std::string pFile = TCHAR_TO_UTF8(*FileName);
	Assimp::Importer Importer;
	const aiScene* Scene = Importer.ReadFile(
		pFile,
		aiProcess_CalcTangentSpace |
		aiProcess_Triangulate |
		aiProcess_JoinIdenticalVertices |
		aiProcess_SortByPType
	);
	if (!Scene || Scene->mFlags & AI_SCENE_FLAGS_INCOMPLETE || !Scene->mRootNode)
		return false;

	FString NodeName = UTF8_TO_TCHAR(Scene->mRootNode->mName.C_Str());
	ProcessNode(Scene->mRootNode, Scene, OutModelInfo);
	return OutModelInfo.Num() > 0;
}

void Assimp4UE::ProcessNode(aiNode* Node, const aiScene* Scene, TArray<FModelData>& MeshDatas)
{
	for (unsigned int i = 0; i < Node->mNumMeshes; ++i)
	{
		FModelData MeshData;
		aiMesh* Mesh = Scene->mMeshes[Node->mMeshes[i]];
		bool bMeshDataValid = ExtractMeshInfo(Mesh, MeshData);
		if (bMeshDataValid)
		{
			MeshDatas.Add(MeshData);
		}
	}
	for (unsigned int i = 0; i < Node->mNumChildren; ++i)
	{
		ProcessNode(Node->mChildren[i], Scene, MeshDatas);
	} 
}

bool Assimp4UE::ExtractMeshInfo(aiMesh* Mesh, FModelData& MeshData)
{
	if (Mesh->mNumVertices == 0)
	//if (Mesh->mNumVertices == 0 || !Mesh->HasNormals())
		return false;
	int NumUVChannels = Mesh->GetNumUVChannels();
	MeshData.UVs.AddZeroed(FMath::Max(NumUVChannels,1));

	for (unsigned int i = 0; i < Mesh->mNumVertices; ++i)
	{
		//提取顶点数据
		aiVector3D Vertex3D = Mesh->mVertices[i];
		MeshData.Vertices.Add(FVector(Vertex3D.x, Vertex3D.y, Vertex3D.z));

		//提取法线数据,要注意法线翻转选项
		if (Mesh->HasNormals())
		{
			aiVector3D Normal = Mesh->mNormals[i];
			FVector NormalVector = FVector(Normal.x, Normal.y, Normal.z);
			MeshData.Normals.Add(NormalVector);
		}

		//提取uv
		for (int j = 0; j < NumUVChannels; ++j)
		{
			FVector2D UV;
			UV.X = Mesh->mTextureCoords[j][i].x;
			UV.Y = Mesh->mTextureCoords[j][i].y;
			MeshData.UVs[j].Add(UV);
		}

		//提取切线
		if (Mesh->HasTangentsAndBitangents())
		{
			aiVector3D Tangent = Mesh->mTangents[i];
			MeshData.Tangents.Add(FProcMeshTangent(Tangent.x, Tangent.y, Tangent.z));
		}

		//提取顶点颜色,只处理第一个颜色通道
		if (Mesh->HasVertexColors(0))
		{
			aiColor4D Color = Mesh->mColors[0][i];
			MeshData.VertexColors.Add(FColor(Color.r, Color.g, Color.b, Color.a));
		}
	}
	//提取三角形索引
	for (unsigned int i = 0; i < Mesh->mNumFaces; ++i)
	{
		aiFace Face = Mesh->mFaces[i];
		for (unsigned int j = 0; j < Face.mNumIndices; ++j)
		{
			MeshData.Triangles.Add(Face.mIndices[j]);
		}
	}
	return true; 
}

TArray<Assimp4UE::FModelData>& Assimp4UE::GetModels(FString& FileName)
{
	bool GetModelStatus = ExtractModelInfo(FileName, OutModels);
	if (GetModelStatus) {
		UE_LOG(LogTemp, Warning, TEXT("Import OK!"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Import False :( "));
	}
	return OutModels;
	
}

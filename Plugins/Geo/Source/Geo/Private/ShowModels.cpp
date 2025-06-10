// Fill out your copyright notice in the Description page of Project Settings.


#include "ShowModels.h"
#include "Components/Slider.h"

#include "MyLibigl.h"

// disable some libigl warnings that UBT will consider errors
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AShowModels::AShowModels()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PMC = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("myPMC"), false);
	MeshSectionNums = 0;
	//设定其为根组件：
	SetRootComponent(PMC);
}

void AShowModels::SetMeshScale(FVector ModelSize)
{
	PMC->SetWorldScale3D(ModelSize);
}

void AShowModels::SetMeshRotate(float Value, EMyRotate ETmpRot)
{
	//
	FRotator deltaRot = FRotator(0, 0, 0);
	
	switch (ETmpRot)
	{
	case EMyRotate::pitch:
		deltaRot.Pitch= PMCPreRot.Pitch - Value;
		PMCPreRot.Pitch = Value;
		break;
	case EMyRotate::yaw:
		deltaRot.Yaw = PMCPreRot.Yaw-Value;
		PMCPreRot.Yaw = Value;
		break;
	case EMyRotate::roll:
		deltaRot.Roll = PMCPreRot.Roll- Value;
		PMCPreRot.Roll = Value;
		break;
	default:
		break;
	}
	PMC->SetWorldRotation(FRotator(deltaRot.Quaternion() * FQuat(this->GetActorRotation())));
	
}

void AShowModels::UpdateMesh(FString FilePath,EUpdateStatus updateStatus)
{
	if (updateStatus != EUpdateStatus::tmp)
	{
		ModelPath = std::string(TCHAR_TO_UTF8(*FilePath));
	}
	Assimp4UE AssimpTool;
	auto& Models = AssimpTool.GetModels(FilePath);
	if (updateStatus != EUpdateStatus::create)
	{
		PMCPreRot = FRotator::ZeroRotator;
		this->SetActorRotation(PMCPreRot);
		MeshSectionNums = PMC->GetNumSections();
		for (int i = 0; i < MeshSectionNums; ++i)
		{
			PMC->ClearMeshSection(i);
		}
		PMC->OnClicked.RemoveDynamic(this, &AShowModels::BindOnclick);
	}
	
	for (int i = 0; i < Models.Num(); ++i)
	{	
		PMC->CreateMeshSection(i, Models[i].Vertices, Models[i].Triangles, \
			Models[i].Normals, Models[i].UVs[0],
			Models[i].VertexColors, Models[i].Tangents, true);
		UMaterial* BaseMaterial = LoadObject<UMaterial>(nullptr, TEXT("/Game/StarterContent/Materials/M_Brick_Clay_New"));
		// 设置基础材质
		BaseMaterial->BlendMode = EBlendMode::BLEND_Opaque;
		BaseMaterial->TwoSided = true;
		PMC->SetMaterial(i, BaseMaterial);
	}
	PMC->ContainsPhysicsTriMeshData(true); // 允许碰撞检测
	PMC->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	PMC->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	//PMC->AddCollisionConvexMesh(TArray<FVector>()); // 或指定凸包形状

	//PMC->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	//PMC->SetCollisionResponseToAllChannels(ECR_Block);

	PMC->OnClicked.AddDynamic(this, &AShowModels::BindOnclick);
}


void AShowModels::BindOnclick(UPrimitiveComponent* ClickedComp,FKey ButtonPressed)
{
	UE_LOG(LogTemp, Warning, TEXT("heihei"));
	//do something
}

void AShowModels::SmoothMesh(float val)
{
	Eigen::MatrixXd V, U,uv,N;
	Eigen::MatrixXi F,FN,FTC;

	Eigen::SparseMatrix<double> L;
	std::string TmpResPath;
	size_t LastDotPos = ModelPath.find_last_of('.');
	if (LastDotPos != std::string::npos)
	{
		TmpResPath =
			ModelPath.substr(0, LastDotPos) +
			"_temp" +
			ModelPath.substr(LastDotPos);
	}
	bool success = igl::readOBJ(ModelPath, V, uv, N ,F, FN, FTC);


	U = V;

	// Compute Laplace-Beltrami operator: #V by #V
	igl::cotmatrix(V, F, L);
	//// Alternative construction of same Laplacian
	//Eigen::SparseMatrix<double> G, K;
	//// Gradient/Divergence
	//igl::grad(V, F, G);
	//// Diagonal per-triangle "mass matrix"
	//Eigen::VectorXd dblA;
	Eigen::SparseMatrix<double> M;

	//igl::doublearea(V, F, dblA);
	//// Place areas along diagonal #dim times
	//const auto& T = 1. * (dblA.replicate(3, 1) * 0.5).asDiagonal();
	//// Laplacian K built as discrete divergence of gradient or equivalently
	//// discrete Dirichelet energy Hessian
	//K = -G.transpose() * T * G;
	
	{
		// Recompute just mass matrix on each step
		igl::massmatrix(U, F, igl::MASSMATRIX_TYPE_BARYCENTRIC, M);
		// Solve (M-delta*L) U = M*U
		const auto& S = (M - val * L);
		Eigen::SimplicialLLT<Eigen::SparseMatrix<double > > solver(S);
		assert(solver.info() == Eigen::Success);
		U = solver.solve(M * U).eval();
		//Compute centroid and subtract (also important for numerics)
		//igl::doublearea(U, F, dblA);
		//double area = 0.5 * dblA.sum();
		//Eigen::MatrixXd BC;
		//igl::barycenter(U, F, BC);
		//Eigen::RowVector3d centroid(0, 0, 0);
		//for (int i = 0; i < BC.rows(); i++)
		//{
		//	centroid += 0.5 * dblA(i) / area * BC.row(i);
		//}
		//U.rowwise() -= centroid;
		//// Normalize to unit surface area (important for numerics)
		//U.array() /= sqrt(area);
	}
	igl::writeOBJ(TmpResPath, U, F,N,FN,uv,FTC);

	{
		//Eigen::MatrixXd SmoothedV = V;

		//// 计算余切权重拉普拉斯矩阵
		//Eigen::SparseMatrix<double> L;
		//igl::cotmatrix(V, F, L);

		//// 计算质量矩阵
		//Eigen::SparseMatrix<double> M;
		//igl::massmatrix(V, F, igl::MASSMATRIX_TYPE_BARYCENTRIC, M);

		//// 预计算M的逆
		//Eigen::SparseMatrix<double> Minv;
		//igl::invert_diag(M, Minv);

		//// 迭代平滑
		//for (int i = 0; i < round(val); ++i)
		//{
		//	SmoothedV = SmoothedV - 0.001 * (Minv * L * SmoothedV);
		//}
	}

	UpdateMesh(UTF8_TO_TCHAR(TmpResPath.c_str()),EUpdateStatus::tmp);
}

void AShowModels::SimplifyMesh(float val)
{
	Eigen::MatrixXd V, uv, N;
	Eigen::MatrixXi F, FN, FTC;

	Eigen::MatrixXd U;
	Eigen::MatrixXi G;
	Eigen::VectorXi I, J;
	Eigen::SparseMatrix<double> L;
	std::string TmpResPath;
	size_t LastDotPos = ModelPath.find_last_of('.');
	if (LastDotPos != std::string::npos)
	{
		TmpResPath =
			ModelPath.substr(0, LastDotPos) +
			"_temp" +
			ModelPath.substr(LastDotPos);
	}
	bool successReadOBJ = igl::readOBJ(ModelPath, V, uv, N, F, FN, FTC);

	int testNum = round(F.rows() * (1 - val));
	bool successDecimate = igl::decimate(V, F, round(F.rows()*(1- val)), U, G,J,I);
	// update N
	Eigen::MatrixXd N_new;
	igl::per_vertex_normals(U, G, N_new);

	// update UV
	Eigen::MatrixXd uv_new;
	uv_new.resize(U.rows(), uv.cols());
	for (int i = 0; i < U.rows(); i++) {
		uv_new.row(i) = uv.row(I(i)); // 直接继承原始 UV
	}

	igl::writeOBJ(TmpResPath, U, G, N_new, G, uv_new, G);
	UpdateMesh(UTF8_TO_TCHAR(TmpResPath.c_str()), EUpdateStatus::tmp);

}

void AShowModels::SubdivideMesh(int iterNum)
{
	Eigen::MatrixXd V, uv, N;
	Eigen::MatrixXi F, FN, FTC;

	Eigen::MatrixXd U,UTemp;
	Eigen::MatrixXi G,GTemp;
	Eigen::VectorXi I, J;
	Eigen::SparseMatrix<double> L;
	std::string TmpResPath;
	size_t LastDotPos = ModelPath.find_last_of('.');
	if (LastDotPos != std::string::npos)
	{
		TmpResPath =
			ModelPath.substr(0, LastDotPos) +
			"_temp" +
			ModelPath.substr(LastDotPos);
	}
	bool successReadOBJ = igl::readOBJ(ModelPath, V, uv, N, F, FN, FTC);

	U = V;
	G = F;
	Eigen::MatrixXd uv_new=uv;
	for (int i = 0; i < iterNum; ++i)
	{
		int tt = U.rows();
		Eigen::SparseMatrix<double> S;
		igl::loop(U.rows(), G, S, GTemp);
		
		G = GTemp;

		U = (S * U).eval();
		uv_new = (S * uv_new).eval();
	}
	// update N
	Eigen::MatrixXd N_new;
	igl::per_vertex_normals(U, G, N_new);

	igl::writeOBJ(TmpResPath, U, G, N_new, G, uv_new, G);
	UpdateMesh(UTF8_TO_TCHAR(TmpResPath.c_str()), EUpdateStatus::tmp);

}

void AShowModels::ChamferMesh(float val)
{
	FString BlenderPath = R"(D:\steam\steamapps\common\Blender\blender.exe)";
	FString ScriptPath = R"(E:\UE\Projects\QFGeo\Plugins\Geo\Source\Geo\Public\blender.py)";

	std::string TmpResPath;
	size_t LastDotPos = ModelPath.find_last_of('.');
	if (LastDotPos != std::string::npos)
	{
		TmpResPath =
			ModelPath.substr(0, LastDotPos) +
			"_temp" +
			ModelPath.substr(LastDotPos);
	}

	UE_LOG(LogTemp, Warning, TEXT("%f"),val);

	FString InputModelPath = FString(ModelPath.c_str());
	FString OutputModelPath = FString(TmpResPath.c_str());
	FString Args = FString::Printf(
		TEXT("--background --python %s -- %s %s %f"),
		*ScriptPath,                     // Blender 脚本路径
		*InputModelPath,                 // 输入模型
		*OutputModelPath,                // 输出模型
		val                     // 倒角参数
	);

	// 调用 Blender
	FProcHandle ProcHandle = FPlatformProcess::CreateProc(
		*BlenderPath,                    // Blender.exe 路径
		*Args,                          // 命令行参数
		true,                           // 是否显示窗口（后台运行）
		false,                          // 是否降低优先级
		false,                          // 是否继承句柄
		nullptr,                        // 输出日志
		0,                              // 日志大小
		nullptr,                        // 工作目录
		nullptr                         // 环境变量
	);
	FPlatformProcess::WaitForProc(ProcHandle);
	UpdateMesh(OutputModelPath, EUpdateStatus::tmp);
	/*AsyncTask(ENamedThreads::GameThread, [this, OutputModelPath]()
	{
		
	});*/
}

// Called when the game starts or when spawned
void AShowModels::BeginPlay()
{
	Super::BeginPlay();
	//addUI();
}

void AShowModels::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	FString fp = "E:\\UE\\data\\dragon1.obj";
	UpdateMesh(fp, EUpdateStatus::create);
	PMCPreRot = this->GetActorRotation();
}

// Called every frame
void AShowModels::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


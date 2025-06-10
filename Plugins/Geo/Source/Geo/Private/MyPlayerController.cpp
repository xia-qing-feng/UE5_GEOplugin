// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "MyUserWidget.h"
#include "ShowModels.h"

void AMyPlayerController::BeginPlay()
{
    Super::BeginPlay();
    if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
    {
        if (DefaultMappingContext)
        {
            Subsystem->AddMappingContext(DefaultMappingContext, 1);
        }
    }
    bEnableClickEvents = true;
    SpawnTransform.SetLocation(FVector(0, 0, 50)); // 位置：X=0, Y=0, Z=100（1米高）
    SpawnTransform.SetRotation(FRotator(0, 0, -90).Quaternion()); // Y轴旋转90度
    CurrentCamera = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;
    //pM = GetWorld()->SpawnActor<AShowModels>(AShowModels::StaticClass(), SpawnTransform);
    pM = GetWorld()->SpawnActor<AShowModels>(AShowModels::StaticClass());


    //UE_LOG(LogTemp, Warning, TEXT("%f,%f,%f"), pM->GetActorRotation().Pitch,
    //    pM->GetActorRotation().Yaw, pM->GetActorRotation().Roll);
    CreateGeoUI();
}

void AMyPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    // 设置EnhancedInputComponent
    if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
    {
        // 绑定输入动作
        EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &AMyPlayerController::InteractStart);
        EnhancedInputComponent->BindAction(ChooseModelAction, ETriggerEvent::Started, this, &AMyPlayerController::ChooseModel);
        //EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Completed, this, &AMyPlayerController::InteractComplete);

    }
}

void AMyPlayerController::InteractStart(const FInputActionValue& Value)
{

    if (!openWidget)
    {
        UE_LOG(LogTemp, Warning, TEXT("Interact key pressed!"));
        MyWidget->SetVisibility(ESlateVisibility::Visible);
        SetUIInputMode(true);
    }
    else {
        UE_LOG(LogTemp, Warning, TEXT("Interact key released!"));
        MyWidget->SetVisibility(ESlateVisibility::Hidden);
        SetUIInputMode(false);
    }
    openWidget = !openWidget;
    
}

void AMyPlayerController::ChooseModel(const FInputActionValue& Value)
{
    UE_LOG(LogTemp, Warning, TEXT("hhh"));
    //获取玩家摄像机位置
    FVector CameraLocation = CurrentCamera->GetCameraLocation();
    FRotator CameraRot = CurrentCamera->GetCameraRotation();
     //AActor* MyOwner = GetOwner();
     ////射线的开始位置和结束位置
     //FVector Start;
     //FRotator StartRotation;
     //MyOwner->GetActorEyesViewPoint(Start, StartRotation);
     FVector End = CameraLocation + CameraRot.Vector() * 1000.0f;
     //碰撞对象查询
     FCollisionObjectQueryParams ObjectQueryParams;
     FCollisionQueryParams MyQP;
     MyQP.bReturnFaceIndex = true;
     MyQP.bTraceComplex = true;
     ObjectQueryParams.AddObjectTypesToQuery(ECollisionChannel::ECC_WorldDynamic);
     //单通道射线根据对象类型检测
     FHitResult Hit;
     bool BIsTraced = GetWorld()->LineTraceSingleByObjectType(Hit, CameraLocation, End, ObjectQueryParams, MyQP);
     FColor DebugColor = BIsTraced ? FColor::Green : FColor::Red;
     DrawDebugLine(GetWorld(), CameraLocation, End, DebugColor, false, 2.f, 0, 2.f);
     AShowModels* tmpM = Cast<AShowModels>(Hit.GetActor());
     if (tmpM) // 检查转换是否成功
     {
         int tmpI = Hit.FaceIndex;
         auto faceHandle= tmpM->PMC->GetProcMeshSection(tmpI);

         
         const TArray<FProcMeshVertex>& Vertices = tmpM->PMC->GetProcMeshSection(0)->ProcVertexBuffer;
         const TArray<uint32>& Index = tmpM->PMC->GetProcMeshSection(0)->ProcIndexBuffer;
         int tt0 = Index[tmpI * 3];
         int tt1 = Index[tmpI * 3+1];
         int tt2 = Index[tmpI * 3+2];
         auto v0 = tmpM->PMC->GetComponentTransform().TransformPosition(Vertices[tt0].Position);
         auto v1 = tmpM->PMC->GetComponentTransform().TransformPosition(Vertices[tt1].Position);
         auto v2 = tmpM->PMC->GetComponentTransform().TransformPosition(Vertices[tt2].Position);

         DrawDebugLine(GetWorld(), v0, v1, FColor::Green, false, 100.f, 0, 10.f);
         DrawDebugLine(GetWorld(), v1, v2 , FColor::Green, false, 5.f, 0, 2.f);
         DrawDebugLine(GetWorld(), v2, v0, FColor::Green, false, 5.f, 0, 2.f);
         //auto tmpi=faceHandle->ProcVertexBuffer;
         // 转换成功，可以安全使用 tmpM
         //tmpM->YourCustomFunction();
     }
     else
     {
         // 转换失败，Hit.GetActor() 不是 AShowModels 类型
         UE_LOG(LogTemp, Warning, TEXT("Hit actor is not an AShowModels!"));
     }/*
     if (BIsTraced) {
         UE_LOG(LogTemp, Warning, TEXT("Traced!"));
         UE_LOG(LogTemp, Warning, TEXT("%d %d"),* Hit.GetActor()->GetName(), Hit.FaceIndex);
     }
     else {
         UE_LOG(LogTemp, Warning, TEXT("Not Traced--"));
     }*/
         
     
}	//获取该组件的拥有者


void AMyPlayerController::CreateGeoUI()
{
    if (!MyWidget && xWidget)
    {
        //xWidget = LoadClass<UMyUserWidget>(nullptr, TEXT("/Game/UI/WB_model.WB_model_C"));
        MyWidget = CreateWidget<UMyUserWidget>(this, xWidget);
        MyWidget->SetVisibility(ESlateVisibility::Hidden);
        MyWidget->AddToViewport();
        MyWidget->SetTargetModel(pM);
    }
}

void AMyPlayerController::SetUIInputMode(bool bEnableUI)
{
    if (!MyWidget) return;

    if (bEnableUI)
    {
        // UI模式：鼠标可见且可操作Widget
        FInputModeGameAndUI InputMode;
        InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
        InputMode.SetHideCursorDuringCapture(false);
        InputMode.SetWidgetToFocus(MyWidget->TakeWidget()); // 关键：聚焦到Widget
        SetInputMode(InputMode);
        bShowMouseCursor = true;
    }
    else
    {
        // 游戏模式：隐藏鼠标
        FInputModeGameOnly InputMode;
        SetInputMode(InputMode);
        bShowMouseCursor = false;
    }
}

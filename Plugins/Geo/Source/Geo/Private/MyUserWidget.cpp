// Fill out your copyright notice in the Description page of Project Settings.  

#include "MyUserWidget.h"  
#include "Components/Slider.h" // 添加此行以包含 USlider 的定义  
#include "Components/RadialSlider.h"
#include "Components/Button.h"
#include "Components/SpinBox.h"
#include "IDesktopPlatform.h"
#include "DesktopPlatformModule.h" // 必须包含
#include "Misc/Paths.h"
#include "Framework/Application/SlateApplication.h"


void UMyUserWidget::NativeConstruct()  
{  
   Super::NativeConstruct();  


   SizeSlider->OnValueChanged.AddDynamic(this, &UMyUserWidget::SliderChangedSize);
   //DECLARE_DELEGATE_OneParam(FMySliderDelegate, float);
   //FMySliderDelegate
   PitchSlider->SetValue(0.5);
   YawSlider->SetValue(0.5);
   RollSlider->SetValue(0.5);
   PitchSlider->OnValueChanged.AddDynamic(this, &UMyUserWidget::SliderChangeRotP);
   YawSlider->OnValueChanged.AddDynamic(this, &UMyUserWidget::SliderChangeRotY);
   RollSlider->OnValueChanged.AddDynamic(this, &UMyUserWidget::SliderChangeRotR);
   FileButton->OnClicked.AddDynamic(this, &UMyUserWidget::OpenFolder);

   //Smooth
   Button_Smooth->OnClicked.AddDynamic(this, &UMyUserWidget::Smooth);
   Button_Simple->OnClicked.AddDynamic(this, &UMyUserWidget::Simplify);
   Button_subdiv->OnClicked.AddDynamic(this, &UMyUserWidget::Subdivide);
   Button_Chamfer->OnClicked.AddDynamic(this, &UMyUserWidget::Chamfer);

}  

void UMyUserWidget::SliderChangedSize(float Value)
{  
    if (TargetModel)
    {
        TargetModel->SetMeshScale(FVector(Value)); // 修改Mesh大小
    }
}

void UMyUserWidget::SliderChangedRotation(float Value, EMyRotate curRotate)
{
    Value = (Value - 0.5) * 360;
    if (TargetModel)
    {
        TargetModel->SetMeshRotate(Value,curRotate); // 修改Mesh方向
    }
}

void UMyUserWidget::SliderChangeRotP(float Value)
{
    SliderChangedRotation(Value, EMyRotate::pitch);
}

void UMyUserWidget::SliderChangeRotY(float Value)
{
    SliderChangedRotation(Value, EMyRotate::yaw);
}

void UMyUserWidget::SliderChangeRotR(float Value)
{
    SliderChangedRotation(Value, EMyRotate::roll);
}

void UMyUserWidget::OpenFolder()
{
    // 获取桌面平台接口
    IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
    if (!DesktopPlatform)
    {
        UE_LOG(LogTemp, Error, TEXT("DesktopPlatform module not available!"));
    }

    // 获取主窗口句柄（确保游戏窗口存在）
    const void* ParentWindowHandle = FSlateApplication::Get().GetActiveTopLevelWindow()->GetNativeWindow()->GetOSWindowHandle();

    TArray<FString> OutFiles;
    // 打开目录选择对话框
    bool bSuccess = DesktopPlatform->OpenFileDialog(
        ParentWindowHandle,       // 父窗口句柄
        "Choose File Folder",             // 对话框标题（如 "选择文件夹"）
        "",             // 默认路径（空字符串表示系统默认）
        TEXT(""), // 默认文件名（空表示无）
        ".obj",
        EFileDialogFlags::None,
        OutFiles     // 返回用户选择的目录路径
    );

    if (bSuccess)
    {
        // 标准化路径（确保格式正确）
        FString OutSelectedFile = FPaths::ConvertRelativePathToFull(OutFiles[0]);
        UE_LOG(LogTemp, Log, TEXT("Selected Directory: %s"), *OutSelectedFile);

        PitchSlider->SetValue(0.5);
        YawSlider->SetValue(0.5);
        RollSlider->SetValue(0.5);

        TargetModel->UpdateMesh(OutSelectedFile, EUpdateStatus::change);
    }
}

void UMyUserWidget::Smooth()
{
    float SmoothValue=SB_Smooth->GetValue();
    TargetModel->SmoothMesh(SmoothValue);
}

void UMyUserWidget::Simplify()
{
    float DelMeshNum = SB_Simple->GetValue();
    TargetModel->SimplifyMesh(DelMeshNum);
}

void UMyUserWidget::Subdivide()
{
    int DivIter = round(SB_subdiv->GetValue());
    TargetModel->SubdivideMesh(DivIter);
}

void UMyUserWidget::Chamfer()
{
    float CfIter =SB_Chamfer->GetValue();
    TargetModel->ChamferMesh(CfIter);
}

void UMyUserWidget::SetTargetModel(AShowModels* pm)
{
    TargetModel = pm;
}

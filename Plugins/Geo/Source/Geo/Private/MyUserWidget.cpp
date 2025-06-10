// Fill out your copyright notice in the Description page of Project Settings.  

#include "MyUserWidget.h"  
#include "Components/Slider.h" // ��Ӵ����԰��� USlider �Ķ���  
#include "Components/RadialSlider.h"
#include "Components/Button.h"
#include "Components/SpinBox.h"
#include "IDesktopPlatform.h"
#include "DesktopPlatformModule.h" // �������
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
        TargetModel->SetMeshScale(FVector(Value)); // �޸�Mesh��С
    }
}

void UMyUserWidget::SliderChangedRotation(float Value, EMyRotate curRotate)
{
    Value = (Value - 0.5) * 360;
    if (TargetModel)
    {
        TargetModel->SetMeshRotate(Value,curRotate); // �޸�Mesh����
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
    // ��ȡ����ƽ̨�ӿ�
    IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
    if (!DesktopPlatform)
    {
        UE_LOG(LogTemp, Error, TEXT("DesktopPlatform module not available!"));
    }

    // ��ȡ�����ھ����ȷ����Ϸ���ڴ��ڣ�
    const void* ParentWindowHandle = FSlateApplication::Get().GetActiveTopLevelWindow()->GetNativeWindow()->GetOSWindowHandle();

    TArray<FString> OutFiles;
    // ��Ŀ¼ѡ��Ի���
    bool bSuccess = DesktopPlatform->OpenFileDialog(
        ParentWindowHandle,       // �����ھ��
        "Choose File Folder",             // �Ի�����⣨�� "ѡ���ļ���"��
        "",             // Ĭ��·�������ַ�����ʾϵͳĬ�ϣ�
        TEXT(""), // Ĭ���ļ������ձ�ʾ�ޣ�
        ".obj",
        EFileDialogFlags::None,
        OutFiles     // �����û�ѡ���Ŀ¼·��
    );

    if (bSuccess)
    {
        // ��׼��·����ȷ����ʽ��ȷ��
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

import bpy
import sys
import os

# 打印环境信息
print("=== Blender 版本 ===")
print(f"Blender: {bpy.app.version_string}")  # 例如 "4.4.3"
print(f"Build Date: {bpy.app.build_date}")  # 编译日期

print("\n=== Python 版本 ===")
print(f"Python: {sys.version}")  # Python 版本
print(f"Python Path: {sys.executable}\n")  # Blender 内置 Python 路径

# 获取命令行参数
try:
    argv = sys.argv[sys.argv.index("--") + 1 :]  # 提取'--'后的参数
    input_path = argv[0]  # 输入模型路径
    output_path = argv[1]  # 输出模型路径
    bevel_offset = float(argv[2])  # 倒角偏移量
except (ValueError, IndexError):
    raise Exception(
        "参数格式错误！正确用法: blender --python script.py -- input.obj output.obj 0.2"
    )

# 清理场景
bpy.ops.wm.read_factory_settings(use_empty=True)

# 验证输入文件
if not os.path.exists(input_path):
    raise Exception(f"输入文件不存在: {input_path}")

# 导入模型 (Blender 4.4+ API)
try:
    if input_path.endswith(".fbx"):
        bpy.ops.import_scene.fbx(filepath=input_path)
    elif input_path.endswith(".obj"):
        bpy.ops.wm.obj_import(filepath=input_path)  # 4.4+ 新API
    else:
        raise ValueError("仅支持 .fbx 或 .obj 格式！")
except Exception as e:
    raise Exception(f"导入失败: {str(e)}")

# 获取模型对象
if not bpy.context.selected_objects:
    raise Exception("未找到导入的模型！")
obj = bpy.context.selected_objects[0]
bpy.context.view_layer.objects.active = obj

# 进入编辑模式并倒角
try:
    bpy.ops.object.mode_set(mode="EDIT")
    bpy.ops.mesh.select_all(action="SELECT")
    bpy.ops.mesh.bevel(
        offset=bevel_offset,
        segments=3,
        affect="EDGES",
        clamp_overlap=True,  # 4.4+ 新增参数，防止重叠
    )
    bpy.ops.object.mode_set(mode="OBJECT")
except Exception as e:
    raise Exception(f"倒角操作失败: {str(e)}")

# 导出模型 (Blender 4.4+ API)
try:
    bpy.ops.wm.obj_export(
        filepath=output_path,
        export_selected_objects=True,  # 4.4+ 参数名变更
        forward_axis="Y",  # 调整坐标系（根据需求修改）
        up_axis="Z",
    )
    print(f"\n导出成功: {output_path}")
except Exception as e:
    raise Exception(f"导出失败: {str(e)}")

#pragma once

#ifdef PI
#undef PI
#endif

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable : 4018 4459 4456 4101 4127 4244 4723 4800)
#endif


#define NOMINMAX
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
//#define IGL_STATIC_LIBRARY

#include <igl/read_triangle_mesh.h>
#include <igl/writeOBJ.h>
#include <igl/cotmatrix.h>
#include <igl/doublearea.h>
#include <igl/massmatrix.h>
#include <igl/invert_diag.h>
#include <igl/barycenter.h>
#include <igl/grad.h>
#include <igl/jet.h>
#include <igl/per_vertex_normals.h>
#include <igl/decimate.h>
#include <igl/loop.h>
#include <igl/upsample.h>

#pragma warning(pop)

//#include <igl/per_vertex_normals.h>
//#include <igl/per_face_normals.h>


void funcX() {
	Eigen::MatrixXd V;
	Eigen::MatrixXi F;
	Eigen::MatrixXd N_vertices;
	Eigen::MatrixXd N_faces;
	Eigen::MatrixXd N_corners;
	//igl::per_face_normals(V, F, N_faces);
	bool success = igl::read_triangle_mesh("E:\\UE\\data\\Horse.obj", V, F);
	igl::writeOBJ("E:\\UE\\data\\HorseX.obj", V, F);
}

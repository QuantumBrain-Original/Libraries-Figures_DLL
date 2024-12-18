#pragma once
#include "sTriangles.h"

#ifdef MODULES_EXPORTS
#define TRIANGLESEQUAL_MODULES_USRDLL __declspec(dllexport)
#else
#define TRIANGLESEQUAL_MODULES_USRDLL __declspec(dllimport)
#endif

extern "C" class TRIANGLESEQUAL_MODULES_USRDLL EquilateralTriangle : public Triangle // Равносторонний треугольник (все стороны равны, все углы равны 60)
{
	public:
		EquilateralTriangle(int sideA = 0);
};

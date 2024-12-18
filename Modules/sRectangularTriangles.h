#pragma once
#include "sTriangles.h"

#ifdef MODULES_EXPORTS
#define TRIANGLESRECT_MODULES_USRDLL __declspec(dllexport)
#else
#define TRIANGLESRECT_MODULES_USRDLL __declspec(dllimport)
#endif

extern "C" class TRIANGLESRECT_MODULES_USRDLL RectangularTriangle : public Triangle // Прямоугольный треугольник (угол C всегда равен 90)
{
	public:
		RectangularTriangle(int sideA = 0, int sideB = 0, int sideC = 0, int angleA = 0, int angleB = 0);
};

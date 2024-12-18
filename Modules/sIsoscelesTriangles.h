#pragma once
#include "sTriangles.h"

#ifdef MODULES_EXPORTS
#define TRIANGLESISOL_MODULES_USRDLL __declspec(dllexport)
#else
#define TRIANGLESISOL_MODULES_USRDLL __declspec(dllimport)
#endif

extern "C" class TRIANGLESISOL_MODULES_USRDLL IsoscelesTriangle : public Triangle // Равнобедренный треугольник (стороны a и c равны, углы A и C равны)
{
	public:
		IsoscelesTriangle(int sideA = 0, int sideB = 0, int angleA = 0, int angleB = 0);
};

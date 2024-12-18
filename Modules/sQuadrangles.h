#pragma once // фигуры с 4 углами
#include "sFigures.h"

#ifdef MODULES_EXPORTS
#define QUADRANGLES_MODULES_USRDLL __declspec(dllexport)
#else
#define QUADRANGLES_MODULES_USRDLL __declspec(dllimport)
#endif

extern "C" class QUADRANGLES_MODULES_USRDLL Quadrangle : public Figure // Четырехугольник
{
	protected:
		unsigned int a, b, c, d, A, B, C, D;
	public:
		void print_output() override;

		Quadrangle(int sideA = 0, int sideB = 0, int sideC = 0, int sideD = 0, int angleA = 0, int angleB = 0, int angleC = 0, int angleD = 0);
};
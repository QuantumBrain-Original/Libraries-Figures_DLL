#pragma once
#include "sQuadrangles.h"

#ifdef MODULES_EXPORTS
#define PARALLEL_MODULES_USRDLL __declspec(dllexport)
#else
#define PARALLEL_MODULES_USRDLL __declspec(dllimport)
#endif

extern "C" class PARALLEL_MODULES_USRDLL Parallelogram : public Quadrangle // Параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны)
{
	public:
		Parallelogram(int sideA = 0, int sideB = 0, int angleA = 0, int angleB = 0);
};

#pragma once
#include "sRectangles.h"

#ifdef MODULES_EXPORTS
#define SQUARES_MODULES_USRDLL __declspec(dllexport)
#else
#define SQUARES_MODULES_USRDLL __declspec(dllimport)
#endif

extern "C" class SQUARES_MODULES_USRDLL Square : public Rectangles // Квадрат (все стороны равны, все углы равны 90)
{
	public:
		Square(int sideA = 0);
};

#pragma once
#include "sParallelograms.h"

#ifdef MODULES_EXPORTS
#define RHOMBUS_MODULES_USRDLL __declspec(dllexport)
#else
#define RHOMBUS_MODULES_USRDLL __declspec(dllimport)
#endif

extern "C" class RHOMBUS_MODULES_USRDLL Rhombus : public Parallelogram // Ромб (все стороны равны, углы A,C и B,D попарно равны)
{
	public:
		Rhombus(int sideA = 0, int angleA = 0, int angleB = 0);
};

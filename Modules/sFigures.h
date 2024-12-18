#pragma once

#ifdef MODULES_EXPORTS
#define MODULES_USRDLL __declspec(dllexport)
#else
#define MODULES_USRDLL __declspec(dllimport)
#endif

extern "C" class MODULES_USRDLL Figure
{
	protected:
		unsigned int sides_count;
	public:
		virtual void print_output();

		Figure();
};

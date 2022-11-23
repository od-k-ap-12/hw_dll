#define FIRSTDLL_API extern "C" __declspec(dllexport)

#include "mathlib.h"
#include <iostream>
using namespace std; 

FIRSTDLL_API int Sum(int a, int b)
{
	return a+b;
}

FIRSTDLL_API int Min(int a, int b)
{
	return a-b;
}

FIRSTDLL_API int Div(int a, int b)
{
	return a*b;
}

FIRSTDLL_API int Mult(int a, int b)
{
	if (b == 0) {
		cout << "Error "<<endl;
		return 0;
	}
	return a/b;
}